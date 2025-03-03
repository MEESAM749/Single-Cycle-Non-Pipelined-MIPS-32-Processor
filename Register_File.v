`timescale 1ns / 1ps
module Register_File(
    input wire clk,
    input wire [4:0] Reg1_Read,
    input wire [4:0] Reg2_Read,
    input wire Reg_Write,
    input wire [4:0] Write_Register,
    input wire [31:0] Data,
    output wire [31:0] Reg1_out,
    output wire [31:0] Reg2_out
);

    // Define 32 registers
    reg [31:0] regFile [31:0];
    
    // Initialize all registers to zero
    integer i;
    initial begin
        for (i = 0; i < 32; i = i + 1) begin
            regFile[i] = 32'h00000000;
        end
    end
    
    // Register write operation (synchronous)
    always @(posedge clk) begin
        if (Reg_Write && Write_Register != 0) begin
            // Register $0 should always be zero
            regFile[Write_Register] <= Data;
        end
    end
    assign Reg1_out = (Reg1_Read == 0) ? 32'h0 : regFile[Reg1_Read];
    assign Reg2_out = (Reg2_Read == 0) ? 32'h0 : regFile[Reg2_Read];

endmodule