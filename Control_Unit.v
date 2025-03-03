`timescale 1ns / 1ps
module Control_Unit(
    input wire [31:0] instruction,
    output wire Reg_Write,
    output wire Branch,
    output wire MemToReg,
    output wire MemRead,
    output wire MemWrite,
    output wire ALUSrc,
    output wire [1:0] ALUOp,
    output wire RegDst
);

    wire [5:0] opcode;
    assign opcode = instruction[31:26]; // Extract opcode

    assign RegDst   = (opcode == 6'b000000); // R-type: 1, I-type: 0
    assign Reg_Write = (opcode == 6'b000000) || (opcode == 6'b001000); // R-type, ADDI
    assign Branch   = (opcode == 6'b000100); // BEQ
    assign MemToReg = (opcode == 6'b100011); // LW
    assign MemRead  = (opcode == 6'b100011); // LW
    assign MemWrite = (opcode == 6'b101011); // SW
    assign ALUSrc   = (opcode == 6'b100011) || (opcode == 6'b101011) || (opcode == 6'b001000); // LW, SW, ADDI
    assign ALUOp    = (opcode == 6'b000000) ? 2'b10 : // R-type
                      (opcode == 6'b000100) ? 2'b01 : // BEQ
                      2'b00; // Default for LW, SW, ADDI

endmodule

