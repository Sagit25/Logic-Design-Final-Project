module Mux_RegDst (
    input RegDst,
    input [1:0] regTwo,
    input [1:0] regDes,
    input clk,
    output reg [1:0] writeRegister
);

always @(posedge clk) begin
    if(RegDst)
    writeRegister<=regDes;
    else
    writeRegister<=regTwo;
end 


    
endmodule
