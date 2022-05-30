`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:26:51 05/30/2022
// Design Name:   DataMemory
// Module Name:   C:/Users/chowd/Downloads/Vending_Machine/Final_Project/DataMemory_test.v
// Project Name:  Final_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DataMemory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DataMemory_test;

	// Inputs
	reg [7:0] memAddress;
	reg [7:0] regReadDataTwo;
	reg MemRead;
	reg clk;
	reg RST;
	reg MemWrite;

	// Outputs
	wire [7:0] memReadData;

	// Instantiate the Unit Under Test (UUT)
	DataMemory uut (
		.memAddress(memAddress), 
		.regReadDataTwo(regReadDataTwo), 
		.memReadData(memReadData), 
		.MemRead(MemRead), 
		.clk(clk), 
		.RST(RST), 
		.MemWrite(MemWrite)
	);

	initial begin
		// Initialize Inputs
		memAddress = 0; regReadDataTwo = 0; MemRead = 0; clk = 0; RST = 0; MemWrite = 0; #100;
		
		memAddress = 8'b00000000;  MemWrite = 1; regReadDataTwo = 8'b11001001; #80;
		clk = 1; #20;
		
		clk = 0; memAddress = 8'b00000110; MemRead = 1; regReadDataTwo = 8'b10000001; #80;
		clk = 1; #20;
		
		clk = 0; memAddress = 8'b00000000; MemWrite = 0; #80;
		clk = 1; #20;
		
		clk = 0; memAddress = 8'b00000110; MemRead = 1; #80;
		clk = 1; #20; 
		
		clk = 0;
        
		// Add stimulus here

	end
      
endmodule

