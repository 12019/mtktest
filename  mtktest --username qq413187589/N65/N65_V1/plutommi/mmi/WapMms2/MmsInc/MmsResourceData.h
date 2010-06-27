
/*******************************************************************************
 * Copyright(C) 2005 MobileSoft Technology (NanJing) Co.,LTD.,
 * All rights reserved.
 * This is unpublished proprietary source code of MobileSoft Technology
 *
 * The copyright notice above does not evidence any actual or intended
 * publication of such source code  
 *******************************************************************************
 */

/*========================================================================
 * Module Name: MmsResourceData.h
 *
 * Module Function: 
 *     Author Name: 
 *     Create Date: 08/25/2005
 *
 *========================================================================
 */

 #ifdef CMS_NEW_APP

#ifndef _CMS_MMS_RESOURCE_DATA_H
#define _CMS_MMS_RESOURCE_DATA_H

// ------include-------------------------
#include "PixtelDataTypes.h"
#include "MMI_features.h"
/***************************************************************************** 
* Define CMS Mms Wap Version
*****************************************************************************/
#define MMS_WAP_VERSION					"B166"	/* Mms Wap Version */
/***************************************************************************** 
* Define
*****************************************************************************/
#define MMS_STRING_BASE			(CMS_MMS_BASE + 1)
#define MMS_IMAGE_BASE				(CMS_MMS_BASE + 1)
#define MMS_MENU_BASE				(CMS_MMS_BASE + 1)
#define MMS_SCREEN_BASE			(CMS_MMS_BASE + 1)

/*�ͻ�ͬ������ʱ��ע��˺꣬�粻֧�ֶ̲ʺ�һ��رմ˺�*/
//#define SUPPORT_SMSMMS_COMBINE 			/*�����Ƿ�֧�ֶ̲ʺ�һ*/

#define SUPPORT_MMS_TEMPLATES			/*����֧�ֲ���ģ��		  */
#define SUPPORT_MMS_IDLE_IND				/*����֧�ֲ���IDLE������ʾ*/
#define SUPPORT_EXTERN_SEND				/*����֧�ֲ����ⲿ����*/
#define SUPPORT_EMPTY_BOX					/*�����Ƿ�֧���������*/

#ifdef SUPPORT_SMSMMS_COMBINE
#define SUPPORT_OTA_PUSH					/*����̲ʺ�һ���Ƿ�֧��OTA PUSH	*/
#endif

#define MMS_SUPPORT_WAP12
#define MMS_MAX_INPUT_TEXT_SIZE				1001		/* �����ı��༭������󳤶� */
#define MMS_MAX_TEXT_SIZE						MMS_MAX_INPUT_TEXT_SIZE * 3 + 2	/* �����ı�UNICODE����(ȫ��)��󳤶� */
#define MMS_MAX_INPUT_SUBJECT_SIZE			36		/* ��������༭������󳤶� */
#define MMS_MAX_UTF_SUBJECT_SIZE                	MMS_MAX_INPUT_SUBJECT_SIZE*3+1  /* UNICODE(����)תΪUTF8������󳤶� */
#define MMS_MAX_SUBJECT_SIZE					MMS_MAX_INPUT_SUBJECT_SIZE*3+2 /* ��������UNICODE����(ȫ��)��󳤶� */

#define MMS_MAX_INPUT_SEND_TO_SIZE			36		/* �༭�ռ����������󳤶� */
#define MMS_MAX_SEND_TO_SIZE					MMS_MAX_INPUT_SEND_TO_SIZE * 2 + 2 /* �ռ���UNICODE����(ȫ��)��󳤶� */
#define MMS_MAX_FILE_NAME_LENGTH				128		/* �����ļ�����󳤶� */

#define MMS_MAX_SIZE_OF_MESSAGE				mms_get_send_max_size()		/* ���ܱ༭���͵Ĳ������������50 K */
#define MMS_MAX_RECEIVE_SIZE					mms_get_receive_max_size()	/* ���ܽ��յĵĲ������������50 K */
#define MMS_MAX_SIZE_OF_MESSAGEHEAD			1024							/*����ͷ����󳤶�*/

#define MMS_MAX_INPUT_CENTRE_ADDR_LENGTH	64		/* �������ĵ�ַ������볤�� */
#define MMS_MAX_CENTRE_ADDR_LENGTH			MMS_MAX_INPUT_CENTRE_ADDR_LENGTH * 2 + 2 /* �������ĵ�ַUNICODE����(ȫ��)��󳤶� */
#define MMS_MAX_INPUT_GATEWAY_LENGTH		16		/* ��������������볤�� */
#define MMS_MAX_GATEWAY_LENGTH				MMS_MAX_INPUT_GATEWAY_LENGTH * 2 + 2 /* ��������UNICODE����(ȫ��)��󳤶� */

#define MMS_MAX_INPUT_PORT_LENGTH			6		/* ���Ŷ˿�������볤�� */
#define MMS_MAX_PORT_LENGTH					MMS_MAX_INPUT_PORT_LENGTH * 2 + 2 /* ���Ŷ˿�UNICODE����(ȫ��)��󳤶� */

#define MMS_MAX_TITLE_LENGTH					20		/* ���Ų��ţ��༭����ʱscreen��title���ȣ�����ȫ������gedit.title[] */
#define MMS_MAX_INPUT_FRAME_TIME_LENGTH	3		/* ��ҳ����ʱ��༭������󳤶� */
#define	MMS_MAX_FRAME_TIME_LENGTH			2*MMS_MAX_INPUT_FRAME_TIME_LENGTH	/* ȫ������gedit.slidetime[]��С */

#define MMS_MAX_INPUT_SERVICE_ID_LENGTH		30		/* ������Ӫ��ID������볤�� */
#define MMS_MAX_SERVICE_ID_LENGTH			MMS_MAX_INPUT_SERVICE_ID_LENGTH * 2 + 2 /*  ������Ӫ��ID UNICODE����(ȫ��)��󳤶� */
#define MMS_MAX_PLAY_TIME						60		/*���������ʱ��*/
#define MMS_MAX_ADDRESS_LENGTH				64		/* ��(��)���˵�ַ(������)���ļ�����ժҪ�ṹ����󳤶� */
#define MMS_MAX_DATE_LEN						32		/* �ļ���������Ϣ������󳤶� */
#define MMS_MAX_DETAILS_LENGTH				5 * 128	/* ��Ϣ����string���� */

#define MAX_MESSAGE_COUNT						50			/* ������󴢴���Ϣ�� */
#define MAX_SIZE_MMS_DEFINE					500*1024	/* Ԥ����������󴢴���Ϣ��С */
#define MAX_SIZE_ALL_MMS						Cms_Return_Mms_MaxSize()/* ʵ��������󴢴���Ϣ��С */
#define MMS_MAX_SAVE_MEDIA_FILENAME_INPUT	16			/* ������ͼƬ�����ֱ����ļ���������󳤶� */
#define DEFAULT_MMS_SLIDE_TIMES				5000		/* Ĭ�ϲ���ÿ֡����ʱ�� */
#define MAX_MMS_SLIDE_MMS						20			/* ���ű༭��֡������ */
#define CMS_MMS_POPUP_DELAY_TIME				1000   		/*����DisplayPopup ��ʱ */
#define MAX_MMS_SENDTO_COUNT					10			/*����ռ��˸���*/
#define MAX_SHOW_STRING_BUF					160			/*��ʾunicode �ַ���ʱ�õ��� ��������*/
#define MAX_HINT_BUF							40			/*��ʾHINT �ַ���ʱ�õ��� ��������*/

