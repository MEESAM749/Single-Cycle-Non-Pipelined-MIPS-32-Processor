`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:33:27 03/02/2025
// Design Name:   ProgramCounter
// Module Name:   D:/XilinkProjects/MIPS - Copy (2)/tb_pc.v
// Project Name:  MIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ProgramCounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_pc;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] nextPC;

	// Outputs
	wire [31:0] PC;

	// Instantiate the Unit Under Test (UUT)
	ProgramCounter uut (
		.clk(clk), 
		.reset(reset), 
		.nextPC(nextPC), 
		.PC(PC)
	);
always #20
begin
clk=~clk;
end
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		nextPC = 0;

		// Wait 100 ns for global reset to finish
		#100;
		reset = 0;
        
		// Add stimulus here

	end
      
endmodule

