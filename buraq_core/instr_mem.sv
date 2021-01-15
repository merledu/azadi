module instr_mem (
  input clock,
  input reset,

  input we_i,
  input logic req_i,
  input logic [11:0] addr_i,
  input logic [31:0] wdata_i,
  output logic [31:0] rdata_o,
  output logic rvalid_o 

);

 

  logic [31:0] mem [11:0];
 initial $readmemh("/home/sajjad/Shaheen-sv/src/buraq_core_top/ibex_core/prog.txt", mem);
  logic valid;
  assign rvalid_o = valid;
  always_ff @(posedge clock) begin
    if (reset) begin
      rdata_o <= '0;
    end else begin
      if(req_i) begin
        if(we_i) mem[addr_i] = wdata_i;
        else rdata_o <= mem[addr_i];
      end
    end
  end
  
  always_ff @(posedge clock or negedge reset) begin
    if(reset) valid <= 1'b0;
    else valid <= req_i;
  end


  


//tlul_sram_adapter #(
//  .SramAw       (12),
//  .SramDw       (32), 
//  .Outstanding  (1),  
//  .ByteAccess   (1),
//  .ErrOnWrite   (0),  // 1: Writes not allowed, automatically error
//  .ErrOnRead    (0)   // 1: Reads not allowed, automatically error  
//
//) inst_mem (
//    .clock (clock),
//    .reset (reset),
//    .tl_d_c_a (tl_d_i),
//    .tl_d_c_d (tl_d_o), 
//    .req_o (req_i),
//    .gnt_i (1'b1),
//    .we_o (we_i),
//    .addr_o (addr_i),
//    .wdata_o (),
//    .wmask_o (),
//    .rdata_i (rdata_o),
//    .rvalid_i (rvalid_o)
//
//);

endmodule