/***************************************************************************** 
* 
*****************************************************************************/
/*����������ֵ���ɵ������������б�*/
enum
{
	MMS_SERVICE_CHINAMOBILE = 0	/*�й��ƶ� 		*/
};
/*�й�̨����Ӫ������*/
enum
{
	MMS_SERVICE_TCC = 0,			/*̨������	*/
	MMS_SERVICE_CHT,				/*���A��� 		*/
	MMS_SERVICE_FET,				/*�h�����		*/
	MMS_SERVICE_KGT,				/*����MMS		*/
	MMS_SERVICE_TAT,				/*������� 		*/
	MMS_SERVICE_MBT				/*�|���Ӎ 		*/
};
/*��������Ӫ������*/
enum
{
	MMS_SERVICE_SPAIN_MOVISTAR = 0,	/*������Movistar	*/
	MMS_SERVICE_SPAIN_VODAFONE,		/*������Vodafone	*/
	MMS_SERVICE_SPAIN_AMENA			/*������Amena	*/
};
/*̩����Ӫ������*/
enum
{
	MMS_SERVICE_THAILAND_AIS = 0,		/*̩��AIS		*/
	MMS_SERVICE_THAILAND_DTAC,		/*̩��DTAC	*/
	MMS_SERVICE_THAILAND_ORANGE	/*̩��Orange	*/
};
/***************************************************************************** 
* MMI Resource Data
*****************************************************************************/

 /* ---------screen id----- -----*/
typedef enum {
		SCR_ID_MMS_MAIN_MENU = MMS_SCREEN_BASE,
              #ifdef SUPPORT_SMSMMS_COMBINE 
              SCR_ID_SMSMMS_WMESSAGE_MENU,	/*   New SMS MMS    */
              #endif
		SCR_ID_MMS_WMESSAGE_MENU,	/*   New Message    */
		SCR_ID_MMS_INBOX,				/*   Inbox    */
		SCR_ID_MMS_OUTBOX,			/*   Outbox    */
		SCR_ID_MMS_DRAFTBOX,			/*   Draftbox    */
              #ifdef SUPPORT_SMSMMS_COMBINE 
              SCR_ID_SMSMMS_TEMPLATES_MENU,		/*   New SMS MMS  Templates 		*/
		SCR_ID_SMSMMS_SETTING_MENU,			/*   New SMS MMS  Setting 			*/
		SCR_ID_SMSMMS_MEMORY_STATUS_MENU,	/*   New SMS MMS   Memory Status 	*/
              #endif
		SCR_ID_MMS_TEMPLATES,		/*   Templates   */
		SCR_ID_MMS_EMPTY_BOX,		/*   Empty box   */
		SCR_ID_MMS_SETTING_MENU,		/*   Setting  */
		SCR_ID_MMS_MEMORY_STATUS,	/*   Memory Status   */

		SCR_ID_MMS_SEND_TO_MENU,	/*    TO   */
		SCR_ID_MMS_ADD_NUMBER,		/*    Add Number   */
		SCR_ID_MMS_ADD_EMAIL,		/*    Add Email   */
		SCR_ID_MMS_SEND_TO_LIST,		/*    Receiver List    */
		SCR_ID_MMS_SENDTO_OPTIONS,	/*    Send To Options ( add num/add email/edit/del/del all )  */
		SCR_ID_MMS_AMEND_SENDTO,	/*    Modify Receiver   */
		
		SCR_ID_MMS_SUBJECT_EDIT,		/*    Subject Edit   */
		SCR_ID_MMS_CONTENT_OPTIONS,	/*    Content Edit Options   */

		SCR_ID_SHOW_MESSAGE,			/*    Edit show message   */
		SCR_ID_MMS_WMESSAGE_EDIT_TEXT,		/*    Edit Text   */
		SCR_ID_MMS_SLIDE_TIME_SETTING,		/*    Setting Frame Time   */
		SCR_ID_MMS_PREVIEW_MESSAGE,			/*    Play/Preview Message   */
		
		SCR_ID_MMS_SEND_OPTIONS,				/*    Send Options (send/preview/save/send and save)   */
		SCR_ID_SENDING_RETRIEVING_MESSAGE,	/*    Sending/retrieving Message   */
		
		SCR_ID_MMS_INBOX_OPTIONS1,		/*     Message Options (inbox)  */
		SCR_ID_MMS_INBOX_OPTIONS2,		/*     Push options (inbox)  */

              #ifdef SUPPORT_SMSMMS_COMBINE 
              SCR_ID_MMS_INBOX_WAP_OPTIONS,	/* 	Wap options(inbox) 		*/
              SCR_ID_MMS_INBOX_WAP_DETAILS,	/* 	Wap options(details) 		*/
              #endif
		SCR_ID_MMS_REPLY_OPTIONS,			/*   Reply  */

		SCR_ID_MMS_VIEW_DETAILS,			/*     View Details  */
		SCR_ID_MMS_SAVE_IMAGE_LIST,		/*     List Save Images  */
		SCR_ID_MMS_SAVE_MUSIC_LIST,		/*     List Save Music  */
		SCR_ID_MMS_SAVE_ACCESSORY_LIST,		/*     List Save accessories  */
		SCR_ID_MMS_GET_PHONE_NUMBER,	/*     Get Phone Number  */
		SCR_ID_MMS_USE_NUMBER_OPTION,
		
		SCR_ID_MMS_VIEW_SAVE_IMAGE,		/*     View Save Image  */
		SCR_ID_MMS_PLAY_SAVE_MUSIC,		/*     View Save Music */
		SCR_ID_MMS_VIEW_SAVE_ACCESSORY,		/*     View Save accessory  */
		SCR_ID_MMS_INPUT_IMAGE_NAME,	/*     Input Image Name */
		SCR_ID_MMS_INPUT_MUSIC_NAME,	/*     Input Music Name   */
		SCR_ID_MMS_INPUT_ACCESSORY_NAME,	/*     Input accessory Name   */

		SCR_ID_MMS_EDIT_MESSAGE,			/*     Edit Message (reply/forward)  */


		SCR_ID_MMS_OUTBOX_OPTIONS,		/*     Outbox Options  */
		
		SCR_ID_MMS_DRAFTBOX_OPTIONS,	/*     Draftbox Options */
		SCR_ID_MMS_TEMPLATES_OPTIONS,	/*     Templates Options */
		SCR_ID_MMS_SETTING_SEND_OPTIONS,		/*      Setting Send Options */
		SCR_ID_MMS_SETTING_RETRIEVE_OPTIONS,	/*      Setting Retrieve Options */
		SCR_ID_MMS_SETTING_MMSC_OPTIONS,		/*      Setting MMSC Options */
		SCR_ID_MMS_SETTING_NET_OPTIONS,			/*      Setting NET Options */
		
		SCR_ID_MMS_SETTING_NET_SETTING,			/*     Gsm/Gprs setting  */

		SCR_ID_INPUT_OPTION,					/*    Input Options  (finish/cancel) */
		SCR_MMS_TEMPLATE_DETAILS,			/*	template show detail 	*/
		SCR_MMS_NEW_MSG_ON_IDLE,			/*	IDLE new mms msg ind	*/
		SCR_ID_MMS_SHOW_DETAILS_ON_IDLE,	/*	IDLE show mms detail	*/

		SCR_ID_MMS_SETTING_SERVICE_ID_MENU,		/*	Service list screen			*/
		SCR_ID_MMS_SETTING_SERVICE_OPTION_MENU,	/*	Service list option screen	*/  
		/* add new items before this line */
		MMS_SCR_ID_DEFINES_MAX

} MMS_SCREEN_ENUM;


 /* ----- -----string id ----- ----- */
