`timescale 1ns / 1ps
module ALUControl(
    input wire [1:0] ALUOpcode,      // ALUOp field from Control Unit
    input wire [5:0] instructionSlice, // Funct field from R-type instructions
    output reg [3:0] ALUControl      // Control signal for ALU
);

always @(*) begin
    case (ALUOpcode)
        2'b00: ALUControl = 4'b0010; // lw, sw, addi (Default ADD)
        2'b01: ALUControl = 4'b0110; // beq, bne (SUBTRACT)
        2'b10: begin // R-type instructions (Use funct field)
            case (instructionSlice)
                6'b100000: ALUControl = 4'b0010; // ADD
                6'b100010: ALUControl = 4'b0110; // SUB
                6'b100100: ALUControl = 4'b0000; // AND
                6'b100101: ALUControl = 4'b0001; // OR
                6'b100110: ALUControl = 4'b0011; // XOR
                6'b100111: ALUControl = 4'b1100; // NOR
                6'b101010: ALUControl = 4'b0111; // SLT
                6'b000000: ALUControl = 4'b1000; // SLL
                6'b000010: ALUControl = 4'b1001; // SRL
                default:   ALUControl = 4'b1111; // Undefined operation
            endcase
        end
        default: ALUControl = 4'b0000; // Default to AND (safe fail)
    endcase
end

endmodule

