`timescale 1ns / 1ps
module Sign_Extender(
    input wire [15:0] inputInstruction,
    output wire [31:0] outputInstruction
);
    assign outputInstruction = {{16{inputInstruction[15]}}, inputInstruction};
endmodule