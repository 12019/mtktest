/*==============================================================

 C   H E A D E R   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2003
 ALL RIGHTS RESERVED

==============================================================

��������		: mBrowser Ver3.3
 
�ļ���			: CmsBrowserPublic.c

��������		: �ⲿ�������ݽṹ�Լ��궨��

����޸�ʱ��	: 10/17/2003
 
�����д��Ա	: �ֺ���

==============================================================*/

#ifndef CMSBROWSERPUBLIC_H
#define CMSBROWSERPUBLIC_H


#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#include "CmsDisplay.h"
#include "CmsBrowserReturn.h"



//  Modified by TIPrj[2005/6/29]

#ifndef MC_PCC_FILL_STRUCT1
#define MC_PCC_FILL_STRUCT1 unsigned:0; unsigned:8; unsigned:0;
#endif

#ifndef MC_PCC_FILL_STRUCT2
#define MC_PCC_FILL_STRUCT2 unsigned:0; unsigned:8; unsigned:8; unsigned:0;
#endif

#ifndef MC_PCC_FILL_STRUCT3
#define MC_PCC_FILL_STRUCT3 unsigned:0; unsigned:8; unsigned:8; unsigned:8; unsigned:0;
#endif

#define CMS_NOTOUCHPANNEL		/*=== ���������ֻ�һ��û�д�������Ŀ���豸������LINK_FOCUS�Ļ��� ===*/


/*
 *Relativly ,the show softkey interface is defined bellow.
 *CMS_BROWSER_VOID Cms_DisplaySoftKey(P_CMS_BROWSER_U8 pls, P_CMS_BROWSER_U8 Rls);
 */	 
