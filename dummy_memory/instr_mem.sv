module instr_mem (
  input clock,
  input reset,

// tlul interface
  input tlul_pkg::tl_h2d_t tl_d_i,
  output tlul_pkg::tl_d2h_t tl_d_o 
);

  logic req_i;
  logic [11:0] addr_i;
  logic [31:0] wdata_i;
  logic [31:0] rdata_o;
  logic rvalid_o; 

  logic [31:0] mem [11:0];
 initial $readmemh("/home/merl/github_repos/ibex/rtl/prog.txt", mem);
  logic valid;
  assign rvalid_o = valid;
  always_ff @(posedge clock) begin
    if (reset) begin
      valid <= 1'b0;
      rdata_o <= '0;
    end else begin
      if(req_i) begin
        valid <= req_i;
        rdata_o <= mem[addr_i];
      end
    end
  end
  assign mem[addr_i] = wdata_i;


tlul_sram_adapter #(
  .SramAw       (12),
  .SramDw       (32), 
  .Outstanding  (1),  
  .ByteAccess   (1),
  .ErrOnWrite   (0),  // 1: Writes not allowed, automatically error
  .ErrOnRead    (0)   // 1: Reads not allowed, automatically error  

) inst_mem (
    .clock (clock),
    .reset (reset),
    .tl_d_c_a (tl_d_i),
    .tl_d_c_d (tl_d_o), 
    .req_o (req_i),
    .gnt_i (1'b1),
    .we_o (we_i),
    .addr_o (addr_i),
    .wdata_o (),
    .wmask_o (),
    .rdata_i (rdata_o),
    .rvalid_i (rvalid_o)

);

endmodule