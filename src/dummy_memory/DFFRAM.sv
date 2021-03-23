module DFFRAM (

    input CLK,
    input EN, // chip enable
    input  logic  [3:0] WE, //write mask
    input  logic  [31:0] Di, //data input
    output logic [31:0] Do, // data output
    input  logic [11:0] A // address
);
  

reg [31:0] mem [0:4096-1];

initial begin
    $readmemh("/home/merl-lab/fyp/azadi/tests/hex/instruction.hex", mem);
end
  //  initial begin
  //      mem[0] = 32'h400C0437;
  //      mem[1] = 32'h00040413;
  //      mem[2] = 32'h00800513;
  //      mem[3] = 32'h00A42823;
  //     // mem[4] = 32'h00B42E23;
  //  //    mem[5] = 32'h00A42E23;
  //  end     
always @(posedge CLK) begin
    if (EN == 1'b1) begin
        Do <= mem[A];
        if (WE[0]) mem[A][ 7: 0] <= Di[ 7: 0];
        if (WE[1]) mem[A][15: 8] <= Di[15: 8];
        if (WE[2]) mem[A][23:16] <= Di[23:16];
        if (WE[3]) mem[A][31:24] <= Di[31:24];
    end
end
endmodule 