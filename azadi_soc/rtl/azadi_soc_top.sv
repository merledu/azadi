 
module azadi_soc_top (
  input clock,
  input reset_ni,

  inout logic [19:0] gpio

);

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
  logic [91:0] gpio_in;
  logic [19:0] gpio_out;
  logic [19:0] gpio_oe;

    buraq_core #(
    .PMPEnable                (1),
    .PMPGranularity           (0), // 2^(PMPGranularity+2) == 4 byte granularity
    .PMPNumRegions            (16),
    .MHPMCounterNum           (10),
    .MHPMCounterWidth         (32),
    .RV32E                    (0),
    .RV32M                    (IbexM),
    .RV32B                    (ibex_pkg::RV32BNone),
    .RegFile                  (IbexRegFile),
    .BranchTargetALU          (1),
    .WritebackStage           (1),
    .ICache                   (0),
    .ICacheECC                (0),
    .BranchPredictor          (0),
    .DbgTriggerEn             (1),
    .SecureIbex               (0),
    .PipeLine                 (IbexPipeLine)
    ) u_rv_buraq_core (
    // clock and reset
    .clk_i                (clock),
    .rst_ni               (reset_ni),
    .test_en_i            (1'b0),
    // static pinning
    .hart_id_i            (32'b0),
    .boot_addr_i          (32'h 00000000), // ADDR_SPACE_ROM
    // TL-UL buses
    .tl_i_o               (ifu_to_xbar),
    .tl_i_i               (xbar_to_ifu),
    .tl_d_o               (lsu_to_xbar),
    .tl_d_i               (xbar_to_lsu),
    // interrupts
    .irq_software_i       (), // rv_plic
    .irq_timer_i          (), // rv_timer
    .irq_external_i       (|gpio_intr), // rv_plic
    // escalation input from alert handler (NMI)
    .esc_tx_i             (), // esc_tx[0] - alert_handler
    .esc_rx_o             (), // esc_rx[0] - alert_handler
    // debug interface
    .debug_req_i          (),
    // CPU control signals
    .fetch_enable_i       (1'b1),
    .core_sleep_o() // Originally pwrmgr_pwr_cpu.core_sleeping but unused for now
  );

// main xbar module
  xbar_main main_swith (
  .clk_main_i         (clock),
  .clk_jtag_i         (),
  .clk_periph_i       (clock),
  .rst_main_ni        (reset_ni),
  .rst_jtag_ni        (),
  .rst_periph_ni      (reset_ni),

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
instr_mem iccm (
  .clock    (clock),
  .reset    (~reset_ni),

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

  .cio_gpio_i     ({12{1'b0},gpio_in}),
  .cio_gpio_o     ({12{1'b0},gpio_out}),
  .cio_gpio_en_o  ({12{1'b0},gpio_oe}),

  .intr_gpio_o    (gpio_intr)  
);

assign gpio_in = gpio;

for (i = 0; i>20; i++) begin
  assign gpio[i]    = gpio_oe[i] ? gpio_out[i] : 1'b0;
end



endmodule