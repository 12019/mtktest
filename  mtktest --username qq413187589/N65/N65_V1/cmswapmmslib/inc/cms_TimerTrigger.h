/*
 * Copyright (c) 2001,Mobilesoft Technology(Nanjing) Co.,LTD.
 * All rights reserved.
 * 
 * FileName    : cms_TimerTrigger.h
 * brief       : ��ʱ������ͷ�ļ�  
 * 
 * Version     : v1.0.0
 * Author      : palmsource
 * StartDate   : 2005/7/19
 * FinishDate  : 2005/7/19
 */
#ifndef CMS_TIMERTRIGER_H
#define CMS_TIMERTRIGER_H
#if 0
//20051007 cocoma xu modify for MTK
typedef enum
{	
	WML_TIMER = 0,			/*=== 0: WMLҳ�涨ʱ�� ===*/
	GIF_TIMER,  			/*=== 1: GIF��ʱ��     ===*/
	WTP_TIMER,              /*=== 2: WTP��ʱ��     ===*/
	HTTP_TIMER,             /*=== 3: HTTP��ʱ��     ===*/
	MARQUEE_TIMER,          /*=== 4: ����ƶ�ʱ��  ===*/ //  Modified by TIPrj[2005/8/30]
	TIMER_COUNT
}TIMER_TYPE;

int		Cms_StartTimer  (TIMER_TYPE timerType, int timeId,  unsigned short millsec, int loop );
void    Cms_StopTimer   (int timerID);
void    TimerList_Clear (void);
int     TimerList_Empty (void);
#endif //xiaoyongq 20051007
#endif // end CMS_TIMERTRIGER_H
