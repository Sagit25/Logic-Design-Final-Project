module Mux_branch (
    input Branch,
    input [7:0] branchedCount,
    input [7:0] normalCount,
    input clk,
    output reg [7:0] programCounter
);
always @(posedge clk) begin
    if(Branch)
    programCounter<=branchedCount;
    else
    programCounter<=normalCount;
end 


    
endmodule