typedef enum _CMS_BROWSER_STR_RESOURCE
{
	CMS_STR_RESOURCE_EMPTY, //NULL String
	CMS_STR_RESOURCE_BACK,	//"Back"||"����"
	CMS_STR_RESOURCE_RETRY,	//"Retry"||"����"
	CMS_STR_RESOURCE_LINK,	//"Link"||"����"
	CMS_STR_RESOURCE_EDIT,	//"Edit"||"�༭"
	CMS_STR_RESOURCE_SELECT,//"Select"||"ѡ��"
	CMS_STR_RESOURCE_CANCLE,//"Cancle"||"ȡ��"
	CMS_STR_RESOURCE_OK,	//"OK"||"ȷ��"
	CMS_STR_RESOURCE_EXIT,   //"EXIT"||"�˳�"
	/* ��Ӹ�����ʾ��Ϣ�ַ��� */
	CMS_STR_NO_SERVER,			//"No server"
	CMS_STR_NO_SUCH_SERVER,		//"No such server"
	CMS_STR_DIALING_FAILED,		//"Dialing failed"
	CMS_STR_CONNECTION_DISC,    //"Connection disconnected"
	CMS_STR_DIALING_CON_DISC,   //"Dialing connection is disconnected"
	CMS_STR_DOWN_RING_FAIL,     //"Download ring failed"
	CMS_STR_DATA_ERROR,             //"Data error"
	CMS_STR_SERVER_REJECT,          //"Server reject"
	CMS_STR_INVALID_ADDRESS,        //"Invalid address"
	CMS_STR_INVALID_URL,            //"Invalid url"
	CMS_STR_ERROR_PAGE,             //"Error page"
	CMS_STR_ERROR_PAGE_TRY,         //"Error page,please try later"
	
	CMS_STR_GETWAY_ERROR,           //"Gateway error"
	CMS_STR_GETWAY_NO_RES,          //"Gateway not response"
	CMS_STR_SERVER_ERROR,           //"Server error"
	CMS_STR_TIME_OUT,               //"Time out"
	CMS_STR_RES_TIME_OUT,           //"The server's response time out"
	CMS_STR_UNSUPPORT_FILE,         //"not support file"
	CMS_STR_UNSUPPORT_SORRY,        //"Sorry! Not support such file type%s%s"

	CMS_STR_SUBMIT,                 //"submit"
	CMS_STR_BUTTON,                 //"button"
	CMS_STR_RESET,                  //"reset"

	CMS_STR_SUBJECT,                //"Subject :"
	CMS_STR_ISSURER,                //"Issuer :"
	CMS_STR_VALID_NOTBEFORE,        //"Valid not before :"
	CMS_STR_VALID_NOTAFTER,         //"Valid not after :"
	CMS_STR_MD_ALGORITHMS,          //"MD algorithms : sha1\nDigest value :"
	CMS_STR_SIGN_ALGO,              //"Signature algorithms :"
	CMS_STR_SIGNATURE,              //"Signature :\n"

	CMS_STR_VALID_CERT,             //"valid security certificate"
	CMS_STR_INVALID_CERT,           //"invalid security certificate or unsupported certificate type"
	CMS_STR_UNTRUST_CERT,           //"this certificate cannot be verified up to a trusted certificateion authority"
	CMS_STR_REVOKED_CERT,           //"security certificate revoked"
	CMS_STR_EXPIER_CERT,            //"security certificate expired or not valid yet"
	CMS_STR_ERPURPOSE_CERT,         //"invalid security certificate purpose"
	CMS_STR_UNMACTH_CERT,           //"The name on the security certificate is invalid or does not match the name of the site"
	
	CMS_STR_UNKNOWN_ERROR,          //"unknown error"
	CMS_STR_CERT_WARNING_PROBLEM,   //"information you exchange with this site cannot be viewed or changed by others , however , there is a problem with the site's security certificate"
	
	CMS_STR_ENCRYPT_METHOD,         //"%s with %d bits encryption( High ) , RSA with %d bits exchange"
	CMS_STR_CERT_INFO,              //"security certificate info"
	
	CMS_STR_MALLOC_FAILED,          //"system malloc failed,exit please!"
	CMS_STR_NET_EXCEPTION,          //"Net exception, please exit browser"

	CMS_STR_BIG_FILE,               //"Big file"
	CMS_STR_BIG_FILE_TO_DOWN,       //"File is too big to download"

	CMS_STR_CON_SECURED,			//"Connection Secured"
	CMS_STR_CON_TO_SERVICE,			//"Connecting to service"
	CMS_STR_SECURED_CA,				//"Connecting in security to server,whether continue?"
									
	CMS_STR_DOWNLOADING_IMAGE,      //"Downloading(%d/%d)"
	CMS_STR_DOWNLOADIMG_OK			//"Download Finished"	
}CMS_BROWSER_STR_RESOURCE;

/*===============browser and GIF Timer ID definition====*/


/*=================== Message Macros ===================*/

#ifndef CMS_LINUX
#define CMS_MESSAGE_START_ID				0x0500		/*=== �������Ϣ����ʼֵ ===*/
#else
#define CMS_MESSAGE_START_ID				0	/*=== �������Ϣ����ʼֵ ===*/
#endif

