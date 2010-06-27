/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2004
 ALL RIGHTS RESERVED

================================================================

��������		: WAP2.0 HTTP STACK
 
�ļ���			: Cms_WHTTPHeader.h

��������		: This module handles lists of callback funtions for generaring 
				  and parsing protocal headers

����޸�ʱ��	: 7/30/2004
 
�����д��Ա	: Li Shouming;shoumingl@mobilesoft.com.cn

================================================================*/
#ifndef _CMS_WHTTPHEADER_H
#define _CMS_WHTTPHEADER_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _HTTPCodingInf
{
	CMS_BOOL		CodingState;
	unsigned char	*outBuffer;
	int			resultLength;
} HTCodingInf;

typedef struct _HTTPResponseInf
{
	unsigned char * StatusLine;
	unsigned char * HeadField;
	unsigned char * EntityField;
} HTResponseInf;
/*extern P_CMS_CHAR HTNextField(&value);//������header struct��Ѱ��*/
extern int HTTPHeader_MIMEParse(Cms_BR_HttpData_Ptr pCallBackBuf);/*����Response Inf,��������������HTTPResponseInf��*/
extern int GetStatusCode(CMS_VOID);
extern CMS_VOID DealingKD2Headers(Cms_BR_HttpData_Ptr pCallBackBuf);

#ifdef __cplusplus
};
#endif

#endif