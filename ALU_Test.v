`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:27:29 05/23/2022
// Design Name:   ALU
// Module Name:   C:/Users/chowd/Downloads/Vending_Machine/Final_Project/ALU_Test.v
// Project Name:  Final_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_Test;

	// Inputs
	reg [7:0] input_A;
	reg [7:0] input_B;

	// Outputs
	wire [7:0] output_S;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.input_A(input_A), 
		.input_B(input_B), 
		.output_S(output_S)
	);

	initial begin
		// Initialize Inputs
		input_A = 8'b00011111;
		input_B = 8'b01011111;
		#100;
		
		input_A = 8'b10000000;
		input_B = 8'b11011111;
		#100;
		
		input_A = 8'b00100110;
		input_B = 8'b00010011;
		#100;

	end
      
endmodule