#define CMS_MESSAGE_BROWSERINIT				CMS_MESSAGE_START_ID		/*=== �������ʼ����Ϣ ===*/
#define	CMS_MESSAGE_BROWSEREXIT				(CMS_MESSAGE_START_ID+1)	/*=== �˳��������Ϣ ===*/
#define CMS_MESSAGE_BROWSERNEWURI			(CMS_MESSAGE_START_ID+2)	/*=== �½�����������Ϣ ===*/
#define CMS_MESSAGE_BROWSERLOCAL			(CMS_MESSAGE_START_ID+3)	/*=== ��������ļ���Ϣ ===*/
#define CMS_MESSAGE_BROWSERSETHOMEPAGE		(CMS_MESSAGE_START_ID+4)	/*=== ������ҳ��Ϣ ===*/
#define CMS_MESSAGE_BROWSERLINKHOMEPAGE		(CMS_MESSAGE_START_ID+5)	/*=== �����ҳ��Ϣ ===*/
#define	CMS_MESSAGE_BROWSERSAVEASLOCAL		(CMS_MESSAGE_START_ID+6)	/*=== ���Ϊ�����ļ���Ϣ ===*/
#define	CMS_MESSAGE_BROWSERUPPAGE			(CMS_MESSAGE_START_ID+7)	/*=== �Ϸ�һҳ��Ϣ ===*/
#define CMS_MESSAGE_BROWSERDOWNPAGE			(CMS_MESSAGE_START_ID+8)	/*=== �·�һҳ��Ϣ ===*/
#define CMS_MESSAGE_BROWSERPENDOWN			(CMS_MESSAGE_START_ID+9)	/*=== �û������Ϣ ===*/
#define	CMS_MESSAGE_BROWSERPREVPAGE			(CMS_MESSAGE_START_ID+10)	/*=== ������Ϣ ===*/
#define CMS_MESSAGE_BROWSERNEXTPAGE			(CMS_MESSAGE_START_ID+11)	/*=== ǰ����Ϣ ===*/
#define CMS_MESSAGE_BROWSERREFRESHPAGE		(CMS_MESSAGE_START_ID+12)	/*=== ˢ����Ϣ ===*/
#define CMS_MESSAGE_BROWSERSTOPPAGE			(CMS_MESSAGE_START_ID+13)	/*=== ֹͣ��Ϣ ===*/
#define CMS_MESSAGE_BROWSERPARSER			(CMS_MESSAGE_START_ID+14)	/*=== ������Ϣ ===*/
#define CMS_MESSAGE_BROWSERLAYOUT			(CMS_MESSAGE_START_ID+15)	/*=== �Ű���Ϣ ===*/
#define CMS_MESSAGE_BROWSERDRAW				(CMS_MESSAGE_START_ID+16)	/*=== ��ʾ��Ϣ ===*/
#define CMS_MESSAGE_BROWSEREDITBOX			(CMS_MESSAGE_START_ID+17)	/*=== �༭����Ϣ ===*/
#define CMS_MESSAGE_BROWSEROPENNET			(CMS_MESSAGE_START_ID+18)	/*=== ��������������Ϣ ===*/
#define CMS_MESSAGE_BROWSEROPENNETSUCCESS	(CMS_MESSAGE_START_ID+19)	/*=== �����������ӳɹ���Ϣ ===*/
#define CMS_MESSAGE_BROWSEROPENNETFAILED	(CMS_MESSAGE_START_ID+20)	/*=== ������������ʧ����Ϣ ===*/
#define CMS_MESSAGE_BROWSERCLOSENET			(CMS_MESSAGE_START_ID+21)	/*=== �ر�����������Ϣ ===*/
#define CMS_MESSAGE_BROWSERCREATETCPSOCKET	(CMS_MESSAGE_START_ID+22)	/*=== ����TCP�׽�����Ϣ ===*/
#define CMS_MESSAGE_BROWSERCLOSETCPSOCKET	(CMS_MESSAGE_START_ID+23)	/*=== �ر�TCP�׽�����Ϣ ===*/
#define CMS_MESSAGE_BROWSERCREATEUDPSOCKET	(CMS_MESSAGE_START_ID+24)	/*=== ����UDP�׽�����Ϣ ===*/
#define CMS_MESSAGE_BROWSERCLOSEUDPSOCKET	(CMS_MESSAGE_START_ID+25)	/*=== �ر�UDP�׽�����Ϣ ===*/
#define CMS_MESSAGE_BROWSERGETHOST			(CMS_MESSAGE_START_ID+26)	/*=== ����������Ϣ ===*/
#define CMS_MESSAGE_BROWSERGETHOSTSUCCESS	(CMS_MESSAGE_START_ID+27)	/*=== ���������ɹ���Ϣ ===*/
#define CMS_MESSAGE_BROWSERGETHOSTFAILED	(CMS_MESSAGE_START_ID+28)	/*=== ��������ʧ����Ϣ ===*/
#define CMS_MESSAGE_BROWSERTCPCONNECT		(CMS_MESSAGE_START_ID+29)	/*=== ����SERVER��Ϣ ===*/
#define CMS_MESSAGE_BROWSERTCPCONNSUCCESS	(CMS_MESSAGE_START_ID+30)	/*=== ����SERVER�ɹ���Ϣ ===*/
#define CMS_MESSAGE_BROWSERTCPCONNFAILED	(CMS_MESSAGE_START_ID+31)	/*=== ����SERVERʧ����Ϣ ===*/
#define CMS_MESSAGE_BROWSERTCPSEND			(CMS_MESSAGE_START_ID+32)	/*=== TCP����������Ϣ ===*/
#define CMS_MESSAGE_BROWSERTCPRECV			(CMS_MESSAGE_START_ID+33)	/*=== TCP����������Ϣ ===*/
#define CMS_MESSAGE_BROWSERTCPRECVSUCCESS	(CMS_MESSAGE_START_ID+34)	/*=== TCP�������ݳɹ���Ϣ ===*/
#define CMS_MESSAGE_BROWSERTCPRECVFAILED	(CMS_MESSAGE_START_ID+35)	/*=== TCP��������ʧ����Ϣ ===*/
#define CMS_MESSAGE_BROWSERUDPSENDTO		(CMS_MESSAGE_START_ID+36)	/*=== UDP����������Ϣ ===*/
#define CMS_MESSAGE_BROWSERUDPRECVFROM		(CMS_MESSAGE_START_ID+37)	/*=== UDP����������Ϣ ===*/
#define CMS_MESSAGE_BROWSERRECVFROMSUCCESS	(CMS_MESSAGE_START_ID+38)	/*=== UDP�������ݳɹ���Ϣ ===*/
#define CMS_MESSAGE_BROWSERRECVFROMFAILED	(CMS_MESSAGE_START_ID+39)	/*=== UDP��������ʧ����Ϣ ===*/
#define CMS_MESSAGE_BROWSERNETWORKERROR		(CMS_MESSAGE_START_ID+40)	/*=== ���������Ϣ ===*/
#define CMS_MESSAGE_BROWSERMAILADDRESS		(CMS_MESSAGE_START_ID+41)	/*=== Email���� ===*/
#define CMS_MESSAGE_BROWSERCALLREQUEST		(CMS_MESSAGE_START_ID+42)	/*=== �绰�ӿ���Ϣ ===*/
#define CMS_MESSAGE_BROWSERSTOREPHONENUM	(CMS_MESSAGE_START_ID+43)	/*=== �绰����+����绰�� ===*/
#define CMS_MESSAGE_BROWSERJAVADOWNLOAD		(CMS_MESSAGE_START_ID+44)	/*=== JAR������Ϣ ===*/

