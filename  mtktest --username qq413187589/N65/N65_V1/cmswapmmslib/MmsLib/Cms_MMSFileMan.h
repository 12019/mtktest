#ifndef _MMSFILEMAN_H
#define _MMSFILEMAN_H

#define	SUPPORT_SMSMMS_COMBINE
#define SUPPORT_OTA_PUSH

#ifndef MMS_FILE_NAME_LEN
#define MMS_FILE_NAME_LEN 128
#endif

#ifndef CMS_MMS_APP_PATH
#define CMS_MMS_APP_PATH						"c:\\\\mms\\\\"	/* ����Ŀ¼·�� */
#endif

#ifndef MMS_MAX_INPUT_SUBJECT_SIZE
#define MMS_MAX_INPUT_SUBJECT_SIZE			41								/* ��������༭������󳤶� */
#define MMS_MAX_UTF_SUBJECT_SIZE			MMS_MAX_INPUT_SUBJECT_SIZE*3+1	/* UNICODE(����)תΪUTF8������󳤶� */
#define MMS_MAX_SUBJECT_SIZE				MMS_MAX_INPUT_SUBJECT_SIZE*3+2	/* ��������UNICODE����(ȫ��)��󳤶� */
#endif

#ifndef MMS_MAX_INPUT_SEND_TO_SIZE
#define MMS_MAX_INPUT_SEND_TO_SIZE			36		/* �༭�ռ����������󳤶� */
#endif

#ifndef MMS_MAX_DATE_LEN
#define MMS_MAX_DATE_LEN					32		/* �ļ���������Ϣ������󳤶� */
#endif

#define MAX_MESSAGE_COUNT					50			/* ������󴢴���Ϣ�� */
#define MAX_SIZE_MMS_DEFINE					500*1024	/* Ԥ����������󴢴���Ϣ��С */
#define MAX_SIZE_ALL_MMS					Cms_Return_Mms_MaxSize()/* ʵ��������󴢴���Ϣ��С */

#define MMS_MAX_SIZE_OF_MESSAGE				mms_get_send_max_size()		/* ���ܱ༭���͵Ĳ������������50 K */
#define MMS_MAX_RECEIVE_SIZE				mms_get_receive_max_size()	/* ���ܽ��յĵĲ������������50 K */
#define MMS_MAX_SIZE_OF_MESSAGEHEAD			1024						/*����ͷ����󳤶�*/

/***************************************************************************** 
* Typedef 
*****************************************************************************/
enum
{
	MSG_HDR_TYPE_UNKNOWN = 0,
	MSG_HDR_TYPE_FILENAME,		/* MMS�ļ��� ��ʼ�ֶ� */
	MSG_HDR_TYPE_ADDRESS,		/* MMS(retrieve)������/(send req)��һ���ռ��� */
	MSG_HDR_TYPE_CC_ADDRESS,
    MSG_HDR_TYPE_BCC_ADDRESS,
	MSG_HDR_TYPE_SUBJECT,		/* ���� */
	MSG_HDR_TYPE_DATE,			/* MMS(retrieve)����ʱ��/ (send req)����ʱ��*/
	MSG_HDR_TYPE_URL,				/* PUSH��Ϣ��URL */
	MSG_HDR_TYPE_STATE,			/* MMS״̬��Ϣ �����ֶ� */
	MSG_HDR_TYPE_SIZE	,			/* ��Ϣ��С */
	MSG_HDR_TYPE_EXPRIY,			/*��Ϣ��Ч��*/
#ifdef SUPPORT_OTA_PUSH
	MSG_HDR_TYPE_OTA_NAME,			/*OTA_NAME		*/

	MSG_HDR_TYPE_OTA_GATEWAY,		/*OTA_GATEWAY	*/
	MSG_HDR_TYPE_OTA_PORT,			/*OTA_PORT		*/
	MSG_HDR_TYPE_OTA_NETACC,		/*OTA_NETACC	*/

