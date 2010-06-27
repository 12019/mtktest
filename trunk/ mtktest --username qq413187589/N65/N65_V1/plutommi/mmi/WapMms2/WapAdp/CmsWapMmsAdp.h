
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
 * Module Name: CmsWapMmsAdp.h
 *
 * Module Function: 
 *     Author Name: 
 *     Create Date: 08/25/2005
 *
 *========================================================================
 */
 #ifdef CMS_NEW_APP
 #ifndef _CMSWAPMMSADP_H
#define _CMSWAPMMSADP_H
 /***************************************************************************** 
* Include files 
*****************************************************************************/
#include "WHTTP2Socket.h"
#include "cmshttp.h"
#include "CmsProvisioning.h"
#include "Custom_data_account.h"
#include "DataAccountCommon.h"
#include "DataAccountProt.h"
#include "PhoneBookTypes.h"
#include "MmsResourceData.h"
#include "cms_wap_custom_config.h"

/***************************************************************************** 
* Define
*****************************************************************************/
/*MTK6218*/
//#define SUPPORT_MTK6218 

/*MTK6219*/
//#define SUPPORT_MTK6219 

/*MTK6217*/
//#define SUPPORT_MTK6217 

/*MTK6226*/
#define SUPPORT_MTK_6226				/*����֧��MTK 6226 ƽ̨*/	

//#ifdef SUPPORT_MTK_6228
#if defined(USE_SW_PNG_DECODER) || defined(USE_HW_PNG_DECODER_V1)
#define CMS_SURPPORT_PNG			/*����֧��MTK 6228 PNG BMP ͼƬ*/	
#endif
#define CMS_SURPPORT_BMP

//for 26_06A, liukai 20070228
#if defined(UNIRISE25_GEMINI_BB) || defined(SKYWORTH25_06B_BB) || defined(SKYWORTH23_07A_BB)
#define mmi_wgui_register_pen_down_handler  wgui_register_pen_down_handler
#define mmi_wgui_register_pen_up_handler  wgui_register_pen_up_handler
#define mmi_wgui_register_pen_move_handler  wgui_register_pen_move_handler
#define mmi_wgui_register_pen_repeat_handler  wgui_register_pen_repeat_handler

#define mmi_wgui_general_pen_down_hdlr  wgui_general_pen_down_hdlr
#define mmi_wgui_general_pen_up_hdlr  wgui_general_pen_up_hdlr
#define mmi_wgui_general_pen_move_hdlr  wgui_general_pen_move_hdlr
#define mmi_wgui_general_pen_repeat_hdlr  wgui_general_pen_repeat_hdlr

#define mmi_gui_scrollbar_pen_enum  gui_scrollbar_pen_enum
#define mmi_gui_pen_event_param_struct  gui_pen_event_param_struct

