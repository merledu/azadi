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

endpackage
