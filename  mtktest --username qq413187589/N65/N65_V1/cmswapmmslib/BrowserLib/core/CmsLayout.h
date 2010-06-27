/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2003
 ALL RIGHTS RESERVED

================================================================

��������		: mBrowser Ver3.3
 
�ļ���			: CmsLayout.h

��������		: �Ű�ģ�鹦�ܼ��ӿں�������

����޸�ʱ��	: 11/5/2003
 
�����д��Ա	: �ֺ���

================================================================*/

#ifndef CMSLAYOUT_H
#define CMSLAYOUT_H

/*======================== ����ͷ�ļ� ======================*/

#include "CmsBrowserPublic.h"

/*========================= �������� =======================*/

#ifdef	SUPPORT_WML	
CMS_BROWSER_RET	Cms_DrawWmlEvent(CMS_BROWSER_VOID);
CMS_BROWSER_RET Cms_DrawSingalWmlEvent(EventlistPtr WmlEvent, CMS_BROWSER_U8 mark);
#endif  

CMS_BROWSER_RET Cms_Browser_LayoutEvent(CMS_BROWSER_VOID);
CMS_BROWSER_RET Cms_Browser_DrawEvent(CMS_BROWSER_VOID);
CMS_BROWSER_BOOL Cms_Browser_PageOver(CMS_BROWSER_VOID);
CMS_BROWSER_BOOL Cms_Browser_TimerExpireEvent(CMS_BROWSER_U32 timeid);
P_CMS_BROWSER_U8 Cms_Browser_GetDLFileTitle(CMS_BROWSER_VOID);

void IncreaseFileNum( void );
int GetFileNum( void );

#endif
