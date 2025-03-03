/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "Time: %t, PC: %h, Instruction: %h, ALU Result: %h, Out: %h, RegDst: %d";
static const char *ng1 = "D:/XilinkProjects/MIPS - Copy (2)/TB_TESTBENCH.v";
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "============ Register File Contents ============";
static const char *ng5 = "$t0 (R8):  %h";
static int ng6[] = {8, 0};
static const char *ng7 = "$t1 (R9):  %h";
static int ng8[] = {9, 0};
static const char *ng9 = "$t2 (R10): %h";
static int ng10[] = {10, 0};
static const char *ng11 = "$t3 (R11): %h";
static int ng12[] = {11, 0};
static const char *ng13 = "$t4 (R12): %h";
static int ng14[] = {12, 0};
static const char *ng15 = "$t5 (R13): %h";
static int ng16[] = {13, 0};
static const char *ng17 = "$t6 (R14): %h";
static int ng18[] = {14, 0};
static const char *ng19 = "$t7 (R15): %h";
static int ng20[] = {15, 0};
static const char *ng21 = "============ Data Memory Contents ============";
static const char *ng22 = "Mem[4]: %h";
static const char *ng23 = "Mem[8]: %h";
static int ng24[] = {2, 0};
static const char *ng25 = "============ Simulation Results ============";
static const char *ng26 = "Final output: %h";
static const char *ng27 = "Register destination: %d";
static unsigned int ng28[] = {0U, 0U};
static const char *ng29 = "Executing instr 0:  addi $t0, $zero, 10";
static unsigned int ng30[] = {1U, 0U};
static const char *ng31 = "Executing instr 1:  addi $t1, $zero, 5";
static unsigned int ng32[] = {2U, 0U};
static const char *ng33 = "Executing instr 2:  add $t2, $t0, $t1";
static unsigned int ng34[] = {3U, 0U};
static const char *ng35 = "Executing instr 3:  sub $t3, $t0, $t1";
static unsigned int ng36[] = {4U, 0U};
static const char *ng37 = "Executing instr 4:  sw $t2, 4($zero)";
static unsigned int ng38[] = {5U, 0U};
static const char *ng39 = "Executing instr 5:  sw $t3, 8($zero)";
static unsigned int ng40[] = {6U, 0U};
static const char *ng41 = "Executing instr 6:  lw $t4, 4($zero)";
static unsigned int ng42[] = {7U, 0U};
static const char *ng43 = "Executing instr 7:  beq $t2, $t4, 2";
static unsigned int ng44[] = {8U, 0U};
static const char *ng45 = "Executing instr 8:  addi $t5, $zero, 0";
static unsigned int ng46[] = {9U, 0U};
static const char *ng47 = "Executing instr 9:  addi $t6, $zero, 1";
static unsigned int ng48[] = {10U, 0U};
static const char *ng49 = "Executing instr 10: addi $t7, $zero, 2";
static const char *ng50 = "Executing unknown instruction at PC = %h";
static const char *ng51 = "mips_processor.vcd";

void Monitor_64_3(char *);
void Monitor_64_3(char *);


static void Monitor_64_3_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 6268);
    t4 = *((char **)t3);
    t5 = ((((char*)(t4))) + 40U);
    t6 = *((char **)t5);
    t5 = (t0 + 6300);
    t7 = *((char **)t5);
    t8 = ((((char*)(t7))) + 40U);
    t9 = *((char **)t8);
    t8 = (t0 + 6324);
    t10 = *((char **)t8);
    t11 = ((((char*)(t10))) + 40U);
    t12 = *((char **)t11);
    t11 = (t0 + 1048U);
    t13 = *((char **)t11);
    t11 = (t0 + 1208U);
    t14 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 3, ng0, 7, t0, (char)118, t1, 64, (char)118, t6, 32, (char)118, t9, 32, (char)118, t12, 32, (char)118, t13, 32, (char)118, t14, 5);

LAB1:    return;
}

static void Initial_21_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng1);

LAB4:    xsi_set_current_line(22, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(23, ng1);

LAB5:    xsi_set_current_line(23, ng1);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(23, ng1);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1608);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB11;

LAB13:    goto LAB1;

}

static void Initial_27_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng1);