typedef enum {
	STR_MMS_MAIN_MENU_CAPTION = MMS_STRING_BASE,
   	STR_CMS_MMS_MENUENTRY,
	STR_CMS_MESSAGE_MENUENTRY,

	STR_NEW_SMS_MMS,
	STR_MMS_WMESSAGE,
	STR_MMS_INBOX, 
	STR_MMS_OUTBOX,
	STR_MMS_DRAFTBOX,
	STR_MMS_TEMPLATES,
	STR_MMS_SETTING_MENUENTRY,
	STR_MMS_MEMORY_STATUS,

	STR_SMS_MMS_TEMPLATES,
	STR_SMS_MMS_SETTING,
	STR_SMS_MMS_MEMORY_STATUS,
	STR_SMS_MEMORY_STATUS,

	/*---   1-1  NEW MESSAGE  ---------*/
	STR_MMS_TO_ID, 
	STR_MMS_CC_ID,
	STR_MMS_BCC_ID, 
	STR_MMS_SUBJECT_ID,
	STR_MMS_CONTENT_ID,
	STR_MMS_SEND_OPTIONS, 

	/*---   1-1-1  Sendto Options  --------*/
	STR_MMS_SENDTO_OPTIONS,
	STR_MMS_ID_ADD_NUMBER,
	STR_MMS_ID_ADD_EMAIL,
	
	/*---   1-1-5  Edit Options  ---------*/
	STR_EDIT_OPTIONS, 

	STR_MMS_CONTENT_OPTIONS_EDITTEXT, 
	STR_MMS_CONTENT_OPTIONS_EMPTYTEXT,	
	STR_MMS_CONTENT_OPTIONS_INSERTNEWIMAGE,
	STR_MMS_CONTENT_OPTIONS_DELCURRENTIMAGE, 
	STR_MMS_CONTENT_OPTIONS_ADDMUSIC, 
	STR_MMS_CONTENT_OPTIONS_DELCURRENTMUSIC, 
	STR_MMS_CONTENT_OPTIONS_INSERTNEWACCESSORY,
	STR_MMS_CONTENT_OPTIONS_DELCURRENTACCESSORY, 
	STR_MMS_CONTENT_OPTIONS_FRAMETIME,
	STR_MMS_CONTENT_OPTIONS_INSERTNEWFRAME,	
	STR_MMS_CONTENT_OPTIONS_DELCURRENTFRAME,
	
	/*---   1-1-6   Send Option --------------*/
	STR_MMS_SEND_OPTIONS_SEND,
	STR_MMS_SEND_OPTIONS_VIEW, 
	STR_MMS_SEND_OPTIONS_SAVE,
	STR_MMS_SEND_OPTIONS_SEND_SAVE,

	/*---   1-2   INBOX -----------------------*/
	STR_MMS_INBOX_OPTIONS,
	

	STR_MMS_INBOX_OPTIONS_REPLY, 
	STR_MMS_INBOX_OPTIONS_DETAILS,
	STR_MMS_INBOX_OPTIONS_FORWARD,
	STR_MMS_INBOX_OPTIONS_SAVE_IMAGE,
	STR_MMS_INBOX_OPTIONS_SAVE_MUSIC,
	STR_MMS_INBOX_OPTIONS_SAVE_ACCESSORY,
	STR_MMS_INBOX_OPTIONS_GET_DETAILS,
	STR_MMS_INBOX_OPTIONS_DOWNLOAD,
	STR_MMS_INBOX_OPTIONS_MMS_REPLY, 
	STR_MMS_INBOX_OPTIONS_SMS_REPLY, 
	/*---   1-2-1-3   view details ----------*/
	STR_MMS_NUM_USAGE,
	STR_MMS_MEMORY_USED,
	STR_MMS_MEMORY_REMAIN,
	
	/*---   1-2-1-5   save image -----------*/
	STR_IMAGE_SAVE,
	STR_MMS_IMAGE,
	
	/*---   1-2-1-6   save music ---------------*/
	STR_MUSIC_SAVE,
	STR_MMS_MUSIC,

	/*---   1-2-1-7   save ACCESSORY ---------------*/
	STR_ACCESSORY_SAVE,
	STR_MMS_ACCESSORY,

	/*---   1-3   OUTBOX   -----------*/
	STR_MMS_OUTBOX_OPTIONS,
	

	/*---   1-4   DRAFTBOX   -----------*/
	STR_MMS_DRAFTBOX_OPTIONS,

	/*---   1-5   TEMPLATES   ----------*/
	STR_MMS_TEMPLATES_OPTIONS,
	STR_MMS_TEMPLATES_TITLE_01,
	STR_MMS_TEMPLATES_TITLE_02,
	STR_MMS_TEMPLATES_TITLE_03,
	STR_MMS_TEMPLATES_TITLE_04,
	STR_MMS_TEMPLATES_TITLE_05,
	STR_MMS_TEMPLATES_OPTIONS_WRITE,
	/*---   1-6   MMS SETTING   ---------*/
	STR_MMS_SETTING_SEND_OPTIONS,
	STR_MMS_SETTING_RECEIVE_OPTIONS,
	STR_MMS_SETTING_MMSC_OPTIONS,
	STR_MMS_SETTING_NET_OPTIONS,
	
	/*---   1-6-1   Send Setting   ---------*/
	STR_MMS_SETTINGS_EXPIRES,
	STR_MMS_SETTINGS_DELIVERY_RPT,
	STR_MMS_SETTINGS_ANONYMOUS,
	STR_MMS_SETTINGS_READ_REPORT,
	STR_MMS_SETTINGS_PRIORITY,
	STR_MMS_SETTINGS_MAX_SEND,
	STR_MMS_SETTINGS_FRAME_TIME,

	STR_MMS_SETTINGS_PRIORITY_LOW,
	STR_MMS_SETTINGS_PRIORITY_NORMAL,
	STR_MMS_SETTINGS_PRIORITY_HIGH,

	STR_MSG_SETTINGS_ON,
	STR_MSG_SETTINGS_OFF,
	
	/*---   1-6-2   Retrieve Setting --------------*/
	STR_MMS_SETTINGS_RETRIEVE_MODE, 
	STR_MSG_SETTINGS_RETRIEVEMODE_MANUAL,
	STR_MSG_SETTINGS_RETRIEVEMODE_AUTO,
	STR_MMS_SETTINGS_MAX_RECEIVE,
	
	/*---   1-6-3   Mmsc Setting   -------------*/
	STR_MMS_SETTINGS_NETWORK_CFG_MMSCENTRE,
	STR_MMS_SETTINGS_NETWORK_CFG_GATEWAY,
	STR_CMCC_CENTRE_ADDRESS, 
	STR_CMCC_GATEWAY,
	STR_MMS_PORT, 
	
	/*---   1-6-4   Net Setting   ------------*/
	STR_MMS_SETTINGS_GSM_MODE,
	STR_MMS_SETTINGS_GPRS_MODE, 
	
	/*---   1-7   MEMORY STATUS ------------*/
	
	/*---   Globa   String ----------------*/
	STR_MMS_NEXT_SLIDE,
	STR_MMS_PREV_SLIDE, 
	STR_MMS_REPLY,
	STR_MMS_REPLY_MMS,
	STR_MMS_REPLY_SMS,
	STR_MMS_FORWARD, 
	STR_MMS_PLAY,
	STR_MMS_STOPPREV, 
	STR_MMS_SETTINGS_PLAYMUSIC,

	STR_MMS_DELETE,
	STR_MMS_DELETE_ALL,
	STR_MMS_DELETE_ALL_MMS,

	STR_REMOVE_CONFIRM,
	STR_REMOVE_OK, 
	STR_DELETE_CONFIRM,
	STR_DELETE_OK, 

	
	STR_MMS_DOWNLOAD_CHECK,
	STR_RETRIEVE_NOW, 
	STR_MMS_RETRIEVING, 
	STR_RETRIEVE_OK, 
	STR_MMS_SENDING, 
	STR_SEND_OK,
	
	STR_SEND_LIST_NULL,
	STR_MORE_ADDRESS, 
	STR_MMS_SENDTO_OPTIONS_ADD,
	STR_MMS_SENDTO_OPTIONS_DELETE,

	STR_SAVE_MESSAGE, 
	STR_SAVE_OK,
	STR_SEND_SAVE_OK,

	STR_ILLEGAL_INPUT,
	STR_FILE_EXISTED, 
	STR_TYPE_ERROR, 
	STR_CONTENT_NULL,
	
	STR_SET_CONFIRMED, 
	STR_MMS_FILE_PROCESS_ERROR, 
	STR_MMS_NUMBER_REPEAT,
	STR_MMS_SETTING_ERROR, 
	STR_MMS_CANCLE_SUCESS,

	
	STR_SIZE_OVERFLOW,
	STR_ADDRESS_ERROR, 
	STR_SEND_FAILED,
	STR_RETRIEVE_FAILED, 
	STR_MESSAGE_ARRIVED,
	STR_RETRIEVED_MMS,


	STR_NO_SUBJECT,
	STR_NOTIFICATION,
	STR_MMS_MSG_SIZE,
	STR_MMS_EDIT,

	STR_MMS_SLIDE_NUM,
	STR_MMS_FRAME, 
	STR_MMS_HINT_FRAMES, 
	STR_MMS_HINT_MESSAGES,
	STR_MMS_SENDER,
	STR_MMS_HINT_RECEIVER,
	
	STR_MMS_INPUT_EMPTY, 
	STR_MMS_MEDIA_FILE_ERROR,
	STR_MMS_INBOX_NO_IMAGE,
	STR_MMS_INBOX_NO_MUSIC, 
	STR_MMS_INBOX_NO_ACCESSORY,
	STR_MMS_COMPLETE, 
	
	STR_MMS_SIZE_REACHED_MAX, 
	STR_MMS_COUNT_REACHED_MAX, 
	STR_MMS_SIZE_WILL_REACH_MAX, 
	STR_MMS_COUNT_WILL_REACH_MAX,
	STR_MMS_MORE_FRAME_FORWARD,

	STR_MMS_MAX_30K_FORWARD, 
	STR_MMS_MAX_50K_FORWARD, 
	STR_MMS_MAX_70K_FORWARD, 
	STR_MMS_MAX_100K_FORWARD, 
	STR_MMS_FLASH_WRITE_ERROR, 
	STR_MMS_WRONG_NOTIFICATION,
	STR_MMS_SAVE_MEDIA_FORMAT_UNKNOWN,
	STR_MMS_PUSH_OPERATING,
	STR_MMS_SIZE_TOO_BIG,
	
	STR_MMS_QUOTA_EXCEEDED,
	STR_EXPIRED_MMS, 
	STR_REJECTED_MMS,
 
	STR_MMS_SENT,
	STR_MMS_CREATE,
	STR_EMPTY_INBOX,
	STR_EMPTY_OUTBOX,
	STR_EMPTY_DRAFTBOX,
	STR_EMPTY_ALLBOX,
	STR_EMPTY_OK,
	STR_MMS_REACHED_MAX,

	/*----- ----- add new string----- ----- */
	STR_MMS_INBOX_IS_EMPTY,
	STR_MMS_OUTBOX_IS_EMPTY,
	STR_MMS_DRAFTBOX_IS_EMPTY,

	STR_MMS_ONE_HOUR,
	STR_MMS_ONE_DAY,
	STR_MMS_ONE_WEEK,
	STR_MMS_MAX,
	STR_MMS_SETTING_SAVE,
	STR_MMS_FRAME_TIME_VALIDATION,
	STR_MMS_INVALIDATION,
	STR_MMS_INPUT_NULL,

	STR_MMS_30K,
	STR_MMS_50K,
	STR_MMS_70K,
	STR_MMS_100K,
	STR_MMS_NO_PERSISTENT_STORAGE,
	STR_MMS_HOUR,
	STR_MSG_NOT_READY_YET,	
	STR_MMS_WAP_EDIT_SETTING,
	STR_MMS_WAP_MODIFY_SERVICE_ID,
	STR_MMS_WAP_PUSH_MESSAGE,
	STR_MMS_WAP_OTA_BOOKMARK,
	STR_MMS_WAP_OTA_SETTING,
	STR_MMS_WAP_OTA_ADD_BOOKMARK,
	STR_MMS_WAP_OTA_ADD_SETTING,
	STR_EMPTY_BOX,
	STR_MMS_ALLBOX,
	STR_MMS_ALLBOXES_ARE_EMPTY,
	STR_MMS_WAP_OTA_CANNOT_SET,
	STR_MMS_NEW_MESSAGE_FROM,
	STR_MMS_WAITING,
	MMS_STRING_ID_DEFINES_MAX
}
MMS_STRING_ENUMS;


 /*----- ----- image id ----- ----- */
