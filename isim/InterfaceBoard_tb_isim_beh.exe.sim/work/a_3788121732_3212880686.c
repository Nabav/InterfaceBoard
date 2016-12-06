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
static const char *ng0 = "/home/nabav/Workspace/InterfaceBoard/Interface_Board_Main_State_Machine.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3788121732_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    static char *nl0[] = {&&LAB6, &&LAB7, &&LAB8, &&LAB9};

LAB0:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 8584);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 6632U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl0) + t5);
    goto **((char **)t3);

LAB5:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 5672U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 7288U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((unsigned char *)t1) = t2;
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 7168U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((unsigned char *)t1) = t2;
    goto LAB3;

LAB6:    xsi_set_current_line(60, ng0);
    t6 = (t0 + 7048U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 0;
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 8664);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 7168U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t8 = (t5 == (unsigned char)2);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = (unsigned char)0;

LAB15:    if (t2 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB5;

LAB7:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 15382);
    t13 = xsi_mem_cmp(t1, t3, 3U);
    if (t13 == 1)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 8728);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB16:    goto LAB5;

LAB8:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 8664);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 8728);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB9:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 7048U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t15 = (t13 + 1);
    t1 = (t0 + 7048U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t15;
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 7288U);
    t3 = *((char **)t1);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 1)
        goto LAB27;

LAB28:    t5 = (unsigned char)0;

LAB29:    if (t5 == 1)
        goto LAB24;

LAB25:    t1 = (t0 + 7048U);
    t6 = *((char **)t1);
    t13 = *((int *)t6);
    t1 = (t0 + 6928U);
    t7 = *((char **)t1);
    t15 = *((int *)t7);
    t17 = (t13 == t15);
    t2 = t17;

LAB26:    if (t2 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB5;

LAB10:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 8728);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB13:    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t9 = *((unsigned char *)t4);
    t10 = (t9 == (unsigned char)3);
    t2 = t10;
    goto LAB15;

LAB17:    xsi_set_current_line(68, ng0);
    t6 = (t0 + 8728);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 15385);
    t4 = (t0 + 8792);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 8856);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t3, 3U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 8920);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t3, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 8984);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t3, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB20:;
LAB21:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 8728);
    t11 = (t1 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t18 = *((char **)t14);
    *((unsigned char *)t18) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

LAB24:    t2 = (unsigned char)1;
    goto LAB26;

LAB27:    t1 = (t0 + 5672U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t16 = (t10 == (unsigned char)3);
    t5 = t16;
    goto LAB29;

}


extern void work_a_3788121732_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3788121732_3212880686_p_0};
	xsi_register_didat("work_a_3788121732_3212880686", "isim/InterfaceBoard_tb_isim_beh.exe.sim/work/a_3788121732_3212880686.didat");
	xsi_register_executes(pe);
}
