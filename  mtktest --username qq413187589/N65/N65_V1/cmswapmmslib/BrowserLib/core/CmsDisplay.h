/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2003
 ALL RIGHTS RESERVED

================================================================

��������		: mBrowser Ver3.3
 
�ļ���			: CmsDisplay.h

��������		: ��ʾ�����궨��

����޸�ʱ��	: 11/5/2003
 
�����д��Ա	: �ֺ���

================================================================*/

#ifndef CMSDISPLAY_H
#define CMSDISPLAY_H

#ifdef __cplusplus 
extern "C" {
#endif
/************************************************************************
��������
	************************************************************************/
	int Cms_GetSCREEN_W( void );
	int Cms_GetSCREEN_H( void );
	int Cms_GetTITLEHIGHT( void );
	int Cms_GetSTATUSBAR_H( void );
	int Cms_GetORIGIN_X( void );
	int Cms_GetSELECTHIGHT( void );
	int Cms_GetSCROLLBAR_W( void );
	unsigned int Cms_GetCharacterWidth(unsigned char font,unsigned short Utf16);

#ifdef __cplusplus 
}
#endif

/********************** MARCOS����λ��Ϊ���ص㣩 ****************************/

//#define		SCREEN_W			(Cms_GetSCREEN_W())//128					/*=== ��ʾ����� ===*/
//#define		SCREEN_H			(Cms_GetSCREEN_H())//160					/*=== ��ʾ���߶� ===*/

//#define		SCROLLBAR_W			(Cms_GetSCROLLBAR_W())//4					/*=== ��������� ===*/
//#define		STATUSBAR_W			SCREEN_W			/*=== ״̬����� ===*/
//#define		STATUSBAR_H			(Cms_GetSTATUSBAR_H())//24					/*=== ״̬���߶� ===*/

//#define		CMS_TITLEHIGHT		(Cms_GetTITLEHIGHT())//20					/*=== ����������������߶� ===*/
//#define		CMS_SELECTHIGHT		(Cms_GetSELECTHIGHT())//24					/*=== ������ײ�����ѡ�����߶� ===*/

//#define		ORIGIN_X_D			(Cms_GetORIGIN_X())//4					/*=== �������ʾ��ʼx���� ===*/
//#define		FONT_W				pBrowserInfo->font_w					/*=== �������ʾ����� ===*/

#define		SCREEN_W			pBrowserInfo->DisplayData->Display_Screen_W//128					/*=== ��ʾ����� ===*/
#define		SCREEN_H			pBrowserInfo->DisplayData->Display_Screen_H//160					/*=== ��ʾ���߶� ===*/

#define		SCROLLBAR_W			pBrowserInfo->DisplayData->Display_Scrollbar_W//4					/*=== ��������� ===*/
#define		STATUSBAR_W			pBrowserInfo->DisplayData->Display_Statusbar_W			/*=== ״̬����� ===*/
#define		STATUSBAR_H			pBrowserInfo->DisplayData->Display_Statusbar_H//24					/*=== ״̬���߶� ===*/

#define		CMS_TITLEHIGHT		pBrowserInfo->DisplayData->Display_Title_H//20					/*=== ����������������߶� ===*/
#define		CMS_SELECTHIGHT		pBrowserInfo->DisplayData->Display_Select_H//24					/*=== ������ײ�����ѡ�����߶� ===*/

#define		ORIGIN_X_D			pBrowserInfo->DisplayData->Display_Origin_X_D//4					/*=== �������ʾ��ʼx���� ===*/
#define		FONT_W				pBrowserInfo->DisplayData->Display_Font_W					/*=== �������ʾ����� ===*/


extern int  ORIGIN_X;
#define		ORIGIN_Y			(CMS_TITLEHIGHT)	/*=== �������ʾ��ʼy���� ===*/
#define		CMSFONT				0					/*=== �������ʾ���� ===*/
#define		CMSFONT_HEIGHT		(FONT_W*2)			/*=== �������ʾ����� ===*/
#define		LINE_HEIGHT			(CMSFONT_HEIGHT+6)	/*=== �������ʾ�и� ===*//*20051101 cocoma xu modify for bug 27553*/
#define		PAGEDISPLAY_W		(SCREEN_W-ORIGIN_X-SCROLLBAR_W)		/*=== �������ʾ����� ===*/
#define		PAGEDISPLAY_H		(SCREEN_H-ORIGIN_Y-CMS_SELECTHIGHT)	/*=== �������ʾ���߶� ===*/
//#define		PAGEDISPLAY_H		(SCREEN_H-ORIGIN_Y-CMS_SELECTHIGHT-7)	/*=== �������ʾ���߶� ===*/

