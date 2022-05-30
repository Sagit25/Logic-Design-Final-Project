`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:46:18 05/30/2022
// Design Name:   PC
// Module Name:   C:/Users/chowd/Downloads/Vending_Machine/Final_Project/PC_test.v
// Project Name:  Final_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PC_test;

	// Inputs
	reg [7:0] PCInput;
	reg clk;
	reg RST;

	// Outputs
	wire [7:0] PCOutput;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.PCInput(PCInput), 
		.clk(clk), 
		.RST(RST), 
		.PCOutput(PCOutput)
	);

	initial begin
		// Initialize Inputs
		PCInput = 8'b00000000; clk = 0; RST = 0;#100;
	
		
		RST = 1; #80;
		clk = 1; #20;
		
		clk = 0; RST = 0; PCInput = 8'b00000110; #80;
		clk = 1; #20;
		
		clk = 0; PCInput = 8'b11111111; #80;
		clk = 1; #20;
		
		clk = 0; RST = 1; #80;
		clk = 1; #20;

	end
      
endmodule

