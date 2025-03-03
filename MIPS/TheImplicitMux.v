`timescale 1ns / 1ps
module TheImplicitMux(
    input wire [31:0] instruction,   // Full 32-bit instruction
    output wire [5:0] ALUControlInput // The selected portion for ALU Control
);
    wire [5:0] opcode, funct;
    assign opcode = instruction[31:26]; // Extract opcode
    assign funct  = instruction[5:0];   // Extract funct field (R-type)

    assign ALUControlInput = (opcode == 6'b000000) ? funct : opcode; 
endmodule
