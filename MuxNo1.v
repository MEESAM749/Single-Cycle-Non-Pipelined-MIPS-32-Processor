`timescale 1ns / 1ps
module MuxNo1(
    output wire [31:0] newPC,
    input wire [31:0] Pc_Adder_Wire, // PC+4 value
    input wire [31:0] Mux1Input2,    // Branch target address
    input wire PCSrc                 // Branch selection signal
);

    // Select between PC+4 and branch target
    assign newPC = (PCSrc) ? Mux1Input2 : Pc_Adder_Wire;

endmodule