`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:57:26 05/30/2022 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input [7:0] PCInput,
	 input clk,
    input RST,
	 output [7:0] PCOutput
    );
	 reg [7:0] out;
	 assign PCOutput = out;


	 always @(posedge clk) begin
		if(RST)
		out = 8'b0;
		else 
		out = PCInput;
	 end
		
	 

endmodule
