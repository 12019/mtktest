/*==============================================================

 C   H E A D E R   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2003
 ALL RIGHTS RESERVED

==============================================================

��������		: mBrowser Ver3.3
 
�ļ���			: CmsBookmark.h

��������		: ��ǩģ�鹦�ܼ��ӿں�������

����޸�ʱ��	: 10/17/2003
 
�����д��Ա	: �ֺ���

==============================================================*/

#ifndef CMSBOOKMARK_H
#define CMSBOOKMARK_H

/*======================== ����ͷ�ļ� ======================*/

#include "CmsBrowserPublic.h"

/*========================= �������� =======================*/

CMS_BROWSER_RET Cms_Browser_ReadBookmark(CMS_BROWSER_VOID);
CMS_BROWSER_RET Cms_Browser_SaveBookmark(CMS_BROWSER_VOID);
CMS_BROWSER_BOOL Cms_Browser_BookmarkFull(CMS_BROWSER_VOID);
CMS_BROWSER_RET Cms_Browser_GetBookmark(P_CMS_BROWSER_U8 **bookmarkcontent);
CMS_BROWSER_VOID cms_freeBookmark(CMS_BROWSER_VOID);
CMS_BROWSER_RET Cms_Browser_AddBookmark(P_CMS_BROWSER_U8 title);
CMS_BROWSER_RET Cms_Browser_NewBookmarkAdd(P_CMS_BROWSER_U8 title, P_CMS_BROWSER_U8 url);
CMS_BROWSER_RET Cms_Browser_DeleteBookmark(CMS_BROWSER_U32 ID);
CMS_BROWSER_RET Cms_Browser_LinkBookmark(CMS_BROWSER_U32 ID);
CMS_BROWSER_VOID Cms_Browser_DeleteAllBookmark(CMS_BROWSER_VOID);
CMS_BROWSER_RET Cms_Browser_GetBookmarkTitle(CMS_BROWSER_U32 ID, P_CMS_BROWSER_U8 title);
CMS_BROWSER_RET Cms_Browser_GetBookmarkURL(CMS_BROWSER_U32 ID, P_CMS_BROWSER_U8 url);
CMS_BROWSER_RET Cms_Browser_RenameBookmarkTitle(CMS_BROWSER_U32 ID, P_CMS_BROWSER_U8 newTitle);
CMS_BROWSER_RET Cms_Browser_EditBookmark(CMS_BROWSER_U32 ID, P_CMS_BROWSER_U8 newTitle,P_CMS_BROWSER_U8 newUrl);
P_CMS_BROWSER_U8 Cms_Browser_GetBookmarkTitleById(CMS_BROWSER_U32 inputid);
P_CMS_BROWSER_U8 Cms_Browser_GetBookmarkUrlById(CMS_BROWSER_U32 inputid);
#endif