#define pixtel_UI_reset_text_clip                         gui_reset_text_clip
#define pixtel_UI_set_font                                gui_set_font
#define pixtel_UI_set_clip                                gui_set_clip
#define pixtel_UI_set_text_clip                           gui_set_text_clip
#define pixtel_UI_color                                   gui_color
#define pixtel_UI_set_text_color                          gui_set_text_color
#define pixtel_UI_move_text_cursor                        gui_move_text_cursor
#define pixtel_UI_print_text                              gui_print_text
#define pixtel_UI_cancel_timer                            gui_cancel_timer
#define pixtel_UI_vertical_scrollbar_translate_pen_event  gui_vertical_scrollbar_translate_pen_event
#define pixtel_UI_horizontal_scrollbar_translate_pen_event  gui_horizontal_scrollbar_translate_pen_event
#define pixtel_UI_start_timer                             gui_start_timer
#define pixtel_UI_BLT_double_buffer                       gui_BLT_double_buffer
#define pixtel_UI_fill_rectangle                          gui_fill_rectangle
#define pixtel_UI_set_horizontal_progress_indicator_range gui_set_horizontal_progress_indicator_range
#define pixtel_UI_set_horizontal_progress_indicator_value gui_set_horizontal_progress_indicator_value
#define pixtel_UI_show_horizontal_progress_indicator      gui_show_horizontal_progress_indicator
#define pixtel_UI_lock_double_buffer                      gui_lock_double_buffer
#define pixtel_UI_create_horizontal_progress_indicator    gui_create_horizontal_progress_indicator
#define pixtel_UI_unlock_double_buffer                    gui_unlock_double_buffer
#define pixtel_UI_set_vertical_scrollbar_range            gui_set_vertical_scrollbar_range
#define pixtel_UI_set_vertical_scrollbar_scale            gui_set_vertical_scrollbar_scale
#define pixtel_UI_set_vertical_scrollbar_value            gui_set_vertical_scrollbar_value
#define pixtel_UI_show_vertical_scrollbar                 gui_show_vertical_scrollbar
#define pixtel_UI_create_vertical_scrollbar               gui_create_vertical_scrollbar
#define pixtel_UI_push_clip                               gui_push_clip
#define pixtel_UI_set_text_border_color                   gui_set_text_border_color
#define pixtel_UI_print_truncated_borderd_text            gui_print_truncated_borderd_text
#define pixtel_UI_pop_clip                                gui_pop_clip
#define pixtel_UI_show_image                              gui_show_image
#define pixtel_UI_get_character_width                     gui_get_character_width
#define pixtel_UI_draw_rectangle                          gui_draw_rectangle
#define pixtel_UI_line                                    gui_line
#define pixtel_UI_wline                                   gui_wline
#define pixtel_UI_get_character_height  gui_get_character_height
#endif
//end 26_06A

/***************************************************************************** 
* Define
*****************************************************************************/
/*��������PC���������������*/
#define  CMS_PC_CONFIG_SOFTWARE
//#define IA_JAVA_NOTIFY							/*IA java  notify from cms notify*/
/*�����˻��趨*/
#define GPRS_NET_ACCOUNT						MAX_GPRS_PROFILE_NUM
#define GSM_NET_ACCOUNT  						CUSTOM_DEFINED_MAX_CSD_PROFILE_NUM
#define DEFAULTNETACCID 						CUSTOM_DEFINED_MAX_CSD_PROFILE_NUM//GSM_NET_ACCOUNT+4 /*�й��ƶ�Ĭ��GPRS�˺�GPRS������*/
/*Socket���ݴ���*/
#define RECVDATABUF 							1500 
#define RECV_BUFLEN  							1024

/*WAPMMSģ���ڴ�Ԥ����*/
#define WAPMMS_MEMORY_SZIE 					800*1024/*WAPMMS��ʼ������800K �ڴ�*/
#define WAP_DOWNLOAD_MAX_SIZE 				256*1024/*��������������ļ�����*/
#define WAP_JAD_MAX_SIZE						100*1024
#define MAXSTOREOFFLINE 			 			5		/*��������*/
#define CMS_SNAPSHOT_SIZE						160*1024/*��ſ���*/ //mod by danny 20080215
#define CMS_CACHEDATABUF 						80*1024	/*�����Cache Size*/ //mod by danny 20080215
#define CMS_COOKIEBUFFER_LENGTH 				10*1024 /*�洢Cookie�ռ�*/

/*���ҳ��ʱ�Ƿ���ʾ״̬��*/
#define NO_SHOW_STATEBAR						/*���ʱ�Ƿ���ʾ״̬��*/
//#define WAP_SHOW_ACROSS_SCOLLBAR			/*���ʱ�Ƿ���ʾ���������*/
//#define SUPPORT_STAR_PAGEUPDOWN				//*��֧���·�ҳ��#��֧���Ϸ�ҳ
/*����������˺��б����*/
#define MMS_MAX_GSM_ACCOUNT_NUM			10			/*ƽ̨GSM �˺����ϸ���*/
#define MMS_MAX_GPRS_ACCOUNT_NUM			10			/*ƽ̨GPRS�˺����ϸ���*/
#define SERVICE_LIST_ITEM						10			/*�༭�������б����*/
#define MMS_SERVICE_ACTIVE_ITEM				0			/*���ŵ�ǰ���������*/
#define WAP_SERVICE_ACTIVE_ITEM				0			/*�������ǰ���������*/

