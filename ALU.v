`timescale 1ns / 1ps
module ALU(
    input wire [31:0] Src1,       
    input wire [31:0] Src2,       
    input wire [3:0] ALUControl,  
    output reg [31:0] ALUResult,  
    output wire Zero              
);

always @(*) begin
    case (ALUControl)
        4'b0010: ALUResult = Src1 + Src2;    
        4'b0110: ALUResult = Src1 - Src2;    
        4'b0000: ALUResult = Src1 & Src2;    
        4'b0001: ALUResult = Src1 | Src2;    
        4'b0011: ALUResult = Src1 ^ Src2;    
        4'b1100: ALUResult = ~(Src1 | Src2); 
        4'b0111: ALUResult = (Src1 < Src2) ? 32'b1 : 32'b0; 
        4'b1000: ALUResult = Src2 << Src1;   
        4'b1001: ALUResult = Src2 >> Src1;   
        default: ALUResult = 32'b0;         
    endcase
end

assign Zero = (ALUResult == 32'b0) ? 1'b1 : 1'b0; 

endmodule