typedef enum {
	IMG_MMS_BEAIM_IMAGE	= MMS_IMAGE_BASE,
       IMG_MESSAGE_SIM_MMS_MENUENTRY,
	IMG_MMS_WMESSAGE,
	IMG_MMS_INBOX,
	IMG_MMS_OUTBOX,
	IMG_MMS_DRAFTBOX,
	IMG_MMS_EMPTYBOX,
	IMG_MMS_MESSAGE_TEMPLATE,
	IMG_MMS_MESSAGE_SETTING,
	IMG_MMS_MESSAGE_MEMORY,
	
	IMG_MMS_WMESSAGE_SENDTO,
	IMG_MMS_WMESSAGE_SENDCC,
	IMG_MMS_WMESSAGE_SENDBCC,
	IMG_MMS_WMESSAGE_SUBJECT,
	IMG_MMS_WMESSAGE_CONTENT,
	
	IMG_MMS_INBOX_RPT,
	IMG_MMS_INBOX_PUSH_READ,
	IMG_MMS_INBOX_PUSH_UNREAD,
	IMG_MMS_INBOX_READ,
	IMG_MMS_INBOX_UNREAD,
	IMG_MMS_INBOX_READREPORT,
	IMG_MMS_INBOX_WAPPUSH_READ,
	IMG_MMS_INBOX_WAPPUSH_UNREAD,
	
	IMG_MMS_DRAFTBOX_DRAFT,

	IMG_MMS_OUTBOX_SENDT,
	IMG_MMS_OUTBOX_SENDF,
	
	IMG_MMS_SENDING,
	IMG_MMS_RETRIEVING,

	IMG_MMS_SEND_OPTIONS,
	IMG_MMS_PICTURE_ADDED,
	IMG_MMS_MUSIC_ADDED,
	IMG_MMS_PICTUREMUSIC_ADDED,
	IMG_MMS_PLAY_SAVE_MUSIC,
	IMG_MMS_PLAY_UNKNOW_MEDIATYPE,
	IMG_MMS_TEMPLATES_01,
	IMG_MMS_TEMPLATES_02,
	IMG_MMS_TEMPLATES_03,
	IMG_MMS_TEMPLATES_04,
	IMG_MMS_TEMPLATES_05,
	
	/* add new items before this line */
	MMS_IMAGE_ID_DEFINES_MAX
}
MMS_IMAGE_ENUMS;

 /*----- -----menu options ----- ----- */
 /*--- 0 ----- */