/*�������������ļ��洢·������*/
/*Modify sys and user disk Begin */
#ifdef NAND_SUPPORT
#define CMS_SYS_DISK							"D:\\\\"			/*mms&wap sys disk*/
#define CMS_USER_DISK							"D:\\\\"			/*mms&wap user data disk*/
#define CMS_MMS_DIR_PATH						L"D:\\mms"		/* ����Ŀ¼·��(for create dir) */
#define CMS_WAP_DIR_PATH						L"D:\\wap"		/* WAP�����Ŀ¼·��(for create dir) */
#define CMS_SYSDISK_SPACE						"D:\\"			/*system ���̿ռ�·��	*/
#define CMS_USERDISK_SPACE					"D:\\"			/*User  ���̿ռ�·��	*/
#else
#define CMS_SYS_DISK							"C:\\\\"			/*mms&wap sys disk*/
#define CMS_USER_DISK							"C:\\\\"			/*mms&wap user data disk*/
#define CMS_MMS_DIR_PATH						L"C:\\mms"		/* ����Ŀ¼·��(for create dir) */
#define CMS_WAP_DIR_PATH						L"C:\\wap"		/* WAP�����Ŀ¼·��(for create dir) */
#define CMS_SYSDISK_SPACE						"C:\\"			/*system ���̿ռ�·��	*/
#define CMS_USERDISK_SPACE					"C:\\"			/*User  ���̿ռ�·��	*/
#endif
/*Modify sys and user disk end */

#define CMS_MMS_APP_PATH						CMS_SYS_DISK##"mms\\\\"	/* ����Ŀ¼·�� */
#define CMS_WAP_APP_PATH						CMS_SYS_DISK##"wap\\\\"		/* WAP�����Ŀ¼·�� */
#define CMS_WAP_DOWNLOAD_PATH				CMS_USER_DISK				/* WAP��������������ļ�·�� */
#define CMS_MMS_IMAGE_SAVE_PATH				CMS_USER_DISK##"Images\\\\"				/* ����ͼƬ���� Ŀ¼·�� */
#define CMS_MMS_AUDIO_SAVE_PATH				CMS_USER_DISK##"Audio\\\\"				/* �������ֱ��� Ŀ¼·�� */
#define CMS_MMS_ACCESSORY_SAVE_PATH			CMS_USER_DISK				/* ���Ÿ������� Ŀ¼·�� */
#define CMS_WAP_DOWNLOAD_PIC_PATH			CMS_USER_DISK##"Images\\\\"			/* WAP�������������ͼƬ�ļ�·�� */
#define CMS_WAP_DOWNLOAD_MUSIC_PATH		CMS_USER_DISK##"Audio\\\\"			/* WAP������������������ļ�·�� */
#define CMS_WAP_DOWNLOAD_VIDEO_PATH		CMS_USER_DISK##"Video\\\\"			/* WAP���������������Ƶ�ļ�·�� */
#define WAP_BOOKMARK_FILENAME				CMS_WAP_APP_PATH##"CmsBook.cnf"		/*�������ǩ�ļ�*/
#define WAP_DEFAULT_BOOKMARK_FILENAME		CMS_WAP_APP_PATH##"CmsBookMarkFile.cnf"	/*�����Ĭ����ǩ�ļ�*/
#define WAP_SETUP_FILENAME					CMS_WAP_APP_PATH##"CmsSetup.cnf"		/*����������ļ�*/
#define WAP_PUSH_FILENAME					CMS_WAP_APP_PATH##"CmsPushFile.cnf"		/*�����������Ϣ�ļ�*/
#define WAP_CACHE_FILENAME					CMS_WAP_APP_PATH##"CmsCacheFile.cnf"	/*����������ļ�*/
#define WAP_OFFLINE_FILENAME					CMS_WAP_APP_PATH##"CmsBrwOffline.cnf"	/*�������������ļ�*/
#define WAP_HISTORY_FILENAME					CMS_WAP_APP_PATH##"CmsBrwHistory.cfg"	/*�������ʷ��¼�ļ�*/
#define WAP_COOKIE_FILENAME					CMS_WAP_APP_PATH##"CmsCookie.cnf"		/*�����Cookie �ļ�*/

