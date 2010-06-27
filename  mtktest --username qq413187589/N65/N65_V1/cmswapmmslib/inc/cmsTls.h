/************************************************************************* 
 * Copyright (c) 2000-2004 MobileSoft Corporation All Rights Reserved.	
 * ��  �ڣ�  2004-12-20   	
 * ��  �ߣ�  ���� , liangl@mobilesoft.com.cn
 * ��  ����  cmstls.h 	    	
 * ��  ����  tls����ͷ�ļ� 
 ************************************************************************/
 #ifndef __L_CMS_TLS_H__
 #define __L_CMS_TLS_H__

 #ifndef TI //  Modified by TIPrj[2005/6/29]
 #if defined( __cplusplus ) && __cplusplus
 extern "C" {
 #endif
 #endif

void		cms_SSL_SetBrwState		( void );
void		cms_SSL_CleanBrwState	( void );
void		cms_SSL_ShowInfomation	( const char* title , const char* strInfo );

void		cms_SSL_OnUserConfirmCert ( int bOK );

#ifndef TI //  Modified by TIPrj[2005/6/29]
#if defined( __cplusplus ) && __cplusplus
};
#endif
#endif

#endif