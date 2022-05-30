module Mux_ALUSrc (
    input ALUSrc,
    input [7:0] readDataTwo,
    input [7:0] signExtendedImm,
    input clk,
    output reg [7:0] address
);
    always @(posedge clk) begin
    if(ALUSrc)
    address<=signExtendedImm;
    else
    address<=readDataTwo;
end 

endmodule