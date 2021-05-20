
module azadi_top_arty7(

  input  clock,
  input  reset,

  input  logic [32:0] gpio_i,
  output logic [32:0] gpio_o,
  //output logic [32:0] gpio_oe,

  // jtag interface 
  input  logic       jtag_tck_i,
  input  logic       jtag_tms_i,
  input  logic       jtag_trst_ni,
  input  logic       jtag_tdi_i,
  output logic       jtag_tdo_o,

  // uart-periph interface
  output logic       uart_tx,
  input  logic       uart_rx,

  // PWM interface  

  output logic       pwm_o,
  output logic       pwm_o_2,

  // SPI interface

  output logic    [`SPI_SS_NB-1:0] ss_o,        
  output logic                     sclk_o,      
  output logic                     sd_o,       
  input  logic                     sd_i,

  // i2c interface 

  input  logic scl_pad_i,
  output logic scl_pad_o,
  //output logic scl_padoen_o,

  input  logic sda_pad_i,
  output logic sda_pad_o,
  //output logic sda_padoen_o 

  
);

logic [32:0] gpio_oe;
logic scl_padoen_op;
logic sda_padoen_o; 

localparam logic [31:0] JTAG_IDCODE = {
  4'h0,     // Version
  16'h4F54, // Part Number: "OT"
  11'h426,  // Manufacturer Identity: Google
  1'b1      // (fixed)
};


azadi_soc_top #(
  
  .JTAG_ID       (JTAG_IDCODE),
  .DirectDmiTap  ('0)
) u_soc_top (
  .clk_i         (clock ),
  .rst_ni        (reset),

  .gpio_i        (gpio_i),
  .gpio_o        (gpio_o),
  .gpio_oe       (gpio_oe),

  // jtag interface 
  .jtag_tck_i    (jtag_tck_i),
  .jtag_tms_i    (jtag_tms_i),
  .jtag_trst_ni  (jtag_trst_ni),
  .jtag_tdi_i    (jtag_tdi_i),
  .jtag_tdo_o    (jtag_tdo_o),

  // uart-periph interface
  .uart_tx       (uart_tx),
  .uart_rx       (uart_rx),

  // PWM interface  

  .pwm_o         (pwm_o),
  .pwm_o_2       (pwm_o_2),

  // SPI interface

  .ss_o          (ss_o),        
  .sclk_o        (sclk_o),      
  .sd_o          (sd_o),       
  .sd_i          (sd_i),

  // i2c interface 

  .scl_pad_i     (scl_pad_i),
  .scl_pad_o     (scl_pad_o),
  .scl_padoen_o  (scl_padoen_o),

  .sda_pad_i     (sda_pad_i), 
  .sda_pad_o     (sda_pad_o),
  .sda_padoen_o  (sda_padoen_o) 

);


endmodule