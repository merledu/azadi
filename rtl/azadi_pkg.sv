package azadi_pkg;

/////////////
// Opcodes //
/////////////

typedef enum logic [6:0] {
  OPCODE_LOAD     = 7'h03,
  OPCODE_MISC_MEM = 7'h0f,
  OPCODE_OP_IMM   = 7'h13,
  OPCODE_AUIPC    = 7'h17,
  OPCODE_STORE    = 7'h23,
  OPCODE_OP       = 7'h33,
  OPCODE_LUI      = 7'h37,
  OPCODE_BRANCH   = 7'h63,
  OPCODE_JALR     = 7'h67,
  OPCODE_JAL      = 7'h6f,
  OPCODE_SYSTEM   = 7'h73
} opcode_e;


////////////////////
// ALU operations //
////////////////////

typedef enum logic [5:0] {
  // Arithmetics
  ALU_ADD,
  ALU_SUB,

  // Logics
  ALU_XOR,
  ALU_OR,
  ALU_AND,

  // Shifts
  ALU_SRA,
  ALU_SRL,
  ALU_SLL,

  // Comparisons / Branches
  ALU_LT,
  ALU_LTU,
  ALU_GE,
  ALU_GEU,  
  ALU_EQ,
  ALU_NE,

  // Set lower than
  ALU_SLT,
  ALU_SLTU
} alu_op_e;

// Regfile write data selection
typedef enum logic {
  RF_WD_EX,
  RF_WD_CSR
} rf_wd_sel_e;

//////////////////////////////////
// Control and status registers //
//////////////////////////////////

// CSR operations
typedef enum logic [1:0] {
  CSR_OP_READ,
  CSR_OP_WRITE,
  CSR_OP_SET,
  CSR_OP_CLEAR
} csr_op_e;

// Privileged mode
typedef enum logic[1:0] {
  PRIV_LVL_M = 2'b11,
  PRIV_LVL_H = 2'b10,
  PRIV_LVL_S = 2'b01,
  PRIV_LVL_U = 2'b00
} priv_lvl_e;

//////////////
// IF stage //
//////////////

// PC mux selection
typedef enum logic [2:0] {
  PC_BOOT,
  PC_JUMP,
  PC_EXC,
  PC_ERET,
  PC_DRET,
  PC_BP
} pc_sel_e;

// Exception PC mux selection
typedef enum logic [1:0] {
  EXC_PC_EXC,
  EXC_PC_IRQ,
  EXC_PC_DBD,
  EXC_PC_DBG_EXC // Exception while in debug mode
} exc_pc_sel_e;

// Exception PC mux selection
typedef enum logic [1:0] {
  EXC_PC_EXC,
  EXC_PC_IRQ,
  EXC_PC_DBD,
  EXC_PC_DBG_EXC // Exception while in debug mode
} exc_pc_sel_e;

// Interrupt requests
typedef struct packed {
  logic        irq_software;
  logic        irq_timer;
  logic        irq_external;
  logic [14:0] irq_fast; // 15 fast interrupts,
                         // one interrupt is reserved for NMI (not visible through mip/mie)
} irqs_t;

// Exception cause
typedef enum logic [5:0] {
  EXC_CAUSE_IRQ_SOFTWARE_M     = {1'b1, 5'd03},
  EXC_CAUSE_IRQ_TIMER_M        = {1'b1, 5'd07},
  EXC_CAUSE_IRQ_EXTERNAL_M     = {1'b1, 5'd11},
  // EXC_CAUSE_IRQ_FAST_0      = {1'b1, 5'd16},
  // EXC_CAUSE_IRQ_FAST_14     = {1'b1, 5'd30},
  EXC_CAUSE_IRQ_NM             = {1'b1, 5'd31}, // == EXC_CAUSE_IRQ_FAST_15
  EXC_CAUSE_INSN_ADDR_MISA     = {1'b0, 5'd00},
  EXC_CAUSE_INSTR_ACCESS_FAULT = {1'b0, 5'd01},
  EXC_CAUSE_ILLEGAL_INSN       = {1'b0, 5'd02},
  EXC_CAUSE_BREAKPOINT         = {1'b0, 5'd03},
  EXC_CAUSE_LOAD_ACCESS_FAULT  = {1'b0, 5'd05},
  EXC_CAUSE_STORE_ACCESS_FAULT = {1'b0, 5'd07},
  EXC_CAUSE_ECALL_UMODE        = {1'b0, 5'd08},
  EXC_CAUSE_ECALL_MMODE        = {1'b0, 5'd11}
} exc_cause_e;

// Debug cause
typedef enum logic [2:0] {
  DBG_CAUSE_NONE    = 3'h0,
  DBG_CAUSE_EBREAK  = 3'h1,
  DBG_CAUSE_TRIGGER = 3'h2,
  DBG_CAUSE_HALTREQ = 3'h3,
  DBG_CAUSE_STEP    = 3'h4
} dbg_cause_e;

endpackage
