`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:30:14 05/30/2022
// Design Name:   FFinal
// Module Name:   /csehome/sagit25/Final_Project/FFinal_Test.v
// Project Name:  Final_Project
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

module FFinal_Test;

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
		clk = 0; rst = 0; #10; rst = 1; # 10; rst = 0;
	end
	
	always #10 clk = ~clk;
      
endmodule

