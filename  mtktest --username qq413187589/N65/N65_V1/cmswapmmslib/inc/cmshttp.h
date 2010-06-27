/************************************************************************* 
 * Copyright (c) 2000-2003 MobileSoft Corporation All Rights Reserved.	
 * ��  �ڣ�  2004-8-18   	
 * ��  �ߣ�  ����; yongt@mobilesoft.com.cn    	    	
 * ��  ����  cmshttp.h 	
 * ��  ����			  
 ************************************************************************/
#ifndef _CMSHTTP_H
#define _CMSHTTP_H

#ifdef __cplusplus
extern "C" {
#endif

#define CONTENT_FORWARD_YES  0// ����ת��
#define CONTENT_FORWARD_NO  1//������ת��
#define HTTP_METHOD_GET		0
#define HTTP_METHOD_POST	1
#define HTTP_METHOD_OPTIONS	2
#define HTTP_METHOD_HEAD	3
#define HTTP_METHOD_PUT		4
#define HTTP_METHOD_DELETE	5
#define HTTP_METHOD_TRACE	6
#define HTTP_METHOD_CONNECT 7
/*֧������ͨmFlash����*/
#define SUPPORT_ZIYITONG
/*http�ж�ʱ�����أ��رմ˺����𶯶�ʱ������*/
#define SUPPORT_HTTP_TIMER 

/*http��TLS ���أ��رմ˺�������TLS����*/
#define SUPPORT_HTTP_TLS

/*mmsHttp���Թ���*/
//#define TESTMMS

/*�����Ƿ���ccproxy*/	
//#define CCPROXY

#ifdef _D_DF
/*SYNCML ����*/
//#define SYNCML_SUPPORT
#endif

/*MULTI REQUEST LOCK,��򿪿���֧��һ�����Ӷ������*/
#define MULTI_REQUEST_SUPPORT

/* ö��http���� */
typedef enum 
{
	GET_METHOD		= 0x40,	/* get method */
	POST_METHOD		= 0x60,	/* post method */
	OPTIONS_METHOD	= 0X10,	/*options method*/
	HEAD_MEHTOD		= 0X20,	/*head method*/
	CONNECT_METHOD  = 0X90  /*CONNECT method*/

}Cms_BR_HttpMethod_e;

/* ö��url���ӷ�ʽ */
typedef enum 
{
	OUTLINE_URL = 1,	/* outline url */
	INLINE_URL	= 0		/* inline url */
}Cms_BR_Url_e;

typedef enum
{
	CODING_UTF8 = 0,    /* utf8����  */
	CODING_GB,			/* GB����    */
	CODING_8859_1,	    /* 88591���� */
	CODING_UNKNOW       /* δ֪����  */  //  Modified by TIPrj[2005/6/29]
	
} Cms_EncodingType_e;
	
/* �������Ӳ��� */
typedef struct _tagNetParam
{
	 char		*name;	/* �������� */
	 char		*value;	/* ������ֵ */
	struct _tagNetParam	*next;	/* ��һ������ */

}Cms_BR_NetParam_t, *Cms_BR_NetParam_Ptr;

/* ���ڶ���browserģ�⴫�ݸ�httpģ��Ľӿڲ��� */
typedef struct _tagHttpParam
{
	Cms_BR_HttpMethod_e	http_method;		/* http���� */
	
	Cms_BR_Url_e			url_type;		/* ��ǰrul����,�Ƿ�Ϊҳ������ */
	char				*http_url;		/* http��url���� */
	
	char					*param;			/* �����ַ��� */
	unsigned int			param_len;		/* �������� */
	
}Cms_BR_HttpPatam_t,*Cms_BR_HttpPatam_Ptr;
	
	
/*=== http�����ļ����Ͷ��� ===*/
typedef enum 
{
	CMS_HTTP_CONTENT_ML					= 0,				/*=== ������� ===*/
	CMS_HTTP_TEXT_PLAIN,									/*��ͨ�ı�����*/
	CMS_HTTP_CONTENT_CSS,								/*=====CSS=========*/
	CMS_HTTP_CONTENT_HTML,								/* text/html content type */
	
	CMS_HTTP_CONTENT_GIF					= 20,			/*=== GIF ===*/
	CMS_HTTP_CONTENT_JPEG,								/*=== JPEG ===*/
	CMS_HTTP_CONTENT_WBMP,								/*=== WBMP ===*/
	CMS_HTTP_CONTENT_BMP,								/*=== BMP ===*/
	CMS_HTTP_CONTENT_PNG,								/*=== PNG ===*/
	CMS_HTTP_CONTENT_IMAGE_ZDD,							/*Download descriptor*/
	CMS_HTTP_CONTENT_IMAGE_VIS,							/*�й�VIS�� mime type*/
	CMS_HTTP_CONTENT_IMAGE_DRM,							/*�й�drm�� mime type*/
	CMS_HTTP_CONTENT_IMAGE_BILL,						/*�Ʒ���Ϣ*/
	CMS_HTTP_CONTENT_IMAGE_STL,							/*״̬�ر�*/
	CMS_HTTP_CONTENT_CHAOTEX_CIM,						/*=== mFlash ===*/
	CMS_HTTP_CONTENT_DZD,								/*ѧϰ���μ�*/
	CMS_HTTP_CONTENT_IMAGE_KJJ,							/*Lenovo Kjj	*///chaozhu.zhou add for lenovo kjj
	
	CMS_HTTP_CONTENT_MIDI				= 50,			/*=== Midi ===*/
	CMS_HTTP_CONTENT_AMR,								/*=== ARM music ===*/
	CMS_HTTP_BROWSER_MUSIC_SMAF,
	CMS_HTTP_CONTENT_MP3,
	CMS_HTTP_CONTENT_MPEG4,
	CMS_HTTP_CONTENT_AAC,
	CMS_HTTP_CONTENT_WMA,
	CMS_HTTP_CONTENT_X_WAVE,							/*=== wave music ===*/
	CMS_HTTP_CONTENT_IMY,								/**/
	CMS_HTTP_CONTENT_3GP,								/**/	
	CMS_HTTP_CONTENT_GSX,		
	CMS_HTTP_CONTENT_FJAD				= 100,
	CMS_HTTP_CONTENT_FJAR,
	CMS_HTTP_CONTENT_WMLSCRIPT,							/*====wmlscript===*/
	CMS_HTTP_CONTENT_WMLSCRIPTC,						/*====wmlscriptc===*/
	
	CMS_HTTP_CONTENT_DRM_MESSAGE    	= 150,			/*=====DRM MESSAGE== =======*/
	CMS_HTTP_CONTENT_DRM_CONTENT,						/*=====DRM CONTENT== =======*/
	CMS_HTTP_CONTENT_DRM_RIGHTS_XML,					/*=====DRM  ��Ȩ�����ļ�== =======*/
	CMS_HTTP_CONTENT_DRM_RIGHTS_WBXML,				/*=====DRM  ��Ȩ�����ļ�����������== =======*/
	CMS_HTTP_CONTENT_DRM_XWAV,							/*=== audio/x-wav===*/
	
	CMS_HTTP_BROWER_SETTING_XML		= 200,			/*http provisioning xml doc*/
	CMS_HTTP_BROWER_SETTING_WBXML,						/*�����������XML�ļ�*/
	CMS_HTTP_BROWER_BOOKMARK_SETTING_XML,				/*��ǩ����XML*/
	CMS_HTTP_BROWER_BOOKMARK_SETTING_WBXML,			/*��ǩ������WBXML*/
	CMS_HTTP_BROWSER_SYNCML_XML,
	CMS_HTTP_BROWSER_SYNCML_WBXML,
	CMS_HTTP_CONTENT_MSVG,								/*=== Mobile SVG ===*/
	
	CMS_HTTP_OCTET_STREAM				= 252,			/*=== δ֪�����ļ�STREAM ===*/
	CMS_HTTP_CONTENT_DLING_FILE			= 253,			/*=== ����δ֪�����ļ� ===*/
	CMS_HTTP_CONTENT_DLING_IMG			= 254,			/*=== ����ͼƬ��� ===*/
	CMS_HTTP_CONTENT_DLFAILED			= 255			/*=== ����ʧ�ܵ��ļ� ===*/
	
}Cms_ContentType_e;

typedef enum
{
	HTTP_Continue				= 100,
	HTTP_Switching_Protocols	= 101,
	HTTP_OK						= 200,
	HTTP_Created				= 201,
	HTTP_Accepted				= 202,
	HTTP_Non_Authoritative		= 203,
	HTTP_No_Content				= 204,
	HTTP_Reset_Content			= 205,
	HTTP_Partial_Content		= 206,
	HTTP_Multiple_Choices		= 300,
	HTTP_Moved_Permanently		= 301,
	HTTP_Found					= 302,
	HTTP_See_Other				= 303,
	HTTP_Not_Modified			= 304,	
	HTTP_Use_Proxy				= 305,
	HTTP_Temporary_Redirect		= 307,
	HTTP_Bad_Request			= 400,
	HTTP_Unauthorized			= 401,
	HTTP_Payment_Required		= 402,
	HTTP_Forbidden				= 403,
	HTTP_Not_Found				= 404,
	HTTP_Method_Not_Allowed		= 405,
	HTTP_Not_Acceptable			= 406,
	HTTP_Proxy_Authentication_Required = 407,
	HTTP_Request_Timeout		= 408,
	HTTP_Conflict				= 409,
	HTTP_Gone					= 410,		
	HTTP_Length_Required		= 411,
	HTTP_Precondition_Failed	= 412,
	HTTP_Request_Entity_Too_Large = 413,
	HTTP_Request_URI_Too_Long	= 414,
	HTTP_Unsupported_Media_Type = 415,
	HTTP_Requested_Range_Not_Satisfiable = 416,
	HTTP_Expectation_Failed		= 417,
	HTTP_Internal_Server_Error	= 500,
	HTTP_Not_Implemented        = 501,
	HTTP_Bad_Gateway			= 502,
	HTTP_Service_Unavailable	= 503,
	HTTP_Gateway_Timeout		= 504,
	HTTP_HTTP_Version_Not_Supported = 505,

	/*����������response����ʧ�ܡ�
	��socket�յ�����Ϊ0��
	ҳ��̫����Ϊ��NODATA�¼�,
	ͳһ�ݽ��������һ������*/
	HTTP_NO_DATA	,			
	/*������æ�¼�,���ܵ������������������Ӳ���,DNS����ʧ��,������socket�쳣�ر�*/
	HTTP_CONNECT_SERVER_FAILED,
	/*��������ʱ�ر�*/
	HTTP_NO_SUCH_SERVER,
	/*�����ж�ʧ�ܣ�Ҳ����˵������������ɵ��쳣��û����������*/
	HTTP_DOWNLOADING_FAILED,
	/*��������GPRSʧ��*/
	HTTP_DIALING_FAILED,
	/*GPRS�쳣�Ͽ�ʧ��*/
	HTTP_GPRS_DISCONNECT,//�����������������ʱ�������¼�����
	/*TIMER OUT*/
	HTTP_TIMER_OUT,
	/*�ڴ��������ʧ��*/
	HTTP_MALLOC_FAILED,
	/*socketʧ��*/
	HTTP_FILE_TOO_LARGE,
	HTTP_SOCKET_ERRO,
	HTTP_GPRS_CONNECTION_DISAPPEAR,//��������û����������ʱ���������ߣ�������ʾ
	
	HTTP_NOT_SUPPORT_CONTENT_TYPE  //�������֧�ָ������ļ�������

} HTTP_state_code_e;

typedef enum 
{
	NORMAL_HTTP_TASK = 0,	//��ͨ����ҵ��
	WTA_HTTP_TASK,			//WTA����ҵ��
	PUSH_HTTP_TASK,			//PUSH����ҵ��
	SYNCML_HTTP_TASK,			//��������ҵ��
	MMS_HTTP_TASK				//����ҵ��
} httpTask_e;

//http cache response data struct
typedef enum
{
	CACHE_NULL = -1,
	CACHE_PUBLIC ,
	CACHE_PRIVATE ,
	CACHE_NO_CACHE,
	CACHE_NO_STORE,
	CACHE_NO_TRANSFORM,
	CACHE_MUST_REVALIDATE,
	CACHE_PROXY_REVALIDATE,
	CACHE_MAX_AGE,
	CACHE_S_MAXAGE

} CACHE_RESPONSE_DIRECTIVE_e;
typedef struct  
{
	CACHE_RESPONSE_DIRECTIVE_e cache_response_directive_e;
	int delta_seconds;//��cache_response_directive_eΪCACHE_MAX_AGE����CACHE_S_MAXAGE
							//ʱ���ܶ�ȡdelta_secondsֵ
} CACHE_RESPONSE_DIRECTIVE_s;


/* ���ڶ���httpģ�鷵�ص����� */
typedef struct _tagHttpData
{	
	Cms_ContentType_e	content_type;		/* http����content type */
	Cms_EncodingType_e    coding_type;      /* http����content �������� */	
	 int				content_len;		/* http���ݳ��� */
	 unsigned char		*content_buf;		/* http����buf */	 
	 HTTP_state_code_e	status_code;		/* server Ӧ��״̬*/	 
	 char				*backUrl;           /*����URL��ַ���ϲ����*/
	 CACHE_RESPONSE_DIRECTIVE_s cache_response_directive;/*����cache info*/
}Cms_BR_HttpData_t, *Cms_BR_HttpData_Ptr;


void Cms_BR_Access_HttpData( Cms_BR_HttpData_Ptr http_data );
typedef void (*Cms_BR_HttpCallBack_t)( Cms_BR_HttpData_Ptr http_data );

int DiscardHttpCurrentDownLoadTask(void);
extern char *getDownLoadContentType(void);
void ChangeUrlWithContentLocation(char *newurl);
#ifdef __cplusplus
};
#endif

#endif