LAB4:    xsi_set_current_line(29, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30, ng1);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 15000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(31, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(35, ng1);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(38, ng1);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(39, ng1);
    t2 = (t0 + 6356);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 6388);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 6420);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t10, t14, 2, 1, t15, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(40, ng1);
    t2 = (t0 + 6452);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 6484);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 6516);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t10, t14, 2, 1, t15, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(41, ng1);
    t2 = (t0 + 6548);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 6580);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 6612);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t10, t14, 2, 1, t15, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(42, ng1);
    t2 = (t0 + 6644);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 6676);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 6708);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t10, t14, 2, 1, t15, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng11, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(43, ng1);
    t2 = (t0 + 6740);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 6772);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 6804);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t10, t14, 2, 1, t15, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(44, ng1);
    t2 = (t0 + 6836);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 6868);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 6900);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t10, t14, 2, 1, t15, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng15, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(45, ng1);
    t2 = (t0 + 6932);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 6964);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 6996);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng18)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t10, t14, 2, 1, t15, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng17, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(46, ng1);
    t2 = (t0 + 7028);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 7060);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 7092);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng20)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t10, t14, 2, 1, t15, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng19, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(49, ng1);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);
    xsi_set_current_line(50, ng1);
    t2 = (t0 + 7124);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 7156);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 7188);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t10, t14, 2, 1, t15, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng22, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(51, ng1);
    t2 = (t0 + 7220);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 7252);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 7284);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng24)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t10, t14, 2, 1, t15, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(54, ng1);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    xsi_set_current_line(55, ng1);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng26, 2, t0, (char)118, t3, 32);
    xsi_set_current_line(56, ng1);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng27, 2, t0, (char)118, t3, 5);
    xsi_set_current_line(59, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Initial_63_2(char *t0)
{

LAB0:    xsi_set_current_line(63, ng1);

LAB2:    xsi_set_current_line(64, ng1);
    Monitor_64_3(t0);

LAB1:    return;
}

static void Always_70_4(char *t0)
{
    char t4[8];
    char t15[8];
    char t33[8];
    char t49[8];
    char t57[8];
    char t95[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    int t108;

LAB0:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng1);
    t2 = (t0 + 4408);
    *((int *)t2) = 1;
    t3 = (t0 + 3624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng1);

LAB5:    xsi_set_current_line(71, ng1);
    t5 = (t0 + 1768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t4);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) != 0)
        goto LAB12;

LAB13:    t23 = (t15 + 4);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB14;

LAB15:    memcpy(t57, t15, 8);

LAB16:    t89 = (t57 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t57);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t15) = 1;
    goto LAB13;

LAB12:    t22 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB14:    t27 = (t0 + 7300);
    t28 = *((char **)t27);
    t29 = ((((char*)(t28))) + 40U);
    t30 = *((char **)t29);
    t29 = (t0 + 1928);
    t31 = (t29 + 56U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    t34 = (t30 + 4);
    t35 = (t32 + 4);
    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t34);
    t40 = *((unsigned int *)t35);
    t41 = (t39 ^ t40);
    t42 = (t38 | t41);
    t43 = *((unsigned int *)t34);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB18;

LAB17:    if (t45 != 0)
        goto LAB19;

LAB20:    memset(t49, 0, 8);
    t50 = (t33 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (~(t51));
    t53 = *((unsigned int *)t33);
    t54 = (t53 & t52);
    t55 = (t54 & 1U);
    if (t55 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t50) != 0)
        goto LAB23;

LAB24:    t58 = *((unsigned int *)t15);
    t59 = *((unsigned int *)t49);
    t60 = (t58 & t59);
    *((unsigned int *)t57) = t60;
    t61 = (t15 + 4);
    t62 = (t49 + 4);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t61);
    t65 = *((unsigned int *)t62);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB18:    *((unsigned int *)t33) = 1;
    goto LAB20;

LAB19:    t48 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t49) = 1;
    goto LAB24;

LAB23:    t56 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB24;

LAB25:    t69 = *((unsigned int *)t57);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t57) = (t69 | t70);
    t71 = (t15 + 4);
    t72 = (t49 + 4);
    t73 = *((unsigned int *)t15);
    t74 = (~(t73));
    t75 = *((unsigned int *)t71);
    t76 = (~(t75));
    t77 = *((unsigned int *)t49);
    t78 = (~(t77));
    t79 = *((unsigned int *)t72);
    t80 = (~(t79));
    t81 = (t74 & t76);
    t82 = (t78 & t80);
    t83 = (~(t81));
    t84 = (~(t82));
    t85 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t85 & t83);
    t86 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t86 & t84);
    t87 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t87 & t83);
    t88 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t88 & t84);
    goto LAB27;

LAB28:    xsi_set_current_line(71, ng1);

LAB31:    xsi_set_current_line(72, ng1);
    t96 = (t0 + 7316);
    t97 = *((char **)t96);
    t98 = ((((char*)(t97))) + 40U);
    t99 = *((char **)t98);
    memset(t95, 0, 8);
    t98 = (t95 + 4);
    t100 = (t99 + 4);
    t101 = *((unsigned int *)t99);
    t102 = (t101 >> 2);
    *((unsigned int *)t95) = t102;
    t103 = *((unsigned int *)t100);
    t104 = (t103 >> 2);
    *((unsigned int *)t98) = t104;
    t105 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t105 & 31U);
    t106 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t106 & 31U);

