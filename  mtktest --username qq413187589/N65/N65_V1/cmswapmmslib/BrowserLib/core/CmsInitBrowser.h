/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2003
 ALL RIGHTS RESERVED

================================================================

��������		: mBrowser Ver3.3
 
�ļ���			: CmsInitBrowser.h

��������		: ��ʼ��ģ�鹦�ܼ��ӿں�������

����޸�ʱ��	: 11/5/2003
 
�����д��Ա	: �ֺ���

================================================================*/

#ifndef CMSINITBROWSER_H
#define CMSINITBROWSER_H

/*======================== ����ͷ�ļ� ======================*/

#include "CmsBrowserPublic.h"

/*========================= �������� =======================*/

CMS_BROWSER_VOID Cms_Browser_ExitEvent(CMS_BROWSER_VOID);
CMS_BROWSER_RET Cms_Browser_StartEvent(CMS_BROWSER_VOID);

CMS_BROWSER_BOOL Cms_Browser_UIClearPageHistory(CMS_BROWSER_VOID);
CMS_BROWSER_BOOL Cms_Browser_ClearCache(CMS_BROWSER_VOID);
void Cms_Broser_SetPushAccess(CMS_BROWSER_U32 access);
#endif
