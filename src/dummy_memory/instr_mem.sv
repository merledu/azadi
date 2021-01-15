module instr_mem (
  input logic clock,
  input logic reset,

  input logic we_i,
  input logic req_i,
  input logic [11:0] addr_i,
  input logic [31:0] wdata_i,
  output logic [31:0] rdata_o,
  output logic rvalid_o 

);
 
//localparam MEM_SIZE = 2**12; 

  logic [31:0] mem [4095:0];
// initial $readmemh("/home/merl/github_repos/azadi/tools/program.hex",mem);
 initial begin
   mem[0] = 32'h00700513;
   mem[1] = 32'h10000437;
   mem[2] = 32'h00040413;
   mem[3] = 32'h00A42223;
   mem[4] = 32'h00442583;


 end
  logic valid;
  assign rvalid_o = valid;
  always_ff @(posedge clock) begin
    if (~reset) begin
      rdata_o <= '0;
    end else begin
      if(req_i) begin
        if(we_i) mem[addr_i] = wdata_i;
        else rdata_o <= mem[addr_i];
      end
    end
  end
  
  always_ff @(posedge clock or negedge reset) begin
    if(~reset) valid <= 1'b0;
    else valid <= req_i;
  end

endmodule