	MSG_HDR_TYPE_OTA_MURL,			/*OTA_MURL		*/
	MSG_HDR_TYPE_OTA_SMSC,			/*OTA_SMSC		*/

	MSG_HDR_TYPE_OTA_ISPNAME,		/*OTA_ISPNAME		*/
	MSG_HDR_TYPE_OTA_CSDSCODE,		/*OTA_CSDSCODE	*/
	MSG_HDR_TYPE_OTA_APN,			/*OTA_APN		*/
	MSG_HDR_TYPE_OTA_USER,			/*OTA_USER		*/
	MSG_HDR_TYPE_OTA_PASSW,			/*OTA_PASSW	*/
	MSG_HDR_TYPE_OTA_AUTHTYPE,		/*AUTHTYPE		*/
	MSG_HDR_TYPE_OTA_LOGINTYPE,		/*LOGINTYPE		*/
	
	MSG_HDR_TYPE_OTA_BMURL,			/*OTA_BMURL	*/
	MSG_HDR_TYPE_OTA_BMNAME,		/*OTA_BMNAME	*/
#endif
	MSG_HDR_TYPE_MSGTYPE		/* ��Ϣ���� */
};

/*message type */
enum
{
	MESSAGE_NULL=0,					/*��*/
	MESSAGE_MMS,						/*������Ϣ*/
	MESSAGE_SMS,						/*������Ϣ*/
	MESSAGE_WAP,						/*WAP ��Ϣ*/
	MESSAGE_OTA_SET,					/*WAP OTA SETTING ��Ϣ*/
	MESSAGE_OTA_BOOKMARK			/*WAP BOOKMARK    ��Ϣ*/
};

/*message setting */
typedef enum
{
	SET_MESSAGE_NULL,						/*������*/
	SET_MESSAGE_CUR,						/*�趨Ϊ��ǰ��Ϣ*/
	SET_MESSAGE_PUSH						/*�趨Ϊ��ǰPUSH��Ϣ*/
}SET_MESSAGE;

/* ����������*/
typedef enum 
{
		MMS_FOLDER_UNKNOWN = 0,
		MMS_RECEIVE_FOLDER,				/* �ռ��� */
		MMS_SEND_FOLDER,					/* ������ */
		MMS_DRAFT_FOLDER					/* �ݸ��� */
}MMS_FOLDER_NAME;

/* message state of box*/
typedef enum 
{
		MMS_MSG_STATE_UNRECEIVED = 0,	/* unreceive */ 
		MMS_MSG_STATE_UNREAD,			/* unread*/			
		MMS_MSG_STATE_READ,				/*read*/
		MMS_MSG_STATE_UNSEND,			/*unsend*/
		MMS_MSG_STATE_SENDFAILED,		/*send failed*/
		MMS_MSG_STATE_SENDED			/*sended*/
}MMS_MSG_STATE;

/*MMS��ժҪ��Ϣ����*/
typedef struct TAGMESSAGELIST MESSAGELIST;
typedef  MESSAGELIST *P_MESSAGELIST;
struct TAGMESSAGELIST
{
	char				*fileName;				/* �����ļ���(��׺.mms) */
	char				*subject;				/* �������� */
	char				*to_address;			/* �����ռ���/�����˵ĵ�ַ */
	char				*cc_address;			/* ����CC �ĵ�ַ */
	char				*bcc_address;			/* ����BCC�ĵ�ַ */
	char				*url;					/* PUSH��ϢURL��ַ */
	char				*date;					/* ���� */
	int					size;					/* ���Ŵ�С */
	P_MESSAGELIST		next;					/* ��һ������ */
	unsigned char		state;					/* ����״̬(�Ѷ���δ��������PUSH) */
	int					expriy_time;			/*��Ϣ��Ч��*/

	unsigned char		msgtype;				/*message type :sms/ mms /wap /ota set/bookmark*/
    #ifdef SUPPORT_SMSMMS_COMBINE
	unsigned short int		SmsIndex;				/*sms index */
    #endif

