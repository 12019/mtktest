/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2003
 ALL RIGHTS RESERVED

================================================================

��������		: mBrowser Ver3.3
 
�ļ���			: CmsPendown.c

��������		: ����������ģ�鹦�ܼ��ӿں�������

����޸�ʱ��	: 11/5/2003
 
�����д��Ա	: �ֺ���

================================================================*/

#ifndef CMSPENDOWN_H
#define CMSPENDOWN_H

/*======================== ����ͷ�ļ� ======================*/

#include "CmsBrowserPublic.h"

/*========================= �������� =======================*/

CMS_BROWSER_RET Cms_Browser_PenDownEvent(CMS_BROWSER_U16 x, CMS_BROWSER_U16 y);
CMS_BROWSER_BOOL Cms_Browser_GetEditStyle(P_CMS_BROWSER_U32 pMaxlength);
P_CMS_BROWSER_U8 Cms_Browser_GetOriginParam(CMS_BROWSER_VOID);

/*=====================================================*/


#endif
