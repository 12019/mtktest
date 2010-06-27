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
#ifndef  CMS_BRWGLOBAL_H
#define CMS_BRWGLOBAL_H
#include "Cms_callback.h"

typedef int CMS_BRW_BOOL;
typedef struct _tag_send_setting
{
	char *send_data;
	int send_datalen;
	char *url;
}BRW_SEND_SETTING;

typedef struct tag_brwconfig_setting
{
	unsigned char *wap_gateway;  //���ص�ַ�����ƶ���Ϊ"10.0.0.172"2003.11.03
	int   wap_port;     //wap wtp�˿ں�  9201
}BRW_CONFIG_SETTING;


/*------------------------------------------------------------------------
 *
 *
 *
 *                 BRW��ص�����brwproc��������
 *					���ϲ㷴ӳ���״̬
 *
 *
------------------------------------------------------------------------*/
typedef enum
{
	BRW_STATUS_NORMAL_STATUS,               //����״̬,��ӳ��Ļ��������ڷ��ͣ����ڽ��յ�
	BRW_STATUS_RECVED_BYTES = 5
}BRW_LIBSTATUS;   

typedef enum
{
	BRWNETLINKING,
	BRWNETLINK_SUCCESS,
	BRWWAPCONNECT_SUCCESS,
	BRW_RECEIVING,
	BRW_SENDING,
	BRWNETLINK_FAILED,
	BRWWAPCONNECT_FAILED,
	BRWRECV_FAILED,
	BRWRECV_SUCCESS,
	BRWSEND_SUCCESS,
	BRWOPR_CANCEL,
	BRWWAP_DISCONNECTED,
	BRWSYSTEM_ERROR,
	BRWUNKNOWN_ERROR,
	BRWNET_DISCONNECTED,
	BRWNET_DISCONNECTING,
	BRWNET_SENDREPORTSUCCESS,
	BRWNET_WTLS_HANDSHAKE_FAILED,    //add by lee
	BRWNET_HTTP_SEND_REPORT_SUCCESS, /*�յ�SERVER��Ӧ,���ͳɹ�*/
    BRWNET_HTTP_SEND_REPORT_UNCNF    /*SERVER��Ӧ��ʱ,����δȷ��*/
}BRW_LIBSTATUS_VALUE;

typedef enum brwliberrcode{
	BRW_NO_ERROR = 0,                             //û�д���
	BRWMEMORY_ERROR,
	BRWSEND_ABORT,
	BRWRECV_ABORT  // Modified by TIPrj[2005/6/29]
}BRWLIBERRCODE;



typedef struct tag_brw_recv_setting
{
	char *get_url;
	char *recved_wml;
	int  recved_wml_len;
	int recv_msgsize;
}BRW_RECV_SETTING;

typedef  enum 
{
	BRW_DATA_RECVED

}BRW_MESSAGE_TYPE;


#endif //CMS_BRWGLOBAL_H