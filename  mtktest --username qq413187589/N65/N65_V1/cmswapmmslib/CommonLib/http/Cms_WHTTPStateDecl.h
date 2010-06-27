/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2004
 ALL RIGHTS RESERVED

================================================================

��������		: WAP2.0 HTTP STACK
 
�ļ���			: Cms_WHTTPSateDecl.h

��������		: HTTP״̬�궨���ļ�,ֻ�ڶ���HTTPMachineʱ�õ�

����޸�ʱ��	: 7/30/2004
 
�����д��Ա	: Li Shouming;shoumingl@mobilesoft.com.cn

================================================================*/
/*���wap2.0�ص� & socket�첽����ʽ*/
STATE_NAME(HTTP_NULL)
STATE_NAME(HTTP_NET_CONNECTING)
STATE_NAME(HTTP_WAITING)
STATE_NAME(HTTP_WAITING_IP)
STATE_NAME(HTTP_CONNECTING)
STATE_NAME(HTTP_CONNECTED)
STATE_NAME(HTTP_SENDDATA) // ���ݷ���״̬�����ܻ�ͷ�����congestion�������ʱ�Է��������رգ�Ҫ�Զ��ط�
STATE_NAME(HTTP_WAIT_COMPLETE)//���ӵȴ�SOCKET�ر�һ��״̬
STATE_NAME(HTTP_WAIT_JAVA_REPORT_RESPONSE)
/*********************************************************/
ROW(HTTP_NULL,
	HTTPBrowserStart,
	1,
	{
	/*������������*/
    	null_browserstart_netcnting(machine,current_event);
	},
	HTTP_NET_CONNECTING)

ROW(HTTP_NET_CONNECTING,
	RequestErro,
	1,
	{
	/*
	����Ƿ�
	*/
//		netcnting_RequestErro_null(machine,current_event);
	},
	HTTP_NET_CONNECTING)

ROW(HTTP_WAITING,
	RequestErro,
	1,
	{
	/*
	����Ƿ�
	*/
//		netcnting_RequestErro_null(machine,current_event);
	},
	HTTP_WAITING)
	
ROW(HTTP_NET_CONNECTING,
	FD_NETCONNECT,
	1,
	{
	/*
	�������ӳɹ�,�ղ���
	*/
		netcnting_netconnect_waiting(machine,current_event);
	},
	HTTP_WAITING)

ROW(HTTP_NULL,
	FD_NETCLOSE,
	1,
	{
	/*
	�������ӳɹ�,�ղ���
	*/
		null_netclose_null(machine,current_event);
	},
	HTTP_NULL)
	
ROW(HTTP_NET_CONNECTING,
	FD_NETCLOSE,
	1,
	{
	/*
	�������ӳɹ�,�ղ���
	*/
		netcnting_netclose_null(machine,current_event);
	},
	HTTP_NULL)

ROW(HTTP_WAITING,
	FD_NETCLOSE,
	1,
	{
	/*
	����disconnect
	*/
		waiting_netclose_null(machine,current_event);
	},
	HTTP_NULL)

ROW(HTTP_WAITING_IP,
	FD_NETCLOSE,
	1,
	{
	/*
	����disconnect
	*/
		waitingip_netclose_null(machine,current_event);
	},
	HTTP_NULL)

ROW(HTTP_CONNECTING,
	FD_NETCLOSE,
	1,
	{
	/*
	����disconnect
	*/
		cnting_netclose_null(machine,current_event);
	},
	HTTP_NULL)

ROW(HTTP_CONNECTED,
	FD_NETCLOSE,
	get_download_state() != CMS_YES,
	{
	/*
	����disconnect
	*/
		cnted_netclose_null(machine,current_event);
	},
	HTTP_NULL)

ROW(HTTP_CONNECTED,
	FD_NETCLOSE,
	get_download_state() == CMS_YES,
	{
	/*
	����disconnect
	*/
		cnted_ok_netclose_null(machine,current_event);
	},
	HTTP_NULL)

ROW(HTTP_SENDDATA,
	FD_NETCLOSE,
	1,
	{
	/*
	����disconnect
	*/
		cnted_netclose_null(machine,current_event);
	},
	HTTP_NULL)

ROW(HTTP_WAIT_COMPLETE,
	FD_NETCLOSE,
	1,
	{
	/*
	����disconnect
	*/
		cnted_netclose_null(machine,current_event);
	},
	HTTP_NULL)


/*	��ҳ����*/
ROW(HTTP_WAITING,
	HTTPMethodInvokeRequest,
	1,
	{
		 waiting_htrequest_waitingip(machine,current_event);
	},
	HTTP_WAITING_IP)

ROW(HTTP_WAITING_IP,
	FD_GETHOSTIP,
	1,
	{
		 waitingip_getip_connecting(machine,current_event);
	},
	HTTP_CONNECTING)

ROW(HTTP_CONNECTING,
	FD_CONNECT,
	1,
	{
//		cnting_connect_connected(machine,current_event);
	},
	HTTP_CONNECTED)

