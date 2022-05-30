`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:29:30 05/30/2022
// Design Name:   Hexadecimal_7Segment
// Module Name:   C:/Users/chowd/Downloads/Vending_Machine/Final_Project/Hexadecimal_7Segment_Test.v
// Project Name:  Final_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Hexadecimal_7Segment
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Hexadecimal_7Segment_Test;

	// Inputs
	reg [7:0] input_signal;

	// Outputs
	wire [6:0] output_segment1;
	wire [6:0] output_segment2;

	// Instantiate the Unit Under Test (UUT)
	Hexadecimal_7Segment uut (
		.input_signal(input_signal), 
		.output_segment1(output_segment1), 
		.output_segment2(output_segment2)
	);

	initial begin
		// Initialize Inputs
		input_signal = {4'b0000, 4'b0000}; #100;
		input_signal = {4'b0010, 4'b0001}; #100;
		input_signal = {4'b1001, 4'b1010}; #100;
		input_signal = {4'b1111, 4'b1110}; #100;

	end
      
endmodule

