`timescale 1ns / 1ps
module ProgramCounter(
    input wire clk, reset,                 
    input wire [31:0] nextPC,               
    output reg [31:0] PC                    
);
    always @(posedge clk or posedge reset) begin
        if (reset) 
            PC <= 0;  
        else 
            PC <= nextPC;         
    end
endmodule
