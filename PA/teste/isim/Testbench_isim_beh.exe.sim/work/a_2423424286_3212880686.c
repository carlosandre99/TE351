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
static const char *ng0 = "C:/Users/Carlos/Desktop/PA/teste/LFSR_Random.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );


static void work_a_2423424286_3212880686_p_0(char *t0)
{
    char t24[16];
    char t26[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    xsi_set_current_line(17, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3240);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(18, ng0);
    t1 = (t0 + 5182);
    t6 = (t0 + 3336);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t11 = (7 - 6);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t2 = (t5 + t13);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t14 = (7 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t6 = (t7 + t17);
    t4 = *((unsigned char *)t6);
    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    t18 = (6 - 7);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t8 = (t9 + t21);
    t22 = *((unsigned char *)t8);
    t23 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t4, t22);
    t25 = ((IEEE_P_2592010699) + 4024);
    t27 = (t26 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 6;
    t28 = (t27 + 4U);
    *((int *)t28) = 0;
    t28 = (t27 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - 6);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;
    t10 = xsi_base_array_concat(t10, t24, t25, (char)97, t2, t26, (char)99, t23, (char)101);
    t30 = (7U + 1U);
    t31 = (8U != t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    t28 = (t0 + 3336);
    t32 = (t28 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t10, 8U);
    xsi_driver_first_trans_fast(t28);
    goto LAB3;

LAB7:    xsi_size_not_matching(8U, t30, 0);
    goto LAB8;

}

static void work_a_2423424286_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(24, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3400);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3256);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2423424286_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2423424286_3212880686_p_0,(void *)work_a_2423424286_3212880686_p_1};
	xsi_register_didat("work_a_2423424286_3212880686", "isim/Testbench_isim_beh.exe.sim/work/a_2423424286_3212880686.didat");
	xsi_register_executes(pe);
}