#define CMS_MESSAGE_BROWSERLOCALPAGESAVE	(CMS_MESSAGE_START_ID+45)	/*=== ���汾��ҳ����Ϣ ===*/
#define CMS_MESSAGE_BROWSERLOCALPAGELOAD	(CMS_MESSAGE_START_ID+46)	/*=== װ�ر���ҳ����Ϣ ===*/
#define CMS_MESSAGE_BROWSERSAVEITEM			(CMS_MESSAGE_START_ID+47)	/*=== ����item��Ϣ ===*/

#define CMS_MESSAGE_BROWSERSOCCLOSESUCCESS		(CMS_MESSAGE_START_ID+50)	/*=== socket close success��Ϣ ===*/
#define CMS_MESSAGE_BROWSERSOCCLOSEFAIL			(CMS_MESSAGE_START_ID+51)	/*=== socket close fail��Ϣ ===*/
#define WAP_DATA_RECVED	                 				(CMS_MESSAGE_START_ID + 100)/*wap Э��ջ�����ݴ�����*/
#define CMS_MESSAGE_BROWSERPAGEDOWN 			(CMS_MESSAGE_START_ID + 101)
#define CMS_MESSAGE_BROWSERPAGEUP 				(CMS_MESSAGE_START_ID + 102)
#define CMS_MESSAGE_BROWSERTOUCHPENDOWN 		(CMS_MESSAGE_START_ID + 103)
#define CMS_MESSAGE_BROWSERTOUCHPENUP 			(CMS_MESSAGE_START_ID + 104)
#define CMS_MESSAGE_BROWSERDEVDEACTIVEATE		(CMS_MESSAGE_START_ID + 105)


