/*=====================================================================

 Copyright (c) 2001-2002 MobileSoft Corporation

    All Rights Reserved.

    $Logfile: bloble.h

    $Revision:

    $vision:       1.00

    $Date:         08/10/2002

    $Author:       hulf

	$Declare:
	This document contains information proprietary to MobileSoft
 Technology (Nanjing),  Corp.    Transmittal, receipt, or possession
 of this document does not express, license, or imply any rights to
 use, sell, design, or manufacture from this information. No reproduction,
 publication, or disclosure of this information, in whole or in part,
 shall be made without prior written authorization from an officer of
 MobileSoft Technology (NanJing), Corp.

Abstract:

Modified By:

Environment:

Revision History:

=====================================================================*/




#ifndef _GLOBLE_H_
#define _GLOBLE_H_
#include "Cms_callback.h"//  Modified by TIPrj[2005/7/14]  
//#include "resource.h"

//#include "Cms_MMSMain.h"
//#include "Cms_MMSSmil.h"

//ϵͳ������ʹ�þ�������


/*
#define MMSSTRING_DIALOGCOMPANY				"����Ƽ�(�Ͼ�)��ӭ��ʹ�ô������"
#define MMSSTRING_SHOWRFOLDER				"�ռ�������%d����Ϣ��%d��δ����"
#define MMSSTRING_SHOWSFOLDER				"����������%d����Ϣ��%d��δ���͡�"
#define MMSSTRING_SHOWDFOLDER				"�ݸ�������%d����Ϣ��"
#define MMSSTRING_NCMESSAGE					"û�е�ǰ��Ϣ��"
#define MMSSTRING_SPEEDSLOW					"����"
#define MMSSTRING_SPEEDNORMAL				"��ͨ"
#define MMSSTRING_SPEEDFAST					"����"
#define MMSSTRING_DOPEN						"��"
#define MMSSTRING_NOEMPTY					"�ռ��˺����ⶼ����Ϊ�գ�"
#define MMSSTRING_MM						"��ý�����Ϣ"
#define MMSSTRING_MM_1						"��ý�����Ϣ(smil)\0*.smil\0\0"
#define MMSSTRING_MM_2						"��ý�����Ϣ(wml)\0*.wml\0\0"
#define MMSSTRING_IMAGEFILE					"ͼ���ļ�\0*.wbmp;*.gif;*.jpg;*.jpeg\0\0"
#define MMSSTRING_VOICEFILE					"��Ƶ�ļ�\0*.wav;*.amr;*.imy\0\0"
#define MMSSTRING_SAVETODRAFT				"��Ҫ���浽�ݸ�����"
#define MMSSTRING_NOTEXT					"�ı����ݲ���Ϊ�գ�"
#define MMSSTRING_INUTTEXT					"�����ı�"
#define MMSSTRING_ERRORINPUT				"�������"
#define MMSSTRING_SETCONTENT				"��������"
#define MMSSTRING_SETFRAME					"֡����"
#define MMSSTRING_SETDOCUMENT				"�ĵ�����"
#define MMSSTRING_CEVENTFAILED				"�����¼�ʧ��!"
#define MMSSTRING_NOWAVE					"��ָ�����ļ�������Ч��wave��Ƶ���ļ�"
#define MMSSTRING_CTHREADFAILED1			"���������߳�ʧ��"
#define MMSSTRING_CTHREADFAILED2			"���������߳�ʧ��"
#define MMSSTRING_REVENTFAILED				"�����¼�ʧ��"
*/
/*
#define MMSSTRING_DELETEMSG					"���Ҫɾ��������Ϣ��"
#define MMSSTRING_MSGSENDOUT				"��Ϣ�ѷ�����"
#define MMSSTRING_MSGUNKNOWNERROR			"����ȷ�Ĵ���"
#define MMSSTRING_SERVICEDENIED				"����ܾ���"
#define MMSSTRING_FORMATERROR				"��ʽ����"
#define MMSSTRING_ADDRESSERROR				"��ַ����"
#define MMSSTRING_NOMSGERROR				"û����Ϣ����"
#define MMSSTRING_NETWORKERROR				"�������"
#define MMSSTRING_NOTACCEPTERROR			"�Է�������"
#define MMSSTRING_UNSUPPORTERROR			"��֧����Ϣ"
#define MMSSTRING_NBSERROR					"����æ��������Ϣʧ�ܣ�\r\n��Ҫ�ط���"
#define MMSSTRING_NBCERROR					"����æ��������Ϣʧ�ܣ�\r\n��Ҫ������"
#define MMSSTRING_NOBJERROR                 "����������Ķ��󲻴��ڣ�"
*/
/*
#define MMSSTRING_NMSGCOMMING				"һ������Ϣ��"
#define MMSSTRING_RECEIVINGMSG				"���ڽ�����Ϣ..."
#define MMSSTRING_MSGRECEIVED				"��Ϣ���յ���"
#define MMSSTRING_DI1						"���ţ�\r\n����%s��\r\n���ڣ�%s;\r\n"
#define MMSSTRING_MSGISRECEIVED				"�Է����յ���"
#define MMSSTRING_MSGISREJECTED				"��Ϣ�����գ�"
#define MMSSTRING_MSGISEXPIRED				"��Ϣ�ѹ��ڣ�"
#define MMSSTRING_MSGISDEFERRED				"��Ϣ�����ڣ�"
#define MMSSTRING_MSGNOTARRIVE				"��Ϣ�޷����䣡"
*/