ROW(HTTP_CONNECTED,
	SendDataRequest,
	1,
	{
		sending_request_connected(machine,current_event);
	},
	HTTP_SENDDATA)

//=============��Ҫ���һ�����Ӷ����������
ROW(HTTP_SENDDATA,//����ͷ�������Ӧ������ͻ����Ҫ�Զ��ط�
	FD_Qos_REMOTECLOSED,
	1,
	{	
		cnted_remoteclosed_waiting(machine,current_event);
	},
	HTTP_SENDDATA)

ROW(HTTP_SENDDATA,//����ͷ�������Ӧ������ͻ����Ҫ�Զ��ط�
	FD_WRITE,
	1,
	{	
		senddata_remoteclosed_senddata(machine,current_event);
	},
	HTTP_SENDDATA)
ROW(HTTP_SENDDATA,//����ͷ�������Ӧ������ͻ����Ҫ�Զ��ط�
	FD_WRITE_FAILED,
	1,
	{	
		senddata_sendfailed_waiting(machine,current_event);
	},
	HTTP_WAITING)	
ROW(HTTP_SENDDATA,//����ͷ�������Ӧ������ͻ����Ҫ�Զ��ط�
	FD_Qos_SOCKETCLOSED,
	1,
	{	
		sending_autoRetry_waiting(machine,current_event);
	},
	HTTP_WAITING)
//============	

ROW(HTTP_SENDDATA,//����е�һ��Read�¼�����˵��û�з�����ͻ������������״̬
	FD_READ,
	1,
	{	
		cnted_read_receving(machine,current_event);
	},
	HTTP_CONNECTED)

ROW(HTTP_CONNECTED,
	FD_READ,
	1,
	{	
		cnted_read_receving(machine,current_event);
	},
	HTTP_CONNECTED)


ROW(HTTP_CONNECTED,
	FD_Qos,
	1,
	{
//		cnted_qos_waiting(machine,current_event);
	},
	HTTP_WAITING)

//�������������Ӳ��ϵ��쳣���,�������ر��¼�һ�ɲ��ı�״̬
ROW(HTTP_CONNECTING,
	FD_Qos_REMOTECLOSED,
	1,
	{
		cnting_remoteclosed_waiting(machine,current_event);
	},
	HTTP_CONNECTING)
ROW(HTTP_CONNECTING,
	FD_Qos_SOCKETCLOSED,
	1,
	{
		cnting_qos_socketclosed_waiting(machine,current_event);
	},
	HTTP_WAITING)
	
//ע:���������ر���Ϣ���󣬲��ı�״̬���ɱ���socket�ر��¼�������
ROW(HTTP_CONNECTED,
	FD_Qos_REMOTECLOSED,
	1,
	{
		cnted_remoteclosed_waiting(machine,current_event);
	},
	HTTP_CONNECTED)

ROW(HTTP_CONNECTED,
	FD_Qos_SOCKETCLOSED,
	1,
	{
		cnted_fd_qos_socketclosed_waiting(machine,current_event);
	},
	HTTP_WAITING)

//ע:���������ر���Ϣ���󣬲��ı�״̬���ɱ���socket�ر��¼�������
ROW(HTTP_WAIT_COMPLETE,
	FD_Qos_REMOTECLOSED,
	1,
	{
		//�������ʱ������ǹرյ�
		cnted_remoteclosed_waiting(machine,current_event);
	},
	HTTP_WAIT_COMPLETE)

ROW(HTTP_WAIT_COMPLETE,
//	FD_Qos_REMOTECLOSED,
	FD_Qos_SOCKETCLOSED,
	1,
	{
		abort_loading_remoteclosed_waiting(machine,current_event);
	},
	HTTP_WAITING)

ROW(HTTP_CONNECTING,
	FD_Qos_HOSTUNREACHED ,
	1,
	{
		cnting_hostunreached_waiting(machine,current_event);
	},
	HTTP_WAITING)

ROW(HTTP_WAITING,
	BrowserAbort,
	1,
	{
		waiting_browserabort_waiting(machine,current_event);
	},
	HTTP_WAITING)

ROW(HTTP_WAITING_IP,
	BrowserAbort,
	1,
	{
		waitingip_browserabort_waiting(machine,current_event);
	},
	HTTP_WAITING)

ROW(HTTP_CONNECTING,
	BrowserAbort,
	1,
	{
		cnting_browserabort_waiting(machine,current_event);
	},
	HTTP_WAITING)


ROW(HTTP_CONNECTED,
	BrowserAbort,
	1,
	{
		cnted_browserabort_waiting(machine,current_event);
	},
	HTTP_WAITING)

	//ע�⣬��̲�����HTTP_WAIT_COMPLETE
ROW(HTTP_WAITING_IP,
	NewDownLoadTaskAbort,
	1,
	{
		cnted_browserabort_waiting(machine,current_event);
	},
	HTTP_WAITING)
	
ROW(HTTP_CONNECTING,
	NewDownLoadTaskAbort,
	1,
	{
		cnted_browserabort_waiting(machine,current_event);
	},
	HTTP_WAIT_COMPLETE)