typedef enum
{
		MMS_MENU_WMESSAGE,
		MMS_MENU_INBOX,
		MMS_MENU_OUTBOX,
		#ifdef __MMI_CLUB_MULTI_MMSBOX__
		//MMS_MENU_CLUB_MULTI_MMSBOX,
		#endif
		MMS_MENU_DRAFTBOX,
		#ifdef SUPPORT_MMS_TEMPLATES
		MMS_MENU_TEMPLATES,
		#endif
		MMS_MENU_MSG_SETTINGS,
		#ifdef SUPPORT_EMPTY_BOX
		MMS_MENU_EMPTY_BOX,
		#endif
		MMS_MENU_MEMORY_STATUS,
		NUM_MMS_MAIN_MENU
}MESSAGES_MMS_MAIN_MENU_ENUMS;
 
 /*--- 1-1 (New Message) ----- */
typedef enum
{
	MMS_WMESSAGE_TO,
	MMS_WMESSAGE_CC,
	MMS_WMESSAGE_BCC,
	MMS_WMESSAGE_SUBJECT,
	MMS_WMESSAGE_CONTENT,
	MMS_SEND_OPTIONS,
	NUM_MMS_WMESSAGE_MENU
}MESSAGES_MMS_WMESSAGE_MENU_ENUMS;

 /*--- 1-1-1(1/2/3) --- */
typedef enum
{
	MMS_MSG_SENDTO_ADD_NUMBER,
	MMS_MSG_SENDTO_ADD_EMAIL,
	NUM_MMS_SENDTO
}MESSAGES_MMS_SENDTO_MENU_ENUMS; 
 
/*--- 1-1-(1/2/3)-(1/2) --- */
typedef enum
{
	MMS_SENDTO_OPTIONS_ADD_NUMBER,
	MMS_SENDTO_OPTIONS_ADD_EMAIL,
	MMS_SENDTO_OPTIONS_AMEND,
	MMS_SENDTO_OPTIONS_DELETE,
	MMS_SENDTO_OPTIONS_DELETE_ALL,
	NUM_MMS_SENDTO_OPTIONS
}MESSAGES_MMS_MSG_SENDTO_OPTIONS;

 /*---  1-1-5----- */
typedef enum
{
	MMS_CONTENT_OPTIONS_EDIT_TEXT,
	MMS_CONTENT_OPTIONS_INSERTNEWFRAME,
	MMS_CONTENT_OPTIONS_INSERTNEWIMAGE,
	MMS_CONTENT_OPTIONS_ADDMUSIC,
	MMS_CONTENT_OPTIONS_MUSICTIMESETTING,
	
	MMS_CONTENT_OPTIONS_DELCURRENTIMAGE,
	MMS_CONTENT_OPTIONS_DELCURRENTMUSIC,
	MMS_CONTENT_OPTIONS_DELCURRENTFRAME,
	
	MMS_CONTENT_OPTIONS_EMPTYTEXT,
	MMS_CONTENT_OPTIONS_PREV_SLIDE,
	MMS_CONTENT_OPTIONS_NEXT_SLIDE,
	NUM_MMS_WMESSAGE_CONTENT_OPTIONS_MENU
}MESSAGES_MMS_WMESSAGE_CONTENT_OPTIONS_ENUMS;

 
 /*---  1-1-6 ----- */
typedef enum
{
	MMS_SEND_OPTIONS_SEND,
	MMS_SEND_OPTIONS_VIEW,
	MMS_SEND_OPTIONS_SAVE,
	MMS_SEND_OPTIONS_SEND_SAVE,

	NUM_MMS_SEND_OPTIONS
}MMS_SEND_OPTIONS_ENUMS;
 /*--- 1-2-1(Message)----- */
typedef enum
{
	MMS_INBOX_OPTIONS1_PLAY,
	MMS_INBOX_OPTIONS1_REPLY,
	MMS_INBOX_OPTIONS1_DETAILS,
	MMS_INBOX_OPTIONS1_FORWARD,
	MMS_INBOX_OPTIONS1_SAVE_IMAGE,
	MMS_INBOX_OPTIONS1_SAVE_MUSIC,
	MMS_INBOX_OPTIONS1_GET_DETAILS,
	MMS_INBOX_OPTIONS1_DELETE,
	MMS_INBOX_OPTIONS1_DELETE_ALL,

	NUM_MMS_INBOX_OPTIONS1
}MMS_INBOX_OPTIONS1_ENUMS;
 
 /*--- 1-2-2(PUSH)----- */
typedef enum
{
	MMS_INBOX_OPTIONS2_DOWNLOAD,
	MMS_INBOX_OPTIONS2_DETAILS,
	MMS_INBOX_OPTIONS2_DELETE,
	MMS_INBOX_OPTIONS2_DELETE_ALL,
	NUM_MMS_INBOX_OPTIONS2
}MMS_INBOX_OPTIONS2_ENUMS;


 /*---1-3(Outbox) ----- */
typedef enum
{
	MMS_OUTBOX_OPTIONS_SEND,
	MMS_OUTBOX_OPTIONS_FORWARD,
	MMS_OUTBOX_OPTIONS_PLAY,
	MMS_OUTBOX_OPTIONS_DETAILS,
	MMS_OUTBOX_OPTIONS_DELETE,
	MMS_OUTBOX_OPTIONS_DELETE_ALL,
	NUM_MMS_OUTBOX_OPTIONS
}MESSAGES_MMS_MSG_OUTBOX_OPTIONS;

 /*---1-4 (Draftbox)----- */