/*
#define MMSSTRING_GPRSWAITING				"�������ڵȴ���Դ�����Ժ�"
#define MMSSTRING_GPRSERROR					"�������Ӵ���"
#define MMSSTRING_NOUSABLENETERROR			"����\r\nû�п��õ�WAP���ӣ�"
#define MMSSTRING_GPRSFAILED				"��������ʧ�ܣ����Ժ�"
#define MMSSTRING_GPRSRETRY					"��������ʧ�ܣ����ԣ�"
*/
/*
#define MMSSTRING_MSGFORMATERROR			"��Ϣ��ʽ����"
#define MMSSTRING_MSGNOCONTENT				"��Ϣû�����ݣ�"
#define MMSSTRING_LARGE						"�ϴ�"
#define MMSSTRING_NORMAL					"һ��"
#define MMSSTRING_SMALL						"��С"
*/
/*
#define MMSSTRING_SENDINGMSG				"���ڷ�����Ϣ..."
#define MMSSTRING_RECEIVEDPUSH				"�յ�һ��PUSH��Ϣ��"
#define MMSSTRING_SENDINGRESP				"���ڷ�����Ӧ..."
#define MMSSTRING_SENDINGAKCN				"���ڷ��ͱ���..."
#define MMSSTRING_CONNECTINGGW				"��������WAP����..."
#define MMSSTRING_CHECKINGNETWORK			"���ڼ������..."
#define MMSSTRING_SEARCHGPRS				"���ڲ�������..."
#define MMSSTRING_ESTABLISHGPRS				"������������..."
#define MMSSTRING_NETWORKOK					"�������ӳɹ���"
*/
/*
#define MMSSTRING_GETTIMEERROR				"��ȡʱ�����"
#define MMSSTRING_RMSGFIRST					"������ȡ��Ϣ��"
#define MMSSTRING_SELECTFILE				"��ѡ���ļ���"

#define MMSSTRING_NOLASTFRAME				"û����һ֡��"
#define MMSSTRING_NONEXTFRAME				"û����һ֡��"

#define MMSSTRING_SENDER					"�����ˣ�"
#define MMSSTRING_RECEIVER					"�����ˣ�"
#define MMSSTRING_DATE						"��   �ڣ�"
#define MMSSTRING_TITLE						"��   �⣺"

#define MMSSTRING_RECVFAILED				"������Ϣʧ�ܣ�"
#define MMSSTRING_AUTORECVFAILED			"�Զ�����ʧ�ܣ�"
#define MMSSTRING_STOREMEMORYLOW			"�洢�ռ����ز��㣡"

#define MMSSTRING_IMAGETOOLARGE				"�Բ���ͼƬ�ߴ����"
#define MMSSTRING_ONEIMAGEONLY				"�Բ���һҳֻ�ܺ���һ��ͼƬ��"
#define MMSSTRING_ONETEXTONLY				"�Բ���һҳֻ�ܺ���һ���ı���"

#define MMSSTRING_EDITORSTATUS				"��Ϣ��%d֡����ǰ��%d֡��"
#define MMSSTRING_ESTATUSREADY				"������"
#define MMSSTRING_ESTATUSEMPTYMSG			"����Ϣ��"

#define MMSSTRING_PHONEADDRESSEMOTY				"����ϵ���ֻ�����Ϊ�գ�"
#define MMSSTRING_EMAILADDRESSEMOTY				"����ϵ�˵�������Ϊ�գ�"
#define MMSSTRING_ADDRESSEXIST					"����ϵ���Ѿ����ڣ�"

#define MMSSTRING_ADDRESSUNKNOEWN				"δ����"
#define MMSSTRING_ADDRESSNAME					"����"
#define MMSSTRING_ADDRESSEMAIL					"��������"
#define MMSSTRING_ADDRESSPHONE					"�ƶ��绰"
*/
#define		GWL_HINSTANCE -2
#define		MENU_HEIGHT 26
#define     MMS_FILE_NAME_LEN  128//max length of file name


