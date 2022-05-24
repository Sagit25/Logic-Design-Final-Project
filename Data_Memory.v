`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:01:49 05/23/2022 
// Design Name: 
// Module Name:    Data_Memory 
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
module Data_Memory(
    input [7:0] input_Address,
    input [7:0] input_Writedata,
	input input_Memread,
	input input_Memwrite,
	input input_clk,
	input input_reset,
    output [7:0] output_Readdata
    );

	wire [7:0] in;
	 
	reg [7:0] memtmp[255:0];
	reg [7:0] out;
	 
	assign output_Readdata = out;
	 
	always @(posedge input_clk or posedge input_reset) 
 	begin
		if (input_reset) begin
			integer i;
			tmp = 4'b0000;
			for (i = 0; i < 16; i = i+1) begin
				in[7:4] = 4'b0000;
				in[3:0] = tmp;
				memtmp[i] = in;
				tmp = tmp + 4'b0001;
			end
			tmp = 4'b1111;
			for (i = 16; i < 32; i = i+1) begin
				in[7:4] = 4'b1111;
				in[3:0] = tmp;
				memtmp[i] = in + 8'b00000001;
				tmp = tmp - 4'b0001;
			end
		end
		else begin
			if (input_Memread) begin
				integer i = 0;
				for (tmp = 8'b00000000; tmp < input_Address; tmp = tmp+8'b00000001) begin
					i = i + 1;
				end
				out = memtmp[i];
			end
			if (input_Memwrite) begin
				integer i = 0;
				for (tmp = 8'b00000000; tmp < input_Address; tmp = tmp+8'b00000001) begin
					i = i + 1;
				end
				out = memtmp[i];
				memtmp[i] = input_Memwrite;
			end
		end
		
	end

endmodule
