/*==============================================================

 C   H E A D E R   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2003
 ALL RIGHTS RESERVED

==============================================================

��������		: mBrowser Ver3.3
 
�ļ���			: CmsBrowserCfg.c

��������		: �������ݽṹ�Լ��궨��

����޸�ʱ��	: 10/17/2003
 
�����д��Ա	: �ֺ���

==============================================================*/

#ifndef CMSBROWSERCFG_H
#define CMSBROWSERCFG_H

/*=================== Head ===================*/

#include "CmsBrowserPublic.h"

#include "Cmsnetwork.h"
#include "CmsHttp.h"
#include "CmsGif.h"



/*=================== Macros ===================*/

/*======== ֧�ֹ��ܺ궨�� ========*/
			
//#define		NEED_SMALLARRAY		/*=== ĳЩ����ϵͳ���������С�����ƣ���ʱӦ���򿪴˿��� ===*/

/* ������֧�� */
#if defined( _D_DANIEL ) && !defined( SUPPORT_TOUCHPANEL )
#	define SUPPORT_TOUCHPANEL
#endif

/* SELECT�ؼ�֧�� */
#if defined( SUPPORT_TOUCHPANEL ) && !defined( SUPPORT_OPTIONSELECT_POPUP )
#	define SUPPORT_OPTIONSELECT_POPUP
#endif

#define		NEW_LINKFOCUS

#define		SUPPORT_UNICODE			/* Thunis ֧��unicode */
#define		SUPPORT_GIF				/*=== GIF֧�ֿ��� ===*/
#define		SUPPORT_JPEG			/*=== JPEG֧�ֿ��� ===*/
#define		SUPPORT_WBMP			/*=== WBMP֧�ֿ��� ===*/
//#define		SUPPORT_BMP				/*=== BMP֧�ֿ��� ===*/
#define		SUPPORT_PNG				/*=== PNG֧�ֿ��� ===*/

//#define		SUPPORT_WEB				/*=== WEB���������(����Ϊ��֧��) ===*/
#define		SUPPORT_WML				/*=== WAP���������(����Ϊ��֧��) ===*/
#define		SUPPORT_CACHE			/*=== CACHE���� ===*/
//#define		SUPPORT_HTTP11			/*=== �����ֿ鴫�ͺ����ͷ��Ϣ���� ===*/
#define		SUPPORT_COOKIES			/*=== COOKIE���� ===*/


#define		CMSCONTENTCACHE			/*=== ����Ч���ݻ��幦�ܣ������������ٶ� ===*/

/*== add by roger for Tcentel 03/31/2004 ==*/
//#define		SUPPORT_WAPSTACK 		/*=== ��WAPЭ��ջ�������ṩʱ����رմ˺� ===*/
#define 	CACHE_FOR_TCENTEL		/*=== write a new cache modules for Tcentl ===*/

/*======== �����궨�� ========*/

#ifdef SUPPORT_WML
#define		CMS_DEFAULT_WAPGATEWAY	"127.0.0.1"	/*=== Ĭ��WAP���ص�IP��ַ ===*/
#define		CMS_DEFAULT_WAPPORT		9201			/*=== Ĭ��WAP���ض˿� ===*/
#endif
	
#define		CMS_CONFIG_SPACEMARK	0x0a			/*=== �����ļ���¼����� ===*/
#define		CMS_STOREURIFILE		"cmsuri.cnf"	/*=== �û�����URL��¼�ļ� ===*/
#define		CMS_CONTDATAFILE		"cmscont.dat"	/*=== ��ҳ��Ч������ʱ�ļ� ===*/
#define		CMS_UNI2GBFILE			"cmsuni2gb.txt"	/*=== UTF-8ת���������ļ� ===*/
#define		CMS_BOOKMARKFILE		"cmsbook.cnf"	/*=== �û���ǩ��¼�ļ� ===*/
#define		CMS_SETUPFILE			"cmssetup.cnf"	/*=== �û����ü�¼�ļ� ===*/
#define		CMS_SAVEPAGEFILE		"cmssave.cnf"	/*=== �û�����ҳ���¼�ļ� ===*/
#define		CMS_CACHEINFOFILE		"cmscache.cnf"	/*=== �û�Cache��¼�ļ� ===*/
#define     CMS_CACHEDATAFILE       "cachedata.dat"     /*===cache�����ļ�===*/
#define    	CMS_PUSHFILE			"cmspushfile.cnf"	/*=== PUSH info¼�ļ� ===*/

#define     MAXRECV					(3*512)		/*=== һ�ν��ܵ���󳤶� ===*/
#define     DLLENONCE					(30*1024)	/*=== ���ؿ����󳤶ȣ�Ҳ���ܹ���������WML���� ===*/
#define		DEFAULT_HTTPPORT		80			/*=== Ĭ��HTTPЭ��˿ں� ===*/

#define		m_MaxState				66//65			/*=== ����״̬�� ===*/
#define		DNSLEN					128			/*=== ���DNS����(HTTPЭ��淶) ===*/
#define		MAX_CACHEFILE			50			/*=== ���cache�ļ��� ===*/
//#define		MAX_CACHEFLASH			(150*1024)	/*=== Cache�ļ�ռ��FLASH�������ֵ ===*/
#define		URLLEN					1500		/*=== ����URI����󳤶� ===*/
//#define		PARAMLEN				1400			/*=== �ύ��������󳤶� ===*/
#define		PARAMLEN				1600			/*=== �ύ��������󳤶� ===*///Ϊ�˿��Խ���512���ֵ�inputֵ��
//#define		VALUELEN                512			/*=== ÿһ����������󳤶� ===*/
#define		INPUT_FILE_BUFFER_SIZE	DLLENONCE	/*=== һ�ν�������󳤶� ===*/
#define		PAGECONTENTCACHELENGTH	DLLENONCE	//(10*1024)	/*=== �����ҳ��Ч���ݻ���������󳤶� ===*/
#define		FILENAMELENGTH			128			/*=== ϵͳ�涨���ļ������� ===*/

