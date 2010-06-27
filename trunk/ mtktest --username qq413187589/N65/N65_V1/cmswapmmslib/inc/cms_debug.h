/************************************************************************* 
 * Copyright (c) 2000-2003 MobileSoft Corporation All Rights Reserved.	
 * ��  �ڣ�  2004-7-22   	
 * ��  �ߣ�  ����; yongt@mobilesoft.com.cn    	    	
 * ��  ����  cms_debug.h 	
 * ��  ����	���Ժ�������
 ************************************************************************/

#ifndef _CMS_DEBUG_H
#define _CMS_DEBUG_H

#include "CmsPlatFormCFG.h"

/***************************************************************************** 
* �汾������غ궨��
*****************************************************************************/
/*
1.�ͻ���Ŀǰ�ڿ������趨UA,��ʱΪDEBUG�汾,����CMS_DEBUG_VERSION
2.��ʽ�汾����,����CMS_CUSTOM_UA ͬʱ�ر�CMS_DEBUG_VERSION	(����������Ŀ)
3.��Ŀά����,�ͻ������޸�UA.�ر�CMS_CUSTOM_UA��CMS_DEBUG_VERSION
4.Ŀ��汾TRACE ����ΪCMS_TARGET_TRACE
5.������Ű淽ʽ��ΪCMS_FOCUS_LOOP
*/
//#define CMS_DEBUG_VERSION 	/*DEBUG�汾,�����������ʾ����Ͳ�����Ч��*/
#define CMS_CUSTOM_UA		/*Custom �趨UA	*/
#define CMS_TARGET_TRACE	/*Ŀ��汾TRACE����*/

#define CMS_FOCUS_LOOP 	/*����ѭ������*/
//#define NO_SUPPORT_JAVA	/*��֧��JAVA����*/



/***************************************************************************** 
* TRACE ��غ���
*****************************************************************************/
void _cms_trace(char* str,...);
void _cms_trace_data(unsigned char *data, int datalen);
void mms_Tracer(char *);


#ifdef WIN32

void cms_clear_trace( void );


	#ifdef CMS_TARGET_TRACE
		/* WIN32ƽ̨��ʾtrace��Ϣ */
		#define cms_trace	_cms_trace
		//#define cms_trace_data	_cms_trace_data
		#define cms_trace_data
	#else
		/* Ŀ��ƽ̨�ر�trace��Ϣ */
		#define cms_trace
		#define cms_trace_data


	#endif	


#else

	#ifdef CMS_TARGET_TRACE
		/* Ŀ��ƽ̨��ʾtrace��Ϣ */
		#define cms_trace	_cms_trace
		#define cms_trace_data	//_cms_trace_data

	#else
		/* Ŀ��ƽ̨�ر�trace��Ϣ */
		#define cms_trace
		#define cms_trace_data
		#define Cms_Browser_Assert(expression, str) 
		#define Cms_Browser_ClearAssertInfo()

	#endif	

#endif


#endif /*_CMS_DEBUG_H*/
