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
static const char *ng0 = "C:/Users/chowd/Downloads/Final_Project/Final_Project/Sign_Extend.v";
static int ng1[] = {6, 0};
static int ng2[] = {7, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};



static void Cont_9_0(char *t0)
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

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3192);
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
    t18 = (t0 + 3096);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_10_1(char *t0)
{
    char t4[8];
    char t8[8];
    char t17[8];
    char t18[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;

LAB0:    t1 = (t0 + 2776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 3112);
    *((int *)t2) = 1;
    t3 = (t0 + 2808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(11, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    xsi_vlog_mul_concat(t4, 6, 1, t5, 1U, t8, 1);
    t16 = (t0 + 1608);
    t20 = (t0 + 1608);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng2)));
    t24 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t17, t18, t19, ((int*)(t22)), 2, t23, 32, 1, t24, 32, 1);
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t18 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);
    t6 = (t0 + 1608);
    t7 = (t0 + 1608);
    t9 = (t7 + 72U);
    t16 = *((char **)t9);
    t20 = ((char*)((ng4)));
    t21 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t8, t17, t18, ((int*)(t16)), 2, t20, 32, 1, t21, 32, 1);
    t22 = (t8 + 4);
    t26 = *((unsigned int *)t22);
    t27 = (!(t26));
    t23 = (t17 + 4);
    t29 = *((unsigned int *)t23);
    t30 = (!(t29));
    t31 = (t27 && t30);
    t24 = (t18 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB8;

LAB9:    goto LAB2;

LAB6:    t36 = *((unsigned int *)t19);
    t37 = (t36 + 0);
    t38 = *((unsigned int *)t17);
    t39 = *((unsigned int *)t18);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t16, t4, t37, *((unsigned int *)t18), t41, 0LL);
    goto LAB7;

LAB8:    t36 = *((unsigned int *)t18);
    t37 = (t36 + 0);
    t38 = *((unsigned int *)t8);
    t39 = *((unsigned int *)t17);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t6, t4, t37, *((unsigned int *)t17), t41, 0LL);
    goto LAB9;

}


extern void work_m_00000000003011220351_1252407768_init()
{
	static char *pe[] = {(void *)Cont_9_0,(void *)Always_10_1};
	xsi_register_didat("work_m_00000000003011220351_1252407768", "isim/final_test_isim_beh.exe.sim/work/m_00000000003011220351_1252407768.didat");
	xsi_register_executes(pe);
}
