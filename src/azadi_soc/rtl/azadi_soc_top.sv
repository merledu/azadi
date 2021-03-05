 
module azadi_soc_top #(
  parameter logic [31:0] JTAG_ID = 32'h 0000_0001
)(
  input clock,
  input reset_ni,
  input uart_rx_i,

  input  logic [19:0] gpio_i,
  output logic [19:0] gpio_o,
//  output logic [19:0] gpio_oe

// jtag interface 
  input               jtag_tck_i,
  input               jtag_tms_i,
  input               jtag_trst_ni,
  input               jtag_tdi_i,
  output              jtag_tdo_o

);

// added by zeeshan

logic RESET;
assign RESET = ~reset_ni;


wire [19:0] gpio_in;
wire [19:0] gpio_out;

assign gpio_in = gpio_i;
assign gpio_o = gpio_out; 


// end here
        
  tlul_pkg::tl_h2d_t ifu_to_xbar;
  tlul_pkg::tl_d2h_t xbar_to_ifu;

  tlul_pkg::tl_h2d_t xbar_to_iccm;
  tlul_pkg::tl_d2h_t iccm_to_xbar;

  tlul_pkg::tl_h2d_t lsu_to_xbar;
  tlul_pkg::tl_d2h_t xbar_to_lsu;

  tlul_pkg::tl_h2d_t xbar_to_dccm;
  tlul_pkg::tl_d2h_t dccm_to_xbar;

  tlul_pkg::tl_h2d_t xbarm_to_xbarp;
  tlul_pkg::tl_d2h_t xbarp_to_xbarm;

  tlul_pkg::tl_h2d_t xbarp_to_gpio;
  tlul_pkg::tl_d2h_t gpio_to_xbarp;

  tlul_pkg::tl_h2d_t dm_to_xbar;
  tlul_pkg::tl_d2h_t xbar_to_dm;

  tlul_pkg::tl_h2d_t dbgrom_to_xbar;
  tlul_pkg::tl_d2h_t xbar_to_dbgrom;

  logic [31:0] gpio_intr;
  logic       rx_dv_i;
  logic [7:0] rx_byte_i;


logic instr_valid;
logic [11:0] tlul_addr;
logic req_i;
logic [31:0] tlul_data;

logic iccm_cntrl_reset;
logic [11:0] iccm_cntrl_addr;
logic [31:0] iccm_cntrl_data;
logic iccm_cntrl_we;

// jtag interface 

  jtag_pkg::jtag_req_t jtag_req;
  jtag_pkg::jtag_rsp_t jtag_rsp;
  logic unused_jtag_tdo_oe_o;

  assign jtag_req.tck    = jtag_tck_i;
  assign jtag_req.tms    = jtag_tms_i;
  assign jtag_req.trst_n = jtag_trst_ni;
  assign jtag_req.tdi    = jtag_tdi_i;
  assign jtag_tdo_o      = jtag_rsp.tdo;
  assign unused_jtag_tdo_oe_o = jtag_rsp.tdo_oe;

  logic brg_req;
  logic dbg_rst;
//wire 

  //tlul_pkg::tl_h2d_t core_to_gpio;
  //tlul_pkg::tl_d2h_t gpio_to_core;