/*���������ļ�����汾�������*/
#define MESSAGE_SETTINGS_FILE					CMS_SYS_DISK##"mms\\\\cms_"##MMS_WAP_VERSION"_msgconfig.txt"	/* ��Ϣ���ñ����ļ� */
#define MESSAGE_SETTING_GEN					CMS_SYS_DISK##"mms\\\\mms_set_%dfile.txt"	/* ���ʱ������Ϣ�ļ��� */
#define MESSAGE_RMF_FILE						CMS_MMS_APP_PATH##"rmf.txt"		/*�ռ���ժҪ�ļ�*/
#define MESSAGE_SMF_FILE						CMS_MMS_APP_PATH##"smf.txt"	/*������ժҪ�ļ�*/
#define MESSAGE_DMF_FILE						CMS_MMS_APP_PATH##"dmf.txt"	/*�ݸ���ժҪ�ļ�*/
/*���Ž����Ĭ������*/
#define MMS_CMCC_CENTER_ADDRESS			L"http://mmsc.monternet.com/"		/*�������ĵ�ַ	*/
#define MMS_CMCC_GATEWAY					L"10.0.0.172"						/*��������			*/
#define MMS_CMCC_PORT						L"9201"							/*���ض˿ں�		*/
#define MMS_DEFAULT_FRAME_TIME				L"5"								/*Ĭ��ҳʱ��		*/

/*����������Ĭ������*/
#define WAP_CMCC_GATEWAY_ADDRESS_DEFAULT	L"10.0.0.172"		/*������������ĵ�ַ	*/
#define WAP_CMCC_GATEWAY_PORT_DEFAULT		80		              /*��������ض˿ں�Ĭ��	*/

/*�Ƿ���Ҫ����WAPMMSģ��MMI Tracer*/
#define TRACE_FOR_MTK					/*�����Ƿ���Trace*/	

#define SUPPORT_MTK_PLATFORM					/*����֧��MTK ƽ̨*/	

//#define CMS_RESET_UNDELETE_MMSFILE			/*�ָ���������ʱ�Ƿ�ɾ�������ļ�*/

//#define CMS_RESET_UNDELETE_WAPPUSHFILE		/*�ָ���������ʱ�Ƿ�ɾ�������PUSH �ļ�*/

/********************������֧�ֵĹ��Ҽ�������Ӫ������****************************/
#define CURRENT_WAP_SUPPORT_AREA				CMS_WAPMMS_SUPPOTR_CHINA/*���嵱ǰ���ڵ�*/

typedef enum
{
	CMS_WAPMMS_SUPPOTR_CHINA,			//�й���½
	CMS_WAPMMS_SUPPOTR_TAIWAN,			//�й�̨��
	CMS_WAPMMS_SUPPOTR_HONGKONG,		//�й����
	CMS_WAPMMS_SUPPOTR_THAILAND,		//̩��
	CMS_WAPMMS_SUPPOTR_SPAIN,			//������
	CMS_WAPMMS_SUPPOTR_FRANCE,			//����
	CMS_WAPMMS_SUPPOTR_ENGLISH,		//Ӣ��
	CMS_WAPMMS_SUPPOTR_ITALY,			//�����
	CMS_WAPMMS_SUPPOTR_GERMANY,		//�¹�
	CMS_WAPMMS_SUPPOTR_MEXICO,			//ī����
	CMS_WAPMMS_SUPPOTR_INDIA,			//ӡ��
	/*�ͻ����ڴ˴����Ӻ�������*/
	CMS_WAPMMS_AREA_NUM	
}CMS_WAPMMS_SUPPORT_AREA;	



