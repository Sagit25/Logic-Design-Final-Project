`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:07:20 05/30/2022
// Design Name:   IMEM
// Module Name:   C:/Users/Monday/Downloads/finalproject/final/IMEM_test.v
// Project Name:  final
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IMEM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IMEM_test;

	// Inputs
	reg clk;
	reg RST;
	reg [7:0] Read_Address;

	// Outputs
	wire [7:0] instruction;
	wire [13:0] segDisplay;

	// Instantiate the Unit Under Test (UUT)
	IMEM uut (
		.instruction(instruction), 
		.clk(clk), 
		.RST(RST), 
		.Read_Address(Read_Address),
		.segDisplay(segDisplay)
	);

	initial begin
		clk = 0; RST = 0; #50; RST = 1; #50; RST= 0; 
	end
	always #10 clk=~clk;
      
endmodule

