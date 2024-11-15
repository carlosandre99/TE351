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
static const char *ng0 = "C:/Users/Carlos/Desktop/LAB4-2024_l/LAB4/Relogio_digital/codigo_principal.vhd";



static void work_a_1504274628_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(48, ng0);

LAB3:    t1 = (t0 + 5064);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((int *)t5) = 50000000;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1504274628_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (2 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t5 = (t0 + 5128);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    t17 = (t15 + 56U);
    t25 = *((char **)t17);
    *((int *)t25) = t16;
    xsi_driver_first_trans_delta(t5, 0U, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (3 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t5 = (t0 + 5128);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    t17 = (t15 + 56U);
    t25 = *((char **)t17);
    *((int *)t25) = t16;
    xsi_driver_first_trans_delta(t5, 1U, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (4 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t5 = (t0 + 5128);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    t17 = (t15 + 56U);
    t25 = *((char **)t17);
    *((int *)t25) = t16;
    xsi_driver_first_trans_delta(t5, 2U, 1, 0LL);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (5 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t5 = (t0 + 5128);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    t17 = (t15 + 56U);
    t25 = *((char **)t17);
    *((int *)t25) = t16;
    xsi_driver_first_trans_delta(t5, 3U, 1, 0LL);

LAB35:    t1 = (t0 + 4968);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 3048U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (0 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    *((int *)t1) = 0;
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (1 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    *((int *)t1) = 0;
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (2 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    *((int *)t1) = 0;
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (3 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    *((int *)t1) = 0;
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (4 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    *((int *)t1) = 0;
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (5 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    *((int *)t1) = 0;
    goto LAB3;

LAB5:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1352U);
    t12 = *((char **)t2);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB9;

LAB10:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3048U);
    t15 = *((char **)t2);
    t6 = *((int *)t15);
    t16 = (t6 + 1);
    t2 = (t0 + 3048U);
    t17 = *((char **)t2);
    t2 = (t17 + 0);
    *((int *)t2) = t16;
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 1992U);
    t5 = *((char **)t1);
    t16 = *((int *)t5);
    t3 = (t6 >= t16);
    if (t3 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 3168U);
    t12 = *((char **)t1);
    t18 = (0 - 0);
    t7 = (t18 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t12 + t9);
    t19 = *((int *)t1);
    t20 = (t19 + 1);
    t15 = (t0 + 3168U);
    t17 = *((char **)t15);
    t21 = (0 - 0);
    t22 = (t21 * 1);
    t23 = (4U * t22);
    t24 = (0 + t23);
    t15 = (t17 + t24);
    *((int *)t15) = t20;
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (0 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t3 = (t16 == 10);
    if (t3 != 0)
        goto LAB16;

LAB18:
LAB17:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB14;

LAB16:    xsi_set_current_line(76, ng0);
    t5 = (t0 + 3168U);
    t12 = *((char **)t5);
    t18 = (0 - 0);
    t22 = (t18 * 1);
    t23 = (4U * t22);
    t24 = (0 + t23);
    t5 = (t12 + t24);
    *((int *)t5) = 0;
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (1 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t18 = (t16 + 1);
    t5 = (t0 + 3168U);
    t12 = *((char **)t5);
    t19 = (1 - 0);
    t22 = (t19 * 1);
    t23 = (4U * t22);
    t24 = (0 + t23);
    t5 = (t12 + t24);
    *((int *)t5) = t18;
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (1 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t3 = (t16 == 6);
    if (t3 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB17;

LAB19:    xsi_set_current_line(81, ng0);
    t5 = (t0 + 3168U);
    t12 = *((char **)t5);
    t18 = (1 - 0);
    t22 = (t18 * 1);
    t23 = (4U * t22);
    t24 = (0 + t23);
    t5 = (t12 + t24);
    *((int *)t5) = 0;
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (2 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t18 = (t16 + 1);
    t5 = (t0 + 3168U);
    t12 = *((char **)t5);
    t19 = (2 - 0);
    t22 = (t19 * 1);
    t23 = (4U * t22);
    t24 = (0 + t23);
    t5 = (t12 + t24);
    *((int *)t5) = t18;
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (2 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t3 = (t16 == 10);
    if (t3 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB20;

LAB22:    xsi_set_current_line(86, ng0);
    t5 = (t0 + 3168U);
    t12 = *((char **)t5);
    t18 = (2 - 0);
    t22 = (t18 * 1);
    t23 = (4U * t22);
    t24 = (0 + t23);
    t5 = (t12 + t24);
    *((int *)t5) = 0;
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (3 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t18 = (t16 + 1);
    t5 = (t0 + 3168U);
    t12 = *((char **)t5);
    t19 = (3 - 0);
    t22 = (t19 * 1);
    t23 = (4U * t22);
    t24 = (0 + t23);
    t5 = (t12 + t24);
    *((int *)t5) = t18;
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (3 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t3 = (t16 == 6);
    if (t3 != 0)
        goto LAB25;

LAB27:
LAB26:    goto LAB23;

LAB25:    xsi_set_current_line(91, ng0);
    t5 = (t0 + 3168U);
    t12 = *((char **)t5);
    t18 = (3 - 0);
    t22 = (t18 * 1);
    t23 = (4U * t22);
    t24 = (0 + t23);
    t5 = (t12 + t24);
    *((int *)t5) = 0;
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (4 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t18 = (t16 + 1);
    t5 = (t0 + 3168U);
    t12 = *((char **)t5);
    t19 = (4 - 0);
    t22 = (t19 * 1);
    t23 = (4U * t22);
    t24 = (0 + t23);
    t5 = (t12 + t24);
    *((int *)t5) = t18;
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (4 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t3 = (t16 == 10);
    if (t3 != 0)
        goto LAB28;

LAB30:
LAB29:    goto LAB26;

LAB28:    xsi_set_current_line(96, ng0);
    t5 = (t0 + 3168U);
    t12 = *((char **)t5);
    t18 = (4 - 0);
    t22 = (t18 * 1);
    t23 = (4U * t22);
    t24 = (0 + t23);
    t5 = (t12 + t24);
    *((int *)t5) = 0;
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (5 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t18 = (t16 + 1);
    t5 = (t0 + 3168U);
    t12 = *((char **)t5);
    t19 = (5 - 0);
    t22 = (t19 * 1);
    t23 = (4U * t22);
    t24 = (0 + t23);
    t5 = (t12 + t24);
    *((int *)t5) = t18;
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (5 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t3 = (t16 == 10);
    if (t3 != 0)
        goto LAB31;

LAB33:
LAB32:    goto LAB29;

LAB31:    xsi_set_current_line(101, ng0);
    t5 = (t0 + 3168U);
    t12 = *((char **)t5);
    t18 = (0 - 0);
    t22 = (t18 * 1);
    t23 = (4U * t22);
    t24 = (0 + t23);
    t5 = (t12 + t24);
    *((int *)t5) = 0;
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (1 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    *((int *)t1) = 0;
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (2 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    *((int *)t1) = 0;
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (3 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    *((int *)t1) = 0;
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (4 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    *((int *)t1) = 0;
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (5 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    *((int *)t1) = 0;
    goto LAB32;

LAB34:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 3168U);
    t5 = *((char **)t1);
    t6 = (0 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t5 + t9);
    t16 = *((int *)t1);
    t12 = (t0 + 5128);
    t15 = (t12 + 56U);
    t17 = *((char **)t15);
    t25 = (t17 + 56U);
    t26 = *((char **)t25);
    *((int *)t26) = t16;
    xsi_driver_first_trans_delta(t12, 0U, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (1 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t5 = (t0 + 5128);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    t17 = (t15 + 56U);
    t25 = *((char **)t17);
    *((int *)t25) = t16;
    xsi_driver_first_trans_delta(t5, 1U, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (2 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t5 = (t0 + 5128);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    t17 = (t15 + 56U);
    t25 = *((char **)t17);
    *((int *)t25) = t16;
    xsi_driver_first_trans_delta(t5, 2U, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t6 = (3 - 0);
    t7 = (t6 * 1);
    t8 = (4U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t16 = *((int *)t1);
    t5 = (t0 + 5128);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    t17 = (t15 + 56U);
    t25 = *((char **)t17);
    *((int *)t25) = t16;
    xsi_driver_first_trans_delta(t5, 3U, 1, 0LL);
    goto LAB35;

}

static void work_a_1504274628_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(139, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 5, 1, t4);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((int *)t1);
    t10 = (t0 + 5192);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = t9;
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 4984);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1504274628_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1504274628_3212880686_p_0,(void *)work_a_1504274628_3212880686_p_1,(void *)work_a_1504274628_3212880686_p_2};
	xsi_register_didat("work_a_1504274628_3212880686", "isim/codigo_principal_tb_isim_beh.exe.sim/work/a_1504274628_3212880686.didat");
	xsi_register_executes(pe);
}
