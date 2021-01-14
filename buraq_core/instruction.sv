module instruction
(
    input clock,
    input reset,

    input tlul_pkg::tl_h2d_t tl_d_i,
    output tlul_pkg::tl_d2h_t tl_d_o
);

  logic req;
  logic [11:0] addr;
  logic [31:0] wdata;
  logic [31:0] rdata;
  logic rvalid;
  logic we;

instr_mem memory (
 .clock (clock),
 .reset (reset),

 .req_i (req),
 .addr_i (addr),
 .wdata_i (wdata),
 .rdata_o (rdata),
 .rvalid_o (rvalid) 

);

tlul_sram_adapter #(
  .SramAw       (12),
  .SramDw       (32), 
  .Outstanding  (2),  
  .ByteAccess   (1),
  .ErrOnWrite   (0),  // 1: Writes not allowed, automatically error
  .ErrOnRead    (0)   // 1: Reads not allowed, automatically error  

) inst_mem (
    .clock (clock),
    .reset (reset),
    .tl_d_c_a (tl_d_i),
    .tl_d_c_d (tl_d_o), 
    .req_o (req),
    .gnt_i (1'b1),
    .we_o (we),
    .addr_o (addr),
    .wdata_o (),
    .wmask_o (),
    .rdata_i (rdata),
    .rvalid_i (rvalid)
    );

endmodule