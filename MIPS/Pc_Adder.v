`timescale 1ns / 1ps
module Adder1(
input wire[31:0] pc_in,
output wire[31:0] pc_out
);

assign pc_out = pc_in+4;
endmodule
