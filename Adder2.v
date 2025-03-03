`timescale 1ns / 1ps
module Adder2(
input wire[31:0] Pc_Adder,
input wire[31:0] LeftShiftedWire,
output wire [31:0] Mux1Input2
);

assign Mux1Input2 = Pc_Adder + LeftShiftedWire;

endmodule
