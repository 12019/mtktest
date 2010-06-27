/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2003
 ALL RIGHTS RESERVED

================================================================

��������		: mBrowser Ver3.3
 
�ļ���			: CmsInputHistory.h

��������		: URL����ģ�鹦�ܼ��ӿں�������

����޸�ʱ��	: 11/5/2003
 
�����д��Ա	: �ֺ���

================================================================*/

#ifndef CMSINPUTHISTORY_H
#define CMSINPUTHISTORY_H

/*======================== ����ͷ�ļ� ======================*/

#include "CmsBrowserPublic.h"

/*========================= �������� =======================*/

CMS_BROWSER_RET Cms_Browser_ReadInputURIFromFile(CMS_BROWSER_VOID);
CMS_BROWSER_VOID Cms_Browser_FreeInputURL(CMS_BROWSER_VOID);
CMS_BROWSER_RET Cms_Browser_SaveInputURLToFile(CMS_BROWSER_VOID);
P_CMS_BROWSER_U8 *Cms_Browser_GetInputHistoryEvent(CMS_BROWSER_VOID);
P_CMS_BROWSER_U8 Cms_Browser_GetCurrentInputHistory(CMS_BROWSER_U32 inputid);
CMS_BROWSER_RET Cms_Browser_ModifyCurrentInputHistroy(CMS_BROWSER_U32 inputid, P_CMS_BROWSER_U8 newuri);
CMS_BROWSER_BOOL Cms_Browser_InputHistoryFull(CMS_BROWSER_VOID);
CMS_BROWSER_RET Cms_Browser_AddInputHistoryEvent(P_CMS_BROWSER_U8 newuri);
CMS_BROWSER_RET Cms_Browser_DeleteInputHistoryEvent(CMS_BROWSER_U32 ID);
CMS_BROWSER_VOID Cms_Browser_DeleteAllInputHistoryEvent(CMS_BROWSER_VOID);
CMS_BROWSER_RET Cms_Browser_LinkInputHistory(CMS_BROWSER_U32 ID);

#endif
