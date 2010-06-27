/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2004
 ALL RIGHTS RESERVED

================================================================

��������		: WAP2.0 HTTP STACK
 
�ļ���			: AuthenticationManager.h

��������		: �ṩHTTP������֤�ӿ�

����޸�ʱ��	: 10/7/2004
 
�����д��Ա	: Li Shouming;shoumingl@mobilesoft.com.cn

================================================================*/
#ifndef _AUTHENTICATIONMANAGER_H
#define _AUTHENTICATIONMANAGER_H

#include "Cms_WHTTPVariable.h"
#include "BasicAuthenticate.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum 
{
	NULL_TYPE = -1,
	WWW_AUTHENTICATION ,
	PROXY_AUTHENTICAION
} Authenticate_Type_e;

typedef enum 
{
	NULL_SCHEME = -1,
	BASIC ,
	DIGEST
} Authentication_Scheme_e;

typedef struct 
{
	Authentication_Scheme_e proxy_scheme;
	Authentication_Scheme_e www_scheme;
	CMS_BOOL needProxyAuthen;
	CMS_BOOL needWWWAuthen;
	char	*saveResponseInfo;//����ֻ�ǰ�ͷ��֤ͷ���ֵ����
	char    inputUserName[30] ;
	char    inputUserPassword[30];
} AUTHENTICATE_INFO;

extern CMS_BOOL Cms_Authentication_GetInputParam(const unsigned char *userid,\
										  const unsigned char *password);
extern unsigned char * getAuthorizaionHeader(Authenticate_Type_e au_type);
extern void initAuthenticationManager(void);
extern void destroyAuthenticationManager(void);
extern CMS_BOOL getIfNeedProxyAuthen(void);
extern CMS_BOOL getIfNeedWWWAuthen(void);
#ifdef __cplusplus
};
#endif

#endif
