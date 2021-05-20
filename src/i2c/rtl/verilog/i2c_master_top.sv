module i2c_master_top (
  input logic clk_i,
  input logic rst_ni,

  input  tlul_pkg::tl_h2d_t tl_i,
  output tlul_pkg::tl_d2h_t tl_o,

  // i2c interface
  output logic intr_o,

  input  logic scl_pad_i,
  output logic scl_pad_o,
  output logic scl_padoen_o,

  input  logic sda_pad_i,
  output logic sda_pad_o,
  output logic sda_padoen_o
);

  localparam int AW = 8;
  localparam int DW = 8;

  logic [7:0] wdata;
  logic [7:0] rdata;
  logic [7:0] addr;
  logic [3:0] be_i;
  logic       wen;
  logic       ren;
  logic       ben;

  i2c_master_core i2c_core(
	  .clk_i        (clk_i), 
    .rst_ni       (rst_ni), 
    .arst_i       (~rst_ni), 
    .addr_i       (addr[4:2]), 
    .wdata_i      (wdata), 
    .rdata_o      (rdata),
	  .we_i         (wen), 
    .ren_i        (ren), 
    .error_o      (err), 
    .ben_i        (ben),
    .intra_o      (instr_o),
	  .scl_pad_i    (scl_pad_i), 
    .scl_pad_o    (scl_pad_o), 
    .scl_padoen_o (scl_padoen_o), 
    .sda_pad_i    (sda_pad_i), 
    .sda_pad_o    (sda_pad_o), 
    .sda_padoen_o (sda_padoen_o)
  );

  tlul_adapter_reg #(
    .RegAw(AW),
    .RegDw(DW)
  ) u_reg_if (
    .clk_i   (clk_i),
    .rst_ni  (rst_ni),
    .tl_i    (tl_i),
    .tl_o    (tl_o),
    .we_o    (wen),
    .re_o    (ren),
    .addr_o  (addr),
    .wdata_o (wdata),
    .be_o    (ben),
    .rdata_i (rdata),
    .error_i (err)
  );

endmodule