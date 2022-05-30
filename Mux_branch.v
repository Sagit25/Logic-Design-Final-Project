`timescale 1ns / 1ps

module Mux_branch (
    input Branch,
    input [7:0] branchedCount,
    input [7:0] normalCount,
    output reg [7:0] programCounter
	 );
	 
	 always@(Branch or branchedCount or normalCount) begin
	 	if(Branch) programCounter<=branchedCount;
		else programCounter<=normalCount;
	 end

endmodule