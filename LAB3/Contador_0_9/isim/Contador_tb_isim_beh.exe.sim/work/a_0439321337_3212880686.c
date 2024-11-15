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
static const char *ng0 = "C:/Users/Carlos/Desktop/LAB3-20240403T225243Z-001/LAB3/Contador_0_9/Contador.vhd";
extern char *IEEE_P_3499444699;

char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );


static void work_a_0439321337_3212880686_p_0(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(23, ng0);

LAB3:    t1 = (t0 + 10588);
    t3 = (t0 + 6256);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0439321337_3212880686_p_1(char *t0)
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

LAB0:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 6112);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 2472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 1352U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 != t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3448U);
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

LAB8:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 3448U);
    t13 = *((char **)t4);
    t14 = *((int *)t13);
    t15 = (t14 + 1);
    t4 = (t0 + 3448U);
    t16 = *((char **)t4);
    t4 = (t16 + 0);
    *((int *)t4) = t15;
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3448U);
    t4 = *((char **)t2);
    t14 = *((int *)t4);
    t2 = (t0 + 3328U);
    t5 = *((char **)t2);
    t15 = *((int *)t5);
    t1 = (t14 == t15);
    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1352U);
    t8 = *((char **)t2);
    t3 = *((unsigned char *)t8);
    t2 = (t0 + 6320);
    t10 = (t2 + 56U);
    t13 = *((char **)t10);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3448U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    goto LAB12;

}

static void work_a_0439321337_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(41, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6384);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 6128);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0439321337_3212880686_p_3(char *t0)
{
    char t18[16];
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
    unsigned char t12;
    unsigned char t13;
    char *t14;
    int t15;
    int t16;
    char *t17;
    unsigned int t19;
    char *t20;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2752U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t1 = (t0 + 6448);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t15;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t1 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t18, t15, 4);
    t5 = (t18 + 12U);
    t19 = *((unsigned int *)t5);
    t19 = (t19 * 1U);
    t3 = (4U != t19);
    if (t3 == 1)
        goto LAB22;

LAB23:    t8 = (t0 + 6512);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    t17 = (t14 + 56U);
    t20 = *((char **)t17);
    memcpy(t20, t1, 4U);
    xsi_driver_first_trans_fast(t8);
    t1 = (t0 + 6144);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 3568U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    goto LAB3;

LAB5:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1032U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 2792U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t3 = t7;
    goto LAB9;

LAB10:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1672U);
    t11 = *((char **)t2);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t16 = (t15 + 1);
    t1 = (t0 + 3568U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t16;
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t3 = (t15 == 10);
    if (t3 != 0)
        goto LAB19;

LAB21:
LAB20:
LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3568U);
    t14 = *((char **)t2);
    t15 = *((int *)t14);
    t16 = (t15 - 1);
    t2 = (t0 + 3568U);
    t17 = *((char **)t2);
    t2 = (t17 + 0);
    *((int *)t2) = t16;
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t3 = (t15 == 0);
    if (t3 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB14;

LAB16:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 3568U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 10;
    goto LAB17;

LAB19:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3568U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    goto LAB20;

LAB22:    xsi_size_not_matching(4U, t19, 0);
    goto LAB23;

}

static void work_a_0439321337_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    int t14;
    char *t15;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    int t26;
    char *t27;
    int t29;
    char *t30;
    int t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    t1 = (t0 + 5544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 10592);
    t5 = xsi_mem_cmp(t2, t3, 4U);
    if (t5 == 1)
        goto LAB5;

LAB16:    t6 = (t0 + 10596);
    t8 = xsi_mem_cmp(t6, t3, 4U);
    if (t8 == 1)
        goto LAB6;

LAB17:    t9 = (t0 + 10600);
    t11 = xsi_mem_cmp(t9, t3, 4U);
    if (t11 == 1)
        goto LAB7;

LAB18:    t12 = (t0 + 10604);
    t14 = xsi_mem_cmp(t12, t3, 4U);
    if (t14 == 1)
        goto LAB8;

LAB19:    t15 = (t0 + 10608);
    t17 = xsi_mem_cmp(t15, t3, 4U);
    if (t17 == 1)
        goto LAB9;

LAB20:    t18 = (t0 + 10612);
    t20 = xsi_mem_cmp(t18, t3, 4U);
    if (t20 == 1)
        goto LAB10;

LAB21:    t21 = (t0 + 10616);
    t23 = xsi_mem_cmp(t21, t3, 4U);
    if (t23 == 1)
        goto LAB11;

LAB22:    t24 = (t0 + 10620);
    t26 = xsi_mem_cmp(t24, t3, 4U);
    if (t26 == 1)
        goto LAB12;

LAB23:    t27 = (t0 + 10624);
    t29 = xsi_mem_cmp(t27, t3, 4U);
    if (t29 == 1)
        goto LAB13;

LAB24:    t30 = (t0 + 10628);
    t32 = xsi_mem_cmp(t30, t3, 4U);
    if (t32 == 1)
        goto LAB14;

LAB25:
LAB15:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 10702);
    t4 = (t0 + 6576);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(75, ng0);

LAB29:    t2 = (t0 + 6160);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB30;

LAB1:    return;
LAB5:    xsi_set_current_line(77, ng0);
    t33 = (t0 + 10632);
    t35 = (t0 + 6576);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memcpy(t39, t33, 7U);
    xsi_driver_first_trans_fast_port(t35);
    goto LAB4;

LAB6:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 10639);
    t4 = (t0 + 6576);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB7:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 10646);
    t4 = (t0 + 6576);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB8:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 10653);
    t4 = (t0 + 6576);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB9:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 10660);
    t4 = (t0 + 6576);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB10:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 10667);
    t4 = (t0 + 6576);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB11:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 10674);
    t4 = (t0 + 6576);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB12:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 10681);
    t4 = (t0 + 6576);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB13:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 10688);
    t4 = (t0 + 6576);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB14:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 10695);
    t4 = (t0 + 6576);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB26:;
LAB27:    t3 = (t0 + 6160);
    *((int *)t3) = 0;
    goto LAB2;

LAB28:    goto LAB27;

LAB30:    goto LAB28;

}

static void work_a_0439321337_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(88, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 6640);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6176);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0439321337_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0439321337_3212880686_p_0,(void *)work_a_0439321337_3212880686_p_1,(void *)work_a_0439321337_3212880686_p_2,(void *)work_a_0439321337_3212880686_p_3,(void *)work_a_0439321337_3212880686_p_4,(void *)work_a_0439321337_3212880686_p_5};
	xsi_register_didat("work_a_0439321337_3212880686", "isim/Contador_tb_isim_beh.exe.sim/work/a_0439321337_3212880686.didat");
	xsi_register_executes(pe);
}
