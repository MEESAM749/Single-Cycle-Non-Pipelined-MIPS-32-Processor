`timescale 1ns / 1ps
module Branch(
input wire ALUZeroFlag,
input wire CUBranchWire,
output wire PCSrc
);

assign PCSrc = ALUZeroFlag&CUBranchWire;

endmodule
