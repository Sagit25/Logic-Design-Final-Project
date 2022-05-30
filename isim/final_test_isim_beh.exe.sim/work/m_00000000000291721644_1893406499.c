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
static const char *ng0 = "C:/Users/chowd/Downloads/Final_Project/Final_Project/hex7Segment.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {126U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {48U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {109U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {121U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {51U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {91U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {95U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {112U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {127U, 0U};
static unsigned int ng19[] = {9U, 0U};
static unsigned int ng20[] = {123U, 0U};
static unsigned int ng21[] = {10U, 0U};
static unsigned int ng22[] = {119U, 0U};
static unsigned int ng23[] = {11U, 0U};
static unsigned int ng24[] = {31U, 0U};
static unsigned int ng25[] = {12U, 0U};
static unsigned int ng26[] = {78U, 0U};
static unsigned int ng27[] = {13U, 0U};
static unsigned int ng28[] = {61U, 0U};
static unsigned int ng29[] = {14U, 0U};
static unsigned int ng30[] = {79U, 0U};
static unsigned int ng31[] = {15U, 0U};
static unsigned int ng32[] = {71U, 0U};



static void Cont_28_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1608);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1768);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t3, 14, 14, 2U, t8, 7, t5, 7);
    t9 = (t0 + 3352);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 16383U;
    t15 = t14;
    t16 = (t3 + 4);
    t17 = *((unsigned int *)t3);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t16);
    t15 = (t15 & t18);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t14);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 | t15);
    xsi_driver_vfirst_trans(t9, 0, 13);
    t22 = (t0 + 3256);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Always_30_1(char *t0)
{
    char t4[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3272);
    *((int *)t2) = 1;
    t3 = (t0 + 2968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 4);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t14, 4);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng19)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng21)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng23)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng25)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng27)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng29)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng31)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t18 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t18) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t12 & 15U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 15U);

LAB40:    t6 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 4, t6, 4);
    if (t15 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 4, t2, 4);
    if (t15 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 4, t2, 4);
    if (t15 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 4, t2, 4);
    if (t15 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 4, t2, 4);
    if (t15 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 4, t2, 4);
    if (t15 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 4, t2, 4);
    if (t15 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 4, t2, 4);
    if (t15 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 4, t2, 4);
    if (t15 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng19)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 4, t2, 4);
    if (t15 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng21)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 4, t2, 4);
    if (t15 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng23)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 4, t2, 4);
    if (t15 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng25)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 4, t2, 4);
    if (t15 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng27)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 4, t2, 4);
    if (t15 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng29)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 4, t2, 4);
    if (t15 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng31)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 4, t2, 4);
    if (t15 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 1768);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 7);
    goto LAB39;

LAB9:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB39;

LAB11:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB39;

LAB13:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB39;

LAB15:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB39;

LAB17:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB39;

LAB19:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB39;

LAB21:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB39;

LAB23:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB39;

LAB25:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB39;

LAB27:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB39;

LAB29:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB39;

LAB31:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng26)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB39;

LAB33:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng28)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB39;

LAB35:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng30)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB39;

LAB37:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng32)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB39;

LAB41:    xsi_set_current_line(50, ng0);
    t7 = ((char*)((ng2)));
    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 7);
    goto LAB73;

LAB43:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB45:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB47:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB49:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB51:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB53:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB55:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB57:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB59:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB61:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB63:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB65:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng26)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB67:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng28)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB69:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng30)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB71:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng32)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

}


extern void work_m_00000000000291721644_1893406499_init()
{
	static char *pe[] = {(void *)Cont_28_0,(void *)Always_30_1};
	xsi_register_didat("work_m_00000000000291721644_1893406499", "isim/final_test_isim_beh.exe.sim/work/m_00000000000291721644_1893406499.didat");
	xsi_register_executes(pe);
}
