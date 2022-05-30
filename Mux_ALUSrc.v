`timescale 1ns / 1ps

module Mux_ALUSrc (
    input ALUSrc,
    input [7:0] readDataTwo,
    input [7:0] signExtendedImm,
    output reg [7:0] address
	 );
    
	 always@(ALUSrc or signExtendedImm or readDataTwo) begin
		 if(ALUSrc) address<=signExtendedImm;
		 else address<=readDataTwo;
	 end 

endmodule