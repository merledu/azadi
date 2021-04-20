
`include "/home/merl/github_repos/azadi/src/fpnew/src/common_cells/include/common_cells/registers.svh"
module brq_fpnew_top_wrapper#(
  parameter fpnew_pkg::fpu_features_t Features = fpnew_pkg::RV64D_Xsflt
) (
  input logic                   clk_i,
  input logic                   rst_ni,
  //  
  input logic [WIDTH-1:0]       operand_a_i,
  input logic [WIDTH-1:0]       operand_b_i,
  input logic [WIDTH-1:0]       operand_c_i,
  input logic                   swap_oprnds_i,
  input fpnew_pkg::roundmode_e  rnd_mode_dec_i,
  input fpnew_pkg::roundmode_e  rnd_mode_csr_i,
  input fpnew_pkg::operation_e  op_i,
  input logic                   op_mod_i,
  input fpnew_pkg::fp_format_e  src_fmt_i,
  input fpnew_pkg::fp_format_e  dst_fmt_i,
  input fpnew_pkg::int_format_e int_fmt_i,
  input logic                   vectorial_op_i,
  // In 
  input  logic                  in_valid_i,
  output logic                  in_ready_o,
  input  logic                  flush_i,
  // O  
  output logic [WIDTH-1:0]      result_o,
  output fpnew_pkg::status_t    status_o,
  // Out  
  output logic                  out_valid_o,
  input  logic                  out_ready_i,
  // Indication of valid data in flight  
  output logic                  busy_o,
  // FP register_file
  output logic                  fp_rf_wen_o,

  // Controlling Signals
  input logic                   fp_rf_wen_wb_i  
);

import fpnew_pkg::fpu_features_t;
import brq_pkg::rvfloat_e;

logic  [(3*Width)-1:0] fp_operands;

/* Intantiation */
fpnew_top #(
  // FPU configuration
  .Features       ( Features                  ),
  .Implementation ( fpnew_pkg::DEFAULT_NOREGS ),
  .TagType        ( logic                     ),
  // Do not change
  .WIDTH          ( Features.Width            ),
  .NUM_OPERANDS   ( 3                         )
) floating_pint_instance(
  .clk_i          ( clk_i  ),
  .rst_ni         ( rst_ni ),
  // Input signals
  .operands_i     ( operands_i ),
  .rnd_mode_i     ( ),
  .op_i           ( fp_operands ),
  .op_mod_i       (),
  .src_fmt_i      (),
  .dst_fmt_i      (),
  .int_fmt_i      (),
  .vectorial_op_i (),
  .tag_i          (),
  // Input Handshake
  .in_valid_i     (),
  .in_ready_o     (),
  .flush_i        (),
  // Output signals
  .result_o       (),
  .status_o       (),
  .tag_o          (),
  // Output handshake
  .out_valid_o    (),
  .out_ready_i    (),
  // Indication of valid data in flight
  .busy_o         ()
); 
  always_comb begin : 
    fp_rf_wen_o   = fp_rf_wen_wb_i & out_valid_o;
    
    if (use_fp_rs1_i)
      fpu_op_a = fp_rf_rdata_a_i;
    else
      fpu_op_a = int_rf_rdata_a_i;
    
    if (use_fp_rs1_i)
      fpu_op_b = fp_rf_rdata_b_i;
    else
      fpu_op_b = int_rf_rdata_b_i;


    fpu_op_c = fp_rf_rdata_c_i;   
  end

  assign fp_operands = {fpu_op_c , fpu_op_b , fpu_op_a};

endmodule 