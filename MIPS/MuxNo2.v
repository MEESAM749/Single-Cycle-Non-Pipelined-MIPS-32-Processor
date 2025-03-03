`timescale 1ns / 1ps
module MuxNo2(
input wire[31:0] ReadData2,
input wire[31:0] SignExtendedWire,
input wire ALUSrc,
output wire [31:0] ALUSrc1
);

assign ALUSrc1 = (ALUSrc) ? SignExtendedWire:ReadData2;

endmodule
