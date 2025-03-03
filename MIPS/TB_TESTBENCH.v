`timescale 1ns / 1ps

module TopModule_tb();
    // Inputs
    reg clk;
    reg reset;
    
    // Outputs
    wire [31:0] out;
    wire [4:0] mux3rentention;
    
    // Instantiate the Unit Under Test (UUT)
    TopModule uut (
        .clk(clk),
        .reset(reset),
        .out(out),
        .mux3rentention(mux3rentention)
    );
    
    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 10ns clock period (100MHz)
    end
    
    // Test sequence
    initial begin
        // Initialize Inputs and Reset
        reset = 1;
        #15; // Hold reset for 15ns
        reset = 0;
        
        // Run simulation for enough cycles to execute all instructions
        #500;
        
        // Print register file contents for verification
        $display("============ Register File Contents ============");
        $display("$t0 (R8):  %h", uut.regfile.regFile[8]);
        $display("$t1 (R9):  %h", uut.regfile.regFile[9]);
        $display("$t2 (R10): %h", uut.regfile.regFile[10]);
        $display("$t3 (R11): %h", uut.regfile.regFile[11]);
        $display("$t4 (R12): %h", uut.regfile.regFile[12]);
        $display("$t5 (R13): %h", uut.regfile.regFile[13]);
        $display("$t6 (R14): %h", uut.regfile.regFile[14]);
        $display("$t7 (R15): %h", uut.regfile.regFile[15]);
        
        // Print data memory contents for verification
        $display("============ Data Memory Contents ============");
        $display("Mem[4]: %h", uut.DM.dataMemory[1]); // Word address 1 = byte address 4
        $display("Mem[8]: %h", uut.DM.dataMemory[2]); // Word address 2 = byte address 8
        
        // Display results
        $display("============ Simulation Results ============");
        $display("Final output: %h", out);
        $display("Register destination: %d", mux3rentention);
        
        // End simulation
        $finish;
    end
    
    // Monitor key signals during simulation
    initial begin
        $monitor("Time: %t, PC: %h, Instruction: %h, ALU Result: %h, Out: %h, RegDst: %d",
                 $time, uut.pc, uut.instructionOut, uut.aluresult, out, mux3rentention);
    end
    
    // Optional: Monitor instruction execution
    reg [31:0] last_pc;
    always @(posedge clk) begin
        if (!reset && uut.pc != last_pc) begin
            case (uut.pc[6:2])
                5'd0:  $display("Executing instr 0:  addi $t0, $zero, 10");
                5'd1:  $display("Executing instr 1:  addi $t1, $zero, 5");
                5'd2:  $display("Executing instr 2:  add $t2, $t0, $t1");
                5'd3:  $display("Executing instr 3:  sub $t3, $t0, $t1");
                5'd4:  $display("Executing instr 4:  sw $t2, 4($zero)");
                5'd5:  $display("Executing instr 5:  sw $t3, 8($zero)");
                5'd6:  $display("Executing instr 6:  lw $t4, 4($zero)");
                5'd7:  $display("Executing instr 7:  beq $t2, $t4, 2");
                5'd8:  $display("Executing instr 8:  addi $t5, $zero, 0");
                5'd9:  $display("Executing instr 9:  addi $t6, $zero, 1");
                5'd10: $display("Executing instr 10: addi $t7, $zero, 2");
                default: $display("Executing unknown instruction at PC = %h", uut.pc);
            endcase
            last_pc = uut.pc;
        end
    end
    
    // Waveform generation
    initial begin
        $dumpfile("mips_processor.vcd");
        $dumpvars(0, TopModule_tb);
    end
endmodule