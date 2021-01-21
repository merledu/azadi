
module instr_mem_top
(
  input clock,
  input reset,

  input  logic        req,
  input  logic [11:0] addr,
  input  logic [31:0] wdata,
  output logic [31:0] rdata,
  output logic        rvalid,
  input  logic [3:0]  we
);


DFFRAM iccm (

    .CLK    (clock),
    .EN     (req), // chip enable
    .WE     (we), //write mask
    .Di     (wdata), //data input
    .Do     (rdata), // data output
    .A      (addr) // address
);

    always_ff @(posedge clock) begin
      if (~reset) rvalid <= 1'b0;
      else if (~we) rvalid <= 1'b0;
      else rvalid <= req; 
    end

endmodule