ROW(HTTP_SENDDATA,
	NewDownLoadTaskAbort,
	1,
	{
		cnted_browserabort_waiting(machine,current_event);
	},
	HTTP_WAIT_COMPLETE)
	
ROW(HTTP_CONNECTED,
	NewDownLoadTaskAbort,
	1,
	{
		cnted_browserabort_waiting(machine,current_event);
	},
	HTTP_WAIT_COMPLETE)

ROW(HTTP_WAITING_IP,
	ExceptionDealing,
	1,
	{
//		ExceptionDealing_waiting(machine,current_event);
	},
	HTTP_WAITING)
	
ROW(HTTP_CONNECTING,
	ExceptionDealing,
	1,
	{
//		ExceptionDealing_waiting(machine,current_event);
	},
	HTTP_WAITING)

ROW(HTTP_CONNECTED,
	ExceptionDealing,
	1,
	{
//		ExceptionDealing_waiting(machine,current_event);
	},
	HTTP_WAITING)

ROW(HTTP_CONNECTED,
	ResumeMachineStateToWaiting,
	1,
	{
	},
	HTTP_WAITING)
ROW(HTTP_CONNECTING,
	ResumeMachineStateToWaiting,
	1,
	{
	},
	HTTP_WAITING)
ROW(HTTP_WAITING_IP,
	ResumeMachineStateToWaiting,
	1,
	{
	},
	HTTP_WAITING)

#ifdef SUPPORT_HTTP_TIMER
	
ROW(HTTP_NET_CONNECTING,
	TimerOut,
	1,
	{
		waiting_FD_NETCONNECT_timeOut(machine,current_event);
	},
	HTTP_NULL)

ROW(HTTP_WAITING_IP,
	TimerOut,
	1,
	{
		waiting_FD_GETHOSTIP_timeOut(machine,current_event);
	},
	HTTP_WAITING)
	
ROW(HTTP_CONNECTING,
	TimerOut,
	1,
	{
		waiting_FD_CONNECT_timeOut(machine,current_event);
	},
	HTTP_WAITING)

ROW(HTTP_SENDDATA,
	TimerOut,
	1,
	{
		waiting_FD_READ_timeOut(machine,current_event);
	},
	HTTP_WAITING)

ROW(HTTP_WAIT_COMPLETE,
	TimerOut,
	1,
	{
		waiting_SOCKETCLOSE_timeOut(machine,current_event);
	},
	HTTP_WAITING)

ROW(HTTP_CONNECTED,
	TimerOut,
	getCurrentSocketID() == -1,
	{
		cnted_SOCKETCLOSE_timeOut(machine,current_event);
	},
	HTTP_WAITING)

ROW(HTTP_CONNECTED,
	TimerOut,
	1,
	{
		waiting_FD_READ_timeOut(machine,current_event);
	},
	HTTP_WAITING)
	
ROW(HTTP_SENDDATA,
	SEND_JAVA_REPORT,
	1,
	{
	},
	HTTP_WAIT_JAVA_REPORT_RESPONSE)

ROW(HTTP_WAIT_JAVA_REPORT_RESPONSE,//����е�һ��Read�¼�����˵��û�з�����ͻ������������״̬
	FD_READ,
	1,
	{	
		response_read_receving(machine,current_event);
	},
	HTTP_CONNECTED)

ROW(HTTP_WAIT_JAVA_REPORT_RESPONSE,
	TimerOut,
	Content_Buffer.JavaReportSendAgain == 0,
	{
		waitingResponse_TimerOut_waitingResponse(machine,current_event);
	},
	HTTP_WAIT_JAVA_REPORT_RESPONSE)
	
ROW(HTTP_WAIT_JAVA_REPORT_RESPONSE,
	TimerOut,
	Content_Buffer.JavaReportSendAgain != 0,
	{
		waitingResponse_TimerOut_waitingResponse(machine,current_event);
	},
	HTTP_CONNECTED)

//ע:���������ر���Ϣ���󣬲��ı�״̬���ɱ���socket�ر��¼�������
ROW(HTTP_WAIT_JAVA_REPORT_RESPONSE,
	FD_Qos_REMOTECLOSED,
	1,
	{
		//�������ʱ������ǹرյ�
		cnted_remoteclosed_waiting(machine,current_event);
	},
	HTTP_WAIT_JAVA_REPORT_RESPONSE)

ROW(HTTP_WAIT_JAVA_REPORT_RESPONSE,
	FD_Qos_SOCKETCLOSED,
	1,
	{
		// ��Ҫ����һЩ�����ϵ�������ڴ���ͷ�
		// ��������ʧ�ܴ���
		wait_java_response_socketclosed_waiting( machine, current_event );
//		abort_loading_remoteclosed_waiting(machine,current_event);
	},
	HTTP_WAITING)

ROW(HTTP_CONNECTED,
	JAVA_REPORT_RESUME,
	1,
	{
	},
	HTTP_WAIT_JAVA_REPORT_RESPONSE)

#endif

#undef STATE_NAME
#undef ROW
