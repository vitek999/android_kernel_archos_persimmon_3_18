/*
 * Generated by MTK SP DrvGen Version 03.13.6 for MT6735M. Copyright MediaTek Inc. (C) 2013.
 * Sat Jan 07 01:23:55 2017
 * Do Not Modify the File.
 */

#ifndef __CUST_CLK_BUF_H__
#define __CUST_CLK_BUF_H__
typedef enum{
	CLOCK_BUFFER_DISABLE,
	CLOCK_BUFFER_SW_CONTROL,
	CLOCK_BUFFER_HW_CONTROL
}MTK_CLK_BUF_STATUS;

typedef enum{
	CLK_BUF_DRIVING_CURR_0_4MA,
	CLK_BUF_DRIVING_CURR_0_9MA,
	CLK_BUF_DRIVING_CURR_1_4MA,
	CLK_BUF_DRIVING_CURR_1_9MA
}MTK_CLK_BUF_DRIVING_CURR;

#define CLK_BUF1_STATUS	CLOCK_BUFFER_HW_CONTROL
#define CLK_BUF2_STATUS	CLOCK_BUFFER_SW_CONTROL
#define CLK_BUF3_STATUS	CLOCK_BUFFER_SW_CONTROL
#define CLK_BUF4_STATUS	CLOCK_BUFFER_SW_CONTROL



#endif