#ifdef TRACE_FOR_MTK
#define wap_Tracer(str)     				cms_wap_Tracer((char*)str)
#define browser_mmi_tracer(data,data1)    cms_browser_mmi_tracer((char*) data, (char*)data1)
#define adp_Tracer(str) 	 				cms_adp_Tracer((char*)str)
#ifdef SUPPORT_CMS_SYNCML_MODULE
#define syn_Tracer(str)	 				cms_syncml_Tracer((char*)str)
#endif
#define adp_mmi_tracer(data,data1)		cms_adp_mmi_tracer((char*) data, (char*)data1)
#define mms_mmi_tracer(data,data1)		cms_mms_mmi_tracer((char*) data, (char*)data1)
#ifdef SUPPORT_CMS_SYNCML_MODULE
#define syn_mmi_tracer(data,data1)		cms_syncml_mmi_tracer((char*) data, (char*)data1)
#endif
#else
#define wap_Tracer(str) 
#define browser_mmi_tracer(data,data1)
#define adp_Tracer(str) 
#define adp_mmi_tracer(data,data1)
#define mms_mmi_tracer(data,data1)
#ifdef SUPPORT_CMS_SYNCML_MODULE
#define syn_Tracer(str)
#define syn_mmi_tracer(data,data1)
#endif
#endif

typedef enum
{
	CMS_MMS_STATE_NULL,	//���ڲ���ģ��
	CMS_MMS_STATE_BUSY 	//�ѽ������ģ��
}CMS_MMS_STATE;

typedef enum
{
	CMS_WAP_STATE_NULL,	//���������ģ��
	CMS_WAP_STATE_BUSY	//�ѽ��������ģ��
}CMS_WAP_STATE;

typedef enum
{
	CMS_WAP_CONNECT_WAP,	//���������ģʽWAP1.2.1
	CMS_WAP_CONNECT_HTTP	//���������ģʽHTTP
}CMS_WAP_CONNECT_MODE;	

typedef enum
{
	CMS_PHB_NULL,	//�绰����־Ϊ��
	CMS_PHB_MMS,	//����ģ�����绰��
	CMS_PHB_EMAIL,	//����ģ�����绰��
	CMS_PHB_SYNC	//ͬ��ģ�����绰��
}CMS_PHB_TYPE;

typedef unsigned char		CMS_BROWSER_U8;			/*=== unsigned 8 bit data  ===*/
typedef unsigned short		CMS_BROWSER_U16;		/*=== unsigned 16 bit data ===*/
typedef unsigned int		CMS_BROWSER_U32;		/*=== unsigned 32 bit data ===*/
typedef unsigned long		CMS_BROWSER_U64;		/*=== unsigned 64 bit data ===*/
typedef char			    	CMS_BROWSER_S8;			/*=== signed 8 bit data  ===*/
typedef short	        		CMS_BROWSER_S16;		/*=== signed 16 bit data ===*/
typedef int		        	CMS_BROWSER_S32;		/*=== signed 32 bit data ===*/
typedef long	    			CMS_BROWSER_S64;		/*=== signed 64 bit data ===*/

