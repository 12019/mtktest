/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2004
 ALL RIGHTS RESERVED

================================================================

��������		: WAP2.0 HTTP STACK
 
�ļ���			:AuthenticationManager.c

��������		: �ṩHTTP������֤�ӿ�

����޸�ʱ��	: 10/7/2004
 
�����д��Ա	: Li Shouming;shoumingl@mobilesoft.com.cn

================================================================*/
#ifndef BASICAUTHENTICATE_H
#define BASICAUTHENTICATE_H

#include "AuthenticationManager.h"

#ifdef __cplusplus
extern "C" {
#endif

extern int EncodeBase64(const unsigned char* pSrc, char* pDst, int nSrcLen);


#ifdef __cplusplus
};
#endif

#endif