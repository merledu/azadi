module data_mem
(
  input clock,
  input reset,

// tl-ul insterface
  input tlul_pkg::tl_h2d_t tl_d_i,
  output tlul_pkg::tl_d2h_t tl_d_o
);

  logic req_i;
  logic [11:0] addr_i;
  logic [31:0] wdata_i;
  logic [3:0] wmask_i;
  logic we_i;

  logic rvalid_o;
  logic [31:0] rdata_o; 

  logic [31:0] mem [11:0];
  logic valid;
  
always_ff @(posedge clock) begin
  if(reset) valid <= 1'b0;
  else valid <= req_i;
end
assign rvalid_o = valid;

always_ff @(posedge clock) begin
  if(req_i) begin
    if(~we_i) begin
      if(reset) rdata_o <= '0;
      else rdata_o <= mem[addr_i];
    end else begin
      if(wmask_i[0]) mem[addr_i][7:0] <= wdata_i[7:0];
      if(wmask_i[1]) mem[addr_i][15:8] <= wdata_i[15:8];
      if(wmask_i[2]) mem[addr_i][23:16] <= wdata_i[23:16];
      if(wmask_i[3]) mem[addr_i][31:24] <= wdata_i[31:24];
    end
  end
end

tlul_sram_adapter #(
  .SramAw       (12),
  .SramDw       (32), 
  .Outstanding  (1),  
  .ByteAccess   (1),
  .ErrOnWrite   (0),  // 1: Writes not allowed, automatically error
  .ErrOnRead    (0) 

) data_mem (
    .clock (clock),
    .reset (reset),
    .tl_d_c_a (tl_d_i),
    .tl_d_c_d (tl_d_o), 
    .req_o (req_i),
    .gnt_i (1'b1),
    .we_o (we_i),
    .addr_o (addr_i),
    .wdata_o (wdata_i),
    .wmask_o (wmask_i),
    .rdata_i (rdata_o),
    .rvalid_i (rvalid_o)

);

endmodule