#define     MAX_ATTR_VALUE_LENGTH   2*1024

#define		CMS_DEFAULT_FONT_COLOR	0			/* Ĭ����ʾ����Ϊ��ɫ */
#define		CMS_DEFAULT_FONT_SIZE	"����"		/* Ĭ����ʾ����Ϊ���� */
#define		CMS_DEFAULT_FONT_TYPE	1			/* Ĭ����ʾ����Ϊ���� */

#define  INBUF_SIZE			(20480)	/* inbuf size every time */
#define  INBUF_MAXSIZE		(50*1024)	/* inbuf max size		 */
#define  HTTP_DATA_LENGTH  (50*1024)

#define  GET_INBUF_CHAR(pre) (*(pBrowserInfo->pParserInfo->inbuf + pre))
#define  SET_INBUF_CHAR(pos,c) {*(pBrowserInfo->pParserInfo->inbuf + pos) = c;}



/*=================== ȫ�ִ���ź궨�� ===================*/				

/*=== ����ģ������ ===*/
#define  CMS_BROWSER_OPENNETERROR			-1001		/*=== ����ʧ�� ===*/
#define  CMS_BROWSER_CLOSENETERROR			-1002		/*=== �Ҷ�ʧ�� ===*/
#define  CMS_BROWSER_CREATESOCKERROR		-1003		/*=== ����SOCKETʧ�� ===*/
#define  CMS_BROWSER_CLOSESOCKERROR			-1004		/*=== �ر�SOCKETʧ�� ===*/
#define  CMS_BROWSER_GETHOSTERROR			-1005		/*=== ��������ַ�������� ===*/
#define  CMS_BROWSER_CONNECTHOSTFAIL		-1006		/*=== ���ӷ�����ʧ�� ===*/
#define  CMS_BROWSER_TCPSENDFAIL			-1007		/*=== ����TCP��Ϣʧ�� ===*/
#define  CMS_BROWSER_UDPSENDTOFAIL			-1008		/*=== ����UDP��Ϣʧ�� ===*/
#define  CMS_BROWSER_TCPRECVFAIL			-1009		/*=== ����TCP��Ϣʧ�� ===*/
#define  CMS_BROWSER_UDPRECVFROMFAIL		-1010		/*=== ����UDP��Ϣʧ�� ===*/
#define  CMS_BROWSER_FILEACCESSFAIL			-1011		/*=== �����ļ�����ʧ�� ===*/
#define  CMS_BROWSER_SETTIMERERROR			-1012		/*=== �������綨ʱ��ʧ�� ===*/
#define  CMS_BROWSER_NETWORKTIMEOUT			-1013		/*=== ���糬ʱ ===*/
#define  CMS_BROWSER_WAPCONNECTFAIL			-1014		/*=== ����WAP����ʧ�� ===*/
#define  CMS_BROWSER_WAPABORT				-1015		/*=== WAP�������ؾܾ� ===*/
#define  CMS_BROWSER_WBMLPARSERERROR		-1016		/*=== WBML�������� ===*/

