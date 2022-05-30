`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:26:33 05/30/2022 
// Design Name: 
// Module Name:    FFinal 
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
module FFinal(
    input clk,
    input rst,
    output [13:0] s
    );
	 
	 wire [7:0] a;
	 wire [7:0] b;
	 
	 
	 microprocessor T1 (.instruction(a), .clk(clk), .RST(rst), .PCOutput(b), .segDisplay(s));
	 IMEM T2 (.instruction(a), .Read_Address(b));
		
endmodule