/************************************************************************* 
 * Copyright (c) 2000-2004 MobileSoft Corporation All Rights Reserved.	
 * ��  �ڣ�  2004-12-20   	
 * ��  �ߣ�  ����; yongt@mobilesoft.com.cn   
 * ��  ����  cmswtls.h 	    	
 * ��  ����  wtls����ͷ�ļ� 
 ************************************************************************/
#ifndef CMSWTLS_H_
#define CMSWTLS_H_

#ifdef _GPRS
	unsigned long CmsDial( void );
	void gprs_recv_pdu( void );
#endif

char wtls_init( void );
int	 CmsIsHandShakeOk( void );
void Cms_UDPToWtls(unsigned char *buf,int bytes);
unsigned char *CmsWtlsProcessSendData(unsigned char *data,int *len);
void Cms_WtlsSendUDP(unsigned char *buf, int len);
void Cms_WTLSShowInfomation(const char* strInfo);
void Cms_WTLSCleanBrwState(void);

#endif