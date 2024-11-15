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
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_3273497107_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3410769178_1035706684(char *, char *, char *, char *, int );


void work_p_0897173179_sub_3957801684_717354782(char *t0, char *t1, char *t2, char *t3, char *t4, char *t5, unsigned char t6, char *t7, char *t8, char *t9)
{
    char t10[128];
    char t11[64];
    char t16[16];
    char t39[16];
    char t40[16];
    char t41[16];
    char t45[16];
    char t52[16];
    char *t12;
    unsigned int t13;
    int t14;
    unsigned int t15;
    char *t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t42;
    int t43;
    char *t44;
    char *t46;
    unsigned int t47;
    int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;

LAB0:    t12 = (t3 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (0 - t13);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t15 = (t15 * 1U);
    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t16 + 0U);
    t20 = (t19 + 0U);
    *((unsigned int *)t20) = t18;
    t20 = (t19 + 4U);
    *((int *)t20) = 0;
    t20 = (t19 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t18);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 4U);
    t23 = ((IEEE_P_1242562249) + 3112);
    t24 = (t20 + 88U);
    *((char **)t24) = t23;
    t25 = (char *)alloca(t15);
    t26 = (t20 + 56U);
    *((char **)t26) = t25;
    xsi_type_set_default_value(t23, t25, t16);
    t27 = (t20 + 64U);
    *((char **)t27) = t16;
    t28 = (t20 + 80U);
    *((unsigned int *)t28) = t15;
    t29 = (t11 + 4U);
    t30 = (t2 != 0);
    if (t30 == 1)
        goto LAB3;

LAB2:    t31 = (t11 + 12U);
    *((char **)t31) = t3;
    t32 = (t11 + 20U);
    t33 = (t4 != 0);
    if (t33 == 1)
        goto LAB5;

LAB4:    t34 = (t11 + 28U);
    *((char **)t34) = t5;
    t35 = (t11 + 36U);
    *((unsigned char *)t35) = t6;
    t36 = (t11 + 37U);
    *((char **)t36) = t7;
    t37 = (t11 + 45U);
    *((char **)t37) = t8;
    t38 = (t11 + 53U);
    *((char **)t38) = t9;
    t42 = (t3 + 12U);
    t22 = *((unsigned int *)t42);
    t43 = (t22 + 1);
    t44 = ieee_p_1242562249_sub_3410769178_1035706684(IEEE_P_1242562249, t41, t2, t3, t43);
    t46 = (t5 + 12U);
    t47 = *((unsigned int *)t46);
    t48 = (t47 + 1);
    t49 = ieee_p_1242562249_sub_3410769178_1035706684(IEEE_P_1242562249, t45, t4, t5, t48);
    t50 = ieee_p_1242562249_sub_3273497107_1035706684(IEEE_P_1242562249, t40, t44, t41, t49, t45);
    t53 = ((IEEE_P_1242562249) + 3112);
    t51 = xsi_base_array_concat(t51, t52, t53, (char)99, (unsigned char)2, (char)99, t6, (char)101);
    t54 = ieee_p_1242562249_sub_3273497107_1035706684(IEEE_P_1242562249, t39, t50, t40, t51, t52);
    t55 = (t20 + 56U);
    t56 = *((char **)t55);
    t55 = (t56 + 0);
    t57 = (t39 + 12U);
    t58 = *((unsigned int *)t57);
    t59 = (1U * t58);
    memcpy(t55, t54, t59);
    t12 = (t20 + 56U);
    t17 = *((char **)t12);
    t12 = (t16 + 0U);
    t14 = *((int *)t12);
    t19 = (t3 + 12U);
    t13 = *((unsigned int *)t19);
    t21 = (t13 - 1);
    t15 = (t14 - t21);
    t23 = (t16 + 4U);
    t43 = *((int *)t23);
    t24 = (t16 + 8U);
    t48 = *((int *)t24);
    xsi_vhdl_check_range_of_slice(t14, t43, t48, t21, 0, -1);
    t18 = (t15 * 1U);
    t22 = (0 + t18);
    t26 = (t17 + t22);
    t27 = (t7 + 0);
    t28 = (t3 + 12U);
    t47 = *((unsigned int *)t28);
    t60 = (t47 - 1);
    t61 = (0 - t60);
    t58 = (t61 * -1);
    t58 = (t58 + 1);
    t59 = (1U * t58);
    memcpy(t27, t26, t59);
    t12 = (t20 + 56U);
    t17 = *((char **)t12);
    t12 = (t3 + 12U);
    t13 = *((unsigned int *)t12);
    t19 = (t16 + 0U);
    t14 = *((int *)t19);
    t23 = (t16 + 8U);
    t21 = *((int *)t23);
    t43 = (t13 - t14);
    t15 = (t43 * t21);
    t24 = (t16 + 4U);
    t48 = *((int *)t24);
    xsi_vhdl_check_range_of_index(t14, t48, t21, t13);
    t18 = (1U * t15);
    t22 = (0 + t18);
    t26 = (t17 + t22);
    t30 = *((unsigned char *)t26);
    t27 = (t9 + 0);
    *((unsigned char *)t27) = t30;

LAB1:    return;
LAB3:    *((char **)t29) = t2;
    goto LAB2;

LAB5:    *((char **)t32) = t4;
    goto LAB4;

}


extern void work_p_0897173179_init()
{
	static char *se[] = {(void *)work_p_0897173179_sub_3957801684_717354782};
	xsi_register_didat("work_p_0897173179", "isim/SignedAdder_tb_isim_beh.exe.sim/work/p_0897173179.didat");
	xsi_register_subprogram_executes(se);
}
