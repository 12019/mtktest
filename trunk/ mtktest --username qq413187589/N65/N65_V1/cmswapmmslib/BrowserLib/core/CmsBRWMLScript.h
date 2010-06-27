/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2004
 ALL RIGHTS RESERVED

================================================================

��������		: mBrowser Ver3.3
 
�ļ���			: CmsBRWMLScript.h

��������		: ����ģ�鹦�ܼ��ӿں�������

����޸�ʱ��	: 11/5/2003
 
�����д��Ա	: �ֺ���

================================================================*/

#ifndef CMSBRWMLSCRIPT_H
#define CMSBRWMLSCRIPT_H

/*======================== ����ͷ�ļ� ======================*/

#include "CmsBrowserPublic.h"



/*========================= �������� =======================*/

CMS_BROWSER_BOOL CmsBRInitWMLScript(CMS_BROWSER_VOID);

CMS_BROWSER_U32 CmsBRLoadWMLScript(P_CMS_BROWSER_U8 pURL, 
									P_CMS_BROWSER_U8 pBC, 
									CMS_BROWSER_U32 BCLen);

CMS_BROWSER_VOID CmsBRReleaseWMLScript(CMS_BROWSER_VOID);
CMS_BROWSER_BOOL CmsBRRunWMLScript(P_CMS_BROWSER_U8 pFunction);
void WB_SetWMLStatus( void );

CMS_BROWSER_VOID CmsBRWMLScriptEvent(P_CMS_BROWSER_U8 pURL, 
									P_CMS_BROWSER_U8 pBC, 
									CMS_BROWSER_U32 BCLen,
									unsigned char   content_type,
									P_CMS_BROWSER_U8 pFunction);/* content_type 0: bin; 1:text */

#endif
