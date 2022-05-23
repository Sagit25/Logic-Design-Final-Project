`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:31:18 05/23/2022 
// Design Name: 
// Module Name:    Program_Counter 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Program_Counter(
    input input_clk,
    input [7:0] input_Q,
    output [7:0] output_Q,
    input input_reset
    );
	 
	 wire Q0, Q1;
	 reg [7:0] D;
	
	 assign output_Q = D;
	 
	 JK_FlipFlop T1(1, 1, input_clk, input_reset, output_Q[0], );
	 JK_FlipFlop T2(output_Q[0], output_Q[0], input_clk, input_reset, output_Q[1], );
	 JK_FlipFlop T3(output_Q[0] && output_Q[1], output_Q[0] && output_Q[1], input_clk, input_reset, output_Q[2], );
	 JK_FlipFlop T4(output_Q[0] && output_Q[1] && output_Q[2], output_Q[0] && output_Q[1] && output_Q[2], input_clk, input_reset, output_Q[3], );
	 and T5(Q0, output_Q[0], output_Q[1], output_Q[2], output_Q[3]);
	 JK_FlipFlop T6(Q0, Q0, input_clk, input_reset, output_Q[4], );
	 JK_FlipFlop T7(Q0 && output_Q[4], Q0 && output_Q[4], input_clk, input_reset, output_Q[5], );
	 JK_FlipFlop T8(Q0 && output_Q[4] && output_Q[5], Q0 && output_Q[4] && output_Q[5], input_clk, input_reset, output_Q[6], );
	 and T9(Q1, Q0, output_Q[4], output_Q[5], output_Q[6]);
	 JK_FlipFlop T10(Q1, Q1, input_clk, input_reset, output_Q[7], );

endmodule
