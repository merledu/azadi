module buraq_decoder #(
    parameter bit RV32M = 0,
    parameter bit RV32F = 0,
    parameter bit RV32D = 0,
    parameter bit BranchTargetALU = 0
) (
    input  logic                  clk_i,
    input  logic                  rst_ni,

    // from IF-ID pipeline register
    input  logic                  instr_first_cycle_i,   // instruction read is in its first cycle
    input  logic [31:0]           instr_i,               // instruction read from memory

    // register file
    output buraq_pkg::rf_wd_sel_e rf_wdata_sel_o,        // RF write data selection
    output logic                  rf_we_o,               // write enable for regfile
    output logic [4:0]            rf_raddr_a_o,
    output logic [4:0]            rf_raddr_b_o,
    output logic [4:0]            rf_waddr_o,
    output logic                  rf_ren_a_o,            // Instruction reads from RF addr A
    output logic                  rf_ren_b_o,            // Instruction reads from RF addr B

    // to/from controller
    output logic                  illegal_insn_o,        // illegal instr encountered
    output logic                  ebrk_insn_o,           // trap instr encountered
    output logic                  mret_insn_o,           // return from exception instr
                                                         // encountered
    output logic                  dret_insn_o,           // return from debug instr encountered
    output logic                  ecall_insn_o,          // syscall instr encountered
    output logic                  wfi_insn_o,            // wait for interrupt instr encountered
    output logic                  jump_set_o,            // jump taken set signal
    input  logic                  branch_taken_i,        // branch decision
    
        
    output buraq_pkg::alu_op_e    alu_operator_o,        // ALU operation selection
    output ibex_pkg::op_a_sel_e   alu_op_a_mux_sel_o,    // operand a selection: reg value, PC,
                                                         // immediate or zero
    output ibex_pkg::op_b_sel_e   alu_op_b_mux_sel_o,    // operand b selection: reg value or
                                                         // immediate
    output logic                  rf_we_o, 
    output logic [4:0]            rf_addr_a,
    output logic [4:0]            rf_addr_b,
    output logic [4:0]            rf_addr_c,

    // immediates
    output logic [31:0]           imm_i_type_o,
    output logic [31:0]           imm_s_type_o,
    output logic [31:0]           imm_b_type_o,
    output logic [31:0]           imm_u_type_o,
    output logic [31:0]           imm_j_type_o,
    output logic [31:0]           zimm_rs1_type_o,
    
    // CSRs
    output logic                  csr_access_o,          // access to CSR
    output buraq_pkg::csr_op_e    csr_op_o,              // operation to perform on CSR

    // LSU
    output logic                  data_req_o,            // start transaction to data memory
    output logic                  data_we_o,             // write enable
    output logic [1:0]            data_type_o,           // size of transaction: byte, half
                                                         // word or word
    output logic                  data_sign_extension_o, // sign extension for data read from
                                                         // memory
    // jump/branches
    output logic                  jump_in_dec_o,         // jump is being calculated in ALU
    output logic                  branch_in_dec_o
);

  import buraq_pkg::*;

  csr_op_e csr_op;

  opcode_e opcode;
  logic [31:0] instr;
  logic        illegal_insn;

  logic [4:0] instr_rs1;
  logic [4:0] instr_rs2;
  logic [4:0] instr_rs3;
  logic [4:0] instr_rd;
   
  assign instr = instr_i;
  assign illegal_insn_o = illegal_insn;

  //////////////////////////////////////
  // Register and immediate selection //
  //////////////////////////////////////

  // immediate extraction and sign extension
  assign imm_i_type_o = { {20{instr[31]}}, instr[31:20] };
  assign imm_s_type_o = { {20{instr[31]}}, instr[31:25], instr[11:7] };
  assign imm_b_type_o = { {19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0 };
  assign imm_u_type_o = { instr[31:12], 12'b0 };
  assign imm_j_type_o = { {12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0 };

  // immediate for CSR manipulation (zero extended)
  assign zimm_rs1_type_o = { 27'b0, instr_rs1 }; // rs1

  // source registers
  assign instr_rs1 = instr[19:15];
  assign instr_rs2 = instr[24:20];
  assign instr_rs3 = instr[31:27];

  ///////////////////////
  // CSR operand check //
  ///////////////////////
  always_comb begin : csr_operand_check
    csr_op_o = csr_op;
  
      // CSRRSI/CSRRCI must not write 0 to CSRs (uimm[4:0]=='0)
      // CSRRS/CSRRC must not write from x0 to CSRs (rs1=='0)
      if ((csr_op == CSR_OP_SET || csr_op == CSR_OP_CLEAR) &&
        instr_rs1 == '0) begin
        csr_op_o = CSR_OP_READ;
      end
  end
  /////////////
  // Decoder //
  /////////////

  always_comb begin
    jump_in_dec_o         = 1'b0;
    jump_set_o            = 1'b0;
    branch_in_dec_o       = 1'b0;

    rf_wdata_sel_o        = RF_WD_EX;
    rf_we                 = 1'b0;
    rf_ren_a_o            = 1'b0;
    rf_ren_b_o            = 1'b0;

    csr_access_o          = 1'b0;
    csr_illegal           = 1'b0;
    csr_op                = CSR_OP_READ;

    data_we_o             = 1'b0;
    data_type_o           = 2'b00;
    data_sign_extension_o = 1'b0;
    data_req_o            = 1'b0;

    illegal_insn          = 1'b0;
    ebrk_insn_o           = 1'b0;
    mret_insn_o           = 1'b0;
    dret_insn_o           = 1'b0;
    ecall_insn_o          = 1'b0;
    wfi_insn_o            = 1'b0;

    // for alu
    alu_operator_o     = ALU_SLTU;
    alu_op_a_mux_sel_o = OP_A_IMM;
    alu_op_b_mux_sel_o = OP_B_IMM;

    imm_a_mux_sel_o    = IMM_A_ZERO;
    imm_b_mux_sel_o    = IMM_B_I;

    bt_a_mux_sel_o     = OP_A_CURRPC;
    bt_b_mux_sel_o     = IMM_B_I;

    alu_multicycle_o   = 1'b0;

    opcode                = opcode_e'(instr[6:0]);

    unique case (opcode)

      ///////////
      // Jumps //
      ///////////

      OPCODE_JAL: begin   // Jump and Link
        jump_in_dec_o      = 1'b1;

        if (instr_first_cycle_i) begin
          // Calculate jump target 
          rf_we            = BranchTargetALU;
          jump_set_o       = 1'b1;
        end else begin
          // Calculate and store PC+4
          rf_we            = 1'b1;
        end

        // alu
        if (BranchTargetALU) begin
          bt_a_mux_sel_o = OP_A_CURRPC;
          bt_b_mux_sel_o = IMM_B_J;
        end
        
        // Jumps take two cycles without the BTALU
      if (instr_first_cycle_i && !BranchTargetALU) begin
          // Calculate jump target
          alu_op_a_mux_sel_o  = OP_A_CURRPC;
          alu_op_b_mux_sel_o  = OP_B_IMM;
          imm_b_mux_sel_o     = IMM_B_J;
          alu_operator_o      = ALU_ADD;
        end else begin
          // Calculate and store PC+4
          alu_op_a_mux_sel_o  = OP_A_CURRPC;
          alu_op_b_mux_sel_o  = OP_B_IMM;
          imm_b_mux_sel_o     = IMM_B_INCR_PC;
          alu_operator_o      = ALU_ADD;
        end
      end
      
      OPCODE_JALR: begin  // Jump and Link Register and store PC + 4  
        jump_in_dec_o      = 1'b1;

        if (instr_first_cycle_i) begin
          // Calculate jump target and store PC + 4
          rf_we            = BranchTargetALU;
          jump_set_o       = 1'b1;
        end else begin
          // Calculate and store PC+4
          rf_we            = 1'b1;
        end
        if (instr[14:12] != 3'b0) begin
          illegal_insn = 1'b1;
        end

        rf_ren_a_o = 1'b1;

        // alu 
        if (BranchTargetALU) begin
          bt_a_mux_sel_o = OP_A_REG_A;
          bt_b_mux_sel_o = IMM_B_I;
        end

        // Jumps take two cycles without the BTALU
        if (instr_first_cycle_i && !BranchTargetALU) begin
          // Calculate jump target
          alu_op_a_mux_sel_o  = OP_A_REG_A;
          alu_op_b_mux_sel_o  = OP_B_IMM;
          imm_b_mux_sel_o     = IMM_B_I;
          alu_operator_o      = ALU_ADD;
        end else begin
          // Calculate and store PC+4
          alu_op_a_mux_sel_o  = OP_A_CURRPC;
          alu_op_b_mux_sel_o  = OP_B_IMM;
          imm_b_mux_sel_o     = IMM_B_INCR_PC;
          alu_operator_o      = ALU_ADD;
        end
      end

      OPCODE_BRANCH: begin // Branch
        branch_in_dec_o       = 1'b1;
        rf_ren_a_o            = 1'b1;
        rf_ren_b_o            = 1'b1;

        // alu
        // Check branch condition selection
        unique case (instr_alu[14:12])
          3'b000:  alu_operator_o = ALU_EQ;
          3'b001:  alu_operator_o = ALU_NE;
          3'b100:  alu_operator_o = ALU_LT;
          3'b101:  alu_operator_o = ALU_GE;
          3'b110:  alu_operator_o = ALU_LTU;
          3'b111:  alu_operator_o = ALU_GEU;
          default: illegal_insn = 1'b1;
        endcase

        if (BranchTargetALU) begin
          bt_a_mux_sel_o = OP_A_CURRPC;
          // Not-taken branch will jump to next instruction (used in secure mode)
          bt_b_mux_sel_o = branch_taken_i ? IMM_B_B : IMM_B_INCR_PC;
        end

        // Without branch target ALU, a branch is a two-stage operation using the Main ALU in both
        // stages
        if (instr_first_cycle_i) begin
          // First evaluate the branch condition
          alu_op_a_mux_sel_o  = OP_A_REG_A;
          alu_op_b_mux_sel_o  = OP_B_REG_B;
        end else begin
          // Then calculate jump target
          alu_op_a_mux_sel_o  = OP_A_CURRPC;
          alu_op_b_mux_sel_o  = OP_B_IMM;
          // Not-taken branch will jump to next instruction (used in secure mode)
          imm_b_mux_sel_o     = branch_taken_i ? IMM_B_B : IMM_B_INCR_PC;
          alu_operator_o      = ALU_ADD;
        end        
      end

      ////////////////
      // Load/store //
      ////////////////

      OPCODE_STORE: begin
        rf_ren_a_o         = 1'b1;
        rf_ren_b_o         = 1'b1;
        data_req_o         = 1'b1;
        data_we_o          = 1'b1;

        alu_op_a_mux_sel_o = OP_A_REG_A;
        alu_op_b_mux_sel_o = OP_B_REG_B;
        alu_operator_o     = ALU_ADD;

        if (instr[14]) begin
          illegal_insn = 1'b1;
        end else begin
          // alu
          // offset from immediate
          imm_b_mux_sel_o     = IMM_B_S;
          alu_op_b_mux_sel_o  = OP_B_IMM;
        end

        // store size
        unique case (instr[13:12])
          2'b00:   data_type_o  = 2'b10; // sb
          2'b01:   data_type_o  = 2'b01; // sh
          2'b10:   data_type_o  = 2'b00; // sw
          default: illegal_insn = 1'b1;
        endcase
      end

      OPCODE_LOAD: begin
        rf_ren_a_o          = 1'b1;
        data_req_o          = 1'b1;
        data_type_o         = 2'b00; //lw

        alu_op_a_mux_sel_o  = OP_A_REG_A;

        // sign/zero extension
        data_sign_extension_o = ~instr[14];

        // load size
        unique case (instr[13:12])
          2'b00: data_type_o = 2'b10; // lb(u)
          2'b01: data_type_o = 2'b01; // lh(u)
          2'b10: begin
            data_type_o = 2'b00;      // lw
            if (instr[14]) begin
              illegal_insn = 1'b1;    // lwu does not exist
            end
          end
          default: begin
            illegal_insn = 1'b1;
          end
        endcase

        //alu
        // offset from immediate
        alu_operator_o      = ALU_ADD;
        alu_op_b_mux_sel_o  = OP_B_IMM;
        imm_b_mux_sel_o     = IMM_B_I;
      end

      ////////////////////
      // ALU operations //
      ////////////////////

      OPCODE_LUI: begin  // Load Upper Immediate
        rf_we            = 1'b1;

        // alu
        alu_op_a_mux_sel_o  = OP_A_IMM;
        alu_op_b_mux_sel_o  = OP_B_IMM;
        imm_a_mux_sel_o     = IMM_A_ZERO;
        imm_b_mux_sel_o     = IMM_B_U;
        alu_operator_o      = ALU_ADD;
      end

      OPCODE_AUIPC: begin  // Add Upper Immediate to PC
        rf_we            = 1'b1;

        // alu
        alu_op_a_mux_sel_o  = OP_A_CURRPC;
        alu_op_b_mux_sel_o  = OP_B_IMM;
        imm_b_mux_sel_o     = IMM_B_U;
        alu_operator_o      = ALU_ADD;
      end

      OPCODE_OP_IMM: begin // Register-Immediate ALU Operations
        rf_ren_a_o       = 1'b1;
        rf_we            = 1'b1;

        // alu
        alu_op_a_mux_sel_o  = OP_A_REG_A;
        alu_op_b_mux_sel_o  = OP_B_IMM;
        imm_b_mux_sel_o     = IMM_B_I;

        unique case (instr[14:12])
          3'b000: begin
            alu_operator_o = ALU_ADD;  // Add Immediate
          end
          3'b010: begin
            alu_operator_o = ALU_SLT;  // Set to one if Lower Than Immediate
          end
          3'b011: begin
            alu_operator_o = ALU_SLTU;    // Set to one if Lower Than Immediate Unsigned
          end
          3'b100: begin
            alu_operator_o = ALU_XOR;     // Exclusive Or with Immediate
          end
          3'b110: begin
            alu_operator_o = ALU_OR;      // Or with Immediate
          end
          3'b111: begin 
            alu_operator_o = ALU_AND;     // And with Immediate
          end
          3'b001: begin 
            if (instr[31:25] == 7'b0000_000) begin
              alu_operator_o = ALU_SLL;   // Shift Left Logical by Immediate
            end else begin
              illegal_insn = 1'b1;
            end
          end
          3'b101:
            unique case (instr[31:25])
              7'b000_0000: begin          // Shift Right Logical by Immediate
                alu_operator_o = ALU_SRL;
              end                                                        
              7'b001_0000: begin          // Shift Right Arithmetically by Immediate
                alu_operator_o = ALU_SRA;
              end                                  
              default: illegal_insn = 1'b1; 
        default: illegal_insn = 1'b1;
      end

      OPCODE_OP: begin  // Register-Register ALU operation
        rf_ren_a_o      = 1'b1;
        rf_ren_b_o      = 1'b1;
        rf_we           = 1'b1;

        alu_op_a_mux_sel_o = OP_A_REG_A;
        alu_op_b_mux_sel_o = OP_B_REG_B;

        unique case ({instr[31:25], instr[14:12]})
          // RV32I ALU operations
          {7'b000_0000, 3'b000}: begin  // Add
            alu_operator_o = ALU_ADD;    
          end
          {7'b010_0000, 3'b000}: begin  // Sub
            alu_operator_o = ALU_SUB;   
          end
          {7'b000_0000, 3'b010}: begin  // Set Lower Than
            alu_operator_o = ALU_SLT;   
          end
          {7'b000_0000, 3'b011}: begin  // Set Lower Than Unsigned
            alu_operator_o = ALU_SLTU;  
          end
          {7'b000_0000, 3'b100}: begin  // Xor
            alu_operator_o = ALU_XOR;   
          end
          {7'b000_0000, 3'b110}: begin  // Or
            alu_operator_o = ALU_OR;    
          end
          {7'b000_0000, 3'b111}: begin  // And
            alu_operator_o = ALU_AND;   
          end
          {7'b000_0000, 3'b001}: begin  // Shift Left Logical
            alu_operator_o = ALU_SLL;   
            illegal_insn = 1'b0;
          end
          {7'b000_0000, 3'b101}: begin  // Shift Right Logical
            alu_operator_o = ALU_SRL;   
          end
          {7'b010_0000, 3'b101}: begin  // Shift Right Arithmetic
            alu_operator_o = ALU_SRA;   
          end
          default: illegal_insn = 1'b1;
      end

      /////////////
      // Special //
      /////////////

      OPCODE_MISC_MEM: begin
        unique case (instr[14:12])
          3'b000: begin
            // FENCE is treated as a NOP since all memory operations are already strictly ordered.
            rf_we           = 1'b0;
            // alu  
            alu_operator_o     = ALU_ADD; // nop
            alu_op_a_mux_sel_o = OP_A_REG_A;
            alu_op_b_mux_sel_o = OP_B_IMM;
          end
          3'b001: begin
            // FENCE.I is implemented as a jump to the next PC, this gives the required flushing
            // behaviour (stop receiving further instruction form Inst mem by setting ins_req
            // low).
            jump_in_dec_o   = 1'b1;
            rf_we           = 1'b0;

            if (instr_first_cycle_i) begin
              jump_set_o       = 1'b1;
            end

            //alu
            if (BranchTargetALU) begin
              bt_a_mux_sel_o     = OP_A_CURRPC;
              bt_b_mux_sel_o     = IMM_B_INCR_PC;
            end else begin
              alu_op_a_mux_sel_o = OP_A_CURRPC;
              alu_op_b_mux_sel_o = OP_B_IMM;
              imm_b_mux_sel_o    = IMM_B_INCR_PC;
              alu_operator_o     = ALU_ADD;
            end
          end
          default: begin
          illegal_insn       = 1'b1;
        end
        endcase
      end   

      OPCODE_SYSTEM: begin
        if (instr[14:12] == 3'b000) begin
          // non CSR related SYSTEM instructions
          alu_op_a_mux_sel_o = OP_A_REG_A;
          alu_op_b_mux_sel_o = OP_B_IMM;

          unique case (instr[31:20])
            12'h000:  // ECALL
              // environment (system) call
              ecall_insn_o = 1'b1;

            12'h001:  // ebreak
              // debugger trap
              ebrk_insn_o = 1'b1;

            12'h302:  // mret
              // return to main program 
              // from trap handlers
              mret_insn_o = 1'b1;

            12'h7b2:  // dret
              dret_insn_o = 1'b1;

            12'h105:  // wfi
              wfi_insn_o = 1'b1;

            default:
              illegal_insn = 1'b1;
          endcase

          // rs1 and rd must be 0
          if (instr_rs1 != 5'b0 || instr_rd != 5'b0) begin
            illegal_insn = 1'b1;
          end
        end else begin
          // instruction to read/modify CSR
          csr_access_o     = 1'b1;
          rf_wdata_sel_o   = RF_WD_CSR;
          rf_we            = 1'b1;

          alu_op_b_mux_sel_o = OP_B_IMM;
          imm_a_mux_sel_o    = IMM_A_Z;
          imm_b_mux_sel_o    = IMM_B_I;  // CSR address is encoded in I imm
          
          if (~instr[14]) begin
            rf_ren_a_o         = 1'b1;
            alu_op_a_mux_sel_o = OP_A_REG_A;
          end else begin
            // rs1 field is used as immediate
            alu_op_a_mux_sel_o = OP_A_IMM;
          end

          unique case (instr[13:12])
            2'b01:   csr_op = CSR_OP_WRITE;
            2'b10:   csr_op = CSR_OP_SET;
            2'b11:   csr_op = CSR_OP_CLEAR;
            default: csr_illegal = 1'b1;
          endcase

          illegal_insn = csr_illegal;
        end
      end
      default: begin
        illegal _insn = 1'b1;
      end
    endcase

    // make sure illegal instructions detected in the decoder do not propagate from decoder
    // into register file, LSU, EX, WB, CSRs, PC
    // NOTE: instructions can also be detected to be illegal inside the CSRs (upon accesses with
    // insufficient privileges), this case is not handled here.
    if (illegal_insn) begin
      rf_we           = 1'b0;
      data_req_o      = 1'b0;
      data_we_o       = 1'b0;
      jump_in_dec_o   = 1'b0;
      jump_set_o      = 1'b0;
      branch_in_dec_o = 1'b0;
      csr_access_o    = 1'b0;
    end
  end  
endmodule 