typedef CMS_BROWSER_U8 *	P_CMS_BROWSER_U8;
typedef CMS_BROWSER_U16 *	P_CMS_BROWSER_U16; 
typedef CMS_BROWSER_U32 *	P_CMS_BROWSER_U32;
typedef CMS_BROWSER_U64 *	P_CMS_BROWSER_U64;  
typedef CMS_BROWSER_S8 *	P_CMS_BROWSER_S8;
typedef CMS_BROWSER_S16 *	P_CMS_BROWSER_S16;  
typedef CMS_BROWSER_S32 *	P_CMS_BROWSER_S32; 
typedef CMS_BROWSER_S64 *	P_CMS_BROWSER_S64;

#ifdef SUPPORT_MTK_PLATFORM
#define MMS_FILE_HANDLE FS_HANDLE
#else
#define MMS_FILE_HANDLE FILE_HANDLE
#endif

void mms_Tracer(char* pData);
long CmsGetCurrentTime(void);
void CTLprovisioning(P_CMS_SETTING pBrowerSetting,P_CMS_BOOKMARK pBookmarkSetting);

void cms_socket_notify(void* inMsg);
void cms_gethost_by_name_notify(void* inMsg);

void mms_NetConnect(void);
void mms_NetDisconnect(void);
void Cms_SendPDU(void *pp_data,long vp_length,unsigned char *host,int port);
void Cms_RecvPDU(void *pp_data,long *pp_length,unsigned char *host,int port);
int sms_socket_retcode(kal_int8 ret);
static void mms_net_data_init(void);
void cms_net_mms_data_init_again(unsigned char* ip_addr, unsigned short port);
void SocketStart(int flag);
void sms_recv_data(void);
void  Cms_Reset_Soc(void);
int  Cms_close_soc(int flag);

pBOOL		Cms_Adp_FileExists(S8* filename);
int			Cms_Adp_fopen(S8* FileName, unsigned int Flag);
int			Cms_Adp_fclose(MMS_FILE_HANDLE FileHandle);
int			Cms_Adp_GetFileSize (MMS_FILE_HANDLE FileHandle, unsigned int * Size);
int			Cms_Adp_fread(MMS_FILE_HANDLE FileHandle, void * DataPtr, unsigned int Length, unsigned int * Read);
int			Cms_Adp_fwrite(MMS_FILE_HANDLE FileHandle, void * DataPtr, unsigned int Length, unsigned int * Written);
int			Cms_Adp_fdelete(const unsigned short * FileName);
long		Cms_Return_Mms_MaxSize(void);
BOOL 	Cms_Adp_JudgeDSpace(int size);
BOOL 	Cms_Adp_JudgeCSpace(int size);

void mmi_cms_search_phb_callback(MMI_PHB_VCARD_STRUCT *entity);
void mmi_cms_entry_search_from_phb(void);
char *		Cms_mms_uni8_16(char *buf_utf8);
char *		Cms_mms_uni16_8(char *buf_uni);
void		Cms_Browser_Uni8_16(P_CMS_BROWSER_U8 uni_8,P_CMS_BROWSER_U8 uni_16);
char *		Cms_mms_uni8_16_2Sub(char *buf_utf8);
CMS_BROWSER_U32 Cms_Browser_Uni16_Uni8_strlen_big(P_CMS_BROWSER_U8 string);
CMS_BROWSER_U32 Cms_Browser_Uni8_strlen(P_CMS_BROWSER_U8 string);
CMS_BROWSER_U32 Cms_Browser_Uni16_strlen(P_CMS_BROWSER_U8 string);
CMS_BROWSER_VOID Cms_Browser_Uni8_16_big(P_CMS_BROWSER_U8 uni_8,P_CMS_BROWSER_U8 uni_16);
 CMS_BROWSER_U32 mmi_get_utf16_width(CMS_BROWSER_U8 font,CMS_BROWSER_U16 Utf16);
CMS_BROWSER_VOID Cms_Browser_Uni16_8_big(P_CMS_BROWSER_U8 uni_16_8, P_CMS_BROWSER_U8 uni_8);
CMS_BROWSER_VOID Cms_Browser_Uni16_8(P_CMS_BROWSER_U8 uni_16_8, P_CMS_BROWSER_U8 uni_8);

