`include "/home/sajjad/Shaheen-sv/src/buraq_core_top/ibex_core/tlul_pkg.sv"

module test_core
(
  input clock,
  input reset
);
//import tlul_pkg::*;
tlul_pkg::tl_h2d_t instr_c_a;
tlul_pkg::tl_d2h_t instr_c_d;

tlul_pkg::tl_h2d_t dat_c_a;
tlul_pkg::tl_d2h_t dat_c_d;
core_top core (
  .clock (clock),
  .reset (reset),

  // instruction memory interface 
  .tl_i_i (instr_c_d),
  .tl_i_o (instr_c_a),

  // data memory interface 
  .tl_d_i (dat_c_d),
  .tl_d_o (dat_c_a)
);

instruction inst (
  .clock (clock),
  .reset (reset),

// tlul interface
  .tl_d_i (instr_c_a),
  .tl_d_o (instr_c_d) 
);

data_mem data (
  .clock (clock),
  .reset (reset),

// tl-ul insterface
  .tl_d_i (dat_c_a),
  .tl_d_o (dat_c_d)
);

endmodule