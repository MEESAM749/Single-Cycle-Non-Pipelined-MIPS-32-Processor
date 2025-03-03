`timescale 1ns / 1ps
module InstructionMemory(
    input wire [31:0] instructionSelect,
    output wire [31:0] instructionOut
);
    reg [31:0] instructionMemory [31:0]; // Declare 32-word memory (each word = 32 bits)
	 integer i;
    initial begin
        for (i = 0; i < 32; i = i + 1) begin
            instructionMemory[i] = 32'h00000000; // Set all instructions to 0
        end
        
        // MIPS instruction sequence
        // Address 0: addi $t0, $zero, 10    ; $t0 = 10
        instructionMemory[0] = 32'h2008000a;  // opcode(001000) rs(00000) rt(01000) immediate(0000_0000_0000_1010)
        
        // Address 4: addi $t1, $zero, 5     ; $t1 = 5
        instructionMemory[1] = 32'h20090005;  // opcode(001000) rs(00000) rt(01001) immediate(0000_0000_0000_0101)
        
        // Address 8: add $t2, $t0, $t1      ; $t2 = $t0 + $t1 = 15
        instructionMemory[2] = 32'h01095020;  // opcode(000000) rs(01000) rt(01001) rd(01010) shamt(00000) funct(100000)
        
        // Address 12: sub $t3, $t0, $t1     ; $t3 = $t0 - $t1 = 5
        instructionMemory[3] = 32'h01095822;  // opcode(000000) rs(01000) rt(01001) rd(01011) shamt(00000) funct(100010)
        
        // Address 16: sw $t2, 4($zero)      ; Store $t2 at mem[4]
        instructionMemory[4] = 32'hac0a0004;  // opcode(101011) rs(00000) rt(01010) immediate(0000_0000_0000_0100)
        
        // Address 20: sw $t3, 8($zero)      ; Store $t3 at mem[8]
        instructionMemory[5] = 32'hac0b0008;  // opcode(101011) rs(00000) rt(01011) immediate(0000_0000_0000_1000)
        
        // Address 24: lw $t4, 4($zero)      ; Load mem[4] into $t4 (should be 15)
        instructionMemory[6] = 32'h8c0c0004;  // opcode(100011) rs(00000) rt(01100) immediate(0000_0000_0000_0100)
        
        // Address 28: beq $t2, $t4, 2       ; If $t2 == $t4, branch to PC+4+8 (to instruction 10)
        instructionMemory[7] = 32'h114c0002;  // opcode(000100) rs(01010) rt(01100) immediate(0000_0000_0000_0010)
        
        // Address 32: addi $t5, $zero, 0    ; $t5 = 0 (should execute if branch not taken)
        instructionMemory[8] = 32'h200d0000;  // opcode(001000) rs(00000) rt(01101) immediate(0000_0000_0000_0000)
        
        // Address 36: addi $t6, $zero, 1    ; $t6 = 1 (should execute if branch not taken)
        instructionMemory[9] = 32'h200e0001;  // opcode(001000) rs(00000) rt(01110) immediate(0000_0000_0000_0001)
        
        // Address 40: addi $t7, $zero, 2    ; $t7 = 2 (branch destination)
        instructionMemory[10] = 32'h200f0002; // opcode(001000) rs(00000) rt(01111) immediate(0000_0000_0000_0010)
    end
    
    // Address decoding: PC is byte-addressed but our memory is word-addressed
    // So we need to divide PC by 4 to get the correct index
    assign instructionOut = instructionMemory[instructionSelect[6:2]]; // Using bits [6:2] effectively divides by 4
endmodule
