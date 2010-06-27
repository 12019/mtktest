/******************************************************************************

 C   H E A D E R   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2003
 ALL RIGHTS RESERVED

*******************************************************************************

 Project Name: mini_Browser Ver3.20
 
 File Name   : CmsNetMessage.h

 Description : Network Marco

 Last Modify : 02/18/2003
 
 Written By  : HaiYong Le


*****************************************************************/

#ifndef CMSNETMESSAGE_H
#define CMSNETMESSAGE_H

/****************************************************************/

#include "CmsBrowserPublic.h"

/****************************************************************/

typedef struct netParam
{
#ifdef SUPPORT_WAPSTACK
	CMS_BROWSER_SOCKET 		s;							/*=== ��ҳ�׽��� ===*/
	CMS_BROWSER_SOCKET 		imgs;						/*=== ͼƬ�׽��� ===*/
	CMS_BROWSER_SOCKADDRIN  hostadd;					/*=== ������ַ��Ϣ�ṹ ===*/
#endif
	
	CMS_BROWSER_S32			type;						/*=== TCP or UDP ===*/
	CMS_BROWSER_S32			af_net;						/*=== AF_NET ===*/
	CMS_BROWSER_S32			protocol;					/*=== ���� ===*/
	P_CMS_BROWSER_U8		buf;						/*=== (���͡�����)������ָ�� ===*/
	CMS_BROWSER_S32			dataLen;					/*=== (���͡�����)��������Ч�����ݳ��� ===*/
	CMS_BROWSER_S32			recvLen;					/*=== ���ջ������ĳ��� ===*/
	CMS_BROWSER_S32			flags;						/*=== ���(����) ===*/			/*=== ���(����) ===*/
	CMS_BROWSER_BOOL		Method;						/*=== CMS_BROWSER_FALSE: GET     CMS_BROWSER_TRUE: POST ===*/
	P_CMS_BROWSER_U8		PostParam;		
	CMS_BROWSER_S32			TCPIPStatus;				/*=== ���������TCP/IP��״̬ ===*/

	CMS_BROWSER_U8			url[512];				/*=== Ҫ�������ҳURI ===*/
	
}CMS_NETPARAM;


typedef enum
{	
/*============  ���������TCP/IP/PPP��״̬ ============*/

		CMS_BROWSER_DIAL_FUN,			/*=== 0: Ҫ�󲦺�(״̬����λ�����ų�ʼ�������ţ�����) ===*/
		CMS_BROWSER_CLOSE_NET,			/*=== 1: Ҫ��Ҷ�(�������ų�ʼ��ռ�õ���Դ) ===*/
		CMS_BROWSER_CLOSE_SOCKET,		/*=== 2: Ҫ��ر��׽��� ===*/
		CMS_BROWSER_TCP_GETHOST_FUN,	/*=== 3: Ҫ��TCP���ӳ�ʼ�� (��������TCP�׽��֡�gethostbyname����) ===*/
		CMS_BROWSER_TCP_CONNECT_FUN,	/*=== 4: Ҫ��TCP���� (����connect�Լ�send����) ===*/
		CMS_BROWSER_UDP_CONNECT_FUN,	/*=== 5: Ҫ��UDP���� (��������UDP�׽���) ===*/
		CMS_BROWSER_RECV_FUN,			/*=== 6: Ҫ���������(TCP) ===*/
		CMS_BROWSER_SENDTO_FUN,			/*=== 7: Ҫ��������(UDP) ===*/	
		CMS_BROWSER_RECVFROM_FUN		/*=== 8: Ҫ���������(UDP) ===*/	

}CMS_BROWSER_TCPIP_STATUS;


#endif