/************************************************************************/
/* ������ͬ�������¼��Ĳ�ͬ��Դ                                         */
/************************************************************************/
#define	CMS_NEWURL_FROM_PAGE			0x80000000	/* ��ʾ�µ�urlҳ������    */
#define CMS_NEWURL_FROM_PAGE_IMG		0x40000000	/* ��ʾҳ��������ͼƬ��url*/

#define TEST_DOWNLOAD

/*=================== Basic Data types ===================*/

typedef unsigned char		CMS_BROWSER_U8;			/*=== unsigned 8 bit data  ===*/
typedef unsigned short		CMS_BROWSER_U16;		/*=== unsigned 16 bit data ===*/
typedef unsigned int		CMS_BROWSER_U32;		/*=== unsigned 32 bit data ===*/
typedef unsigned long		CMS_BROWSER_U64;		/*=== unsigned 64 bit data ===*/
typedef char			    CMS_BROWSER_S8;			/*=== signed 8 bit data  ===*/
typedef short	        	CMS_BROWSER_S16;		/*=== signed 16 bit data ===*/
typedef int		        	CMS_BROWSER_S32;		/*=== signed 32 bit data ===*/
typedef long	    		CMS_BROWSER_S64;		/*=== signed 64 bit data ===*/

#if 0	/* declaring a void parameter list with a typedef is nonstandard. */
typedef void				CMS_BROWSER_VOID;		/*=== void ===*/
#else
#define CMS_BROWSER_VOID	void
#endif

typedef CMS_BROWSER_U8 *	P_CMS_BROWSER_U8;
typedef CMS_BROWSER_U16 *	P_CMS_BROWSER_U16; 
typedef CMS_BROWSER_U32 *	P_CMS_BROWSER_U32;
typedef CMS_BROWSER_U64 *	P_CMS_BROWSER_U64;  
typedef CMS_BROWSER_S8 *	P_CMS_BROWSER_S8;
typedef CMS_BROWSER_S16 *	P_CMS_BROWSER_S16;  
typedef CMS_BROWSER_S32 *	P_CMS_BROWSER_S32; 
typedef CMS_BROWSER_S64 *	P_CMS_BROWSER_S64;
typedef CMS_BROWSER_VOID *	P_CMS_BROWSER_VOID;

typedef int CMS_BROWSER_BOOL;
#define CMS_BROWSER_FALSE 0
#define CMS_BROWSER_TRUE 1

typedef enum _CMS_BROWSER_LANGUAGE
{
	CMS_CHINESE,	
	CMS_ENGLISH	
}CMS_BROWSER_GUI_LANGUAGE;

/*=================== Special Data types ===================*/

typedef	int				CMS_BROWSER_FILEHANDLE;	/*=== �ļ���� ===  */

typedef CMS_BROWSER_S32 CMS_BROWSER_OS_TIMER;

#define CMS_BROWSER_INVALIDTIMER	8				/*=== ��Ч��ʱ�� ===*/
#define CMS_BROWSER_INVALIDTIMERID	8				/*=== ��Ч��ʱ��ID�� ===*/


