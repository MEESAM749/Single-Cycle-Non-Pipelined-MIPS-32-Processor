`timescale 1ns / 1ps
module Left_ShifterBy2(
input wire[31:0] inputInstruction,
output wire[31:0] outputInstruction
);
assign outputInstruction = inputInstruction<<2;
endmodule
