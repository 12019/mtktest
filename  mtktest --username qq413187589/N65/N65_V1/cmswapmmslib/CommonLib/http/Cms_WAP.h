/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2004
 ALL RIGHTS RESERVED

================================================================

��������		: WAP2.0 HTTP STACK
 
�ļ���			: Cms_WAP.h

��������		: Ϊ�ϲ�Ӧ���ṩWAP�����ӿ�

����޸�ʱ��	: 7/30/2004
 
�����д��Ա	: Li Shouming;shoumingl@mobilesoft.com.cn
================================================================*/
#ifndef _CMS_WAP_H
#define _CMS_WAP_H
#include "cmshttp.h"
#include "Cms_WHTTPVariable.h"
#ifdef __cplusplus
extern "C" {
#endif

#define TCPIPTESTSPENDTIME 
/*
#ifdef _D_DF
#define RECDATABUFLEN ( Cms_Browser_GetMaxSizeCanDownload() + 4*1024 )
#else
#define RECDATABUFLEN (120*1024)
#endif
*/
#define RECDATABUFLEN ( Cms_GetDownloadMaxSize() + 4*1024 )

/* java��������Ҫ���ڴ������ϲ㴫�����ֵ���ж�̬���� */
#define RECJAVADATABUFLEN ( GetOtaJavaSize() + 4*1024 )
//#define RECDATALESSBUFLEN (20*1024)//����������100K�ڴ�ʧ�ܵ�������ٷ���С�ڴ�20k
#define PRE_URL_HOST_LEN 200
#define PRE_URL_PATH_LEN 400
#define PRE_URL_IP_LEN 20
#define DOWNLOADCONTENTTYPELEN 60

//#define SENDDATA_ASYNC  //�˺������ѷ������ݱ�Ϊ�첽��


#define timerOutDefault 30000	//����(2����),�����¼��ȴ�60��//#define timerOutDefault 60000
#define timerOutDefault2 20000	//���Ž���ȴ�20��
#define AUTOTRYMAX       2/*20051102 cocoma xu modify�޸��ش�������ǰ��3*/

enum _GPRSState
{
	GPRSNull,
	GPRSConnecting,
	GPRSOnline
};
enum _WAP2ROAD
{
	GATEWAY_CMWAP,
	GATEWAY_CMNET
};
/*��Ž��յ�������*/
typedef struct _whttp_info
{
	CMS_U32		Content_Len;

	unsigned	char * Data;
	int			recv_data_len;
	int			all_data_len;
	
	/*ÿ�����µ�����ʱ����ֵ��ԭΪ0����socket�ɹ��������ݺ�Ϊ1*/
	/*��ʾ�ɹ���ǰ���سɹ�*/
	int		course_flag ;
	/*�����������ʼ���ţ���ֵ״̬Ϊ0�����ųɹ���״̬Ϊ1*/
	int		dialing_flag;
	char    wap_gateway_ip[20];
	int		wap_gateway_port;
	int     have_connect_ip ;
	int     have_connect_port;
	enum _WAP2ROAD WAP2ROAD  ; 
	CMS_BOOL    IfSafeConnect;/*CMS_YES �ǰ�ȫ���ӣ� CMS_NO ��ͨ����*/
	httpTask_e httpTask;
	char    downLoadContentType[DOWNLOADCONTENTTYPELEN];
	int     contentLenInReponse;
	int     headersLenInResponse;
	int		DownLoadTaskFlag ;//����������ص��Ƿ�����ҳ:1,yes;2,no;0,unknown
	CMS_BOOL IfHaveContentLenInResponseFlag;//CMS_NO����ʾû�У�CMS_YES����ʾ��
											//ÿ��������ʼʱҪ����Ϊ��
	CMS_BOOL initSocketFlag ;//CMS_NO,����ʧ��;CMS_YES���ɹ�
	int     ConnectionFlagInResponse;//û�еõ�responseʱΪ-1;�õ������close��0��keepalive��1��
	int     preSocketID;
	int     SendFailedAutoTryMax;
	int     ConnectFailedAutoTryMax;
	int		JavaReportSendAgain;
	int     javaTaskFlag;//0,not java download;1,java download
#ifdef SUPPORT_HTTP_TLS
    unsigned char *tls_send_data;
	CMS_BOOL    CurTunnelIfEstalbished;/*��ǰͨ���Ƿ��� CMS_YES;CMS_NO */
#endif
#ifdef TCPIPTESTSPENDTIME
	int     startTICK;		//����TICK
	int     endTICK;	//��ֹTICK
#endif
	unsigned char *sendBuf;
	unsigned char *SendJavaReportData;
	int				SendJavaReportDataLen;
	
	unsigned char	*szBuffer;
	int				recv_tls_data;

} Content_Struct;

/*�˺������ϲ���ó�ʼ��WAP STACK������״̬���ĳ�ʼ����HTTPWorking״̬���趨*/
CMS_BOOL Cms_WAP2StackInit( Cms_BR_HttpCallBack_t pFunction );
CMS_VOID 	Cms_WAP2StackDestroy(CMS_VOID);
/*������ҳ���������ϲ����*/
int			Cms_BR_Http_DownLoad(Cms_BR_HttpPatam_t *param);
/*�û�ȡ���˴�����*/
int			DiscardHttpCurrentDownLoadTask(CMS_VOID);

void		set_download_state(CMS_BOOL);
CMS_BOOL	get_download_state(void);
void		set_current_download_conten_type(void);
void		exception_nodata_download(HTTP_state_code_e exception_code);
Cms_BR_Url_e analyse_url_type(const char * url);

#ifdef __cplusplus
};
#endif

#endif /*_CMS_WAP_H*/