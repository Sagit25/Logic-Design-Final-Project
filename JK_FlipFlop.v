`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:30:13 05/23/2022 
// Design Name: 
// Module Name:    JK_FlipFlop 
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
module JK_FlipFlop(
    input J,
    input K,
    input clk,
    input reset,
    output Q1,
	 output Q2
    );
	 
	 wire [1:0] sel;
	 
	 reg [1:0] out;
	 
	 assign sel = {J, K};
	 assign {Q1, Q2} = out;
	 
	 always @(posedge clk or posedge reset) 
	 begin
		if (reset) begin
			out = 2'b10;
		end
		else begin
			case(sel)
				2'b00 : out = out;
				2'b01 : out = 2'b01;
				2'b10 : out = 2'b10;
				2'b11 : out = ~out;
			endcase
		end
	 end


endmodule
