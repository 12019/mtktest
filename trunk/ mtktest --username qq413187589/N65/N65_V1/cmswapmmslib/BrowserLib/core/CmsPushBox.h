/*==============================================================

 C   H E A D E R   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2004
 ALL RIGHTS RESERVED

==============================================================

��������		: mBrowser Ver3.3
 
�ļ���			: CmsBRPUSH.h

��������		: WAP PUSHģ�鹦�ܼ��ӿں�������

����޸�ʱ��	: 10/17/2003
 
�����д��Ա	: �ֺ���

==============================================================*/

#ifndef CMSBRPUSH_H
#define CMSBRPUSH_H

/*======================== ����ͷ�ļ� ======================*/

#include "CmsBrowserPublic.h"

/*========================= �������� =======================*/

CMS_BROWSER_VOID CmsBRFreeSILPUSH(P_CMS_ALL_PUSH pPUSH);
CMS_BROWSER_VOID CmsBRFreePUSH(P_CMS_BROWSER_PUSH pPUSH);
P_CMS_BROWSER_PUSH CmsBRAccessNewPUSH(P_CMS_BROWSER_U8 smsmessage, CMS_BROWSER_U32 smslen);
CMS_BROWSER_RET Cms_Browser_Push(P_CMS_BROWSER_PUSH inPush);

P_CMS_BROWSER_U8 Cms_Browser_GetPUSHTitleById(CMS_BROWSER_U32 inputid);
CMS_BROWSER_BOOL Cms_Browser_DownloadPUSHContent(CMS_BROWSER_U32 PUSHid);
CMS_BROWSER_BOOL Cms_Browser_GetPUSHDownloadInfo(CMS_BROWSER_U32 id);
CMS_BROWSER_VOID Cms_Browser_SetPUSHDownloadInfo(CMS_BROWSER_U32 id, CMS_BROWSER_BOOL downloaded);
CMS_BROWSER_U32 CmsBrowserGetUnreadPushMessageNum(P_CMS_BROWSER_U8 tempcontent, CMS_BROWSER_S64 filelength);
CMS_BROWSER_VOID Cms_Browser_DeletePUSHInfo(CMS_BROWSER_U32 id);
CMS_BROWSER_VOID Cms_Browser_DeleteAllPUSHInfo(CMS_BROWSER_VOID);
CMS_BROWSER_VOID Cms_Browser_GetPUSHFromFile(CMS_BROWSER_VOID);
CMS_BROWSER_VOID Cms_Browser_SavePUSH(CMS_BROWSER_VOID);
CMS_BROWSER_VOID Cms_Browser_FreePUSHInfo(CMS_BROWSER_VOID);
CMS_BROWSER_U32 Cms_Browser_GetPushTypeByID(CMS_BROWSER_U32 inputid);
P_CMS_BROWSER_U8 Cms_Browser_GetPushGatewayById(CMS_BROWSER_U32 inputid);
P_CMS_BROWSER_U8 Cms_Browser_GetPushPortById(CMS_BROWSER_U32 inputid);
#endif
