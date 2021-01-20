 
module azadi_soc_top (
  input clock,
  input reset_ni,
  input uart_rx_i,

  input  logic [3:0] gpio_i,
  output logic [3:0] gpio_o
//  output logic [19:0] gpio_oe
);

// added by zeeshan

wire [19:0] gpio_in;
wire [19:0] gpio_out;

assign gpio_i[3:0] = gpio_in[3:0];
assign gpio_i[3:0] = gpio_in[3:0]; 

wire [19:0] gpio_oe;
wire RESET = ~reset_ni;

wire        rst_ni;
wire        ram_main_instr_req;
wire        ram_main_instr_we;
reg         ram_main_instr_rvalid;
wire [1:0]  ram_main_instr_rerror;
wire [13:0] ram_main_instr_addr;
wire [31:0] ram_main_instr_wdata;
wire [31:0] ram_main_instr_wmask;
wire [31:0] ram_main_instr_rdata;  
wire [3:0]  instr_WE;
wire        instr_EN;
wire        ram_prog_instr_we;
wire [31:0] instr_Di;
wire [31:0] ram_prog_instr_wdata;
wire [13:0] instr_A;
wire [13:0] ram_prog_instr_addr;
// dccm
wire        ram_main_data_req;
wire        ram_main_data_we;
wire [13:0] ram_main_data_addr;
wire [31:0] ram_main_data_wdata;
wire [31:0] ram_main_data_wmask;
wire [31:0] ram_main_data_rdata;
reg         ram_main_data_rvalid;
wire [1:0]  ram_main_data_rerror;

assign instr_A = (rst_ni ? ram_main_instr_addr : ram_prog_instr_addr);
assign instr_Di = (rst_ni ? ram_main_instr_wdata : ram_prog_instr_wdata);
assign instr_WE = {4 {ram_prog_instr_we}} | ({ram_main_instr_wmask[31:24] != 8'b00000000, 
                   ram_main_instr_wmask[23:16] != 8'b00000000, ram_main_instr_wmask[15:8] != 8'b00000000,
                   ram_main_instr_wmask[7:0] != 8'b00000000} & {4 {ram_main_instr_we}});
assign instr_EN = ram_main_instr_req | ram_prog_instr_we;

always @(posedge clock) begin
    if (!rst_ni)
        ram_main_instr_rvalid <= 1'b0;
    else if (ram_main_instr_we || ram_prog_instr_we)
        ram_main_instr_rvalid <= 1'b0;
    else
        ram_main_instr_rvalid <= ram_main_instr_req;
end        

wire [3:0] data_WE;
assign data_WE = {ram_main_data_wmask[31:24] != 8'b00000000, ram_main_data_wmask[23:16] != 8'b00000000, ram_main_data_wmask[15:8] != 8'b00000000, ram_main_data_wmask[7:0] != 8'b00000000} & {4 {ram_main_data_we}};

always @(posedge clock) begin
	if (!rst_ni)
    	ram_main_data_rvalid <= 1'b0;
	else if (ram_main_data_we)
		ram_main_data_rvalid <= 1'b0;
	else
		ram_main_data_rvalid <= ram_main_data_req;
end
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

  logic [31:0] gpio_intr;

  //tlul_pkg::tl_h2d_t core_to_gpio;
  //tlul_pkg::tl_d2h_t gpio_to_core;

brq_core_top u_top (
    .clock (clock),
    .reset (rst_ni),

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
    .debug_req_i    (1'b0),

        // CPU Control Signals
    .fetch_enable_i (1'b1),
    .alert_minor_o  (),
    .alert_major_o  (),
    .core_sleep_o   ()
);

// main xbar module
  xbar_main_t main_swith (
  .clk_main_i         (clock),
  .rst_main_ni        (reset_ni),

  // Host interfaces
  .tl_brqif_i         (ifu_to_xbar),
  .tl_brqif_o         (xbar_to_ifu),
  .tl_brqlsu_i        (lsu_to_xbar),
  .tl_brqlsu_o        (xbar_to_lsu),
  .tl_dm_sba_i        (),
  .tl_dm_sba_o        (),

  // Device interfaces
  .tl_iccm_o          (xbar_to_iccm),
  .tl_iccm_i          (iccm_to_xbar),
  .tl_debug_rom_o     (),
  .tl_debug_rom_i     (),
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
  .reset    (~reset_ni),

// tl-ul insterface
  .tl_d_i   (xbar_to_dccm),
  .tl_d_o   (dccm_to_xbar)
);

//dummy instruction memory
instr_mem_top iccm (
  .clock    (clock),
  .reset    (reset_ni),

// tlul interface
  .tl_d_i   (xbar_to_iccm),
  .tl_d_o   (iccm_to_xbar) 
);


//peripheral xbar

xbar_periph periph_switch (
  .clk_peri_i         (clock),
  .rst_peri_ni        (reset_ni),

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
  .rst_ni         (reset_ni),

  // Below Regster interface can be changed
  .tl_i           (xbarp_to_gpio),
  .tl_o           (gpio_to_xbarp),

  .cio_gpio_i     ({12'b0,gpio_i}),
  .cio_gpio_o     (gpio_o),
  .cio_gpio_en_o  (gpio_oe),

  .intr_gpio_o    (gpio_intr)  
);

wire       rx_dv_i;
wire [7:0] rx_byte_i;
//wire 

 iccm_controller u_dut(
	.clk_i(clock),
	.rst_ni(RESET),
	.rx_dv_i(rx_dv_i),
	.rx_byte_i(rx_byte_i),
	.we_o(ram_prog_instr_we),
	.addr_o(ram_prog_instr_addr),
	.wdata_o(ram_prog_instr_wdata),
	.reset_o(rst_ni)
);

// uart_rx #(
//    .CLKS_PER_BIT('d1042)
// ) u_uart_rx (
//	.i_Clock(clock),
//	.rst_ni(RESET),
//	.i_Rx_Serial(uart_rx_i),
//	.o_Rx_DV(rx_dv_i),
//	.o_Rx_Byte(rx_byte_i)
//);
 uart_rx_prog (
 .i_Clock(clock),
 .rst_ni(RESET),
 .i_Rx_Serial(uart_rx_i),
 .CLKS_PER_BIT(15'd1042),
 .o_Rx_DV(rx_dv_i),
 .o_Rx_Byte(rx_byte_i)
 );

endmodule