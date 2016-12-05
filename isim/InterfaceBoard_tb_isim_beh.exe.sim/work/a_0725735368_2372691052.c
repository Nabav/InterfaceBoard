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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/nabav/Workspace/InterfaceBoard/InterfaceBoard_tb.vhd";



static void work_a_0725735368_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3552);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3552);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0725735368_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 3992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3800);
    xsi_process_wait(t2, t4);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t5 = *((int *)t3);
    t6 = (t5 == 0);
    if (t6 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t5 = *((int *)t3);
    t6 = (t5 == 9);
    if (t6 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2648U);
    t7 = *((char **)t2);
    t5 = *((int *)t7);
    t11 = (t5 - 1);
    t12 = (t11 - 7);
    t13 = (t12 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t11);
    t14 = (1U * t13);
    t2 = (t0 + 2768U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 25, 1, t15);
    t18 = (8U * t17);
    t19 = (0 + t18);
    t20 = (t19 + t14);
    t2 = (t3 + t20);
    t6 = *((unsigned char *)t2);
    t9 = (t0 + 4704);
    t10 = (t9 + 56U);
    t21 = *((char **)t10);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t6;
    xsi_driver_first_trans_fast(t9);

LAB9:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t5 = *((int *)t3);
    t6 = (t5 < 9);
    if (t6 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t5 = *((int *)t3);
    t6 = (t5 < 25);
    if (t6 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;

LAB17:
LAB14:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4704);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4704);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2648U);
    t7 = *((char **)t2);
    t11 = *((int *)t7);
    t12 = (t11 + 1);
    t2 = (t0 + 2648U);
    t8 = *((char **)t2);
    t2 = (t8 + 0);
    *((int *)t2) = t12;
    goto LAB14;

LAB16:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2768U);
    t7 = *((char **)t2);
    t11 = *((int *)t7);
    t12 = (t11 + 1);
    t2 = (t0 + 2768U);
    t8 = *((char **)t2);
    t2 = (t8 + 0);
    *((int *)t2) = t12;
    goto LAB17;

}

static void work_a_0725735368_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(92, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4768);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 4560);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0725735368_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0725735368_2372691052_p_0,(void *)work_a_0725735368_2372691052_p_1,(void *)work_a_0725735368_2372691052_p_2};
	xsi_register_didat("work_a_0725735368_2372691052", "isim/InterfaceBoard_tb_isim_beh.exe.sim/work/a_0725735368_2372691052.didat");
	xsi_register_executes(pe);
}
