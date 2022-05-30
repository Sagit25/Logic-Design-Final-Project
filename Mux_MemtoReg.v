module Mux_MemtoReg (
    input MemtoReg,
    input [7:0] ALUAddress,
    input [7:0] memReadData,
    input clk,
    output reg [7:0] WriteData

);

always @(posedge clk) begin
    if(MemtoReg)
    WriteData<=memReadData;
    else
    WriteData<=ALUAddress;
end 

    
endmodule