typedef enum _CMS_FILE_OPENMODE
{
	CMS_FILE_READONLY = 0,	
	CMS_FILE_WRITEONLY,
	CMS_FILE_APPEND

}CMS_FILE_OPENMODE;
#ifndef CMS_SEEK_SET
#define CMS_SEEK_SET		0		/*=== �ļ���ʼλ�ñ�� ===*/
#endif
#ifndef CMS_SEEK_CUR
#define CMS_SEEK_CUR		1		/*=== �ļ���ǰλ�ñ�� ===*/
#endif
#ifndef CMS_SEEK_END
#define CMS_SEEK_END		2		/*=== �ļ���βλ�ñ�� === revised by shawn 2004.03.14*/
#endif
#ifndef CMS_EOF
#define	CMS_EOF				EOF		/*=== �����ļ���βʱ�ķ���ֵ ===*/
#endif



#define	CMS_BROWSER_INVALID_FILEHANDLE	0		/*=== ��Ч�ļ���� ===*/
#define CMS_BROWSER_INVALID_SOCKET	((CMS_BROWSER_SOCKET)(~0))	/*=== ��Ч�׽��ֺ� ===*/

#define CMS_MAX_PUSH   20		/*=== ���δ����PUSH��Ϣ�� ===*/
#define	CMS_MAX_SAVE	20		/*=== ���洢��ҳ���� ===*/
#define	MAXSTOREHISTORY	20      /* NECҪ���20�� */    /*10*/		/*=== ���洢����ʷ��¼ ===*/
#define	MAX_INPUTDNS	20		/*=== ��¼�û�����URI�����ֵ ===*/
#define	BOOKMARKNUM		20		/*=== ��ౣ�����ǩ�� ===*/
#define	DOWNLOADRETRY	3		/*=== ����ʧ�ܺ����ԵĴ��� ===*/

#ifndef CMS_LINUX
#define		CONF_DIRECTORY		"D:\\cmswapfile\\"			/*=== ������Ϣ�������ļ����·�� ===*/
#define		CURR_DIRECTORY		"D:\\cmswapfile\\"			/*=== ��ʱ�ļ����·�� ===*/
#define		IMAGE_DIRECTORY		"D:\\cmswapfile\\"	/*=== ͼƬ�ļ�·�� ===*/
#define		CACHE_DIRECTORY		"D\\cmswapfile\\"	/*=== CACHE����ļ����·�� ===*/
#define		TMPDLFILENAME			"D\\tempdl.dat"/*=== �����ļ�ʱʹ�õ���ʱ�ļ��� ===*/
#else
#define		CONF_DIRECTORY		"/usr/local/temp/browser/"			
#define		CURR_DIRECTORY		"/usr/local/temp/browser/"			
#define		IMAGE_DIRECTORY		"/usr/local/temp/cache/"	
#define		CACHE_DIRECTORY		"/usr/local/temp/cache/"	
#define		TMPDLFILENAME		"/usr/local/temp/cache/tempdl.dat"
#endif

/*=== ����������ļ����Ͷ��� ===*/
typedef enum 
{
    DOWNLOAD_ML,				/*=== ������� ===*/
    DOWNLOAD_GIF,				/*=== GIF ===*/
    DOWNLOAD_JPEG,				/*=== JPEG ===*/
    DOWNLOAD_WBMP,				/*=== WBMP ===*/
    DOWNLOAD_BMP,				/*=== BMP ===*/
    DOWNLOAD_PNG,				/*=== PNG ===*/
    DOWNLOAD_MSVG,				/*=== Mobile SVG ===*/
    DOWNLOAD_MIDI,				/*=== Midi ===*/
    DOWNLOAD_SMAF,              /*=== SMAF ===*/
    DOWNLOAD_IMY,              /*=== IMY ===add by yangjun for imy support*/
	DOWNLOAD_AMR,               /*=== AMR ===*/
    DOWNLOAD_FJAD,
    DOWNLOAD_FJAR,
    DOWNLOAD_DLING_FILE = 253,	/*=== ����δ֪�����ļ� ===*/
    DOWNLOAD_IMG = 254,	        /*=== ����ͼƬ��� ===*/
    DOWNLOAD_FAILED = 255		/*=== ����ʧ�ܵ��ļ� ===*/

}EBrwDownloadType;

