/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2003
 ALL RIGHTS RESERVED

================================================================

��������		: mBrowser Ver3.3
 
�ļ���			: CmsWBMP.h

��������		: WBMP�����Ű�ģ�鹦�ܼ��ӿں�������

����޸�ʱ��	: 11/5/2003
 
�����д��Ա	: �ֺ���

================================================================*/

#ifndef CMSWBMP_H
#define CMSWBMP_H


/*======================== ����ͷ�ļ� ======================*/

#include "CmsBrowserPublic.h"

int CmsDrawWbmp( char *filename,int xPosition,int yPosition,int screenwidth);
CMS_BROWSER_RET Cms_Browser_GetWBMPDimensiont(P_CMS_BROWSER_U8 filename, /*CMS_BROWSER_U32 filelen,*/ P_CMS_BROWSER_U32 w, P_CMS_BROWSER_U32 h);

/*========================= �������� =======================*/

#endif
