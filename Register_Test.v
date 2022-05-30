`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:02:06 05/23/2022
// Design Name:   Register
// Module Name:   C:/Users/chowd/Downloads/Vending_Machine/Final_Project/Register_Test.v
// Project Name:  Final_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Register
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Register_Test;

	// Inputs
	reg input_Reset;
	reg input_Clock;
	reg input_Read_Write;
	reg [1:0] input_Read_Register1;
	reg [1:0] input_Read_Register2;
	reg [1:0] input_Write_Register;
	reg [7:0] input_Write_Data;

	// Outputs
	wire [7:0] output_Read_Data1;
	wire [7:0] output_Read_Data2;
	wire [7:0] output_Output;

	// Instantiate the Unit Under Test (UUT)
	Register uut (
		.input_Reset(input_Reset), 
		.input_Clock(input_Clock), 
		.input_Read_Write(input_Read_Write), 
		.input_Read_Register1(input_Read_Register1), 
		.input_Read_Register2(input_Read_Register2), 
		.input_Write_Register(input_Write_Register), 
		.input_Write_Data(input_Write_Data), 
		.output_Read_Data1(output_Read_Data1), 
		.output_Read_Data2(output_Read_Data2), 
		.output_Output(output_Output)
	);

	initial begin
		// Initialize Inputs
		input_Reset = 0;
		input_Clock = 0;
		input_Read_Write = 0;
		input_Read_Register1 = 0;
		input_Read_Register2 = 0;
		input_Write_Register = 0;
		input_Write_Data = 0;
		#100;
		
		input_Reset = 1;
		#100;
		
		input_Reset = 0;
		input_Clock = 1;
		input_Read_Write = 1;
		input_Read_Register1 = 0;
		input_Read_Register2 = 0;
		input_Write_Register = 2'b01;
		input_Write_Data = 8'b00110101;
		#100;
		
		input_Reset = 0;
		input_Clock = 0;
		input_Read_Write = 0;
		input_Read_Register1 = 0;
		input_Read_Register2 = 0;
		input_Write_Register = 0;
		input_Write_Data = 0;
		#100;
		
		input_Reset = 0;
		input_Clock = 1;
		input_Read_Write = 1;
		input_Read_Register1 = 0;
		input_Read_Register2 = 0;
		input_Write_Register = 2'b10;
		input_Write_Data = 8'b11110000;
		#100;
		
		input_Reset = 0;
		input_Clock = 0;
		input_Read_Write = 0;
		input_Read_Register1 = 0;
		input_Read_Register2 = 0;
		input_Write_Register = 0;
		input_Write_Data = 0;
		#100;
		
		input_Reset = 0;
		input_Clock = 1;
		input_Read_Write = 0;
		input_Read_Register1 = 10;
		input_Read_Register2 = 01;
		input_Write_Register = 0;
		input_Write_Data = 0;
		#100;

	end
      
endmodule

