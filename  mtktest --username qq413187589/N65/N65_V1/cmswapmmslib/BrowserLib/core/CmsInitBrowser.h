/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2003
 ALL RIGHTS RESERVED

================================================================

工程名称		: mBrowser Ver3.3
 
文件名			: CmsInitBrowser.h

功能描述		: 初始化模块功能及接口函数定义

最近修改时间	: 11/5/2003
 
代码编写人员	: 乐海勇

================================================================*/

#ifndef CMSINITBROWSER_H
#define CMSINITBROWSER_H

/*======================== 公共头文件 ======================*/

#include "CmsBrowserPublic.h"

/*========================= 函数定义 =======================*/

CMS_BROWSER_VOID Cms_Browser_ExitEvent(CMS_BROWSER_VOID);
CMS_BROWSER_RET Cms_Browser_StartEvent(CMS_BROWSER_VOID);

CMS_BROWSER_BOOL Cms_Browser_UIClearPageHistory(CMS_BROWSER_VOID);
CMS_BROWSER_BOOL Cms_Browser_ClearCache(CMS_BROWSER_VOID);
void Cms_Broser_SetPushAccess(CMS_BROWSER_U32 access);
#endif
