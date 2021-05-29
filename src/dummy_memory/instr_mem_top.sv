module instr_mem_top
(
  input clk_i,
  input rst_ni,

  input  logic        req,
  input  logic [11:0] addr,
  input  logic [31:0] wdata,
  output logic [31:0] rdata,
  output logic        rvalid,
  input  logic [3:0]  wmask,
  input  logic        we
);

logic csb0_q;

  always_ff @(posedge clk_i) begin
  if (!rst_ni) begin
    rvalid <= 1'b0;
  end else if (we) begin
    rvalid <= 1'b0;
  end else begin 
    rvalid <= req;
  end
  end

assign csb0_q = req | we;

sram #(
  .NUM_WMASKS  (4), 
  .DATA_WIDTH  (32),
  .ADDR_WIDTH  (12),
  .DELAY       (0),
  .IZERO       (0)
) iccm (
  
  .clk0     (~clk_i),
  .csb0     (~csb0_q),
  .web0     (~we),
  .wmask0   (wmask),
  .addr0    (addr),
  .din0     (wdata),
  .dout0    (rdata),

  .clk1     (1'b0),
  .csb1     (1'b1),
  .addr1    ('0),
  .dout1    ()
);

endmodule
