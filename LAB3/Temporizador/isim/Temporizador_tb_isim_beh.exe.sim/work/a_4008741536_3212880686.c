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
static const char *ng0 = "C:/Users/Carlos/Desktop/LAB3-20240403T225243Z-001/LAB3/Temporizador/Temporizador.vhd";



static void work_a_4008741536_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    int t12;
    unsigned char t13;
    char *t14;
    int t15;
    int t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1352U);
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
LAB3:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 4112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 4176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 4240);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 4304);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    if (t12 == 0)
        goto LAB20;

LAB31:    if (t12 == 1)
        goto LAB21;

LAB32:    if (t12 == 2)
        goto LAB22;

LAB33:    if (t12 == 3)
        goto LAB23;

LAB34:    if (t12 == 4)
        goto LAB24;

LAB35:    if (t12 == 5)
        goto LAB25;

LAB36:    if (t12 == 6)
        goto LAB26;

LAB37:    if (t12 == 7)
        goto LAB27;

LAB38:    if (t12 == 8)
        goto LAB28;

LAB39:    if (t12 == 9)
        goto LAB29;

LAB40:
LAB30:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 7366);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB19:    t1 = (t0 + 4032);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 2608U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(25, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB3;

LAB5:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1032U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t3 = t7;
    goto LAB9;

LAB10:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2728U);
    t11 = *((char **)t2);
    t12 = *((int *)t11);
    t13 = (t12 == 25000000);
    if (t13 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t15 = (t12 + 1);
    t1 = (t0 + 2728U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t15;

LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2608U);
    t14 = *((char **)t2);
    t15 = *((int *)t14);
    t16 = (t15 + 1);
    t2 = (t0 + 2608U);
    t17 = *((char **)t2);
    t2 = (t17 + 0);
    *((int *)t2) = t16;
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 10);
    if (t3 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB14;

LAB16:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 2608U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    goto LAB17;

LAB20:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 7296);
    t8 = (t0 + 4368);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 7U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB19;

LAB21:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 7303);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB19;

LAB22:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 7310);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB19;

LAB23:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 7317);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB19;

LAB24:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 7324);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB19;

LAB25:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 7331);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB19;

LAB26:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 7338);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB19;

LAB27:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 7345);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB19;

LAB28:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 7352);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB19;

LAB29:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 7359);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB19;

LAB41:;
}


extern void work_a_4008741536_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4008741536_3212880686_p_0};
	xsi_register_didat("work_a_4008741536_3212880686", "isim/Temporizador_tb_isim_beh.exe.sim/work/a_4008741536_3212880686.didat");
	xsi_register_executes(pe);
}
