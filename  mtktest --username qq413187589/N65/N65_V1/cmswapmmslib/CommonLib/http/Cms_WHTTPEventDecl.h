/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2004
 ALL RIGHTS RESERVED

================================================================

��������		: WAP2.0 HTTP STACK
 
�ļ���			: Cms_HTTPEventDecl.h

��������		: �¼��궨���ļ������ļ�����������
					1����������¼�struct�ṹ��such as��struct SConnectRequest
														{
															CMS_S32 source_port;
														};
					2������HTTPEvent��struct���ݽṹ
					3��

����޸�ʱ��	: 7/30/2004
 
�����д��Ա	: Li Shouming;shoumingl@mobilesoft.com.cn

================================================================*/
 
/*
 http��socket�������¼�		
*/
HTTP_EVENT(FD_CONNECT,
          {
        INTEGER(connect_type);
          })

HTTP_EVENT(FD_WRITE,
          {
          INTEGER(write_counter);
          })

HTTP_EVENT(FD_READ,
	  {
	  INTEGER(read_counter);
	  })

HTTP_EVENT(FD_Qos,
          {
         INTEGER(a);
          })

HTTP_EVENT(FD_NETCONNECT,
          {
         INTEGER(a);
          })

HTTP_EVENT(FD_NETCLOSE,
          {
         INTEGER(a);
          })

HTTP_EVENT(FD_Qos_SOCKETCLOSED,
          {
         INTEGER(a);
          })

HTTP_EVENT(FD_Qos_REMOTECLOSED,
          {
         INTEGER(a);
          })

HTTP_EVENT(FD_Qos_HOSTUNREACHED,
          {
         INTEGER(a);
          })

HTTP_EVENT(FD_GETHOSTIP,
          {
         INTEGER(a);
          })
			  			  
HTTP_EVENT(SendDataRequest,
		  {
			INTEGER(method_type);
		  })

HTTP_EVENT(ReceiveDataRequest,
		  {
			INTEGER(method_type);
		  })

/*
 *��Ӹ��¼���Ŀ��ֻ�ǲ��Զ����FD_READ�¼�����ϵͳû�й�ϵ
 *add by shoumingl,/9/13/2004
 */
HTTP_EVENT(TestFD_READ,
		  {
			  INTEGER(method_type);
		  })

/*
�ض����¼�
*/
HTTP_EVENT(RedirectRequest,
		  {
			  INTEGER(redirect_code);
		  })
/*�ϲ�����¼�*/
/*
�����������ǰ����
*/
HTTP_EVENT(BrowserAbort,
		  {
			INTEGER(abort_reason);
		  }) 
/*
���������
*/
HTTP_EVENT(HTTPBrowserStart,
		  {
			INTEGER(a);
		  })
/*
HTTP�����¼�
*/
HTTP_EVENT(HTTPMethodInvokeRequest,
		  {	
		 INTEGER(method_type);
          })
/*�����쳣��״̬����λ*/
HTTP_EVENT(ExceptionDealing,
		  {	
		 INTEGER(a);
          })
/*�������*/
HTTP_EVENT(RequestErro,
		  {	
		 INTEGER(a);
          })

HTTP_EVENT(TimerOut,
		  {	
		 INTEGER(a);
          })

HTTP_EVENT(ResumeMachineStateToWaiting,
		  {	
		 INTEGER(a);
          })

//���������ABORT�¼���Ŀ���ǽ����µ����������¼�
HTTP_EVENT(NewDownLoadTaskAbort,
		  {	
		 INTEGER(a);
          })

//����ʧ�ܣ�
HTTP_EVENT(FD_WRITE_FAILED,
		  {	
		 INTEGER(a);
          })

//����java���ر����¼���
HTTP_EVENT(SEND_JAVA_REPORT,
		  {	
		 INTEGER(a);
          })

HTTP_EVENT(JAVA_REPORT_RESUME,
		  {	
		 INTEGER(a);
          })
#undef HTTP_EVENT
#undef INTEGER
#undef SESSION_MACHINE
#undef HTTPHEADER