typedef enum
{
	MMS_DRAFTBOX_OPTIONS_SEND,
	MMS_DRAFTBOX_OPTIONS_PLAY,
	MMS_DRAFTBOX_OPTIONS_EDIT,
	MMS_DRAFTBOX_OPTIONS_DETAILS,
	MMS_DRAFTBOX_OPTIONS_DELETE,
	MMS_DRAFTBOX_OPTIONS_DELETE_ALL,
	MMS_DRAFTBOX_OPTIONS_SEND_SAVE,
	NUM_MMS_DRAFTBOX_OPTIONS
}MESSAGES_MMS_MSG_DRAFTBOX_OPTIONS;

 /*---1-5(TEMPLATES) Begin----- */
typedef enum
{
	MMS_TEMPLATES_OPTIONS_VIEW,
	MMS_TEMPLATES_OPTIONS_DETAIL,
	MMS_TEMPLATES_OPTIONS_WRITE,
	NUM_MMS_TEMPLATES_OPTIONS
}MESSAGES_MMS_MSG_TEMPLATES_OPTIONS;
 
 typedef enum
{
	MMS_TEMPLATES_TITLE_01,
	MMS_TEMPLATES_TITLE_02,
	MMS_TEMPLATES_TITLE_03,
	MMS_TEMPLATES_TITLE_04,
	MMS_TEMPLATES_TITLE_05,
	NUM_MMS_TEMPLATES_TITLE
}MESSAGES_MMS_MSG_TEMPLATES_TITLE;
  /*---1-5(TEMPLATES) End----- */

  /*---(Empty box) Begin----- */
 typedef enum
{
	MMS_EMPTY_INBOX,
	MMS_EMPTY_OUTBOX,
	MMS_EMPTY_DRATEBOX,
	MMS_EMPTY_ALLBOX,
	NUM_MMS_EMPTY_BOX
}MESSAGES_MMS_MSG_MMS_EMPTY_BOX;
  /*---(Empty box) Begin----- */
  
  /*---1-6 MMS Setting----- */
typedef enum
{
	MMS_SETTINGS_SEND,
	MMS_SETTINGS_RETRIEVING,
	MMS_EDIT_SETTING_OPTION,
	
	NUM_MMS_SETTINGS	
}MESSAGES_MMS_SEND_SETTINGS_ENUMS;
 
  /*---1-6-1(MMS Setting)----- */
typedef enum
{
	MMS_SEND_SETTINGS_EXPIRES_CAPTION,
	MMS_SEND_SETTINGS_EXPIRES_SELECT,
	
	MMS_SEND_SETTINGS_DELIVERY_RPT_CAPTION,
	MMS_SEND_SETTINGS_DELIVERY_RPT_SELECT,

	MMS_SEND_SETTINGS_ANONYMOUS_CAPTION,
	MMS_SEND_SETTINGS_ANONYMOUS_SELECT,

	MMS_SEND_SETTINGS_PRIORITY_CAPTION,
	MMS_SEND_SETTINGS_PRIORITY_SELECT,
	
	MMS_SEND_SETTINGS_MAX_SIZE_CAPTION,
	MMS_SEND_SETTINGS_MAX_SIZE_SELECT,

	MMS_SEND_SETTINGS_FRAME_TIME_CAPTION,
	MMS_SEND_SETTINGS_FRAME_TIME_SELECT,
	
	NUM_MMS_MSG_SETTINGS_INLINE	
}
MESSAGES_MMS_SEND_SETTINGS_INLINE;
 
 /*--- 1-6-2(MMS Setting)----- */
typedef enum
{
	MMS_RETRIEVING_SETTINGS_RETRIEVEMODE_CAPTION,
	MMS_RETRIEVING_SETTINGS_RETRIEVEMODE_SELECT,
	
	MMS_RETRIEVING_SETTINGS_MAX_SIZE_CAPTION,
	MMS_RETRIEVING_SETTINGS_MAX_SIZE_SELECT,
	
	NUM_MMS_RETRIEVING_SETTINGS_INLINE	
}
MESSAGES_MMS_RETRIEVING_SETTINGS_INLINE;

 /*--- 1-6-3(MMS Setting)----- */
typedef enum
{
	MMS_MMSC_SETTINGS_MODIFY_ID_CAPTION,
	MMS_MMSC_SETTINGS_SERVICE_ID_SELECT,

	MMS_MMSC_SETTINGS_MMSC_CAPTION,
	MMS_MMSC_SETTINGS_MMSC_SELECT,
	
	MMS_MMSC_SETTINGS_GATEWAY_CAPTION,
	MMS_MMSC_SETTINGS_GATEWAY_SELECT,

	MMS_MMSC_SETTINGS_PORT_CAPTION,
	MMS_MMSC_SETTINGS_PORT_SELECT,

	MMS_MMSC_SETTINGS_NET_CAPTION,
	MMS_MMSC_SETTINGS_NET_SELECT,	
	
	NUM_MMS_MMSC_SETTINGS_INLINE	
}
MESSAGES_MMS_MMSC_SETTINGS_INLINE;

 /*--- 1-6-4-1(MMS Setting)----- */
 typedef enum
{
	MMS_NET_SETTINGS_NETWORK_CFG_GSM1,
	MMS_NET_SETTINGS_NETWORK_CFG_GSM2,
	MMS_NET_SETTINGS_NETWORK_CFG_GSM3,
	MMS_NET_SETTINGS_NETWORK_CFG_GSM4,
	MMS_NET_SETTINGS_NETWORK_CFG_GSM5,
	MMS_NET_SETTINGS_NETWORK_CFG_GSM6,
	MMS_NET_SETTINGS_NETWORK_CFG_GSM7,
	MMS_NET_SETTINGS_NETWORK_CFG_GSM8,
	MMS_NET_SETTINGS_NETWORK_CFG_GSM9,
	NUM_MMS_NET_SETTINGS_NETWORK_CFG_GSM
}MESSAGES_MMS_NET_SETTINGS_GSM_ENUMS;
 /*--- 1-6-4-2(MMS Setting)----- */
 typedef enum
{
	MMS_NET_SETTINGS_NETWORK_CFG_GPRS1,
	MMS_NET_SETTINGS_NETWORK_CFG_GPRS2,
	MMS_NET_SETTINGS_NETWORK_CFG_GPRS3,
	MMS_NET_SETTINGS_NETWORK_CFG_GPRS4,
	MMS_NET_SETTINGS_NETWORK_CFG_GPRS5,
	MMS_NET_SETTINGS_NETWORK_CFG_GPRS6,
	MMS_NET_SETTINGS_NETWORK_CFG_GPRS7,
	MMS_NET_SETTINGS_NETWORK_CFG_GPRS8,
	MMS_NET_SETTINGS_NETWORK_CFG_GPRS9,
	NUM_MMS_NET_SETTINGS_NETWORK_CFG_GPRS
}MESSAGES_MMS_NET_SETTINGS_GPRS_ENUMS;

 /*---1-7(Memory Status)----- */
 

 /* -------------------------------------------------------------------*/
 
 /*---Send Setting----- */
