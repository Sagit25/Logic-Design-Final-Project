`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:08:43 05/30/2022 
// Design Name: 
// Module Name:    microprocessor 
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
module microprocessor(
    input [7:0] instruction,
    input clk,
	 input RST,
	 output [7:0] PCOutput,
    output [13:0] segDisplay
    );
	 wire [7:0] signExtendedImm;
	 wire [7:0] desAddress;
	 wire [7:0] regReadDataOne;
	 wire [7:0] regReadDataTwo;
	 wire [7:0] memReadData;
	 wire [7:0] memAddress;
	 wire [7:0] regWriteData;
	 wire [7:0] PCInput;
	 wire [7:0] normalCount;
	 wire [7:0] branchedCount;
	 wire [7:0] output8Bit;
	 wire [1:0] regWriteRegister;

	 
	 wire Branch;
	 wire MemtoReg;
	 wire MemRead;
	 wire MemWrite;
	 wire ALUOp;
	 wire ALUSrc;
	 wire RegWrite;
	 wire RegDst;

	 Sign_Extend T1(instruction[1:0], clk, signExtendedImm);
	 Mux_ALUSrc T2(ALUSrc, regReadDataTwo, signExtendedImm, clk, desAddress);
	 Mux_MemtoReg T3(MemtoReg, memAddress, memReadData, clk, regWriteData);
	 //Data_Memory T4(memAddress, regReadDataTwo, MemRead, MemWrite, clk, RST, memReadData);
	 DataMemory T4(memAddress, regReadDataTwo, memReadData, MemRead, clk, RST, MemWrite);
	 Mux_RegDst T5(RegDst, instruction[3:2], instruction[1:0], clk, regWriteRegister);
	 ALU T6(desAddress, regReadDataOne, ALUOp, clk, memAddress);
	 Mux_branch T7(Branch, branchedCount, normalCount, clk, PCInput);
	 //Program_Counter T8(clk, PCInput, PCOutput, RST)
	 PC T8(PCInput, clk, RST, PCOutput);
	 Register T9(RST, clk, RegWrite,instruction[5:4],instruction[3:2], regWriteRegister, regWriteData, regReadDataOne, regReadDataTwo, output8Bit);
	 hex7Segment T10(output8Bit, segDisplay);
	 Control_Unit T11(instruction[7:6], clk, RegDst, RegWrite, ALUSrc, Branch, MemRead, MemWrite, MemtoReg, ALUOp);
	 
	 assign normalCount = PCOutput + 1;
	 assign branchedCount = normalCount + signExtendedImm;
	 
endmodule
