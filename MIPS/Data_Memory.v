`timescale 1ns / 1ps
module Data_Memory(
    input wire [31:0] address,          
    input wire [31:0] Write_Data,
    input wire MemWrite,
    input wire MemRead,
    input wire clk,                    
    output reg [31:0] Read_Data        
);

    reg [31:0] dataMemory [31:0];  

    // Initialize memory to zero
    integer i;
    initial begin
        for (i = 0; i < 32; i = i + 1) begin
            dataMemory[i] = 32'h00000000; 
        end
    end

    // Word-aligned address calculation
    wire [4:0] word_address;
    assign word_address = address[6:2]; // Same alignment as instruction memory

    // Write on positive clock edge
    always @(posedge clk) begin
        if (MemWrite) begin
            dataMemory[word_address] <= Write_Data;
        end
    end

    // Read data asynchronously
    always @(*) begin
        if (MemRead) begin
            Read_Data = dataMemory[word_address];
        end else begin
            Read_Data = 32'b0;  
        end
    end

endmodule