/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2003
 ALL RIGHTS RESERVED

================================================================

��������		: mBrowser Ver3.3
 
�ļ���			: CmsNetwork.h

��������		: ����ģ�鹦�ܼ��ӿں�������

����޸�ʱ��	: 11/5/2003
 
�����д��Ա	: �ֺ���

================================================================*/

#ifndef CMSNETWORK_H
#define CMSNETWORK_H

/*=================== browser state message ID =========*/ 
/*
 *These string ID was used for function
 *CMS_BROWSER_VOID Cms_Browser_DisplayState(CMS_BROWSER_STATE_STR message);
 */
typedef enum _CMS_BROWSER_STATE_STR
{
	STATE_DOWNLOAD_FAILED,		//"Download Failed!"||"����ʧ��"
	STATE_DOWNLOADING,			//"Downloading . . . "||"�������� . . ."             
	STATE_DOWNLOAD_SUCCESS,		//"Download success "||"���سɹ�"                                      
	STATE_DECODE_FAILED,		//"Decode Failed!"||"����ʧ��"                 
	STATE_GATEWAY_DISCONNECTED,	//"Gateway disconnected"||"�����ѶϿ�"                                   
	STATE_HANGUPING,			//"Hanguping . . . "||"�Ҷ��� . . ."                                               
	STATE_PARSER_FAILED,		//"parser failed!"||"������ҳʧ��!"                                         
	STATE_CHARSET_BEYOND,		//"Charset not supported!"||"��֧�ֵ��ַ���"                                 
	STATE_ABOUT_BLANK,			//"about blank"||"��ҳδ����"   
	STATE_PAGE_REFRESHING,	    //"Page refreshing..."||"�Զ�װ��,���Ե�..."                                            
	STATE_PAGE_ERROR,			//"Page error!"||"ҳ�����!"                                                     
	STATE_DOWNLOAD_BEGAIN,		//"Download  . . ."||"׼������ . . ."                                                        
	STATE_CONNECTING,			//"Connecting . . . "||"������ . . ."
	STATE_DIALING,				//"Dialing . . . "||"������ . . ."
	STATE_DIAL_FAILED,			//"Dial failed "||"����ʧ��"                                              
	STATE_SENDING,				//"Sending . . ."||"���ڷ������� . . ."                                                        
	STATE_PARAM_ERROR,			//"Param error!"||"Ӧ�ò�������"                                           
	STATE_NO_MEMORY,			//"No memory!"||"��Դ���㣡"                                             
	STATE_CONNECT_FAILED,		//"Connect failed!"||"��������ʧ��"                                         
	STATE_TIMER_ERROR,			//"Timer error!"||"��ʱ����������"                                           
	STATE_UNKNOWN_ERROR,		//"Unknown error!"||"δ֪�������ͣ�"                                         
	STATE_WAPSTACK_BUSY,		//"WAP stack busy!"||"Э��ջæ��"                                        
	STATE_NETWORK_TIMEOUT,		//"Network Timeout!"||"���糬ʱ��"                                       
	STATE_RECONNECTING,			//"Reconnecting . . . "||"����������"                                     
	STATE_WAPSTACK_SUSPENDED,	//"WAP stack suspended!"||"Э��ջ�ѹ���"                                   
	STATE_WAPSTACK_RESUME_FAILED,	//"WAP stack resume failed!"||"Э��ջ�ָ�ʧ�ܣ�"                               
	STATE_WAPSTACK_RESUMED,		//"WAP stack resumed!"||"Э��ջ�ѻָ���" 
	STATE_PARSERING,			//Parsering
	STATE_LAYOUTING,			//Layouting
	STATE_DRAWING,				//Drawing

	STATE_WMLSCRIPT,			/* wml script status */
	STATE_WTAI,

	STATE_TLS_WAIT_CONFIRM  ,	/* tls ���ӽ���ʱ�ȴ��û�ȷ�Ϸ�����֤��.  */
	STATE_WTLS_WAIT_CONFIRM ,	/* wtls ���ӽ���ʱ�ȴ��û�ȷ�Ϸ�����֤��. */
	STATE_OS_SOCKET_INVALIED,	/*ϵͳ����socketʧ�ܣ�������˳�*/
	//��������������в����κζ�����״̬�� �·�
	STATE_NORMAL				/* ��Ȼ������ô��״̬�������κζ���ҲӦ����һ��״̬ */ //  Modified by TIPrj[2005/6/29]
	
}CMS_BROWSER_STATE_STR;



/*************************************************************************
	 ö�������¼�
 ************************************************************************/
typedef enum
{
	EVENT_NETLINK_RETURN,
	EVENT_NETCLOSE_RETURN,
	EVENT_SOCKETCONNECT_RETURN,
	EVENT_GETHOSTIP_RETURN,
	EVENT_DATARRIVED,
	EVENT_SOCKETCLOSED_RETURN,
	EVENT_REMOTESOCKETCLOSED,
	EVENT_DATASENT_RETURN,
	EVENT_SOCKETBUFFERFREE
} NET_EVENT_E;



/* �����¼��Ĳ��� */
typedef enum
{
	NETLINK_SUCCESS,
	NETLINK_FAILED,
	NETCLOSE_SUCEESS,
	NETCLOSE_FAILED,
	SOCKETCONNECT_SUCCESS,
	SOCKETCONNECT_FAILED //  Modified by TIPrj[2005/6/29]
}NET_EVENT_PARAM_E;


/*************************************************************************
	 ����������¼�
 ************************************************************************/
typedef enum
{
	BRW_NETLINK_RETURN = 0,
		BRW_SENDDATA_RETURN,
		BRW_DATAARRIVED,
		BRW_NETCLOSELINK_RETURN,
		BRW_WTP_TIMEROUT_MSG,
		BRW_WML_TIMEROUT_MSG  //  Modified by TIPrj[2005/6/29]
}BRW_CenMsgType;

typedef enum
{
	BRW_NETLINK_FAILED,
		BRW_NETLINK_SUCCESS
}BRW_NETLINK_RETURN_VALUE;//�������Ӻ�

typedef enum
{
	BRW_SENDDATA_FAILED,
		BRW_SENDDATA_SUCCESS
}BRW_SENDDATA_RETURN_VALUE;//�������ݺ󷵻���Ϣ


typedef enum 
{
	BRW_NETCLOSELINK_ERROR,
		BRW_NETCLOSELINK_SUCCESS
}BRW_NETCLOSELINK_RETURN_VALUE;

/************************************************************************* 
 * ��  ����  �ַ������¼� 
 * ����ֵ��  void
 * ȫ������  
 * ��  �ڣ�  2004-10-30
 * ��  �ߣ�  ����; yongt@mobilesoft.com.cn
 ************************************************************************/
void NetPostEvent(NET_EVENT_E type,NET_EVENT_PARAM_E param1,void* param2);
void brwEventPostEvent (BRW_CenMsgType type,unsigned int param1,void* param2);
void brwEventProcessEvent (void);
#ifdef WIN32
void CreateReadDataEvent( void );
#endif

/*************************************************************************
	 �ͻ��ṩ�Ľӿں���
 ************************************************************************/
int	CmsGetNetType( void );
int CmsGetNetRoad( void );
void brw_NetDisconnect ( void );
void brw_GetGatewayParameter( unsigned char *ip,int * port );



/*************************************************************************
	 ����ͼƬ��ͼƬ
 ************************************************************************/
void CmsInitImgStack( void );
int	 CmsIsDownLoadImg( void );
void CmsDownloadImg( void );
int  CmsIsImgStackDL( void );
int  CmsAbortDownload( void );


#endif