//#define		RUN_ON_POCKETPC
//#define		PUSH_OVER_SMS
//#define		_MMS_DEBUG_

/****************************** Basic Data types *****************************/
/*------------------------------------------------------------------------
 *
 *
 *
 *						struct padding
 *
 *
 *
------------------------------------------------------------------------*/
#ifndef CENT_FILL_FIELD1
#define CENT_FILL_FIELD1  char  unuseful1;
#endif

#ifndef CENT_FILL_FIELD2
#define CENT_FILL_FIELD2  char  unuseful1;\
							char  unuseful2;
#endif

#ifndef CENT_FILL_FIELD3
#define CENT_FILL_FIELD3  char  unuseful1;\
							char unuseful2; \
						char unuseful3;
#endif

/* Typedefs for integer types */

#ifndef TRUE 
#define TRUE 1
#endif

#ifndef FALSE 
#define FALSE 0
#endif

#ifndef     MMSHANDLE
#define		MMSHANDLE		void*
#endif
typedef unsigned int COLOR;
#ifndef RGB
	#define RGB(r,g,b)	((CMS_MMS_U32)((CMS_MMS_U8)r|(CMS_MMS_U32)((CMS_MMS_U8)g<<8)|(CMS_MMS_U32)((CMS_MMS_U8)b<<16)))
#endif



/*------------------------------------------------------------------------
 *
 *
 *
 *                 ��ͬ��MMSͷ�ֶκ궨��
 *
 *
 *
------------------------------------------------------------------------*/
#ifndef     MMS_BCC
#define		MMS_BCC					0x01
#endif

#ifndef		MMS_CC
#define		MMS_CC					0x02
#endif

#ifndef		MMS_CONTENT_LOCATION
#define		MMS_CONTENT_LOCATION	0x03
#endif

#ifndef		MMS_CONTENT_TYPE
#define		MMS_CONTENT_TYPE		0x04
#endif

#ifndef		MMS_DATE	
#define		MMS_DATE				0x05
#endif

#ifndef		MMS_DELIVERY_REPORT
#define		MMS_DELIVERY_REPORT		0x06
#endif

#ifndef		MMS_DELIVERY_TIME
#define		MMS_DELIVERY_TIME		0x07
#endif

#ifndef		MMS_EXPIRY
#define		MMS_EXPIRY				0x08
#endif

#ifndef		MMS_FROM
#define		MMS_FROM				0x09
#endif

#ifndef		MMS_MESSAGE_CLASS
#define		MMS_MESSAGE_CLASS		0x0a
#endif

#ifndef		MMS_MESSAGE_ID
#define		MMS_MESSAGE_ID			0x0b
#endif

#ifndef		MMS_MESSAGE_TYPE
#define		MMS_MESSAGE_TYPE		0x0c
#endif

#ifndef		MMS_MMS_VERSION
#define		MMS_MMS_VERSION			0x0d
#endif

#ifndef		MMS_MESSAGE_SIZE
#define		MMS_MESSAGE_SIZE		0x0e
#endif

#ifndef		MMS_PRIORITY
#define		MMS_PRIORITY			0x0f
#endif

#ifndef		MMS_READ_REPLY
#define		MMS_READ_REPLY			0x10
#endif

#ifndef		MMS_REPORT_ALLOWED
#define		MMS_REPORT_ALLOWED		0x11
#endif

#ifndef		MMS_RESPONSE_STATUS
#define		MMS_RESPONSE_STATUS		0x12
#endif