LAB32:    t107 = ((char*)((ng28)));
    t108 = xsi_vlog_unsigned_case_compare(t95, 5, t107, 5);
    if (t108 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng30)));
    t81 = xsi_vlog_unsigned_case_compare(t95, 5, t2, 5);
    if (t81 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng32)));
    t81 = xsi_vlog_unsigned_case_compare(t95, 5, t2, 5);
    if (t81 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng34)));
    t81 = xsi_vlog_unsigned_case_compare(t95, 5, t2, 5);
    if (t81 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng36)));
    t81 = xsi_vlog_unsigned_case_compare(t95, 5, t2, 5);
    if (t81 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng38)));
    t81 = xsi_vlog_unsigned_case_compare(t95, 5, t2, 5);
    if (t81 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng40)));
    t81 = xsi_vlog_unsigned_case_compare(t95, 5, t2, 5);
    if (t81 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng42)));
    t81 = xsi_vlog_unsigned_case_compare(t95, 5, t2, 5);
    if (t81 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng44)));
    t81 = xsi_vlog_unsigned_case_compare(t95, 5, t2, 5);
    if (t81 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng46)));
    t81 = xsi_vlog_unsigned_case_compare(t95, 5, t2, 5);
    if (t81 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng48)));
    t81 = xsi_vlog_unsigned_case_compare(t95, 5, t2, 5);
    if (t81 == 1)
        goto LAB53;

LAB54:
LAB56:
LAB55:    xsi_set_current_line(84, ng1);
    t2 = (t0 + 7332);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 40U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng50, 2, t0, (char)118, t6, 32);

LAB57:    xsi_set_current_line(86, ng1);
    t2 = (t0 + 7348);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 40U);
    t6 = *((char **)t5);
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB30;

LAB33:    xsi_set_current_line(73, ng1);
    xsi_vlogfile_write(1, 0, 0, ng29, 1, t0);
    goto LAB57;

LAB35:    xsi_set_current_line(74, ng1);
    xsi_vlogfile_write(1, 0, 0, ng31, 1, t0);
    goto LAB57;

LAB37:    xsi_set_current_line(75, ng1);
    xsi_vlogfile_write(1, 0, 0, ng33, 1, t0);
    goto LAB57;

LAB39:    xsi_set_current_line(76, ng1);
    xsi_vlogfile_write(1, 0, 0, ng35, 1, t0);
    goto LAB57;

LAB41:    xsi_set_current_line(77, ng1);
    xsi_vlogfile_write(1, 0, 0, ng37, 1, t0);
    goto LAB57;

LAB43:    xsi_set_current_line(78, ng1);
    xsi_vlogfile_write(1, 0, 0, ng39, 1, t0);
    goto LAB57;

LAB45:    xsi_set_current_line(79, ng1);
    xsi_vlogfile_write(1, 0, 0, ng41, 1, t0);
    goto LAB57;

LAB47:    xsi_set_current_line(80, ng1);
    xsi_vlogfile_write(1, 0, 0, ng43, 1, t0);
    goto LAB57;

LAB49:    xsi_set_current_line(81, ng1);
    xsi_vlogfile_write(1, 0, 0, ng45, 1, t0);
    goto LAB57;

LAB51:    xsi_set_current_line(82, ng1);
    xsi_vlogfile_write(1, 0, 0, ng47, 1, t0);
    goto LAB57;

LAB53:    xsi_set_current_line(83, ng1);
    xsi_vlogfile_write(1, 0, 0, ng49, 1, t0);
    goto LAB57;

}

static void Initial_91_5(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(91, ng1);

LAB2:    xsi_set_current_line(92, ng1);
    xsi_vcd_dumpfile(ng51);
    xsi_set_current_line(93, ng1);
    t1 = ((char*)((ng2)));
    xsi_vcd_dumpvars_args(*((unsigned int *)t1), t0, (char)109, t0, (char)101);

LAB1:    return;
}

void Monitor_64_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3896);
    t2 = (t0 + 4424);
    xsi_vlogfile_monitor((void *)Monitor_64_3_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003545055483_3525779745_init()
{
	static char *pe[] = {(void *)Initial_21_0,(void *)Initial_27_1,(void *)Initial_63_2,(void *)Always_70_4,(void *)Initial_91_5,(void *)Monitor_64_3};
	xsi_register_didat("work_m_00000000003545055483_3525779745", "isim/TopModule_tb_isim_beh.exe.sim/work/m_00000000003545055483_3525779745.didat");
	xsi_register_executes(pe);
}