#define  CMS_NEW_URL_EVENT_FLAG             0XFFFF
#define  CMS_NEW_URL_EVENT_FLAG_RESTORE     0X0000
#define  CMS_JUMP_INFOBOX_FLAG_RESTORE		0X00
#define  CMS_JUMP_INFOBOX_FLAG				0xFF
/*======== �����������Ͷ��� ========*/
#ifndef TI
#if defined(__cplusplus) && __cplusplus
extern "C" {
#endif
#endif


#if 0	
typedef struct   m_tagPAGEHEADELE  m_PAGEHEADELE;		
typedef          m_PAGEHEADELE    *m_PageHeadEle;

/*=== ҳͷԪ������ ===*/
struct m_tagPAGEHEADELE
{
	P_CMS_BROWSER_VOID	head;	/*=== ��ǰҳͷԪ�� ===*/
//	P_CMS_BROWSER_VOID	tail;		/* ���ڼ�¼ǰҳ�����һ��Ԫ������*/
	m_PageHeadEle		next;	/*=== ����ͷԪ������ ===*/
};
#endif

typedef struct   m_tagATTRIBUTE  m_ATTRIBUTE;			
typedef          m_ATTRIBUTE    *m_Attribute;
/*=== �������ݽṹ ===*/
struct m_tagATTRIBUTE
{
	m_Attribute		m_next;		/*=== ��һ������ ===*/
	CMS_BROWSER_U8	m_type;		/*=== �������� ===*/
	MC_PCC_FILL_STRUCT3
	CMS_BROWSER_U64	m_vstart;	/*=== ����ֵ����ʱ�ļ�(������)�е���ʼ��ַ ===*/
	CMS_BROWSER_U16	m_vlength;	/*=== ����ֵ�ĳ��� ===*/
	MC_PCC_FILL_STRUCT2
};


/*=== һ��Ԫ������ṹ���� ===*/
typedef struct m_tagELEMENT  m_ELEMENT;					
typedef        m_ELEMENT    *m_Element; 

/*=== �ı�Ԫ������ṹ���� ===*/
typedef struct m_tagTEXTELEMENT  m_TEXTELEMENT;		
typedef        m_TEXTELEMENT    *m_TextElement; 

/*=== �ؼ�Ԫ������ṹ���� ===*/
typedef struct m_tagCONTROLELEMENT  m_CONTROLELEMENT;
typedef        m_CONTROLELEMENT    *m_ControlElement;

/*=== ͼƬԪ������ṹ���� ===*/
typedef struct m_tagIMAGEELEMENT  m_IMAGEELEMENT;	
typedef        m_IMAGEELEMENT    *m_ImageElement;

/*=== ����ʾԪ�ص�x���꣬�����ʾ���С��256����������ΪCMS_BROWSER_U8�ͣ�
�ڴ�ķѿ��Լ���12��~20�� ===*/
typedef CMS_BROWSER_U8 CMS_BROWSER_ELEMENT_X_TYPE;

/*=== ���������͵�ǰ��Ԫ�� ===*/
typedef union _PREVELEMENT
{
	m_Element			m_prev;			/*=== ǰ��һ��Ԫ�� ===*/
	m_TextElement		m_textprev;		/*=== ǰ���ı�Ԫ�� ===*/
	m_ImageElement		m_imageprev;	/*=== ǰ��ͼƬԪ�� ===*/
	m_ControlElement	m_controlprev;	/*=== ǰ��ؼ�Ԫ�� ===*/

}m_PREVELEMENT;

/*=== ���������͵ĺ���Ԫ�� ===*/
typedef union _NEXTELEMENT
{	
	m_Element			m_next;			/*=== ����һ��Ԫ�� ===*/
	m_TextElement		m_textnext;		/*=== �����ı�Ԫ�� ===*/
	m_ImageElement		m_imagenext;	/*=== ����ͼƬԪ�� ===*/
	m_ControlElement	m_controlnext;	/*=== ����ؼ�Ԫ�� ===*/

}m_NEXTELEMENT;

/*=== һ��Ԫ������ṹ���� ===*/
struct m_tagELEMENT
{
	CMS_BROWSER_U8	m_ElTypeNum;	/*=== Ԫ������ ===*/
	MC_PCC_FILL_STRUCT3
	m_Element		parent;			/* parent ele	  */
	void*			css_style;      /* css_style      */
	m_PREVELEMENT	prevelement;	/*=== ǰ��Ԫ�� ===*/
	m_NEXTELEMENT	nextelement;	/*=== ����Ԫ�� ===*/
	m_Attribute		m_attribute;	/*=== Ԫ������ ===*/		
};

/*=== �ı�Ԫ������ṹ���� ===*/
struct m_tagTEXTELEMENT
{
	CMS_BROWSER_U8		m_ElTypeNum;	/*=== Ԫ������ ===*/
	
	MC_PCC_FILL_STRUCT3
	
	m_Element		parent;			/* parent ele	  */
	void*			css_style;		/* css_style      */

	m_PREVELEMENT		prevelement;	/*=== ǰ��Ԫ�� ===*/
	m_NEXTELEMENT		nextelement;	/*=== ����Ԫ�� ===*/
	CMS_BROWSER_U64		m_start;		/*=== �ı�ֵ����ʱ�ļ�(������)�е���ʼ��ַ ===*/	
	CMS_BROWSER_U16		m_length;		/*=== �ı�ֵ���� ===*/
	CMS_BROWSER_U16     ty;				/*=== ��ʼ����(��ҳ������) ===*/				
	CMS_BROWSER_U16     by;				/*=== ��ֹ����(��ҳ������) ===*/
	CMS_BROWSER_ELEMENT_X_TYPE tx;		/*=== ��ʼX���� ===*/			
	CMS_BROWSER_ELEMENT_X_TYPE bx;		/*=== ��ֹX���� ===*/

	/*���������, 2004-10-25, �ı�Ԫ�ص���ɫ������*/
	CMS_BROWSER_U32			font_color;   /*  ������ǰ�������ɫ ������ 10-25*/
	CMS_BROWSER_U32			bg_color;
	
	CMS_BROWSER_U8			font_type;	  /*  ������ǰ��������� ������ 10-25*/	
	CMS_BROWSER_U8			isdrawed;		/*  �Ƿ��ѱ����� */

	CMS_BROWSER_S16			anchor_count;	/*	anchor ������ */ 
	
	CMS_BROWSER_S32         letterspace;	/*  �ַ����     */

	CMS_BROWSER_U32			margin[4];
	CMS_BROWSER_U32         border_color[4];
	CMS_BROWSER_U16			border_style[4];
	CMS_BROWSER_U16			border_width[4];	
	CMS_BROWSER_S32         leftspace;
};

/*=== �ؼ�Ԫ������ṹ���� ===*/
struct m_tagCONTROLELEMENT
{
	CMS_BROWSER_U8		m_ElTypeNum;	/*=== Ԫ������ ===*/
	MC_PCC_FILL_STRUCT3
	m_Element		parent;			/* parent ele	  */
	void*			css_style;		/* css_style      */

	m_PREVELEMENT		prevelement;	/*=== ǰ��Ԫ�� ===*/
	m_NEXTELEMENT		nextelement;	/*=== ����Ԫ�� ===*/
	m_Attribute			m_attribute;	/*=== �ؼ�Ԫ������ ===*/
	CMS_BROWSER_U8		m_start;		/*=== SELECTԪ���п�ѡ��ĸ�����RADIO��CHECKBOXԪ���Ƿ�ѡ��(1:�� 0:��) ===*/
	MC_PCC_FILL_STRUCT3
	CMS_BROWSER_U16		m_length;		/*=== SELECTԪ���п�ѡ�������ַ��� ===*/
	CMS_BROWSER_U16     ty;				/*=== ��ʼ����(��ҳ������) ===*/								
	CMS_BROWSER_U16     by;				/*=== ��ֹ����(��ҳ������) ===*/	
	CMS_BROWSER_ELEMENT_X_TYPE tx;		/*=== ��ʼX���� ===*/								
	CMS_BROWSER_ELEMENT_X_TYPE bx;		/*=== ��ֹX���� ===*/	
};

/*=== ͼƬԪ������ṹ���� ===*/
struct m_tagIMAGEELEMENT
{
	CMS_BROWSER_U8		m_ElTypeNum;
	MC_PCC_FILL_STRUCT3
	
	m_Element		parent;			/* parent ele	  */
	void*			css_style;		/* css style      */
	m_PREVELEMENT		prevelement;
	m_NEXTELEMENT		nextelement;
	m_Attribute			m_attribute;
	P_CMS_BROWSER_U8	filename;
	CMS_BROWSER_U16     width;								
	CMS_BROWSER_U16     height;								
	CMS_BROWSER_U16     ty;	
	CMS_BROWSER_U16     by;					/* ͼƬ������ */
	
	CMS_BROWSER_ELEMENT_X_TYPE     tx;								
	CMS_BROWSER_ELEMENT_X_TYPE     bx;	
	
	Cms_ContentType_e 				imagetype;	
	
	CMS_BROWSER_U32			margin[4];
	CMS_BROWSER_U32         border_color[4];
	CMS_BROWSER_U16			border_style[4];
	CMS_BROWSER_U16			border_width[4];
	
	CMS_BROWSER_S16			anchor_count;		/* anchor������ */
	MC_PCC_FILL_STRUCT2
};

/************************** Network information ******************/

/*=== ��ʷ��¼�ṹ���� ===*/


/* ������rewrite��ʷ��¼*/
struct _HISTORYNODE;
typedef struct _HISTORYNODE HISTORYNODE;
typedef HISTORYNODE* P_HISTORYNODE;

struct _HISTORYNODE
{
	CMS_BROWSER_BOOL method;
	unsigned int     prevtabindex;
	P_CMS_BROWSER_U8 param;
	P_CMS_BROWSER_U8 url;
	P_HISTORYNODE    next;
	P_HISTORYNODE	 pre;
};

struct _HISTORY;
typedef struct _HISTORY HISTORY;
typedef HISTORY *P_HISTORY;

struct _HISTORY
{
	P_HISTORYNODE  histroy_head;
	P_HISTORYNODE  histroy_cur;
	P_HISTORYNODE  histroy_tail;
	CMS_BROWSER_U32 histroy_curnum;
};



/*=== ����������Ϣ�ṹ���� ===*/
typedef struct _CONNECT								
{
		CMS_BROWSER_BOOL			reConnect;			/*=== ������(HTTP״̬Ϊ3XX) ===*/
		CMS_BROWSER_U16				PORT;				/*=== ���Ӷ˿� ===*/
//		MC_PCC_FILL_STRUCT2
// 		CMS_BROWSER_U8				dns[DNSLEN];		/*=== DNS ===*/
		CMS_BROWSER_U16				mutateURLlen;
		P_CMS_BROWSER_U8			url;		/*=== URL ===*/		
		CMS_BROWSER_U8				path[URLLEN];		/*=== ·�� ===*/

		CMS_BROWSER_BOOL			METHOD;				/*=== ���ӷ�ʽ(CMS_BROWSER_FALSE---GET  CMS_BROWSER_TRUE---POST) ===*/
		CMS_BROWSER_U8				param[PARAMLEN];	/*=== �ύ���� ===*/
		P_CMS_BROWSER_U8			CurrentParam;		
		
} CONNECT, *P_CONNECT;


#define COOKIECONTENTLENGTH		256	/*=== METAԪ���г��ֵ�COOKIE��󳤶� ===*/

typedef struct _COOKIE							/*=== COOKIE�ṹ���� ===*/									
{
		CMS_BROWSER_BOOL	SetCookie;			/*=== ��ǰҳ���ύ�Ƿ�Ҫ��Я��COOKIE ===*/
		P_CMS_BROWSER_U8	CookieContent;		/*=== COOKIE���� ===*/
		P_CMS_BROWSER_U8 	CookieUrl;			/*=== COOKIE������ ===*/
		CMS_BROWSER_U8		MetaSetCookieContent[COOKIECONTENTLENGTH];	/*=== ��ҳ�е�COOKIE���� ===*/
		
} COOKIE, *P_COOKIE;


typedef struct _CMS_BROWSER_NETWORKINFO		/*=== ������Ϣ�ṹ���� ===*/
{	
	CMS_BROWSER_S32		NETWORK_ERR_NUM;	/*=== �������� ===*/
	CMS_BROWSER_BOOL	Proxy;				/*=== ʹ�ô��� ===*/
	P_CONNECT			pConnect;			/*=== ����������Ϣ ===*/
	P_COOKIE			pCookie;			/*=== COOKIE�ṹ ===*/
	P_HISTORY 			pHistory;			/*=== ��ʷ��¼ ===*/
		
} CMS_BROWSER_NETWORKINFO, *P_CMS_BROWSER_NETWORKINFO;



/*********************** Parser information **********************/

#define m_MaxGIlength	50

typedef CMS_BROWSER_U8		m_State;
typedef struct 		_m_Transition *m_PtrTransition;

typedef struct 		_m_Transition
{
     CMS_BROWSER_U8		m_trigger;	
     MC_PCC_FILL_STRUCT3
     m_State			m_newState;	
     m_PtrTransition	m_nextTransition;

} m_Transition;


typedef struct m_StateDescr
{				
     m_State			m_automatonState;
     m_PtrTransition	m_firstTransition;
} m_StateDescr;


typedef struct m_sourceTransition
{
     m_State			m_initState;
     CMS_BROWSER_U8		m_trigger;
     MC_PCC_FILL_STRUCT3
     m_State			m_newState;
} m_sourceTransition;


#ifdef SUPPORT_WML

/*=== WML�����б����ݽṹ���� ===*/
typedef struct tagVarlist VARLIST;
typedef  VARLIST *VarlistPtr;
struct tagVarlist
{
	CMS_BROWSER_S32		escape;		/*=== 0:noesc  1:escape  2:unesc ===*/
	P_CMS_BROWSER_U8	varname;	/*=== ������ ===*/
	P_CMS_BROWSER_U8	varvalue;	/*=== ����ֵ ===*/
	VarlistPtr			next;		/*=== �����б�ָ�� ===*/
};

/*=== WML�¼��б����ݽṹ���� ===*/
typedef struct tagEventlist EVENTLIST;
typedef EVENTLIST *EventlistPtr;

struct tagEventlist
{
	P_CMS_BROWSER_U8	Eventtype;	
    P_CMS_BROWSER_U8	Eventdelay;
    P_CMS_BROWSER_U8	Eventname;
	P_CMS_BROWSER_U8	Eventlabel;
	m_Element			event_element;
	EventlistPtr		nextevent;
	CMS_BROWSER_U16     ty;			//�ɸ���
	CMS_BROWSER_U16     by;			//ʵ�����
	CMS_BROWSER_ELEMENT_X_TYPE tx;	//�ı�
	CMS_BROWSER_ELEMENT_X_TYPE bx;	//����
	MC_PCC_FILL_STRUCT2
};


typedef  struct tagWMLCARD WMLCARD;
typedef  WMLCARD *WMLCARDPtr;

struct tagWMLCARD
{
	WMLCARDPtr			next;
	WMLCARDPtr			prev;
	m_Element			root;
	EventlistPtr		firstevent;
	P_CMS_BROWSER_U8	cardID;
	P_CMS_BROWSER_U8	cardTitle;
	CMS_BROWSER_BOOL	newContext;
};

typedef struct tagDECK DECK;
typedef DECK *DECKPtr;

struct tagDECK
{
	m_Element		root;
	EventlistPtr	firstevent;
	WMLCARDPtr		firstcard;
	WMLCARDPtr		currcard;
} ;

#define TIME_LEN 10
typedef struct _WMLTREE					/*=== WML�����ṹ���� ===*/
{
	CMS_BROWSER_U8	OnTimerValue[10];	/*=== ONTIMER�¼���ʱ�� ===*/
	MC_PCC_FILL_STRUCT2
	DECKPtr			WmlDeck;
	VarlistPtr		WmlVar;
	EventlistPtr    OnTimerEvent;
		
} WMLTREE, *P_WMLTREE;

typedef enum
{	
		CMS_CARD_ID,			/*=== 0: ID���� ===*/
		CMS_CARD_TITLE,			/*=== 1: TITLE���� ===*/
		CMS_CARD_ONTIMER,		/*=== 2: ONTIMER���� ===*/
		CMS_CARD_ONFORWARD,		/*=== 3: ONFORWARD���� ===*/
		CMS_CARD_ONBACKWARD,	/*=== 4: ONBACKWARD���� ===*/
		CMS_CARD_NEWCONTEXT,	/*=== 5: NEWCONTEXT���� ===*/
		CMS_CARD_UNSUPPORT		/*=== 5: ��֧�ֵ����� ===*/

}CMS_CARD_ATTRIBUTETYPE;

typedef enum
{	
		CMS_TIMER_NAME,			/*=== 0: KEY���� ===*/
		CMS_TIMER_VALUE,		/*=== 1: VALUE���� ===*/
		CMS_TIMER_DEFAULT,		/*=== 2: DEFAULT���� ===*/
		CMS_TIMER_UNSUPPORT		/*=== 3: ��֧�ֵ����� ===*/

}CMS_TIMER_ATTRIBUTETYPE;

typedef enum
{	
		CMS_EVENT_TYPE,			/*=== 0: TYPE���� ===*/
		CMS_EVENT_NAME,			/*=== 1: NAME���� ===*/
		CMS_EVENT_LABEL,		/*=== 2: LABEL���� ===*/
		CMS_EVENT_UNSUPPORT		/*=== 3: ��֧�ֵ����� ===*/

}CMS_EVENT_ATTRIBUTETYPE;
#endif


#ifdef  SUPPORT_HTTP11
typedef struct _CHUNKED										/*=== ��ҳ�鴫����Ϣ�ṹ���� ===*/
{
		CMS_BROWSER_BOOL		ChunkNotOver;
		CMS_BROWSER_BOOL		Chunked;
		CMS_BROWSER_U64 		ChunkSize;
		CMS_BROWSER_U8			ChunkContent[10];
		MC_PCC_FILL_STRUCT2
		
} CHUNKED, *P_CHUNKED;

#endif 


#ifdef CMSCONTENTCACHE
typedef struct	_PAGECONTENTCACHE
{
	CMS_BROWSER_U64		StartInDataFile;
	CMS_BROWSER_U64		ContentLength;
	CMS_BROWSER_U8		Content[PAGECONTENTCACHELENGTH];

} CMS_PAGECONTENTCACHE;
#endif


/* ����css����ָ�� ���� 8-12*/
typedef void * P_BR_CSS;



typedef struct _CMS_BROWSER_PARSERINFO 
{
	
	CMS_BROWSER_BOOL        m_match;
	m_PtrTransition			m_trans;   
	CMS_BROWSER_U32         m_currentState; 
	m_StateDescr			m_automaton[m_MaxState];
	
	CMS_BROWSER_FILEHANDLE	OutputFile;


	unsigned char			*inbuf;			/* parser buf	*/
	unsigned int			inbuf_size;		/* buf size		*/	
	unsigned int			inbuf_usedsize;	/* used size	*/

		
//	CMS_BROWSER_U8			OutBuffer[INPUT_FILE_BUFFER_SIZE+1];	//	����������,��ŵ���Ԫ�ػ����Ե�����
//	MC_PCC_FILL_STRUCT3
#ifdef CMSCONTENTCACHE
	CMS_PAGECONTENTCACHE	ContentCache;
#else	
	CMS_BROWSER_U8			OutData[INPUT_FILE_BUFFER_SIZE+1];		//	����������,��Ž��������Ч����
	MC_PCC_FILL_STRUCT3
#endif
	CMS_BROWSER_U8			EleAttrName[m_MaxGIlength];				//	Ԫ������
	CMS_BROWSER_U8			ParserFileName[FILENAMELENGTH];			//	Ҫ�������ļ���
	CMS_BROWSER_U16			Cms_long,Cms_Verylong;					//	����Ϊ:  ��ǰ�ļ�(����)ƫ����
																	
	CMS_BROWSER_U32			CurCharInFileBuffer;				
	CMS_BROWSER_U32			LastCharInFileBuffer;
	CMS_BROWSER_U64			Cms_now, FileOffset;					//  �ѽ������ַ���
	CMS_BROWSER_U16			Upnum;									//  �Ϸ���ҳ��,���ڿ����Ϸ�������·�ʱ,���Ѿ�
	MC_PCC_FILL_STRUCT2
																	//    ��ʾ��,��ֱ����ʾ,���������غ�����ʾ
	m_Element				Cms_root,Cms_pro;
	m_Element				Cms_DownFirstEle;
	m_TextElement			Cms_text;
	m_ControlElement		Cms_control;
	m_ImageElement			Cms_image;
	
	CMS_BROWSER_BOOL		Cms_WML_InCard;
	CMS_BROWSER_BOOL		Cms_WML_InTask;	
	CMS_BROWSER_BOOL		Cms_WML_InTimer;
	CMS_BROWSER_BOOL		Cms_WML_InTimerVar;
	CMS_CARD_ATTRIBUTETYPE	Cms_WML_CardAttType;
	CMS_TIMER_ATTRIBUTETYPE	Cms_WML_TimerAttType;
	CMS_EVENT_ATTRIBUTETYPE	Cms_WML_EventAttType;

	CMS_BROWSER_U8	    	LastElementIsScript;					//  �ű�����
	CMS_BROWSER_U8		  	Cms_Charnum;
	MC_PCC_FILL_STRUCT2

	CMS_BROWSER_BOOL    	Check_Ele;								//  ��ЧԪ��
	CMS_BROWSER_BOOL    	Check_Attr;								//  ��Ч����
	CMS_BROWSER_BOOL		TextErr;								//  ����<< >>	
	CMS_BROWSER_BOOL		IsLessThan;								//  ����<�Լ�֮����ı�����
	CMS_BROWSER_BOOL		EndHtmlAnchor;							//  ����Ԫ�ؽ���
	CMS_BROWSER_BOOL		ParserOver;

#ifdef SUPPORT_WML
	P_WMLTREE				pWmlTree;
#endif

#ifdef  SUPPORT_HTTP11
	P_CHUNKED				pChunk;									//  ��ҳΪ�鴫�͵����ݽṹ
#endif   


	P_BR_CSS			    p_head_css;	/* ͷ�ڵ�css ���� 8-12*/


} CMS_BROWSER_PARSERINFO, *P_CMS_BROWSER_PARSERINFO;



/*********************** Layout information **********************/

typedef struct	_CMS_PREVIMGINFO
{
	CMS_BROWSER_U16					Width;
	CMS_BROWSER_U16					Height;
	CMS_BROWSER_U16					ty;
	CMS_BROWSER_U16					by;
	CMS_BROWSER_ELEMENT_X_TYPE		tx;
	MC_PCC_FILL_STRUCT1

}CMS_PREVIMGINFO;


/*======== GIF movie Play Information ========*/
#ifdef SUPPORT_GIF
#ifndef OS_SUPPORT_GIF

typedef struct _Cms_Browser_GIFMovie	*P_CMS_BROWSER_GIFMOVIE;

typedef struct _Cms_Browser_GIFMovie
{
	P_CMS_BROWSER_U8		GIFFilename;			/*=== GIF�ļ��� ===*/
	CMS_BROWSER_S32			FileHandle;			/*== */
	CMS_BROWSER_S32			BeSingleFrame;			/*== */
	CMS_BROWSER_S32			Playing;			/*== */
	CMS_BROWSER_U32			x;
	CMS_BROWSER_U32			y;
	CMS_BROWSER_U32			width;				/*=== ʵ����ʾ��� ===*/
	CMS_BROWSER_U32			height;				/*=== ʵ����ʾ�߶� ===*/
	CMS_BROWSER_U32			GIFMovieID;				/*=== ��ǰҳ��֡GIF�������� ===*/
	CMS_BROWSER_U32			CurrGIFMovieFrameID;	/*=== ��ǰ֡ID ===*/
	CMS_BROWSER_OS_TIMER	GIFMovieTimer;			/*=== ��ʱ�� ===*/
	GIFStream				*pGIFMovieStream;		/*=== GIFͼƬ���ݽṹ ===*/
	P_CMS_BROWSER_U16		GIFImageData;			/*=== GIFͼƬ�������� ===*/
	MC_PCC_FILL_STRUCT2
	P_CMS_BROWSER_GIFMOVIE	pNextGIFMovie;			/*=== ��һ��GIFͼƬ ===*/
	
	double x_proportion;      /***	gifѹ������  ***/    
	double y_proportion;      /***	gifѹ������  ***/

	unsigned int bg_color;    /*** gifͼƬ�ı���ɫ ***/
	
}CMS_BROWSER_GIFMOVIE;

#endif
#endif

/*=== 2004-10-30 Accesskey&BGSound ===*/
/*=== accesskey����ṹ���� ===*/
typedef struct m_tagACCESSKEY  CMS_BR_ACCESSKEY;
typedef CMS_BR_ACCESSKEY  *P_CMS_BR_ACCESSKEY;

struct m_tagACCESSKEY
{
	P_CMS_BROWSER_U8 pKey;
	m_Element pElement;
	P_CMS_BR_ACCESSKEY pNextAccesskey;
};

/*=== �������ֽṹ ===*/
typedef struct m_tagBGSOUND 
{
	P_CMS_BROWSER_U8 pURL;
	P_CMS_BROWSER_U8 pFileName;
	CMS_BROWSER_S32 loop;
	CMS_BROWSER_U32 status;	/*=== ״̬ 0����Ч 1�������� 2�����ؽ��� 3�������� ===*/
	Cms_ContentType_e content_type;

}CMS_BR_BGSOUND;
/*=== 2004-10-30 Accesskey&BGSound end ===*/


#ifdef CMS_NOTOUCHPANNEL

typedef struct LinkFocusTabTag LinkFocusTabT;

struct LinkFocusTabTag
{
	void*			pFocusObject;
	LinkFocusTabT*  next;
	LinkFocusTabT*	prev;
	P_CMS_BROWSER_U8 linkname;
	CMS_BROWSER_U16	tabindex;
	CMS_BROWSER_U16 objectflag;      /* 1: Ԫ��, 2: ���������, 3: �¼� */
};

typedef struct LinkFocusInPageTag LinkFocusInPageT;

struct LinkFocusInPageTag
{
	void*				pFocus;		  /* ��һ���ֽڻ�������ʾobjectflag */
	LinkFocusInPageT*	next;
	LinkFocusInPageT*	prev;
};

typedef struct LinkFocusTag
{
	LinkFocusTabT*	pTablist;			/* һ��ҳ���а�tabindex����Ľ���Ԫ������ */
	LinkFocusTabT*	curFocus;			/* ��ǰ��tabindex��� */
//	LinkFocusTabT*	prevFocus;

	LinkFocusInPageT* head;				 //����ͷ���
	LinkFocusInPageT* tail;					//����β���

	void*			  curFocusObj;
	void*			  prevFocusObj;

}LinkFocusT;

#endif

struct _CMS_BROWSER_FILELIST;
typedef struct _CMS_BROWSER_FILELIST CMS_BROWSER_FILELIST;
typedef CMS_BROWSER_FILELIST* P_CMS_BROWSER_FILELIST;

struct _CMS_BROWSER_FILELIST
{
	char*					filename;	
	int						length;
	int						type;
	P_CMS_BROWSER_FILELIST	next;		
};

// MarkFocus �ı��״ֵ̬
typedef enum tagMarkState
{
    MS_DEFAULT = 0,     // δѡ��  
    MS_SELECTED,        // ѡ��
    MS_DESELECTED       // ȥѡ��
}CMS_MARKSTATE;
#define SELECTED_COLOUR 0x000000FF // ѡ����ɫ

typedef struct _CMS_BROWSER_LAYOUTINFO 
{	
	CMS_BROWSER_ELEMENT_X_TYPE	px;
	MC_PCC_FILL_STRUCT3
	CMS_BROWSER_U16				py;
	CMS_BROWSER_U16 			PageTopLine;


	/*=== 2004-10-30 Accesskey&BGSound ===*/
	CMS_BR_BGSOUND				BGSound;
	P_CMS_BR_ACCESSKEY			pAccesskey;
	/*=== 2004-10-30 Accesskey&BGSound end ===*/

	m_Element					SelectElement;
	//add by roger
	m_IMAGEELEMENT				CurImgElement;


	CMS_BROWSER_U8				LayoutStatus;
	CMS_BROWSER_U8				DrawFromHead;
	MC_PCC_FILL_STRUCT2
	
	P_CMS_BROWSER_U8 			CurrentTitle;
	CMS_BROWSER_BOOL        	Ontimer;
	CMS_BROWSER_U16 			ImgCurrent;
	CMS_BROWSER_U16 			ImgTotal;
	
	CMS_BROWSER_BOOL			NoframeOver;
	


	struct 
	{
		CMS_BROWSER_U16 current;
		CMS_BROWSER_U16 total;
	//	m_PageHeadEle headchain;

	}Cms_PageHead; 

	CMS_PREVIMGINFO	PrevImgInfo; 

#ifdef SUPPORT_GIF
#ifndef OS_SUPPORT_GIF
	P_CMS_BROWSER_GIFMOVIE		pGIFMovie;
#endif
#endif
	
#ifdef CMS_NOTOUCHPANNEL
	CMS_BROWSER_U8	MarkFocus;
	MC_PCC_FILL_STRUCT3
	
	LinkFocusT		LinkFocus;		

#endif
	
	P_CMS_BROWSER_FILELIST	pFileList;

	/* ��¼�ٴ��Ű�ǰ����ʾҳ����Ϣ */
//	void*               DisplayPtr;
	EventlistPtr		DisplayEvent;
	m_Element			DisplayElement;
	CMS_BROWSER_S32		TopLineOffSET; 	
		
} CMS_BROWSER_LAYOUTINFO, *P_CMS_BROWSER_LAYOUTINFO;

/*======== InputURLHistory Information ========*/

typedef struct _Cms_Browser_InputHistory
{
	CMS_BROWSER_S32		Total;
	CMS_BROWSER_S32		Current;
	P_CMS_BROWSER_U8	url[MAX_INPUTDNS];

} CMS_BROWSER_INPUTHISTORY;



/*======== ö�ٵ�ǰbrowser��״̬ ========*/
typedef enum
{
	IDLE_STATE	  ,				/* ����״̬			*/
	DOWNLOAD_STATE,				/* ����״̬			*/
	DOWNLOADING_ITEM_STATE,		/* ������Ҫ����״̬ */
	INVALID_URL_STATE,			/* �Ƿ�url			*/
	TEMP_STATE	= 0x3FFFFFFF	/* temp state		*/
}E_WAP_STATE;




/*======== BrowserBookmark Information ========*/

typedef struct _Cms_Browser_Bookmark
{
	P_CMS_BROWSER_U8 title;
	P_CMS_BROWSER_U8 url;

}CMS_BROWSER_BOOKMARK;

typedef struct _Cms_Browser_Display
{
	CMS_BROWSER_U16			Display_Screen_W;
	CMS_BROWSER_U16			Display_Screen_H;

	CMS_BROWSER_U16			Display_Scrollbar_W;
	CMS_BROWSER_U16			Display_Title_H;

	CMS_BROWSER_U16			Display_Statusbar_W;
	CMS_BROWSER_U16			Display_Statusbar_H;


	CMS_BROWSER_U16			Display_Select_H;
	CMS_BROWSER_U16			Display_Font_W;


	CMS_BROWSER_U16			Display_Origin_X_D;
	MC_PCC_FILL_STRUCT2

}CMS_BROWSER_DISPLAYDATA, *P_CMS_BROWSER_DISPLAYDATA;


/*======== mini_Browser  information ========*/

typedef struct _CMS_BROWSERINFO 
{
	CMS_BROWSER_U16				PenDnX;
	MC_PCC_FILL_STRUCT2
	CMS_BROWSER_U16				PenDnY;
	MC_PCC_FILL_STRUCT2
	
	CMS_BROWSER_U8				DelayTime;	
	MC_PCC_FILL_STRUCT3
	CMS_BROWSER_GUI_LANGUAGE	Language;				/*=== ��ʾ���� ===*/
	CMS_BROWSER_S32				Network;
	CMS_BROWSER_OS_TIMER		WMLTimer;
	CMS_BROWSER_OS_TIMER		HTMLRefreshTimer;
	Cms_ContentType_e			FileType;
	P_CMS_BROWSER_U8			DlFileName;
	MC_PCC_FILL_STRUCT3
	CMS_BROWSER_BOOL			DownloadOver;
	CMS_BROWSER_BOOL			BeginWrite;
	CMS_BROWSER_BOOL       		IsWml;	
	CMS_BROWSER_BOOL       		UrlChange;	
	CMS_BROWSER_BOOL			UserCancle;
	CMS_BROWSER_BOOL			NetNoSignal;
	
	CMS_BROWSER_BOOL			DnsChange;	
	CMS_BROWSER_BOOL			LastPage;				/*=== �Ƿ�Ϊ���һҳ ===*/
	
	CMS_BROWSER_BOOL			HtmlRefresh;							//��ҳ����
	CMS_BROWSER_BOOL			NoDisplay;
	CMS_BROWSER_BOOL			WmlCard;
	CMS_BROWSER_BOOL			ForEvent;
	CMS_BROWSER_BOOL			BackEvent;
	CMS_BROWSER_BOOL			Back;
	CMS_BROWSER_BOOL			stop;
	CMS_BROWSER_BOOL			Cms_WAP_Working;		/*=== WAPЭ��ջ�Ƿ��ڹ���״̬ ===*/

	CMS_BROWSER_BOOL			DisplayImg;
	CMS_BROWSER_BOOL			BrowserLocalFile;
	CMS_BROWSER_BOOL			BrowserCacheFile;
	CMS_BROWSER_BOOL			Refresh;								//ˢ�¹���
	CMS_BROWSER_BOOL			Bookmark;
	CMS_BROWSER_BOOL			SupportCache;
	CMS_BROWSER_BOOL			CacheOption;
	
	CMS_BROWSER_BOOL			EditType;			/*=== CMS_BROWSER_TRUE: PASSWORD  CMS_BROWSER_FALSE: TEXT ===*/	
	CMS_BROWSER_U32				EditMaxlength;		/*=== ���༭���� ===*/
	
	P_CMS_BROWSER_VOID			LayoutOverElement;
	CMS_BROWSER_U16				ImgFileID;
	MC_PCC_FILL_STRUCT2
	CMS_BROWSER_U8				CardId[120];
	CMS_BROWSER_U8				ImgFileName[FILENAMELENGTH];
	CMS_BROWSER_U8				HomePageUrl[URLLEN];
	CMS_BROWSER_U8 				WAPGateway[DNSLEN];		/*=== WAP ���� ===*/
	MC_PCC_FILL_STRUCT2
	CMS_BROWSER_U16				WAPPort;				/*=== WAP �˿ں� ===*/
	MC_PCC_FILL_STRUCT2
		
	CMS_BROWSER_INPUTHISTORY	InputUrlHistory;
	CMS_BROWSER_BOOKMARK		BookmarkInfo[BOOKMARKNUM];
	//CMS_SIL_PUSH				SILPUSHInfo[CMS_MAX_PUSH];

	//add by roger
	CMS_BROWSER_STATE_STR		BrowserState;
	CMS_BROWSER_U32				IsBusy;
	CMS_BROWSER_U32				Browserexitflag;
	CMS_BROWSER_U32				IsBrwWorking;//0:not working;1:working.


	CMS_BROWSER_S32				IsLayoutImg;
	CMS_BROWSER_S32				IsBrwStop;
	CMS_BROWSER_S32				PlayingGifNum;
	CMS_BROWSER_S32				IsGifLoad;
	CMS_BROWSER_S32				IsDownloadFile;
	CMS_BROWSER_S32				PrevPageTime;
	CMS_BROWSER_S32				ShowSoftKey;

	CMS_BROWSER_S32				IsRedirectDownload;
	CMS_BROWSER_S32				IsSelfDraw;
	CMS_BROWSER_S32				IsFromTimer;
	CMS_BROWSER_S32				IsDrawing;
	CMS_BROWSER_S32				IsTimerDownload;
	CMS_BROWSER_S32				IsWMLTimerRun;
	
	P_CMS_BROWSER_NETWORKINFO	pNetworkInfo;
	P_CMS_BROWSER_PARSERINFO	pParserInfo;
	P_CMS_BROWSER_LAYOUTINFO	pLayoutInfo;
	
		/*== add by roger for Tcentel ==*/
#ifdef CACHE_FOR_TCENTEL
	P_CMS_BROWSER_U8			CacheBlock;		//  Cache content for Tcentel
#endif

	Cms_EncodingType_e			encoding;			/*  ��ǰ��ҳ���ݱ��� */	
    Cms_ContentType_e  current_download_content_type; /*������������,shoumingl*/

	CMS_BROWSER_U32				default_font_color; /*  Ĭ����ʾ�������ɫ ���� 8-13*/
	CMS_BROWSER_U8			    default_font_type;	/*  Ĭ�ϵ����� ���� 8-13*/

	P_CMS_BROWSER_DISPLAYDATA	DisplayData;			/*��ʾ�õ�����*/			
	CMS_BROWSER_U8				JumpInforBoxFlag;/*�����Ի�����,lee*/
	E_WAP_STATE					wap_state;		/* ��ǰwap��״̬ */

	/*add by lee,��ʱ����첽�¼���ͻ�����⣬���׵Ľ���취�ȴ�������Ƶ�ʵ��*/
	CMS_BROWSER_U16				PICnewurleventflag;
	CMS_BROWSER_U16				ABORTnewurleventflag;
	
	CMS_BROWSER_U8				CurrentAccesskeyValue[4];
} CMS_BROWSERINFO, *P_CMS_BROWSERINFO;

/* add a struct for start a post request */

typedef struct __ConnectRequestTag
{
	Cms_BR_HttpMethod_e method;
	char*				url;
	char*				param;
}ConnectRequestT;

#ifndef TI
#if defined(__cplusplus) && __cplusplus
}
#endif
#endif
/*======== Constants ========*/
/*======== Enumeration ========*/
/*======== Global Data ========*/
/*======== Function prototype ========*/


#endif