#ifndef		MMS_RESPONSE_TEXT
#define		MMS_RESPONSE_TEXT		0x13
#endif
#ifndef		MMS_SENDER_VISIBILITY
#define		MMS_SENDER_VISIBILITY	0x14
#endif

#ifndef		MMS_STATUS
#define		MMS_STATUS				0x15
#endif

#ifndef		MMS_SUBJECT
#define		MMS_SUBJECT				0x16
#endif

#ifndef		MMS_TO
#define		MMS_TO					0x17
#endif

#ifndef		MMS_TRANSACTION_ID
#define		MMS_TRANSACTION_ID		0x18
#endif


/*------------------------------------------------------------------------
 *
 *
 *
 *                 MMS��Ϣ����ֵ�궨��
 *
 *
 *
------------------------------------------------------------------------*/
#ifndef		MMS_MESSAGE_TYPE_SEND_REQ
#define		MMS_MESSAGE_TYPE_SEND_REQ			128
#endif

#ifndef     MMS_MESSAGE_TYPE_SEND_CONF
#define		MMS_MESSAGE_TYPE_SEND_CONF			129
#endif
#ifndef     MMS_MESSAGE_TYPE_NOTIFICATION_IND
#define		MMS_MESSAGE_TYPE_NOTIFICATION_IND	130
#endif

#ifndef     MMS_MESSAGE_TYPE_NOTIFYRESP_IND
#define		MMS_MESSAGE_TYPE_NOTIFYRESP_IND		131
#endif

#ifndef     MMS_MESSAGE_TYPE_RETRIVE_CONF
#define		MMS_MESSAGE_TYPE_RETRIVE_CONF		132
#endif

#ifndef     MMS_MESSAGE_TYPE_ACKNOWLEDGE_IND
#define		MMS_MESSAGE_TYPE_ACKNOWLEDGE_IND	133
#endif

#ifndef     MMS_MESSAGE_TYPE_DELIVERY_IND
#define		MMS_MESSAGE_TYPE_DELIVERY_IND		134
#endif





typedef enum
{
	NETLINK_RETURN = 0,
	SENDDATA_RETURN,
	DATAARRIVED,
	NETCLOSELINK_RETURN,
	FILEOPRATE_RETURN,
	DIR_OPREATE_RETURN,
	//CECW_TIMER_MSG,//��ʱ��
	WTP_TIMEROUT_MSG
}CenMsgType;

typedef enum
{
	MMS_NETLINK_FAILED,
	MMS_NETLINK_SUCCESS
}MMS_NETLINK_RETURN_VALUE;//�������Ӻ�  //  Modified by TIPrj[2005/7/13]

typedef enum
{
	SENDDATA_FAILED,
	SENDDATA_SUCCESS
}SENDDATA_RETURN_VALUE;//�������ݺ󷵻���Ϣ


typedef enum 
{
	NETCLOSELINK_ERROR,
	NETCLOSELINK_SUCCESS
}NETCLOSELINK_RETURN_VALUE;
/*
typedef enum
{
	FILEOPEN_SUCCESS,
	FILEOPEN_FAILED,
	FILEREAD_SUCCESS,
	FILEREAD_FAILED,
	FILEWRITE_SUCCESS,
	FILEWRITE_FAILED,
	FILECLOSE_SUCCESS,
	FILECLOSE_FAILED,
	FILEREMOVE_SUCCESS,
	FILEREMOVE_FAILED,
	FILESEEK_SUCCESS,
	FILESEEK_FAILED,
}FILEOPRATE_RETURN_VALUE;//�ļ���������ֵ
*/
/*
typedef enum
{
	MKDIR_SUCCESS,
	MKDIR_FAILED,
	RMDIR_SUCCESS,
	RMDIR_FAILED,
	GETCWD_SUCCESS,
	GETCWD_FAILED,
}DIR_OPREATE_RETURN_VALUE;   //Ŀ¼��������ֵ
*/
/*------------------------------------------------------------------------
 *
 *
 *
 *                 MMS��ص�����mmsproc��������
 *					���ϲ㷴ӳ���״̬
 *
 *
------------------------------------------------------------------------*/
 

