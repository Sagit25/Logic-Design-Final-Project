`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:28:41 05/23/2022
// Design Name:   Control_Unit
// Module Name:   C:/Users/chowd/Downloads/Vending_Machine/Final_Project/Control_Unit_Test.v
// Project Name:  Final_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Control_Unit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Control_Unit_Test;

	// Inputs
	reg [1:0] input_Operator;

	// Instantiate the Unit Under Test (UUT)
	Control_Unit uut (
		.input_Operator(input_Operator)
	);

	initial begin
		// Initialize Inputs
		input_Operator = 2'b00;
		#100;
		
		input_Operator = 2'b01;
		#100;
		
		input_Operator = 2'b10;
		#100;
		
		input_Operator = 2'b11;
		#100;

	end
      
endmodule

