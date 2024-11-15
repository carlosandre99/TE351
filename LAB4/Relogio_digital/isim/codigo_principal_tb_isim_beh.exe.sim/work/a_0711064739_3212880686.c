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
static const char *ng0 = "C:/Users/Carlos/Desktop/LAB4-2024_l/LAB4/Relogio_digital/display.vhd";



static void work_a_0711064739_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    int t10;
    char *t11;
    int t12;
    int t13;
    char *t14;

LAB0:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t2 = (t0 + 3232);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t9;
    xsi_driver_first_trans_fast_port(t2);
    t2 = (t0 + 3152);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1728U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 + 1);
    t4 = (t0 + 1728U);
    t11 = *((char **)t4);
    t4 = (t11 + 0);
    *((int *)t4) = t10;
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1728U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t2 = (t0 + 1608U);
    t5 = *((char **)t2);
    t10 = *((int *)t5);
    t1 = (t9 == t10);
    if (t1 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1848U);
    t8 = *((char **)t2);
    t12 = *((int *)t8);
    t13 = (t12 + 1);
    t2 = (t0 + 1848U);
    t11 = *((char **)t2);
    t2 = (t11 + 0);
    *((int *)t2) = t13;
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t1 = (t9 == 4);
    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1728U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    goto LAB9;

LAB11:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = 0;
    goto LAB12;

}


extern void work_a_0711064739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0711064739_3212880686_p_0};
	xsi_register_didat("work_a_0711064739_3212880686", "isim/codigo_principal_tb_isim_beh.exe.sim/work/a_0711064739_3212880686.didat");
	xsi_register_executes(pe);
}