typedef enum
{
	MMSNETLINKING,
	MMSNETLINK_SUCCESS,
	WAPCONNECT_SUCCESS,
	MMS_RECEIVING,
	MMS_SENDING,
	MMSNETLINK_FAILED,
	MMSWAPCONNECT_FAILED,
	//MMSSEND_FAILED,
	//MMSSEND_SUCCESS,
	MMSRECV_FAILED,
	MMSRECV_FAILED_BY_NOT_FOUND,
	MMSRECV_FINISHED,
	MMSRECV_SUCCESS,
	MMSOPR_CANCEL,
	MMSWAP_DISCONNECTED,
	MMSSYSTEM_ERROR,
	MMSUNKNOWN_ERROR,
	MMSNET_DISCONNECTED,
	MMSNET_DISCONNECTING,
	/* macro define of Response status value */
	MMS_RESPONSE_STATUS_VALUE_OK					=128,
	MMS_RESPONSE_STATUS_VALUE_E_UNSPECIFIED			=129,
	MMS_RESPONSE_STATUS_VALUE_E_SERVICE_DENIED		=130,
	MMS_RESPONSE_STATUS_VALUE_E_FORMAT_CORRUPT		=131,
	MMS_RESPONSE_STATUS_VALUE_E_ADDRESS_UNRESOLVED	=132,
	MMS_RESPONSE_STATUS_VALUE_E_MESSAGE_NOT_FOUND	=133,
	MMS_RESPONSE_STATUS_VALUE_E_NETWORK_PROBLEM		=134,
	MMS_RESPONSE_STATUS_VALUE_E_NOT_ACCEPTED		=135,
	MMS_RESPONSE_STATUS_VALUE_E_UNSUPORTED_MESSAGE	=136,
	MMS_RESPONSE_STATUS_VALUE_E_UNKNOW_ERROR        =999

}MMS_LIBSTATUS_VALUE;


typedef enum
{
	SMS_TYPE_DELIVERY_IND,             //���㷽�յ��󣬷��ͷ����յ�ȷ��
	SMS_TYPE_NOTIFICATION_IND,          //֪ͨ�����˸��㷢MMS��
	SMS_TYPE_UNKNOW
}SMS_HANDLE_STATUS;


typedef enum mmsliberrcode{
	MMS_NO_ERROR = 0,                             //û�д���
	MMSMEMORY_ERROR,
	MMSSEND_ABORT,
	MMSRECV_ABORT,
	MMSTEXT_TOOLARGE,
	MMSIMAGEAUDIO_TOOLARGE,
	MMSMSG_TOOLARGE
}MMSLIBERRCODE;

/*
typedef enum 
{
	MMS_RECVRETURN_MSGSENDED,
}LIB_STATUS_SENDRETURN_VALUE;
typedef enum 
{
	MMS_RECVRETURN_ERROR,   
	MMS_RECVRETURN_SUCCESS,
}LIB_STATUS_RECVRETURN_VALUE; 
*/


#define USER_MSG_BASE			0x8800

/* define user message */

#define UM_SEND_REQUEST			USER_MSG_BASE+1
#define UM_SEND_CONFIRM			USER_MSG_BASE+2
#define UM_ON_NOTI_INDICATE		USER_MSG_BASE+3
#define UM_NOTIRESP_INDICATE	USER_MSG_BASE+4
#define UM_GET_REQUEST			USER_MSG_BASE+5
#define UM_RETRIVE_CONFIRM		USER_MSG_BASE+6
#define UM_ACKN_INDICATE		USER_MSG_BASE+7
#define UM_ON_DELI_INDICATE		USER_MSG_BASE+8
#define UM_PUSH_PROCESS			USER_MSG_BASE+9
#define UM_NET_EVENT			USER_MSG_BASE+10
#define	UC_FILEINPUT			USER_MSG_BASE+11
#define UM_SAVE_MLIST			USER_MSG_BASE+12

#define IDL_MESSAGE_LIST		USER_MSG_BASE+101
#define ID_LISTVIEW				USER_MSG_BASE+102


#define UM_ID_NEW_M				ID_NEW_M
#define UM_ID_BROWSE_M			ID_BROWSE_M
#define UM_ID_REPLY_M			ID_REPLY_M
#define UM_ID_MODIFY_M			ID_MODIFY_M
#define UM_ID_SEND_M			ID_SEND_M
#define UM_ID_DELETE_M			ID_DELETE_M

/* define message box type */

