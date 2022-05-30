`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:36:41 05/30/2022
// Design Name:   FFinal
// Module Name:   C:/Users/chowd/Downloads/Logic-Design-Final-Project-kd00172-patch-2/Logic-Design-Final-Project-kd00172-patch-2/final_test.v
// Project Name:  final
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FFinal
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module final_test;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire [13:0] s;

	// Instantiate the Unit Under Test (UUT)
	FFinal uut (
		.clk(clk), 
		.rst(rst), 
		.s(s)
	);

	initial begin
		// Initialize Inputs
		clk = 0; rst = 0; #3;
		clk = 0; rst = 1; #4;
		clk = 0; rst = 0; #3;
	end
		always #10 clk = ~clk;
      
endmodule

