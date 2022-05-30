`timescale 1ns / 1ps

module Mux_MemtoReg (
    input MemtoReg,
    input [7:0] ALUAddress,
    input [7:0] memReadData,
    output reg [7:0] WriteData

);

	always@(MemtoReg or memReadData or ALUAddress) begin
		 if(MemtoReg)
		 WriteData<=memReadData;
		 else
		 WriteData<=ALUAddress;
	end 

 
endmodule