#define MMS_MB_OK                       0x00000000L
#define MMS_MB_OKCANCEL                 0x00000001L
#define MMS_MB_ABORTRETRYIGNORE         0x00000002L
#define MMS_MB_YESNOCANCEL              0x00000003L
#define MMS_MB_YESNO                    0x00000004L
#define MMS_MB_RETRYCANCEL              0x00000005L

/* define message box caption */

#define MMS_MC_MESSAGE			"��Ϣ"
#define MMS_MC_REQUEST			"ѯ��"
#define MMS_MC_ALERT			"����"
#define MMS_MC_ERROR			"����"

#define MMS_STATE_MANAGER		1
#define MMS_STATE_EDITOR		2
#define MMS_STATE_BROWSER		3

/******************���Ͷ���****************************/
typedef unsigned char CMS_MMS_U8; 		/*=== unsigned 8 bit data  ===*/
typedef unsigned short CMS_MMS_U16; 	/*=== unsigned 16 bit data ===*/
typedef unsigned int CMS_MMS_U32; 		/*=== unsigned 32 bit data ===*/
typedef unsigned long CMS_MMS_U64; 		/*=== unsigned 64 bit data ===*/
typedef char CMS_MMS_S8; 				/*=== signed 8 bit data  ===*/
typedef short CMS_MMS_S16; 				/*=== signed 16 bit data ===*/
typedef int CMS_MMS_S32; 				/*=== signed 32 bit data ===*/
typedef long CMS_MMS_S64; 				/*=== signed 64 bit data ===*/
typedef void CMS_MMS_VOID;				/*=== void ===*/

typedef CMS_MMS_U8 * P_CMS_MMS_U8;
typedef CMS_MMS_U16 * P_CMS_MMS_U16; 
typedef CMS_MMS_U32 * P_CMS_MMS_U32;
typedef CMS_MMS_U64 * P_CMS_MMS_U64;  
typedef CMS_MMS_S8 * P_CMS_MMS_S8;
typedef CMS_MMS_S16 * P_CMS_MMS_S16;  
typedef CMS_MMS_S32 * P_CMS_MMS_S32; 
typedef CMS_MMS_S64 * P_CMS_MMS_S64;
typedef CMS_MMS_VOID * P_CMS_MMS_VOID;

typedef CMS_MMS_S32 CMS_MMS_BOOL;

/*------------------------------------------------------------------------
 *
 *
 *
 *                 ���ͽ���ǰ��Ҫ���õ����ݽṹ
 *					
 *
 *
------------------------------------------------------------------------*/
typedef struct tag_send_setting
{
	char *send_vfilename;
	char *conf_vfilename;
}MMS_SEND_SETTING;

typedef struct tag_recv_setting
{
	char *get_url;
	char *recv_vfilename;
	CMS_MMS_BOOL immediate_recv;   //�Ƿ���������
	int recv_msgsize;
}MMS_RECV_SETTING;

typedef struct tag_mmsconfig_setting
{
	unsigned char *wap_gateway;  //���ص�ַ�����ƶ���Ϊ"10.0.0.172"2003.11.03
	char *mms_centery;  //�������ģ����ƶ���Ϊ"Http://mmsc.monternet.com/"
	int   wap_port;     //wap wtp�˿ں�  9201
}MMS_CONFIG_SETTING;
/*------------------------------------------------------------------------
 *
 *
 *
 *                 ���ϲ���ʾ�����˵ĵ绰������Ƚṹ
 *					
 *
 *
------------------------------------------------------------------------*/
typedef struct tag_sms_msg
{
	int  msgsize;                      //��Ϣ��С
	long de_date;					   //delivery report date
	int  de_status;                    //delivery report status

	char *de_msgid;                    //delivery report message id
	char *de_to;                        //delivery report receiver


    char *mms_url;                     //MMS���ڵ�URL
    char *phone_number;                //�����˵ĵ绰
    char *subject;                     //MMS����
	char *tid;                          //transaction ID
	/*20051010 chaozhuzh add for expriy begin*/
	long  expriy_time;		  //��Ϣ��Ч��
	/*20051010 chaozhuzh add for expriy end*/
}NOTIFICATION_IND_SMS_MSG;