/*=================== Setup Data types ===================*/

/*=== ��������� ===*/
typedef struct _CMSBROWSERSETUP					
{
	CMS_BROWSER_BOOL	Cms_WEBIMG_Support;	/*=== �Ƿ�֧��GIF��JPEG ===*/
	CMS_BROWSER_BOOL	Cms_Cache_Support;	/*=== �Ƿ�֧����ҳ���� ===*/
	CMS_BROWSER_U8		Cms_Homepage[70];	/*=== ��ҳURL ===*/
	MC_PCC_FILL_STRUCT2                

	CMS_BROWSER_U8		Cms_WAP_Gateway[50];/*=== WAP���ص�ַ ===*/
	MC_PCC_FILL_STRUCT2
	CMS_BROWSER_U16		Cms_WAP_Port;		/*=== WAP���ض˿� ===*/
	MC_PCC_FILL_STRUCT2
		
} CMSBROWSERSETUP, *P_CMSBROWSERSETUP;

/*=== ���Ӧ������ ===*/
typedef enum _CMS_APPLICATION_TYPE
{
	CMS_WTA,
	CMS_EMAIL

}CMS_APPLICATION_TYPE;

/*=== ���ӹ��ܽӿ����ݽṹ(Email�͵绰) ===*/
typedef struct _CMS_APPLICATION_DATA					
{
	P_CMS_BROWSER_U8	Cms_WTAI_Phonenumber;	/*=== WTA�绰���� ===*/
	P_CMS_BROWSER_U8	Cms_WTAI_Name;			/*=== WTA�µ绰��Ŀ������ ===*/
	P_CMS_BROWSER_U8	Cms_MAIL_Address;		/*=== Email��ַ ===*/
	
} CMS_APPLICATION_DATA, *P_CMS_APPLICATION_DATA;


typedef struct _CMS_BROWSER_JAD_
{
	P_CMS_BROWSER_U8 MIDlet_JAR_Size;
	P_CMS_BROWSER_U8 MIDlet_JAR_URL;
	P_CMS_BROWSER_U8 MIDlet_Install_NOTIFY_URL;
	P_CMS_BROWSER_U8 MIDlet_Name;
	P_CMS_BROWSER_U8 MIDlet_Vendor;
	P_CMS_BROWSER_U8 MIDlet_Description;
}CMS_BROWSER_JAD, *P_CMS_BROWSER_JAD;

/*=== PUSH Box Data Structure ===*/
typedef CMS_BROWSER_U32 CMS_BROWSER_PUSH_TYPE;
#define CMS_BROWSER_SIL_PUSH			0
#define CMS_BROWSER_CO_PUSH				1
#define CMS_BROWSER_OTA_SETTING_PUSH	2