    #ifdef SUPPORT_OTA_PUSH
	/*
	1.ota setting push  use ota_name,ota_id,url(homepage),ota_url(mmscenter)
	2.ota bookmark push use ota_name,url(bookmark)
	*/
	char				*ota_name;				/* */	
	char				*ota_gateway;			/*gateway*/
	char				*ota_port;				/*port*/
	char				*ota_netacc;		/*netaccount*/

	char				*ota_murl;				/*mmscenter */
	char				*ota_smsc;				/*smsaddress*/

	char				*ota_ispname;			/*ispname*/
	char				*ota_csdscode;			/*CSDServiceCode*/
	char				*ota_apn;				/*GPRSAccessPointName*/
	char				*ota_user;				/*user*/
	char				*ota_passw;				/*password*/
	char				*ota_authtype;			/*ota_authtype*/
	char				*ota_logintype;			/*ota_logintype*/
	
	char				*ota_bmurl;				/* bookmark url*/	
	char				*ota_bmname;			/* bookmark name*/	
    #endif	
};	


/* ������Ϣ*/
typedef struct TAGMESSAGEFOLDER MESSAGEFOLDER;
typedef  MESSAGEFOLDER *P_MESSAGEFOLDER;
struct TAGMESSAGEFOLDER
{
	int				messageNumber;		/* MMS �ļ����� */
	int				messageSize;			/* �����ܵ��ֽ��� */
	P_MESSAGELIST	currentMessage;			/* ��ǰ���� */
	P_MESSAGELIST	root;					/* ��һ������ */
	P_MESSAGELIST	pushMessage;			/* ����֪ͨ�������Զ�����ʱʹ�� */
};


/* ��������� */
struct TAGMANAGERDOCUMENT
{	
	int					currentEvent;			/* ��ǰ�¼�(not use now) */
	char				needProtect;			/* �༭�������Ƿ���Ҫ����(not use now)*/
											/* 'Y':��Ҫ*/
											/* 'N':����Ҫ */
	P_MESSAGEFOLDER		currentFolder;	/* ��ǰ����*/
	P_MESSAGEFOLDER		receiveFolder;	/* �ռ��� */
	P_MESSAGEFOLDER		sendFolder;   	/* ������ */
	P_MESSAGEFOLDER		draftFolder;		/* �ݸ���*/
};
typedef struct TAGMANAGERDOCUMENT MANAGERDOCUMENT;
typedef MANAGERDOCUMENT *P_MANAGER;


void mms_file_manager_init(void);
void mms_file_manager_create(void);
void mms_file_manager_destory(void);
void mms_file_manager_destory_current_folder(void);
void mms_file_manager_free_message(P_MESSAGELIST mlist);
P_MESSAGELIST mms_file_manager_new_message(void);
P_MESSAGELIST mms_file_manager_new_sms_message(void);
void mms_file_manager_delete_message_node(P_MESSAGELIST list);
void mms_file_manager_delete(void);
void mms_file_manager_delete_current_message(void);
void mms_file_manager_delete_message(P_MESSAGELIST list);
void mms_file_manager_set_current_message(P_MESSAGELIST curMsg);
void mms_file_manager_set_push_message(P_MESSAGELIST pushMsg);
P_MESSAGELIST mms_file_manager_get_push_message(void);

void mms_file_manager_modify_current_message_state(MMS_MSG_STATE state);
void mms_file_manager_add_message_to_folder(P_MESSAGELIST mmsDigest, MMS_FOLDER_NAME folder, SET_MESSAGE flag);

void mms_file_manager_store_folder(MMS_FOLDER_NAME folder);
void mms_file_manager_store_current_folder(void);
void mms_file_manager_set_current_folder(MMS_FOLDER_NAME boxName);
MMS_FOLDER_NAME mms_file_manager_get_current_folder(void);
void mms_file_manager_delete_current_folder(void);
void mms_file_manager_read_all_folders(void);
void mms_get_all_boxes_count_size(int* count, int* msize);

#endif