module uart_tx (
   input       clk_i,
   input       rst_ni,
   input       tx_en,
   input [7:0] i_TX_Byte, 
   input [15:0]CLKS_PER_BIT,
   //output      o_TX_Active,
   output reg  o_TX_Serial,
   output      o_TX_Done
   );
 
  localparam IDLE         = 3'b000;
  localparam TX_START_BIT = 3'b001;
  localparam TX_DATA_BITS = 3'b010;
  localparam TX_STOP_BIT  = 3'b011;
  localparam CLEANUP      = 3'b100;
  
  reg [2:0] r_SM_Main     ;
  reg [15:0] r_Clock_Count ;
  reg [2:0] r_Bit_Index   ;
  reg [7:0] r_TX_Data     ;
  reg       r_TX_Done     ;
//  reg       r_TX_Active   ;
    
  always @(posedge clk_i)
  begin
    if(~rst_ni) begin
        r_SM_Main     = 3'b0;
        r_Clock_Count = 16'b0;
        r_Bit_Index   = 3'b0;
        r_TX_Data     = 8'b0;
        r_TX_Done     = 1'b0;
       // r_TX_Active   = 0;
    end else begin
    case (r_SM_Main)
      IDLE :
        begin
          o_TX_Serial   <= 1'b1;         // Drive Line High for Idle
          r_TX_Done     <= 1'b0;
          r_Clock_Count <= 16'b0;
          r_Bit_Index   <= 3'b0;
          
          if (tx_en == 1'b1)
          begin
           // r_TX_Active <= 1'b1;
            r_TX_Data   <= i_TX_Byte;
            r_SM_Main   <= TX_START_BIT;
          end
          else
            r_SM_Main <= IDLE;
        end // case: IDLE
      
      
      // Send out Start Bit. Start bit = 0
      TX_START_BIT :
        begin
          o_TX_Serial <= 1'b0;
          
          // Wait CLKS_PER_BIT-1 clock cycles for start bit to finish
          if (r_Clock_Count < CLKS_PER_BIT-1)
          begin
            r_Clock_Count <= r_Clock_Count + 16'b1;
            r_SM_Main     <= TX_START_BIT;
          end
          else
          begin
            r_Clock_Count <= 16'b0;
            r_SM_Main     <= TX_DATA_BITS;
          end
        end // case: TX_START_BIT
      
      
      // Wait CLKS_PER_BIT-1 clock cycles for data bits to finish         
      TX_DATA_BITS :
        begin
          o_TX_Serial <= r_TX_Data[r_Bit_Index];
          
          if (r_Clock_Count < CLKS_PER_BIT-16'b1)
          begin
            r_Clock_Count <= r_Clock_Count + 16'b1;
            r_SM_Main     <= TX_DATA_BITS;
          end
          else
          begin
            r_Clock_Count <= 3'b0;
            
            // Check if we have sent out all bits
            if (r_Bit_Index < 7)
            begin
              r_Bit_Index <= r_Bit_Index + 3'b1;
              r_SM_Main   <= TX_DATA_BITS;
            end
            else
            begin
              r_Bit_Index <= 3'b0;
              r_SM_Main   <= TX_STOP_BIT;
            end
          end 
        end // case: TX_DATA_BITS
      
      
      // Send out Stop bit.  Stop bit = 1
      TX_STOP_BIT :
        begin
          o_TX_Serial <= 1'b1;
          
          // Wait CLKS_PER_BIT-1 clock cycles for Stop bit to finish
          if (r_Clock_Count < CLKS_PER_BIT- 16'b1)
          begin
            r_Clock_Count <= r_Clock_Count + 16'b1;
            r_SM_Main     <= TX_STOP_BIT;
          end
          else
          begin
            r_TX_Done     <= 1'b1;
            r_Clock_Count <= 16'b0;
            r_SM_Main     <= CLEANUP;
           // r_TX_Active   <= 1'b0;
          end 
        end // case: TX_STOP_BIT
      
      
      // Stay here 1 clock
      CLEANUP :
        begin
          r_TX_Done <= 1'b1;
          r_SM_Main <= IDLE;
        end
      
      
      default :
        r_SM_Main <= IDLE;
      
    endcase
    end 
  end
  
  //assign o_TX_Active = r_TX_Active;
  assign o_TX_Done   = r_TX_Done;
  
endmodule
 
/*
control register [7:0]ctrl:
bit 0:	When set, external clock is chosen for PWM/timer. When cleared, wb clock is used for PWM/timer.
bit 1:	When set,  PWM is enabled. When cleared,  timer is enabled.
bit 2:	When set,  PWM/timer starts. When cleared, PWM/timer stops.
bit 3:	When set, timer runs continuously. When cleared, timer runs one time.
bit 4:	When set, o_pwm enabled.
bit 5:	timer interrupt bit	When it is written with 0, interrupt request is cleared. 
bit 6:	When set, a 16-bit external signal i_DC is used as duty cycle. When cleared, register DC is used.
bit 7:	When set, counter reset for PWM/timer, it's output and bit 5 will also be cleared. When changing from PWM mode to timer mode reset is needed before timer starts.
*/
module	pwm(
//tlul interface
	input wire			clk_i,												
	input wire			rst_ni,												

	input wire			re_i,											
	input wire			we_i,											
	input wire  [7:0]    addr_i,											
	input wire [31:0]   wdata_i,											
	input wire [3:0]	be_i,										
	output wire [31:0]   rdata_o,																								
  output wire         o_pwm,
	output wire         o_pwm_2,
	output  reg     oe_pwm1,
	output  reg     oe_pwm2

);

////////////////////control logic////////////////////////////
parameter  adr_ctrl_1	=	0,
		   adr_divisor_1=	4,
		   adr_period_1	=	8,
		   adr_DC_1		=	12;

parameter  adr_ctrl_2	=	16,
		   adr_divisor_2=	20,
		   adr_period_2	=	24,
		   adr_DC_2		=	28;



					 
reg	[7:0]  ctrl;
reg	[15:0] period;		
reg	[15:0] DC_1;		
reg	[15:0] divisor;	

reg	[7:0]  ctrl_2;
reg	[15:0] period_2;		
reg	[15:0] DC_2;		
reg	[15:0] divisor_2;	

wire	   write;

assign	   write = we_i & ~re_i;

always@(posedge clk_i)
	if(~rst_ni)begin
		ctrl[4:2]	<=	3'b0;
		ctrl[0]  	<=	1'b0;
		ctrl[1]     <= 1'b0;
		ctrl[7:5]	<=	3'b0;
		DC_1		<=	16'b0;
		period		<=	16'b0;
		divisor		<=	16'b0;

		
		ctrl_2[4:2]	 <=	3'b0;
		ctrl_2[0]  	 <=	1'b0;
		ctrl_2[7:5]	 <=	3'b0;
		ctrl_2[1]   <=  1'b0;
		DC_2		<=	16'b0;
		period_2	<=	16'b0;
		divisor_2	<=	16'b0;
	end
	else if(write)begin
		case(addr_i)
			adr_ctrl_1:begin
				ctrl[0]	<=	wdata_i[0];
				ctrl[1] <= 1'b1;
				ctrl[4:2]	<=	wdata_i[4:2];
				ctrl[7:5]	<=	wdata_i[7:5];
			end

			adr_ctrl_2:begin
				ctrl_2[0]	<=	wdata_i[0];
				ctrl_2[1]   <= 1'b1;
				ctrl_2[4:2]	<=	wdata_i[4:2];
				ctrl_2[7:5]	<=	wdata_i[7:5];
			end

			adr_divisor_1	:  divisor	<=	wdata_i[15:0];
			adr_period_1	:  period   <=	wdata_i[15:0];
			adr_DC_1		:  DC_1		<=	wdata_i[15:0];

			adr_divisor_2	:  divisor_2	<=	wdata_i[15:0];
			adr_period_2	:  period_2		<=	wdata_i[15:0];
			adr_DC_2		:  DC_2			<=	wdata_i[15:0];
		endcase
	end

wire	pwm_1;
assign	pwm_1 = ctrl[1];

wire    pwm_2;
assign		pwm_2 = ctrl_2[1];

// clock division 
reg  clock_p1;
reg  clock_p2;

reg  [15:0] counter_p1;
reg  [15:0] counter_p2;
reg  [15:0] period_counter1;
reg  [15:0] period_counter2;

reg         pts;
reg         pts_2;

always @(posedge clk_i or negedge rst_ni) begin
  if(~rst_ni) begin
    clock_p1   <= 1'b0;
    clock_p2   <= 1'b0;
    counter_p1 <= 16'b0;
    counter_p2 <= 16'b0;
  end else begin
    if(pwm_1) begin
      counter_p1 <= counter_p1 + 16'b1;
      if(counter_p1 == divisor-1) begin
        counter_p1 <= 16'b0;
        clock_p1   <= ~clock_p1;
      end
    end

    
    if(pwm_2) begin
      counter_p2 <= counter_p2 + 16'b1;
      if(counter_p2 == divisor_2-1) begin
        counter_p2 <= 16'b0;
        clock_p2    <= ~clock_p2;
      end
    end

  end
end





always@(posedge clock_p1 )
	if(~rst_ni)begin
	   pts   <= 1'b0;
	   period_counter1    <= 16'b0;
	   oe_pwm1         <= 1'b0;
	end
	else begin
	if(ctrl[2])begin
	  if(pwm_1) begin
            oe_pwm1 <= 1'b1;
	    if(period_counter1	>= period) period_counter1 <=	16'b0;
	    else period_counter1 <= period_counter1 + 16'b1;

	    if(period_counter1	< DC_1)	pts <=	1'b1;
	    else pts <=	1'b0;
	end else begin
	   pts	           <= 1'b0;
	   period_counter1 <= 16'b0;
	   oe_pwm1         <= 1'b0;
	end
	end else begin
	   pts	           <= 1'b0;
	   period_counter1 <= 16'b0;
	   oe_pwm1         <= 1'b0;
	end
  end



always@(posedge clock_p2 )
	if(~rst_ni)begin
	  pts_2	<=	1'b0;
	  period_counter2	<=	16'b0;
	  oe_pwm2         <=  1'b0;
	end
	else begin
	if(ctrl_2[2])begin
	  if(pwm_2) begin
            oe_pwm2 <= 1'b1;
	    if(period_counter2	>= period_2) period_counter2 <=	16'b0;
	    else period_counter2 <= period_counter2+ 16'b1;

	    if(period_counter2	< DC_2)	pts_2	<= 1'b1;
	    else pts_2	<= 1'b0;
	end else begin
	   pts_2	   <=  1'b0;
	   period_counter2 <=  16'b0;
	   oe_pwm2         <=  1'b0;
	end
  end else begin
	   pts_2	   <=  1'b0;
	   period_counter2 <=  16'b0;
	   oe_pwm2         <=  1'b0;
	end 
  end
//////////////////////////////////////////////////////////

assign	o_pwm   = ctrl[4]? pts: 1'b0;
assign	o_pwm_2 = ctrl_2[4]? pts_2: 1'b0;
assign	rdata_o = (addr_i == adr_ctrl_1)   ? {8'h0,ctrl}  :
			  	(addr_i == adr_divisor_1)? divisor	  :
			  	(addr_i == adr_period_1) ? period		  :
			  	(addr_i == adr_DC_1)	   ? DC_1			  : 
				  (addr_i == adr_DC_2)	   ? DC_2		  :
				  (addr_i == adr_period_2) ? period_2	  :
				  (addr_i == adr_divisor_2)? divisor_2    :
				  (addr_i == adr_ctrl_2)   ? {8'h0,ctrl_2}: 32'b0;


endmodule