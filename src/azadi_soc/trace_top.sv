module trace_top(
    input  logic        clk_i,
    input  logic        rst_ni
);

logic [31:0] instr_rdata;
logic [31:0] instr_wdata;
logic [11:0] instr_addr;
logic        instr_req;
logic        instr_valid;

logic        data_req;
logic        data_rvalid;
logic        data_we; 
logic [3:0]  data_be;
logic [11:0] data_addr;
logic [31:0] data_wdata;
logic [31:0] data_rdata;
 
brq_core_tracing  #(
    .PMPEnable       (1'b0), 
    .PMPGranularity  (0), 
    .PMPNumRegions   (4), 
    .MHPMCounterNum  (0), 
    .MHPMCounterWidth(0), 
    .RV32E           (1'b0), 
    .RV32M           (brq_pkg::RV32MSlow), 
    .RV32B           (brq_pkg::RV32BNone), 
    .RegFile         (brq_pkg::RegFileFF), 
    .BranchTargetALU (1'b0), 
    .WritebackStage  (1'b1), 
    .ICache          (1'b0), 
    .ICacheECC       (1'b0), 
    .BranchPredictor (1'b0), 
    .DbgTriggerEn    (1'b1), 
    .DbgHwBreakNum   (1), 
    .Securebrq       (0), 
    .DmHaltAddr      (0), 
    .DmExceptionAddr (0)
) trace (
    // Clock and Reset
    .clk_i          (clk_i),
    .rst_ni         (rst_ni),

    .test_en_i      (1'b0),     // enable all clock gates for testing

    .hart_id_i      (32'b0),
    .boot_addr_i    (32'h20000000),

    // Instruction memory interface
    .instr_req_o    (instr_req),
    .instr_gnt_i    (1'b0),
    .instr_rvalid_i (instr_valid),
    .instr_addr_o   (instr_addr),
    .instr_rdata_i  (instr_rdata),
    .instr_err_i    ('0),

    // Data memory interface
    .data_req_o     (data_req),
    .data_gnt_i     (1'b0),
    .data_rvalid_i  (data_rvalid),
    .data_we_o      (data_we), 
    .data_be_o      (data_be),
    .data_addr_o    (data_addr),
    .data_wdata_o   (data_wdata),
    .data_rdata_i   (data_rdata),
    .data_err_i     ('0),

    // Interrupt inputs
    .irq_software_i ('0),
    .irq_timer_i    ('0),
    .irq_external_i ('0),
    .irq_fast_i     ('0),
    .irq_nm_i       ('0),       // non-maskeable interrupt

    // Debug Interface
    .debug_req_i    ('0),

    // CPU Control Signals
    .fetch_enable_i ('0),  
    .alert_minor_o  (),
    .alert_major_o  (),
    .core_sleep_o   ()

);


DFFRAM iccm (

    .CLK  (clk_i),
    .EN   (instr_req), // chip enable
    .WE   ('0), //write mask
    .Di   (instr_wdata), //data input
    .Do   (instr_rdata), // data output
    .A    (instr_addr)// address
);

always_ff @( posedge clk_i or negedge rst_ni ) begin 
  if(!rst_ni) begin
    instr_valid <= 1'b0;
  end else begin
    instr_valid <= instr_req;
  end
  
end


DFFRAM dccm (

    .CLK  (clk_i),
    .EN   (data_req), // chip enable
    .WE   ({4{data_we}}), //write mask
    .Di   (data_wdata), //data input
    .Do   (data_rdata), // data output
    .A    (data_addr)// address
);

always_ff @( posedge clk_i or negedge rst_ni) begin 
  if(!rst_ni) begin
    data_rvalid <= 1'b0;
  end else if(!data_we) begin
    data_rvalid <= data_req;
  end
  
end

endmodule