`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:15:49 05/23/2022 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [7:0] input_A,
    input [7:0] input_B,
	 input ALUOp,
    output [7:0] output_S
    );


	 reg [8:0] out;
	 
	 always@(input_A or input_B) begin
			out = input_A + input_B;
	 end
	 assign output_S = out[7:0];
	 


endmodule
