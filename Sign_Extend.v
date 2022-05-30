`timescale 1ns / 1ps

module  Sign_Extend (
    input [1:0] signImm,
    output [7:0] signExtendedImm

);
		reg [7:0] signExtended;
		assign signExtendedImm = signExtended;
		always@(signImm) begin
			 signExtended[7:2] <= {6{signImm[1]}};
			 signExtended[1:0] <= signImm[1:0];
		end

    
endmodule

// signed value;
// -2 = 10
// -1 = 11
// 0  = 00
// 1  = 01
// extended signed value
// -2 = 11111110
// -1 = 11111111
// 0  = 00000000
// 1  = 00000001



