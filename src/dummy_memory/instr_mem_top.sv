
module instr_mem_top
(
    input clock,
    input reset,

    input tlul_pkg::tl_h2d_t tl_d_i,
    output tlul_pkg::tl_d2h_t tl_d_o
);

  logic req;
  logic [11:0] addr;
 // logic [31:0] wdata;
  logic [31:0] rdata;
  logic rvalid;
 // logic [3:0]  we;

DFFRAM iccm (

    .CLK    (clock),
    .EN     (1'b1), // chip enable
    .WE     (4'b0), //write mask
    .Di     (), //data input
    .Do     (rdata), // data output
    .A      (addr) // address
);

tlul_sram_adapter #(
  .SramAw       (12),
  .SramDw       (32), 
  .Outstanding  (2),  
  .ByteAccess   (1),
  .ErrOnWrite   (0),  // 1: Writes not allowed, automatically error
  .ErrOnRead    (0)   // 1: Reads not allowed, automatically error  

) inst_mem (
    .clk_i (clock),
    .rst_ni (reset),
    .tl_i (tl_d_i),
    .tl_o (tl_d_o), 
    .req_o (req),
    .gnt_i (1'b1),
    .we_o (),
    .addr_o (addr),
    .wdata_o (),
    .wmask_o (),
    .rdata_i ((reset) ? rdata: '0),
    .rvalid_i (rvalid)
    );
    always_ff @(posedge clock) begin
      if (~reset) rvalid <= 1'b0;
      else rvalid <= req; 
    end

endmodule