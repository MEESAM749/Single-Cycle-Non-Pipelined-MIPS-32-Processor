`timescale 1ns / 1ps
module TopModule(
     input wire clk, reset,
	  output wire [31:0] out,
	  output wire [4:0] mux3rentention
);
//pc_connecting_wires//
wire [31:0] pc,nextpc;
wire [31:0] adder1out;
wire [31:0] instructionOut;
wire [31:0] Read_Data1,Read_Data2,SignExtensionOut;
wire Reg_Write;
wire Branch;
wire Memread;
wire Memwrite;
wire ALUSrc;
wire [1:0] ALUOp;
wire RegDst;
wire [31:0] leftShifterOut;
wire [31:0] mux2out;
wire [31:0] aluresult;
wire zeroflag;
wire [3:0] alucout;
wire [5:0] alucontrolmoduleinput;
reg [5:0] ALUControlInstructionIn;
wire [31:0] mux1input1;
wire mux1select;
wire [31:0] datamemout;
wire [4:0] writereg;
wire memtoreg;
wire [31:0] Write_Data;

//MODULE_CALLING//
ProgramCounter PC(
.clk(clk),
.reset(reset),                 
.nextPC(nextpc),               
.PC(pc) 
);

InstructionMemory IM(
.instructionSelect(pc),
.instructionOut(instructionOut)
);

Adder1 adder1 (
.pc_in(pc),
.pc_out(adder1out)
);

Register_File regfile (
.clk(clk),
.Reg1_Read(instructionOut[25:21]),
.Reg2_Read(instructionOut[20:16]),
.Reg_Write(Reg_Write),
.Write_Register(writereg),
.Data(Write_Data),
.Reg1_out(Read_Data1),
.Reg2_out(Read_Data2)
);

Sign_Extender SE(
.inputInstruction(instructionOut[15:0]),
.outputInstruction(SignExtensionOut)
);

Control_Unit CU (
.instruction(instructionOut),
.Reg_Write(Reg_Write),
.Branch(Branch),
.MemRead(Memread),
.MemWrite(Memwrite),
.ALUOp(ALUOp),
.RegDst(RegDst),
.ALUSrc(ALUSrc),
.MemToReg(memtoreg)
);

Left_ShifterBy2 LS(
.inputInstruction(SignExtensionOut),
.outputInstruction(leftShifterOut)
);

MuxNo2 MX2(
.ReadData2(Read_Data2),
.SignExtendedWire(SignExtensionOut),
.ALUSrc(ALUSrc),
.ALUSrc1(mux2out)
);

ALU alu (
    .Src1(Read_Data1),        
    .Src2(mux2out),          
    .ALUControl(alucout),  
    .ALUResult(aluresult),  
    .Zero(zeroflag) 
);

TheImplicitMux TIM(
    .instruction(instructionOut),   
    .ALUControlInput(alucontrolmoduleinput)
);

ALUControl aluc (
    .ALUOpcode(ALUOp),      // ALUOp field from Control Unit
    .instructionSlice(alucontrolmoduleinput), // Funct field from R-type instructions
    .ALUControl(alucout)
);

Adder2 adder2(
.Pc_Adder(adder1out),
.LeftShiftedWire(leftShifterOut),
.Mux1Input2(mux1input1)
);

Branch branch(
.ALUZeroFlag(zeroflag),
.CUBranchWire(Branch),
.PCSrc(mux1select)
);

Data_Memory DM (
.address(aluresult),          
.Write_Data(Read_Data2),
.MemWrite(Memwrite),
.MemRead(Memread),
.clk(clk),                    
.Read_Data(datamemout)
);

MuxNo1 MX1(
.newPC(nextpc),
.Pc_Adder_Wire(mux1input1),
.Mux1Input2(adder1out),
.PCSrc(mux1select)
);

MuxNo3 MX3 (
.instructionSlice1(instructionOut[20:16]),
.instructionSlice2(instructionOut[15:11]),
.RegDst(RegDst),
.Write_Register(writereg)
);

MuxNo4 MX4 (
.MemToReg(memtoreg),
.Read_Data(datamemout),
.ALUResult(aluresult),
.Write_Data(Write_Data)
);

assign out = Write_Data;
assign mux3rentention = writereg;
endmodule
