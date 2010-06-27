/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2004
 ALL RIGHTS RESERVED

================================================================

��������		: WAP2.0 HTTP STACK
 
�ļ���			: Cms_HTTPMachineDecl.h

��������		: HTTP״̬���궨���ļ�

����޸�ʱ��	: 7/30/2004
 
�����д��Ա	: Li Shouming;shoumingl@mobilesoft.com.cn

================================================================*/

SESSION_MACHINE({
	INTEGER(timerid);
	INTEGER(state);
	EVENT_POINTER(http_event_saved);
	EVENT_POINTER(http_event_queue_head);
	EVENT_POINTER(http_event_queue_tail);
})

#undef INTEGER
#undef EVENT_POINTER
#undef SESSION_MACHINE
/*--Shouming 2004-7-31*/
