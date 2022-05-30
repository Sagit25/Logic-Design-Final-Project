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
static const char *ng0 = "C:/Users/chowd/Downloads/Final_Project/Final_Project/Register.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static void Cont_43_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 5832);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_44_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6024);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 5848);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_45_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 5864);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_47_3(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5880);
    *((int *)t2) = 1;
    t3 = (t0 + 5544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t2) == 0)
        goto LAB10;

LAB12:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB13:    t5 = (t11 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(72, ng0);

LAB38:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);

LAB39:    t2 = ((char*)((ng1)));
    t19 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t19 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng2)));
    t19 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t19 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng3)));
    t19 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t19 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng4)));
    t19 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t19 == 1)
        goto LAB46;

LAB47:
LAB48:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);

LAB9:    xsi_set_current_line(50, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(58, ng0);

LAB17:    xsi_set_current_line(59, ng0);
    t17 = (t0 + 1528U);
    t18 = *((char **)t17);

LAB18:    t17 = ((char*)((ng1)));
    t19 = xsi_vlog_unsigned_case_compare(t18, 2, t17, 2);
    if (t19 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng2)));
    t19 = xsi_vlog_unsigned_case_compare(t18, 2, t2, 2);
    if (t19 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng3)));
    t19 = xsi_vlog_unsigned_case_compare(t18, 2, t2, 2);
    if (t19 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t19 = xsi_vlog_unsigned_case_compare(t18, 2, t2, 2);
    if (t19 == 1)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);

LAB28:    t2 = ((char*)((ng1)));
    t19 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t19 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng2)));
    t19 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t19 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng3)));
    t19 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t19 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng4)));
    t19 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t19 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB16;

LAB19:    xsi_set_current_line(60, ng0);
    t20 = (t0 + 2888);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 8, 0LL);
    goto LAB27;

LAB21:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 3048);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t17 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t17, t5, 0, 0, 8, 0LL);
    goto LAB27;

LAB23:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 3208);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t17 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t17, t5, 0, 0, 8, 0LL);
    goto LAB27;

LAB25:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 3368);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t17 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t17, t5, 0, 0, 8, 0LL);
    goto LAB27;

LAB29:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t17 = *((char **)t5);
    t20 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t20, t17, 0, 0, 8, 0LL);
    goto LAB37;

LAB31:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t17 = *((char **)t5);
    t20 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t20, t17, 0, 0, 8, 0LL);
    goto LAB37;

LAB33:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t17 = *((char **)t5);
    t20 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t20, t17, 0, 0, 8, 0LL);
    goto LAB37;

LAB35:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t17 = *((char **)t5);
    t20 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t20, t17, 0, 0, 8, 0LL);
    goto LAB37;

LAB40:    xsi_set_current_line(75, ng0);
    t5 = (t0 + 2008U);
    t17 = *((char **)t5);
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t17, 0, 0, 8, 0LL);
    goto LAB48;

LAB42:    xsi_set_current_line(76, ng0);
    t5 = (t0 + 2008U);
    t17 = *((char **)t5);
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t17, 0, 0, 8, 0LL);
    goto LAB48;

LAB44:    xsi_set_current_line(77, ng0);
    t5 = (t0 + 2008U);
    t17 = *((char **)t5);
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t17, 0, 0, 8, 0LL);
    goto LAB48;

LAB46:    xsi_set_current_line(78, ng0);
    t5 = (t0 + 2008U);
    t17 = *((char **)t5);
    t5 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t5, t17, 0, 0, 8, 0LL);
    goto LAB48;

}


extern void work_m_00000000002481219949_0273213086_init()
{
	static char *pe[] = {(void *)Cont_43_0,(void *)Cont_44_1,(void *)Cont_45_2,(void *)Always_47_3};
	xsi_register_didat("work_m_00000000002481219949_0273213086", "isim/Register_Test_isim_beh.exe.sim/work/m_00000000002481219949_0273213086.didat");
	xsi_register_executes(pe);
}