typedef enum
{
	MMS_SEND_SETTINGS_EXPIRES,
	MMS_SEND_SETTINGS_DELIVERY_RPT,
	MMS_SEND_SETTINGS_ANONYMOUS,
	MMS_SEND_SETTINGS_PRIORITY,
	MMS_SEND_SETTINGS_MAX_SIZE,
	MMS_SEND_SETTINGS_FRAME_TIME,
	
	NUM_MMS_SEND_SETTINGS
	
}MESSAGES_MMS_SEND_SET_ENUMS;
 
/*--- Receive Setting----- */
typedef enum
{
	MMS_RETRIEVING_SETTINGS_RETRIEVEMODE,
	MMS_RETRIEVING_SETTINGS_MAX_SIZE,

	NUM_MMS_RETRIEVING_SETTINGS
}MESSAGES_MMS_RETRIEVING_SETTINGS_ENUMS;


   /*---Expires----- */
typedef enum
{
	MMS_SETTINGS_HOUR,
	MMS_SETTINGS_DAY,
	MMS_SETTINGS_WEEK,
	MMS_SETTINGS_MAX,

	NUM_MMS_EXPIRES_SETTINGS	
}MESSAGES_MMS_SETTINGS_EXPIRES;

  /*---Max Size----- */
typedef enum
{
	MMS_SETTINGS_30K,
	MMS_SETTINGS_50K,
	MMS_SETTINGS_70K,
	MMS_SETTINGS_100K,

	NUM_MMS_MAX_SIZE_SETTINGS	
}MESSAGES_MMS_SETTINGS_MAX_SIZE;
 
 /*---(On/Off)----- */
typedef enum
{
	MMS_SETTINGS_OFF,
	MMS_SETTINGS_ON,
	NUM_MMS_SETTINGS_ONOFF
}MESSAGES_MMS_SETTINGS_ONOFF;
 
 /*---(Auto/Manual)----- */
typedef enum
{
	MMS_SETTINGS_RETRIEVE_AUTO,
	MMS_SETTINGS_RETRIEVE_MANUAL,
	NUM_MMS_SETTINGS_RETRIEVE
}MESSAGES_MMS_SETTINGS_RETRIEVE;
 
 /*---Priority( low/normal/hight)----- */
typedef enum
{
	MMS_SETTINGS_PRIORITY_LOW,
	MMS_SETTINGS_PRIORITY_NORMAL,
	MMS_SETTINGS_PRIORITY_HIGH,
	NUM_MMS_SETTINGS_PRIORITY
}MESSAGES_MMS_SETTINGS_PRIORITY;

 /*---Reply( MMS Reply/SMS Reply)----- */
typedef enum
{
	MMS_INBOX_PEPLY_MMS,
	MMS_INBOX_PEPLY_SMS,
	NUM_MMS_INBOX_REPLY_OPTIONS
}MMS_INBOX_REPLY_OPTIONS_ENUMS;

 /*---Get Number(Dail/Save)----- */
typedef enum
{
	MMS_INBOX_DIAL_NUMBER,
	MMS_INBOX_SAVE_NUMBER,
	NUM_MMS_INBOX_GET_NUMBER_OPTIONS
}MMS_INBOX_GET_NUMBER_OPTIONS_ENUMS;

 /*--------------------------------------------------------------- */

 /*---MMS Status----- */
typedef enum
{
	CMS_MMS_STATUS_OFF=0,
	CMS_MMS_STATUS_NEW_MESSAGE,
    	CMS_MMS_STATUS_BUSY,
    	CMS_MMS_STATUS_FULL
} CmsMmsStatusTypeEnum;

/***************************************************************************** 
* Typedef 
*****************************************************************************/

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

/* ����������*/
typedef enum 
{
		MMS_FOLDER_UNKNOWN = 0,
		MMS_RECEIVE_FOLDER,				/* �ռ��� */
		MMS_SEND_FOLDER,					/* ������ */
		MMS_DRAFT_FOLDER					/* �ݸ��� */
}MMS_FOLDER_NAME;

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
 
/*MMS��ժҪ��Ϣ����*/
typedef struct TAGMESSAGELIST MESSAGELIST;
typedef  MESSAGELIST *P_MESSAGELIST;
struct TAGMESSAGELIST
{
	S8				*fileName;				/* �����ļ���(��׺.mms) */
	S8				*subject;				/* �������� */
	S8				*to_address;			/* �����ռ���/�����˵ĵ�ַ */
	S8				*cc_address;			/* ����CC �ĵ�ַ */
	S8				*bcc_address;			/* ����BCC�ĵ�ַ */
	S8				*url;					/* PUSH��ϢURL��ַ */
	S8				*date;					/* ���� */
	S32				size;					/* ���Ŵ�С */
	P_MESSAGELIST	next;					/* ��һ������ */
	U8				state;					/* ����״̬(�Ѷ���δ��������PUSH) */
	S32				expriy_time;			/*��Ϣ��Ч��*/

	U8				msgtype;				/*message type :sms/ mms /wap /ota set/bookmark*/
    #ifdef SUPPORT_SMSMMS_COMBINE
       U16				SmsIndex;				/*sms index */
    #endif

    #ifdef SUPPORT_OTA_PUSH
	/*
	1.ota setting push  use ota_name,ota_id,url(homepage),ota_url(mmscenter)
	2.ota bookmark push use ota_name,url(bookmark)
	*/
	S8				*ota_name;				/* */	
	S8				*ota_gateway;			/*gateway*/
	S8				*ota_port;				/*port*/
	S8				*ota_netacc;		/*netaccount*/

	S8				*ota_murl;				/*mmscenter */
	S8				*ota_smsc;				/*smsaddress*/

	S8				*ota_ispname;			/*ispname*/
	S8				*ota_csdscode;			/*CSDServiceCode*/
	S8				*ota_apn;				/*GPRSAccessPointName*/
	S8				*ota_user;				/*user*/
	S8				*ota_passw;				/*password*/
	S8				*ota_authtype;			/*ota_authtype*/
	S8				*ota_logintype;			/*ota_logintype*/
	
	S8				*ota_bmurl;				/* bookmark url*/	
	S8				*ota_bmname;			/* bookmark name*/	

    #endif	
};	


/* ������Ϣ*/
typedef struct TAGMESSAGEFOLDER MESSAGEFOLDER;
typedef  MESSAGEFOLDER *P_MESSAGEFOLDER;
struct TAGMESSAGEFOLDER
{
	S32				messageNumber;		/* MMS �ļ����� */
	S32				messageSize;			/* �����ܵ��ֽ��� */
	P_MESSAGELIST	currentMessage;			/* ��ǰ���� */
	P_MESSAGELIST	root;					/* ��һ������ */
	P_MESSAGELIST	pushMessage;			/* ����֪ͨ�������Զ�����ʱʹ�� */
};


/* ��������� */
struct TAGMANAGERDOCUMENT
{	
	S32				currentEvent;			/* ��ǰ�¼�(not use now) */
	S8				needProtect;			/* �༭�������Ƿ���Ҫ����(not use now)*/
											/* 'Y':��Ҫ*/
											/* 'N':����Ҫ */
	P_MESSAGEFOLDER		currentFolder;	/* ��ǰ����*/
	P_MESSAGEFOLDER		receiveFolder;	/* �ռ��� */
	P_MESSAGEFOLDER		sendFolder;   	/* ������ */
	P_MESSAGEFOLDER		draftFolder;		/* �ݸ���*/
};
typedef struct TAGMANAGERDOCUMENT MANAGERDOCUMENT;
typedef MANAGERDOCUMENT *P_MANAGER;
 /*message setting */
