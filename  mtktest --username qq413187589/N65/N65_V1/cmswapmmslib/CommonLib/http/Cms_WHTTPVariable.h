/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2004
 ALL RIGHTS RESERVED

================================================================

��������		: WAP2.0 HTTP STACK
 
�ļ���			: Cms_WHTTPVariable.h

��������		: ���幤��ʹ�ñ�������

����޸�ʱ��	: 7/30/2004
 
�����д��Ա	: Li Shouming;shoumingl@mobilesoft.com.cn

================================================================*/
#ifndef _CMS_HTTPVARIABLE_H
#define _CMS_HTTPVARIABLE_H
#include "CmsHttp.h"
#include "cms_basedef.h"

#ifndef TI //  Modified by TIPrj[2005/6/29]
#ifdef __cplusplus
extern "C" {
#endif
#endif

#define CALLFUCERR			-1
#define CALLFUCSUC			0
#define MEMBERRY_ERRO		(int)7
#define NO_LEN_IN_RESPONSE  -2
#define PAGE_ERRO           -3
#define PARAM_ERRO		    -4
#define CONTENT_TOO_LONG    -5



#ifndef TI //  Modified by TIPrj[2005/6/29]
#ifdef __cplusplus
};
#endif
#endif

#endif