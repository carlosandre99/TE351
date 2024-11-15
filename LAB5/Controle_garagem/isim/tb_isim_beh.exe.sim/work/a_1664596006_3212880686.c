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
static const char *ng0 = "C:/Users/Carlos/Desktop/LAB5-20240430T002822Z-001/LAB5/Controle_garagem/debounce.vhd";



static void work_a_1664596006_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    int t14;
    int t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3880);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(22, ng0);
    t4 = (t0 + 1512U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 1032U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 != t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(23, ng0);
    t4 = (t0 + 2328U);
    t13 = *((char **)t4);
    t14 = *((int *)t13);
    t15 = (t14 + 1);
    t4 = (t0 + 2328U);
    t16 = *((char **)t4);
    t4 = (t16 + 0);
    *((int *)t4) = t15;
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t14 = *((int *)t4);
    t2 = (t0 + 2208U);
    t5 = *((char **)t2);
    t15 = *((int *)t5);
    t1 = (t14 == t15);
    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1032U);
    t8 = *((char **)t2);
    t3 = *((unsigned char *)t8);
    t2 = (t0 + 3976);
    t10 = (t2 + 56U);
    t13 = *((char **)t10);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    goto LAB12;

}

static void work_a_1664596006_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(34, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4040);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 3896);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1664596006_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1664596006_3212880686_p_0,(void *)work_a_1664596006_3212880686_p_1};
	xsi_register_didat("work_a_1664596006_3212880686", "isim/tb_isim_beh.exe.sim/work/a_1664596006_3212880686.didat");
	xsi_register_executes(pe);
}