typedef enum
{
	SET_MESSAGE_NULL,						/*������*/
	SET_MESSAGE_CUR,						/*�趨Ϊ��ǰ��Ϣ*/
	SET_MESSAGE_PUSH						/*�趨Ϊ��ǰPUSH��Ϣ*/
}SET_MESSAGE;

typedef enum
{
	SENDTO_UNKNOWN = 0,	
	SENDTO_TO,						/* TO 	*/
	SENDTO_CC,						/* CC 	*/
	SENDTO_BCC						/* BCC 	*/
}set_to;

 /* receiver list  */
typedef struct _SENDTO_LIST
{
	char*					number;
	struct _SENDTO_LIST*		next;
}SENDTO_LIST;
typedef SENDTO_LIST*	pSENDTO_LIST;


/* ����༭�����ȫ������� */
typedef struct _TEXT_EDIT
{
	U8	text_buf[MMS_MAX_TEXT_SIZE];							/* ����ı�����(input) */
	U8	sub_buf[MMS_MAX_SUBJECT_SIZE];							/* �������(input) */
	U8	phone_buf[MMS_MAX_SEND_TO_SIZE];						/* ����ռ��˵�ַ(input) */
	U8	temp[MMS_MAX_CENTRE_ADDR_LENGTH];					/* ���Դ�ű༭���޸�ǰ���������ݣ��û�ȷ�����޸�ʱ�ָ� */

	S8	frametime[MMS_MAX_FRAME_TIME_LENGTH];					/* ��ҳ����ʱ��(input) */
	U8	save_media_fname[MMS_MAX_SAVE_MEDIA_FILENAME_INPUT];	/* ������ͼ��������ļ���(input) */
	S8	mms_fname[MMS_MAX_FILE_NAME_LENGTH];					/* ���ŷ��͡�����ǰencode���ɵ�mms�ļ��� */

	U8*	media_buf;												/* �����ŵ�ý���ļ�(���������ʱ���ֵĲ���) */
	U16 media_type;												/* ý������ */
	U32 media_len;												/* ý�����ݳ��� */

	U32 total_height;												/* һ֡�����Ű���ʾ���ܸ߶� */
	S32	start_height;											/* ��ʾ�Ű����ݶ��˸߶�(����ʼ���������) */
	U8*	title[MMS_MAX_TITLE_LENGTH];								/* ���š�Ԥ������ʱscreen��title(�� 2/5) */
}
TEXT_EDIT;	


/* ��Ϣ���ýṹ */
typedef struct _MMS_CONFIG
{
	U8	service_id[MMS_MAX_SERVICE_ID_LENGTH];				/* �����Ӫ��ID*/
	U8	centre_addr[MMS_MAX_CENTRE_ADDR_LENGTH];			/* ��Ų������ĵ�ַ(input) */
	U8	gateway[MMS_MAX_GATEWAY_LENGTH];					/* ��Ų�������(input) */
	U8	port[MMS_MAX_PORT_LENGTH];							/* ��Ŷ˿�(input) */
	U8	frametime[MMS_MAX_FRAME_TIME_LENGTH];				/* ��ҳ����ʱ��(input) */

	U8	*time[NUM_MMS_EXPIRES_SETTINGS];				/* for showcategory57screen */
	U8	*maxsize[NUM_MMS_MAX_SIZE_SETTINGS];			/* for showcategory57screen */
	U8	*onoff[NUM_MMS_SETTINGS_ONOFF];				/* for showcategory57screen */
	U8	*priority[NUM_MMS_SETTINGS_PRIORITY];			/* for showcategory57screen */
	U8	*retrieve[NUM_MMS_SETTINGS_RETRIEVE];			/* for showcategory57screen */
	U8	*gprs[NUM_MMS_NET_SETTINGS_NETWORK_CFG_GPRS];	/* for showcategory57screen */

	S32	expires;							/* ��Ч��0:һСʱ	1:һ��2:һ��3:���*/
	S32	delivery_rpt;					/* ���ͱ���  0: �ر� 1: ���� */
	S32 anonymous;						/* ��������  0: �ر� 1: ���� */
	S32 read_rpt;						/* �Ķ�����  0: �ر� 1: ���� */
	S32 prior;							/* ���ȼ�    0: ��   1: ��   2: �� */
	S32 sendsize;						/* ��������0: 30K	1: 50K	2:70K	3: 100K*/
	
	S32 retrieve_mode;					/* ���շ�ʽ  0: �Զ� 1: �ֶ� */
	S32 retrievesize;						/* ��������0: 30K	1: 50K	2:70K	3: 100K*/
	S32 gprs_mode;						/* GPRSģʽ  0: ģʽһ 1: ģʽ�� 2: ģʽ�� 3: ģʽ�� 4: ģʽ�� */

	S32 mms_service_activeitem;			/* ��ǰMMS ���õ���Ӫ��������*/
	S32 wap_service_activeitem;			/* ��ǰWAP ���õ���Ӫ��������*/

}
MMS_CONFIG;

/* ���ű�־�ṹ */
typedef struct _mms_flag
{
	pBOOL		gsend_save ;		/*�Ƿ��ͱ���		*/
	pBOOL		gsend_recv ;		/*�Ƿ������շ�����	*/
	pBOOL		gmsg_saved;		/*�Ƿ��Ѿ��������	*/

	pBOOL		gmms_memory;		/*�Ƿ������ų���	*/
	pBOOL		gmanual_recv;		/*�Ƿ����ֶ�����	*/
	pBOOL		gmmsbox_full;		/*�����Ƿ��ќ�		*/
	pBOOL           	gplay_state ;		/*�Ƿ����ڲ��Ų���	*/
	pBOOL           	gnew_message;		/*�Ƿ�Ϊ�½���Ϣ	*/
	pBOOL		gexit_toidle;			/*�Ƿ񷵻�idle			*/
	#ifdef SUPPORT_MMS_IDLE_IND
	pBOOL		gnewmsg_idle;		/*�Ƿ���ʾ����Ϣ(Idle)*/	
	#endif
}mms_flag;




/***************************************************************************** 
* Functions Decleration
*****************************************************************************/
void init_cms_mms_app(void);
void cms_create_new_mms(void* filePath);
void cms_suspend_mms_operation(void);
void mms_write_message_settings_file(void);
void EntryScrMMSMenuList(void);

#ifdef SUPPORT_MMS_IDLE_IND
void mmi_mms_entry_new_msg_ind (void);
BOOL mmi_mms_need_new_msg_ind (void);
#endif

#ifdef SUPPORT_EXTERN_SEND
void mmi_mms_extern_entry_new_mms(void* filePath,void* phbnumber);
void mmi_mms_extern_exit_new_message(void);
#endif
void mmi_mms_extern_clearuserdata(void);
void	ClearMmsUserData(void);

int CmsGetCurrentMmsState(void);
void mmi_mms_new_msg_ind(void);
void mmi_wapmms_judge_recv_wappush_del_last(void);
int CmsGetMmsNetState(void);
#endif  /* _SIMCOM_MMS_RESOURCE_DATA_H */
#endif
