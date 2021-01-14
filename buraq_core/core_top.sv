`include "src/buraq_core_top/ibex_core/ibex_pkg.sv"

module core_top
(
  input clock,
  input reset,

  // instruction memory interface 
    input tlul_pkg::tl_d2h_t tl_i_i,
    output tlul_pkg::tl_h2d_t tl_i_o,

  // data memory interface 
    input tlul_pkg::tl_d2h_t tl_d_i,
    output tlul_pkg::tl_h2d_t tl_d_o
);


  logic rst_ni;
  assign rst_ni = ~reset;
  // Instruction interface (internal)
  logic        instr_req;
  logic        instr_gnt;
  logic        instr_rvalid;
  logic [31:0] instr_addr;
  logic [31:0] instr_rdata;
  logic        instr_err;

  // Data interface (internal)
  logic        data_req;
  logic        data_gnt;
  logic        data_rvalid;
  logic        data_we;
  logic [3:0]  data_be;
  logic [31:0] data_addr;
  logic [31:0] data_wdata;
  logic [31:0] data_rdata;
  logic        data_err;

  // Pipeline interfaces
 // tl_h2d_t tl_i_ibex2fifo;
 // tl_d2h_t tl_i_fifo2ibex;
 // tl_h2d_t tl_d_ibex2fifo;
 // tl_d2h_t tl_d_fifo2ibex;

  ibex_core #(
    .PMPEnable                ( 1'b0                ),
    .PMPGranularity           ( 0           ),
    .PMPNumRegions            ( 4            ),
    .MHPMCounterNum           ( 10           ),
    .MHPMCounterWidth         ( 32         ),
    .RV32E                    ( 0                    ),
    .RV32M                    ( ibex_pkg::RV32MSingleCycle),
    .RV32B                    ( ibex_pkg::RV32BNone      ),
    .RegFile                  ( ibex_pkg::RegFileFF      ),
    .BranchTargetALU          ( 1'b1          ),
    .WritebackStage           ( 1'b1           ),
    .ICache                   ( 1'b0                   ),
    .ICacheECC                ( 1'b0                ),
    .BranchPredictor          ( 1'b0          ),
    .DbgTriggerEn             ( 1'b0             ),
    .SecureIbex               ( 1'b0               ),
    .DmHaltAddr               ( 32'h1A110800        ),
    .DmExceptionAddr          ( 32'h1A110808        )
  ) u_core (
    .clk_i (clock),
    .rst_ni (rst_ni),
 //   .clock (clock),

    .test_en_i(),

    .hart_id_i(),
    .boot_addr_i(),

    .instr_req_o    ( instr_req    ),
    .instr_gnt_i    ( instr_gnt    ),
    .instr_rvalid_i ( instr_rvalid ),
    .instr_addr_o   ( instr_addr   ),
    .instr_rdata_i  ( instr_rdata  ),
    .instr_err_i    ( instr_err    ),

    .data_req_o     ( data_req     ),
    .data_gnt_i     ( data_gnt     ),
    .data_rvalid_i  ( data_rvalid  ),
    .data_we_o      ( data_we      ),
    .data_be_o      ( data_be      ),
    .data_addr_o    ( data_addr    ),
    .data_wdata_o   ( data_wdata   ),
    .data_rdata_i   ( data_rdata   ),
    .data_err_i     ( data_err     ),

    .irq_software_i(),
    .irq_timer_i(),
    .irq_external_i(),
    .irq_fast_i     ( '0           ),
    .irq_nm_i       ( '0       ),

    .debug_req_i(),

`ifdef RVFI
    .rvfi_valid,
    .rvfi_order,
    .rvfi_insn,~reset
    .rvfi_trap,
    .rvfi_halt,
    .rvfi_intr,
    .rvfi_mode,
    .rvfi_ixl,
    .rvfi_rs1_addr,
    .rvfi_rs2_addr,
    .rvfi_rs3_addr,
    .rvfi_rs1_rdata,
    .rvfi_rs2_rdata,
    .rvfi_rs3_rdata,~reset
    .rvfi_pc_rdata,
    .rvfi_pc_wdata,
    .rvfi_mem_addr,
    .rvfi_mem_rmask,
    .rvfi_mem_wmask,
    .rvfi_mem_rdata,
    .rvfi_mem_wdata,
`endif

    .fetch_enable_i (),
    .alert_minor_o    (alert_minor),
    .alert_major_o    (alert_major),
    .core_sleep_o ()
  );

tlul_host_adapter #(
  .MAX_REQS(2)
) intr_interface (
  .clock (clock),
  .reset (reset),
  .req_i (instr_req),
  .gnt_o (instr_gnt),
  .addr_i (instr_addr),
  .we_i (1'b0),
  .wdata_i (32'b0),
  .be_i (4'hF),
  .valid_o (instr_rvalid),
  .rdata_o (instr_rdata),
  .err_o (instr_err),
  .tl_h_c_a (tl_i_o),
  .tl_h_c_d (tl_i_i)
);

tlul_host_adapter #(
  .MAX_REQS (2)
) data_interface (
  .clock (clock),
  .reset (reset),
  .req_i (data_req),
  .gnt_o (data_gnt),
  .addr_i (data_addr),
  .we_i (data_we),
  .wdata_i (data_wdata),
  .be_i (data_be),
  .valid_o (data_rvalid),
  .rdata_o (data_rdata),
  .err_o (data_err),
  .tl_h_c_a (tl_d_o),
  .tl_h_c_d (tl_d_i)
);


endmodule
