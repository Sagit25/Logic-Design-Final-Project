`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:12:53 05/23/2022 
// Design Name: 
// Module Name:    Register 
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
module Register(
    input input_Reset,
	 input input_Clock,
	 input input_Read_Write,
    input [1:0] input_Read_Register1,
    input [1:0] input_Read_Register2,
    input [1:0] input_Write_Register,
    input [7:0] input_Write_Data,
    output [7:0] output_Read_Data1,
    output [7:0] output_Read_Data2,
    output [7:0] output_Output
    );
	 
	 reg [7:0] reg1;
	 reg [7:0] reg2;
	 reg [7:0] reg3;
	 reg [7:0] reg4;
	 
	 reg [7:0] read1;
	 reg [7:0] read2;
	 reg [7:0] out;
	 
	 assign output_Read_Data1 = read1;
	 assign output_Read_Data2 = read2;
	 assign output_Output = out; 
	 
	 always@(posedge input_Reset or posedge input_Clock) begin
			if(input_Reset) begin
					reg1 <= 8'b00000000;
					reg2 <= 8'b00000000;
					reg3 <= 8'b00000000;
					reg4 <= 8'b00000000;
					read1 <= 8'b00000000;
					read2 <= 8'b00000000;
					out <= 8'b00000000;
			end
			else if(!input_Read_Write) begin
					case(input_Read_Register1)
							2'b00	:	read1 <= reg1;
							2'b01 : 	read1 <= reg2;
							2'b10	:	read1 <= reg3;
							2'b11	:	read1 <= reg4;
					endcase
					case(input_Read_Register2)
							2'b00	:	read2 <= reg1;
							2'b01 : 	read2 <= reg2;
							2'b10	:	read2 <= reg3;
							2'b11	:	read2 <= reg4;
					endcase
			end
			else begin
					out <= input_Write_Data;
					case(input_Write_Register)
							2'b00	:	reg1 <= input_Write_Data;
							2'b01	:	reg2 <= input_Write_Data;
							2'b10	:	reg3 <= input_Write_Data;
							2'b11	:	reg4 <= input_Write_Data;
					endcase
			end
	 end

endmodule