typedef struct _Cms_Browser_PUSH
{
	CMS_BROWSER_PUSH_TYPE PUSHType;
	P_CMS_BROWSER_VOID pPUSHData;
	
}CMS_BROWSER_PUSH, *P_CMS_BROWSER_PUSH;
/*xiaoyongq 20060223
typedef struct _Cms_SIL_PUSH
{
	P_CMS_BROWSER_U8 pTitle;
	P_CMS_BROWSER_U8 pSI_id;
	P_CMS_BROWSER_U8 pCreated;
	P_CMS_BROWSER_U8 pExpires;
	P_CMS_BROWSER_U8 pURL;
	CMS_BROWSER_BOOL downloaded;
	
}CMS_SIL_PUSH, *P_CMS_SIL_PUSH; */
//����SIL Push��MTO Push��һ���ṹ
typedef struct _Cms_ALL_PUSH
{
	CMS_BROWSER_PUSH_TYPE PUSHType;//����
	P_CMS_BROWSER_U8 pTitle;//��ǩ����,��������
	P_CMS_BROWSER_U8 pSI_id;//NULL
	P_CMS_BROWSER_U8 pCreated;//����ʱ��
	P_CMS_BROWSER_U8 pExpires;//��Чʱ��
	P_CMS_BROWSER_U8 pURL;//��ǩURL,������ҳ

	P_CMS_BROWSER_U8 pGPRSAPN;
//	P_CMS_BROWSER_U8 pSettingISPName;
	P_CMS_BROWSER_U8 pSettingPort;
	P_CMS_BROWSER_U8 pSettingGateway;	

	P_CMS_BROWSER_U8 pUserName;
	P_CMS_BROWSER_U8 pUserPassword;
	P_CMS_BROWSER_U8 pAuthenticationMode;
	CMS_BROWSER_BOOL downloaded;
	
}CMS_ALL_PUSH, *P_CMS_ALL_PUSH;
/*=================== DEBUG DEFINE ===================*/


#ifdef CMS_BROWSER_DEBUG
#define Cms_Browser_Assert(expression, str) \
{ \
	if(expression) \
	{ \
		FILE *debug_f; \
		debug_f = fopen("D:\\BrowserAssert.txt", "ab+"); \
		if(debug_f != NULL) \
		{ \
			fwrite((const void*)str, 1, strlen((char *)str), debug_f); \
			fclose(debug_f); \
		} \
	} \
} 
#define Cms_Browser_ClearAssertInfo() \
{ \
	FILE *debug_f; \
	debug_f = fopen("D:\\BrowserAssert.txt", "rb"); \
	if(debug_f != NULL) \
	{ \
		fclose(debug_f); \
		remove("D:\\BrowserAssert.txt"); \
	} \
}
#else
#define Cms_Browser_Assert(expression, str) 
#define Cms_Browser_ClearAssertInfo()
#endif

#ifndef BTRACER
	#define BTRACER(str)     mms_Tracer((P_CMS_BROWSER_S8)str)
#endif

#ifndef BTRACER1
	#define BTRACER1(str,data1)  \
     \
    { CMS_BROWSER_U8 mv_buf[128];  \
    Cms_Browser_Sprintf((P_CMS_BROWSER_U8)mv_buf, (P_CMS_BROWSER_U8)str, (CMS_BROWSER_U32)data1); \
        Cms_Browser_StrCat((P_CMS_BROWSER_U8)mv_buf, (P_CMS_BROWSER_U8)"\n"); \
        BTRACER(mv_buf);  \
        }
#endif
        
#ifndef BTRACER2        
	#define BTRACER2(str,data1, data2)  \
     \
    { char mv_buf[128];  \
    sprintf(mv_buf, str, data1, data2); \
        strcat(mv_buf, "\n"); \
        BTRACER(mv_buf);  \
        }
#endif
        
#ifndef BTRACER3        
	#define BTRACER3(str,data1, data2, data3)  \
     \
    { char mv_buf[128];  \
    sprintf(mv_buf, str, data1, data2, data3); \
        strcat(mv_buf, "\n"); \
        BTRACER(mv_buf);  \
        }
#endif
        
#ifndef BTRACER4        
	#define BTRACER4(str,data1, data2, data3, data4)  \
     \
    { char mv_buf[128];  \
    sprintf(mv_buf, str, data1, data2, data3, data4); \
        strcat(mv_buf, "\n"); \
        BTRACER(mv_buf);  \
        }
#endif



#ifdef __cplusplus 
extern "C" {
#endif
/*=== WAPЭ��ջ�ⲿ�ӿں��� ===*/


#include "Cms_WAPMain.h"



#ifdef __cplusplus 
}
#endif

#include "CmsBrowserAPI.h"

#endif



