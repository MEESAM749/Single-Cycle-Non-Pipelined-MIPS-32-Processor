`timescale 1ns / 1ps
module MuxNo4(
input wire MemToReg,
input wire [31:0] Read_Data,
input wire [31:0] ALUResult,
output wire [31:0] Write_Data
);

assign Write_Data = (MemToReg) ? Read_Data : ALUResult;

endmodule
