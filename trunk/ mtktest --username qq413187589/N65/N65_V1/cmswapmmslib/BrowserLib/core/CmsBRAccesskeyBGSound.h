/*================================================================

 C   H E A D E R   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2004
 ALL RIGHTS RESERVED

================================================================

��������		: mBrowser Ver3.3
 
�ļ���			: CmsBRAccesskeyBGSound.h

��������		: Accesskey��BGSoundģ��ӿڶ���

����޸�ʱ��	: 11/5/2003
 
�����д��Ա	: �ֺ���

================================================================*/

#ifndef CMSBRACCESSKEYBGSOUND_H
#define CMSBRACCESSKEYBGSOUND_H

/*======================== ����ͷ�ļ� ======================*/

#include "CmsBrowserPublic.h"

/*========================= �������� =======================*/

CMS_BROWSER_BOOL Cms_Browser_InsertAccessKey(P_CMS_BROWSER_U8 pKey, m_Element pElement);
CMS_BROWSER_VOID Cms_Browser_DeleteAccessKey(CMS_BROWSER_VOID);
CMS_BROWSER_VOID Cms_Browser_GetAccessKey(m_Element pElement);
m_Element Cms_Browser_CheckAccessKey(P_CMS_BROWSER_U8 pKey);
CMS_BROWSER_BOOL Cms_Browser_AccessSelectKey(P_CMS_BROWSER_U8 pKey);
CMS_BROWSER_BOOL Cms_Browser_AccessKey(P_CMS_BROWSER_U8 pKey);
CMS_BROWSER_RET Cms_Browser_LayoutBGSound(m_Element pElement);
CMS_BROWSER_VOID Cms_Browser_ClearBGSound(CMS_BROWSER_VOID);
CMS_BROWSER_VOID Cms_Browser_SaveBGSound(CMS_BROWSER_VOID);
CMS_BROWSER_VOID Cms_Browser_PlayBGSound(CMS_BROWSER_VOID);
CMS_BROWSER_VOID Cms_Browser_StopBGSound(CMS_BROWSER_VOID);

#endif









