`timescale 1ns / 1ps

module MuxNo3(
input wire [4:0] instructionSlice1,
input wire [4:0] instructionSlice2,
input wire RegDst,
output wire [4:0] Write_Register
);

assign Write_Register = (RegDst) ? instructionSlice2:instructionSlice1;

endmodule
