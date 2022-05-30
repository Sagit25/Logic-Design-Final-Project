`timescale 1ns / 1ps

module Mux_RegDst (
    input RegDst,
    input [1:0] regTwo,
    input [1:0] regDes,
    output reg [1:0] writeRegister
	 );
	 
	 always@(RegDst or regDes or regTwo) begin
		if(RegDst) writeRegister<=regDes;
		else writeRegister<=regTwo;
	 end 
    
endmodule
