`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:24:27 03/02/2025
// Design Name:   TopModule
// Module Name:   D:/XilinkProjects/MIPS - Copy (2)/tb_topmodule.v
// Project Name:  MIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TopModule
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_topmodule;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [31:0] out;
	wire mux3rentention;

	// Instantiate the Unit Under Test (UUT)

always #5 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		// Wait 100 ns for global reset to finish
		#10;
		reset = 0;
        
		// Add stimulus here

	end


      
endmodule

