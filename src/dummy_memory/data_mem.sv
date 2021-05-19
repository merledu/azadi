module data_mem
(
  input clk_i,
  input rst_ni,

// tl-ul insterface
  input tlul_pkg::tl_h2d_t tl_d_i,
  output tlul_pkg::tl_d2h_t tl_d_o
);

  logic req_i;
  logic [11:0] addr_i;
  logic [31:0] wdata_i;
  logic [31:0] wmask_i;
  logic we_i;

  logic rvalid_o;
  logic [31:0] rdata_o; 

  always_ff @(posedge clk_i) begin
    if (!rst_ni) begin
      rvalid_o <= 1'b0;
    end else if (we_i) begin
      rvalid_o <= 1'b0;
    end else begin 
      rvalid_o <= req_i;
    end
  end

  logic [3:0] data_we;

  //assign data_we[0] = (wmask_i[7:0] != 8'b0) ? 1'b1: 1'b0;
  //assign data_we[1] = (wmask_i[15:8] != 8'b0) ? 1'b1: 1'b0;
  assign data_we[1:0] = (wmask_i[23:16] != 8'b0) ? 2'b11: 2'b0;
  assign data_we[3:2] = (wmask_i[31:24] != 8'b0) ? 2'b11: 2'b0; 
  
// DFFRAM dccm (

//     .CLK    (clock),
//     .EN     (req_i), // chip enable
//     .WE     (data_we), //write mask
//     .Di     (wdata_i), //data input
//     .Do     (rdata_o), // data output
//     .A      (addr_i) // address
// );

sram #(
  .NUM_WMASKS  (4), 
  .DATA_WIDTH  (32),
  .ADDR_WIDTH  (10),
  .DELAY       (0),
  .IZERO       (1),
  .IFILE       ("")
) dccm (
  
  .clk0     (clk_i),
  .csb0     (~req_i),
  .web0     (~we_i),
  .wmask0   (data_we),
  .addr0    (addr_i),
  .din0     (wdata_i),
  .dout0    (rdata_o),

  .clk1     (0),
  .csb1     (0),
  .addr1    (0),
  .dout1    ()
);


tlul_sram_adapter #(
  .SramAw       (12),
  .SramDw       (32), 
  .Outstanding  (4),  
  .ByteAccess   (1),
  .ErrOnWrite   (0),  // 1: Writes not allowed, automatically error
  .ErrOnRead    (0) 

) data_mem (
    .clk_i    (clk_i),
    .rst_ni   (rst_ni),
    .tl_i     (tl_d_i),
    .tl_o     (tl_d_o), 
    .req_o    (req_i),
    .gnt_i    (1'b1),
    .we_o     (we_i),
    .addr_o   (addr_i),
    .wdata_o  (wdata_i),
    .wmask_o  (wmask_i),
    .rdata_i  (rst_ni? rdata_o: '0), // (reset) ? rdata_o: '0
    .rvalid_i (rvalid_o),
    .rerror_i (2'b0)

);

endmodule