#define		PAGEMOVE_LINE		1									/* �������ҳ��ʱ�����ƶ����� */

#define		SCREEN_LINE			(PAGEDISPLAY_H/LINE_HEIGHT)			/*=== �������ҳ��ʾ���� ===*/
#define		CHAR_W_NUM			(PAGEDISPLAY_W/FONT_W)				/*=== �����������ʾ���ַ��� ===*/
#define		DISPLAY_BOTTOM		(SCREEN_H - CMS_SELECTHIGHT)		/* ��ʾ���ײ� */
#define		DISPLAY_RIGHT		(SCREEN_W -SCROLLBAR_W)				/* ��ʾ���Ҳ� */
#define		BOTTOM_Y_POS		(ORIGIN_Y +  PAGEDISPLAY_H)			/*=== ��������� ===*/

#define		TAB_W				2					/*=== ���Ӽ�������ڸ�����ʾЧ�� ===*/
#define		CTRLRECHEIGHT		(CMSFONT_HEIGHT+LINE_HEIGHT)/2+1	/*=== �����߶� ===*/
#define		CTRLRECWIDTH		12								/*=== �������===*/

#define		CHECKBOXIMG_WIDTH	9					/*=== CHECKBOX���� ===*/
#define		CHECKBOXIMG_HEIGHT	12					/*=== CHECKBOX��߶� ===*/

#define		RADIOIMG_WIDTH		9					/*=== CHECKBOX���� ===*/
#define		RADIOIMG_HEIGHT		9					/*=== CHECKBOX��߶� ===*/

#define		OPTIONIMG_WIDTH		14					/*=== CHECKBOX���� ===*/
#define		OPTIONIMG_HEIGHT	16					/*=== CHECKBOX��߶� ===*/

#define		INPUT_W             74

#define		IMGERRIMG_WIDTH		16
#define		IMGERRIMG_HEIGHT	16

#define		SCROLLBAR_H			PAGEDISPLAY_H				/*=== �������߶� ===*/
#define		SCROLLBAR_X			(SCREEN_W - SCROLLBAR_W)	/*=== ��������ʼx���� ===*/
#define		SCROLLBAR_Y			PAGEDISPLAY_W				/*=== ��������ʼy���� ===*/

#define		STATUSBAR_X			0							/*=== ״̬����ʼx���� ===*/
#define		STATUSBAR_Y			(PAGEDISPLAY_H-STATUSBAR_H)	/*=== ״̬����ʼy���� ===*/

#define		STATUSTEXT_X		(STATUSBAR_X+2)		/*=== ״̬���ı���ʾ��ʼx���� ===*/
#define		STATUSTEXT_Y		(STATUSBAR_Y+1)		/*=== ״̬���ı���ʾ��ʼy���� ===*/

#define		MOVE_WIDTH			10					/*table�ƶ��Ŀ�� */

#define COLOR_BLACLK    0x00000000
#define COLOR_WHITE     0x00ffffff
#define COLOR_RED       0x000000ff
#define COLOR_YELLOW    0x0000ffff
#define COLOR_LIME      0x0000ff00    
#define COLOR_AQUA      0x00ffff00
#define COLOR_BLUE      0x00ff0000
#define COLOR_FUCHSIA   0x00ff00ff
#define COLOR_GRAY      0x00808080
#define COLOR_SILVER    0x00c0c0c0
#define COLOR_MAROON    0x00000080
#define COLOR_OLIVE     0x00008080
#define COLOR_GREEN     0x00008000
#define COLOR_TEAL      0x00808000
#define COLOR_NAVY      0x00800000
#define COLOR_PURPLE    0x00800080

#endif