brq_core_top #(
    .DmHaltAddr       (ADDR_SPACE_DEBUG_ROM + dm::HaltAddress),
    .DmExceptionAddr  (ADDR_SPACE_DEBUG_ROM + dm::ExceptionAddress)
) u_top (
    .clock (clock),
    .reset (dbg_rst | reset_ni),

  // instruction memory interface 
    .tl_i_i (xbar_to_ifu),
    .tl_i_o (ifu_to_xbar),

  // data memory interface 
    .tl_d_i (xbar_to_lsu),
    .tl_d_o (lsu_to_xbar),

    .test_en_i (1'b1),     // enable all clock gates for testing

    .hart_id_i (32'b0), 
    .boot_addr_i (32'h00000000),

        // Interrupt inputs
    .irq_software_i (1'b0),
    .irq_timer_i    (1'b0),
    .irq_external_i (|gpio_intr),
    .irq_fast_i     (1'b0),
    .irq_nm_i       (1'b0),       // non-maskeable interrupt

    // Debug Interface
    .debug_req_i    (brg_req),

        // CPU Control Signals
    .fetch_enable_i (1'b1),
    .alert_minor_o  (),
    .alert_major_o  (),
    .core_sleep_o   ()
);

// Debug module

  rv_dm #(
  .NrHarts(1),
  .IdcodeValue(JTAG_ID)
  ) debug_module (
  .clk_i(clock),       // clock
  .rst_ni(reset_ni),      // asynchronous reset active low, connect PoR
                                          // here, not the system reset
  .testmode_i(1'b0),
  .ndmreset_o(dbg_rst),  // non-debug module reset
  .dmactive_o(),  // debug module is active
  .debug_req_o(brg_req), // async debug request
  .unavailable_i(1'b0), // communicate whether the hart is unavailable
                                            // (e.g.: power down)

  // bus device with debug memory, for an execution based technique
  .tl_d_i(dbgrom_to_xbar),
  .tl_d_o(xbar_to_dbgrom),

  // bus host, for system bus accesses
  .tl_h_o(dm_to_xbar),
  .tl_h_i(xbar_to_dm),

  .jtag_req_i(jtag_req),
  .jtag_rsp_o(jtag_rsp)
);



// main xbar module
  xbar_main_t main_swith (
  .clk_main_i         (clock),
  .rst_main_ni        (dbg_rst),

  // Host interfaces
  .tl_brqif_i         (ifu_to_xbar),
  .tl_brqif_o         (xbar_to_ifu),
  .tl_brqlsu_i        (lsu_to_xbar),
  .tl_brqlsu_o        (xbar_to_lsu),
  .tl_dm_sba_i        (dm_to_xbar),
  .tl_dm_sba_o        (xbar_to_dm),

  // Device interfaces
  .tl_iccm_o          (xbar_to_iccm),
  .tl_iccm_i          (iccm_to_xbar),
  .tl_debug_rom_o     (dbgrom_to_xbar),
  .tl_debug_rom_i     (xbar_to_dbgrom),
  .tl_dccm_o          (xbar_to_dccm),
  .tl_dccm_i          (dccm_to_xbar),
  .tl_flash_ctrl_o    (),
  .tl_flash_ctrl_i    (),
  .tl_timer0_o        (),
  .tl_timer0_i        (),
  .tl_timer1_o        (),
  .tl_timer1_i        (),
  .tl_timer2_o        (),
  .tl_timer2_i        (),
  .tl_timer3_o        (),
  .tl_timer3_i        (),
  .tl_timer4_o        (),
  .tl_timer4_i        (),
  .tl_plic_o          (),
  .tl_plic_i          (),
  .tl_xbar_peri_o     (xbarm_to_xbarp),
  .tl_xbar_peri_i     (xbarp_to_xbarm),

  .scanmode_i         ()
);

// dummy data memory

data_mem dccm(
  .clock    (clock),
  .reset    (dbg_rst),

// tl-ul insterface
  .tl_d_i   (xbar_to_dccm),
  .tl_d_o   (dccm_to_xbar)
);


//peripheral xbar

xbar_periph periph_switch (
  .clk_peri_i         (clock),
  .rst_peri_ni        (dbg_rst),

  // Host interfaces
  .tl_xbar_main_i     (xbarm_to_xbarp),
  .tl_xbar_main_o     (xbarp_to_xbarm),

  // Device interfaces
  .tl_uart0_o         (),
  .tl_uart0_i         (),
  .tl_uart1_o         (),
  .tl_uart1_i         (),
  .tl_spi0_o          (),
  .tl_spi0_i          (),
  .tl_spi1_o          (),
  .tl_spi1_i          (),
  .tl_spi2_o          (),
  .tl_spi2_i          (),
  .tl_pwm_o           (),
  .tl_pwm_i           (),
  .tl_gpio_o          (xbarp_to_gpio),
  .tl_gpio_i          (gpio_to_xbarp),
  .tl_i2c0_o          (),
  .tl_i2c0_i          (),
  .tl_i2c1_o          (),
  .tl_i2c1_i          (),
  .tl_can0_o          (),
  .tl_can0_i          (),
  .tl_can1_o          (),
  .tl_can1_i          (),
  .tl_adc_o           (),
  .tl_adc_i           (),
  .tl_qspi_o          (),
  .tl_qspi_i          (),

  .scanmode_i         ()
);

//GPIO module
 gpio GPIO (
  .clk_i          (clock),
  .rst_ni         (dbg_rst),

  // Below Regster interface can be changed
  .tl_i           (xbarp_to_gpio),
  .tl_o           (gpio_to_xbarp),

  .cio_gpio_i     ({12'b0,gpio_in}),
  .cio_gpio_o     (gpio_out),
  .cio_gpio_en_o  (),

  .intr_gpio_o    (gpio_intr)  
);



 iccm_controller u_dut(
	.clk_i       (clock),
	.rst_ni      (RESET),
	.rx_dv_i     (rx_dv_i),
	.rx_byte_i   (rx_byte_i),
	.we_o        (iccm_cntrl_we),
	.addr_o      (iccm_cntrl_addr),
	.wdata_o     (iccm_cntrl_data),
	.reset_o     (iccm_cntrl_reset)
);

 uart_rx programmer (
 .i_Clock       (clock),
 .rst_ni        (RESET),
 .i_Rx_Serial   (uart_rx_i),
 .CLKS_PER_BIT  (15'd87),
 .o_Rx_DV       (rx_dv_i),
 .o_Rx_Byte     (rx_byte_i)
 );


instr_mem_top iccm (
  .clock      (clock),
  .reset      (dbg_rst),

  .req        (req_i),
  .addr       (tlul_addr),
  .wdata      (),
  .rdata      (tlul_data),
  .rvalid     (instr_valid),
  .we         ('0)
);

 tlul_sram_adapter #(
  .SramAw       (12),
  .SramDw       (32), 
  .Outstanding  (2),  
  .ByteAccess   (1),
  .ErrOnWrite   (0),  // 1: Writes not allowed, automatically error
  .ErrOnRead    (0)   // 1: Reads not allowed, automatically error  

) inst_mem (
    .clk_i     (clock),
    .rst_ni    (dbg_rst),
    .tl_i      (xbar_to_iccm),
    .tl_o      (iccm_to_xbar), 
    .req_o     (req_i),
    .gnt_i     (1'b1),
    .we_o      (),
    .addr_o    (tlul_addr),
    .wdata_o   (),
    .wmask_o   (),
    .rdata_i   ((reset_ni) ? tlul_data: '0),
    .rvalid_i  (instr_valid),
    .rerror_i  (2'b0)
    );

endmodule