/*------------------------------------------------------------------------
 *
 *
 *
 *                 �����������ݽṹ�ò���
 *					
 *
 *
------------------------------------------------------------------------*/
#if 0
typedef struct tagMSETTING MSETTING;
typedef MSETTING *p_MSetting;
struct tagMSETTING
{
	/* system setting */
	CMS_MMS_S8		wapaddress[64];
	CMS_MMS_S8		mmscaddress[40];
	CMS_MMS_S8		sender[64];
	/* opration setting */
	CMS_MMS_U8		ask_coming;		// promnt a new message
	CMS_MMS_U8		auto_receive;	// auto receive message
	CMS_MMS_U8		ask_received;	// promnt a new message is receive
	CMS_MMS_U8		ask_delivery;	// promnt delivery report
	/* style setting */
	CMS_MMS_U8		prompt_sendout;
	CMS_MMS_U8		prompt_received;
	CMS_MMS_U8		prompt_read;
	CMS_MMS_U8		show_address;
	CMS_MMS_U8		priority;
};

/* struct define: messagelist */
typedef struct tagMessagelist MESSAGELIST;
typedef  MESSAGELIST *pMessageList;
struct tagMessagelist
{
	CMS_MMS_S8				filename[128];
	CMS_MMS_U8				state;
	CMS_MMS_S8				title[40];
	CMS_MMS_S8				date[32];
	CMS_MMS_S8				sender[64];
	CMS_MMS_S8				receiver[64];
	pMessageList	next;
};

/* struct define: messagelist */
typedef struct tagMessageFolder MESSAGEFOLDER;
typedef  MESSAGEFOLDER *pMessageFolder;
struct tagMessageFolder
{
	CMS_MMS_U32				messagenumber;
	CMS_MMS_U32				unsettlednumber;
	pMessageList	currentmessage;
	pMessageList	root;
};


/* struct define: CmsMMSDocument
 *  CmsMMSDocument describe a mms pdu
 */
typedef struct _ManagerDocument
{
	CMS_MMS_U8				state;
	CMS_MMS_U32				netstate;
	void			*gprshandle;
	void			*netthread;
	CMS_MMS_U32				currentevent;
	pMessageFolder	currentfolder;
	pMessageFolder	receivefolder;
	pMessageFolder	sendfolder;
	pMessageFolder	draftfolder;
	p_MSetting		setting;

	/* main window handle */
	/*HINSTANCE		mhInst;
	HWND			mhWnd;*/
}ManagerDocument;
typedef ManagerDocument *P_ManagerDocument;

#endif

#ifdef __cplusplus
extern "C" {
#endif
/*
P_ManagerDocument	getmanagerdocument();

CMS_MMS_U64		getusablememory();
*/
/*
void	char2wchar(char *str, WCHAR *wstr, int length);
void	wchar2char(WCHAR *wstr, char *str, int length);
*/
/*
void	mms_make_timestring(CMS_MMS_S8 filename[64]);

void	manager_post_message(CMS_MMS_U32 message, CMS_MMS_U32 WPARAM, CMS_MMS_S64 LPARAM);
CMS_MMS_S32		manager_message_box(CMS_MMS_S8 *text, CMS_MMS_S8 *caption, CMS_MMS_U32 type);
CMS_MMS_S32		sender_message_box(CMS_MMS_S8 *text, CMS_MMS_S8 *caption, CMS_MMS_U32 type);
*/
/*�ⲿ�ּӵ�MMS�ĵ��ṹ��ͷ�ļ���ȥ������ȫ��*/
/*
void	mms_add_to_send_list(MMSHANDLE	mmsdoc, CMS_MMS_U8 state);
void	mms_add_to_receive_list(MMSHANDLE	mmsdoc, CMS_MMS_U8 state);
void	mms_add_to_draft_list(MMSHANDLE	mmsdoc);

void	mms_set_send_message_state(CMS_MMS_S8 *filename, CMS_MMS_U8 state);
void	mms_set_receive_message_state(CMS_MMS_S8 *filename, CMS_MMS_U8 state);

void	deletetempfile();
void	long2chardate(CMS_MMS_U64 ldate, CMS_MMS_S8 *cdate);
void	mms_get_time(long *ltime);
*/
//void	remove(char *filename);
/*
CMS_MMS_S32		manager_hide(HWND hWnd);
CMS_MMS_S32		manager_show(HWND hWnd);
CMS_MMS_S32		editor_hide(HWND hWnd);
CMS_MMS_S32		editor_show(HWND hWnd);
*/




#ifdef __cplusplus
}
#endif
#endif /* _GLOBLE_H_ */
 
