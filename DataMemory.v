`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:33:18 05/30/2022 
// Design Name: 
// Module Name:    DataMemory 
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
module DataMemory(
    input [7:0] memAddress,
    input [7:0] regReadDataTwo,
    output reg [7:0] memReadData,
    input MemRead,
	 input clk,
	 input RST,
    input MemWrite
    );
	 integer i=0;
	 reg [7:0] memory[31:0];
	 always@(posedge clk) begin
		if(RST) begin
			for(i=0;i<16;i=i+1) begin
				memory[i] <= i;
			end
			for(i=16;i<32;i=i+1) begin
				memory[i] <= 16-i;
			end
		end
		if(MemRead)
		memReadData <= memory[memAddress];
		if(MemWrite)
		memory[memAddress] <= regReadDataTwo;
	 end

endmodule