void cms_init_mem_pool(void);
BOOL cms_check_mem_size(S32 mem_size);
void CMS_itoa_unicode(U16 i, char* str);

void cms_mms_mmi_tracer(kal_char * data, kal_char * data1);
void cms_adp_mmi_tracer(kal_char * data, kal_char * data1);
void cms_adp_Tracer(kal_char * data);
void cms_syncml_mmi_tracer(kal_char * data, kal_char * data1);
void cms_syncml_Tracer(kal_char * data);
void Cms_hex_trace(kal_uint8 *buf,kal_int32 pdu_len);
void cms_browser_mmi_tracer(kal_char * data, kal_char * data1);
void cms_wap_Tracer(kal_char * data);
int mmsGetNetType(void);
int Cms_Brower_GetSecuritySetting( void );
int Cms_Mms_GetSecuritySetting( void );
void Cms_Browser_ReadOfflineRecord(void);
CMS_BROWSER_U32 Cms_Wap_GetOfflineNum(void);
void CmsProcessIdleEvent(void);
int Cms_GetDownloadMaxSize(void);
int Cms_GetJadMaxSize(void);
unsigned char* Cms_GetResourceByID(int infoId);
void CmsTime2String(S8* datetime);
CMS_BROWSER_S32 Cms_GetLINE_HIGHT(CMS_BROWSER_VOID);
CMS_BROWSER_S32 Cms_GetSCREEN_LINE(CMS_BROWSER_VOID);
CMS_BROWSER_S32 Cms_GetORIGIN_Y(CMS_BROWSER_VOID);
void Cms_StopMusic (void);
P_CMS_BROWSER_U8 Cms_Browser_GetOfflineTitleById(CMS_BROWSER_U32 inputid);
void cms_Brw_Offline_Browser(CMS_BROWSER_U32 id);
int Cms_Browser_GetMusicSetting( void );
void Cms_Browser_SetupMusicOn(void);
void Cms_Browser_SetupMusicOff(void); 	 
int Cms_Browser_GetPushMessageSetting( void );
void Cms_Browser_SetupPushMessageOn(void);
void Cms_Browser_SetupPushMessageOff(void) ;
void Cms_Browser_SetupSecurityOn(void);
void Cms_Browser_SetupSecurityOff(void);
void Cms_Browser_SetupNetTypeHttp(void);
void Cms_Browser_SetupNetTypeWap(void);
int Cms_Browser_SavePageSize(void);
CMS_BROWSER_VOID Cms_Browser_Delete_Offline(CMS_BROWSER_U32 id);
CMS_BROWSER_VOID Cms_Browser_DeleteAll_Offline(CMS_BROWSER_VOID);
void Cms_Browser_WriteOfflineRecord(void);
int cms_getpictogram(char *pict_name,	Cms_ContentType_e  *pict_type,	unsigned	int	  *pict_size,unsigned	char **pict_content );
S32 Cms_GetCacheBlockLength(void);
void initaccountfuc(void);
void Cms_Dataaccount_Init(void);
int	CmsGetWapSupportArea(void);
void WmlTimerOut(void *time);
int Cms_Browser_GetImageSetting( void );
void Cms_GetWapSetupfilename(unsigned char *filename);
void Cms_GetWapBookfilename(unsigned char *filename);
void Cms_GetWapBookmarkfilename(unsigned char *filename);
void Cms_GetWapPushfilename(unsigned char *filename);
void Cms_GetWapCachefilename(unsigned char *filename);
void Cms_GetWapOfflinefilename(unsigned char *filename);
void Cms_GetWapHistoryfilename(unsigned char *filename);
void Cms_GetWapCookiefilename(unsigned char *filename);
CMS_BROWSER_S32 Cms_GetFONT_W(void);
 #endif /*_CMSWAPMMSADP_H*/
 #endif
