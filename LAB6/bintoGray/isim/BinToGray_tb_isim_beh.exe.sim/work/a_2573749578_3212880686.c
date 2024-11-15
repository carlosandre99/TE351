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
extern char *IEEE_P_2592010699;
static const char *ng1 = "C:/Users/Carlos/Desktop/bintoGray/bintoGray/BinToGray.vhd";

unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );


char *work_a_2573749578_3212880686_sub_4093521436_3057020925(char *t1, char *t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t9[16];
    char *t0;
    char *t7;
    unsigned int t8;
    char *t10;
    int t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    char *t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    char *t40;
    int t41;
    char *t42;
    int t43;
    char *t44;
    int t45;
    unsigned char t46;
    char *t47;
    int t48;
    char *t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned char t55;
    char *t56;
    char *t57;
    int t58;
    char *t59;
    int t60;
    int t61;
    unsigned int t62;
    char *t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t10 = (t4 + 0U);
    t11 = *((int *)t10);
    t12 = (t4 + 4U);
    t13 = *((int *)t12);
    t14 = (t4 + 8U);
    t15 = *((int *)t14);
    t16 = (t9 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t13;
    t17 = (t16 + 8U);
    *((int *)t17) = t15;
    t18 = (t13 - t11);
    t19 = (t18 * t15);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t5 + 4U);
    t20 = ((IEEE_P_2592010699) + 4024);
    t21 = (t17 + 88U);
    *((char **)t21) = t20;
    t22 = (char *)alloca(t8);
    t23 = (t17 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t9);
    t24 = (t17 + 64U);
    *((char **)t24) = t9;
    t25 = (t17 + 80U);
    *((unsigned int *)t25) = t8;
    t26 = (t6 + 4U);
    t27 = (t3 != 0);
    if (t27 == 1)
        goto LAB3;

LAB2:    t28 = (t6 + 12U);
    *((char **)t28) = t4;
    t29 = (t4 + 8U);
    t30 = *((int *)t29);
    t31 = (t4 + 4U);
    t32 = *((int *)t31);
    t33 = (t4 + 0U);
    t34 = *((int *)t33);
    t35 = t34;
    t36 = t32;

LAB4:    t37 = (t36 * t30);
    t38 = (t35 * t30);
    if (t38 <= t37)
        goto LAB5;

LAB7:    t7 = (t17 + 56U);
    t10 = *((char **)t7);
    t7 = (t9 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t10, t8);
    t12 = (t9 + 0U);
    t11 = *((int *)t12);
    t14 = (t9 + 4U);
    t13 = *((int *)t14);
    t16 = (t9 + 8U);
    t15 = *((int *)t16);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t11;
    t21 = (t20 + 4U);
    *((int *)t21) = t13;
    t21 = (t20 + 8U);
    *((int *)t21) = t15;
    t18 = (t13 - t11);
    t19 = (t18 * t15);
    t19 = (t19 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t19;

LAB1:    return t0;
LAB3:    *((char **)t26) = t3;
    goto LAB2;

LAB5:    t40 = (t4 + 0U);
    t41 = *((int *)t40);
    t42 = (t4 + 4U);
    t43 = *((int *)t42);
    t44 = (t4 + 8U);
    t45 = *((int *)t44);
    if (t41 > t43)
        goto LAB11;

LAB12:    if (t45 == -1)
        goto LAB16;

LAB17:    t39 = t43;

LAB13:    t46 = (t35 == t39);
    if (t46 != 0)
        goto LAB8;

LAB10:    t11 = (t35 + 1);
    t7 = (t4 + 0U);
    t13 = *((int *)t7);
    t10 = (t4 + 8U);
    t15 = *((int *)t10);
    t18 = (t11 - t13);
    t8 = (t18 * t15);
    t12 = (t4 + 4U);
    t32 = *((int *)t12);
    xsi_vhdl_check_range_of_index(t13, t32, t15, t11);
    t19 = (1U * t8);
    t52 = (0 + t19);
    t14 = (t3 + t52);
    t27 = *((unsigned char *)t14);
    t16 = (t4 + 0U);
    t34 = *((int *)t16);
    t20 = (t4 + 8U);
    t37 = *((int *)t20);
    t38 = (t35 - t34);
    t53 = (t38 * t37);
    t62 = (1U * t53);
    t65 = (0 + t62);
    t21 = (t3 + t65);
    t46 = *((unsigned char *)t21);
    t55 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t27, t46);
    t23 = (t17 + 56U);
    t24 = *((char **)t23);
    t23 = (t9 + 0U);
    t39 = *((int *)t23);
    t25 = (t9 + 8U);
    t41 = *((int *)t25);
    t43 = (t35 - t39);
    t66 = (t43 * t41);
    t29 = (t9 + 4U);
    t45 = *((int *)t29);
    xsi_vhdl_check_range_of_index(t39, t45, t41, t35);
    t68 = (1U * t66);
    t69 = (0 + t68);
    t31 = (t24 + t69);
    *((unsigned char *)t31) = t55;

LAB9:
LAB6:    if (t35 == t36)
        goto LAB7;

LAB18:    t11 = (t35 + t30);
    t35 = t11;
    goto LAB4;

LAB8:    t47 = (t4 + 0U);
    t48 = *((int *)t47);
    t49 = (t4 + 8U);
    t50 = *((int *)t49);
    t51 = (t35 - t48);
    t19 = (t51 * t50);
    t52 = (1U * t19);
    t53 = (0 + t52);
    t54 = (t3 + t53);
    t55 = *((unsigned char *)t54);
    t56 = (t17 + 56U);
    t57 = *((char **)t56);
    t56 = (t9 + 0U);
    t58 = *((int *)t56);
    t59 = (t9 + 8U);
    t60 = *((int *)t59);
    t61 = (t35 - t58);
    t62 = (t61 * t60);
    t63 = (t9 + 4U);
    t64 = *((int *)t63);
    xsi_vhdl_check_range_of_index(t58, t64, t60, t35);
    t65 = (1U * t62);
    t66 = (0 + t65);
    t67 = (t57 + t66);
    *((unsigned char *)t67) = t55;
    goto LAB9;

LAB11:    if (t45 == 1)
        goto LAB14;

LAB15:    t39 = t41;
    goto LAB13;

LAB14:    t39 = t43;
    goto LAB13;

LAB16:    t39 = t41;
    goto LAB13;

LAB19:;
}

static void work_a_2573749578_3212880686_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(32, ng1);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 4516U);
    t4 = work_a_2573749578_3212880686_sub_4093521436_3057020925(t0, t1, t3, t2);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (8U != t6);
    if (t7 == 1)
        goto LAB2;

LAB3:    t8 = (t0 + 2872);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 8U);
    xsi_driver_first_trans_fast_port(t8);
    t2 = (t0 + 2792);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(8U, t6, 0);
    goto LAB3;

}


extern void work_a_2573749578_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2573749578_3212880686_p_0};
	static char *se[] = {(void *)work_a_2573749578_3212880686_sub_4093521436_3057020925};
	xsi_register_didat("work_a_2573749578_3212880686", "isim/BinToGray_tb_isim_beh.exe.sim/work/a_2573749578_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
