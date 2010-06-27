/*===============================================

C   H E A D E R   F I L E

 (c) Copyright MobileSoft Technology(NanJing) Co.,Ltd 2000-2003
 ALL RIGHTS RESERVED

=================================================

 ��������	: CMS_mWAP Ver2.0

 �ļ���		: CmsPushSMS.h  

��������	: CMS_mWAPЭ��ջ��PUSH SMS�ӿ�API����
 
��дʱ��	: 09/25/2003

��д��Ա	: �ֺ���

=================================================*/

#ifndef CMSPUSHSMS_H
#define CMSPUSHSMS_H

/*===============================================*/
#include "CmsBrowserPublic.h"

/*=== PUSH��Ϣ��ӦAP���� ===*/
/*===========================
			 ˵��:
	�ӿڷ��ص�AP������,����
NOT_PUSH_AP��PUSH_MMS_AP,��
�����͵Ķ���Ҫ��SMS��Ϣ�彻
��WAP��������� 			 
============================*/
typedef enum _PUSH_SMS_AP
{
	NOT_PUSH_AP = -1,		/*=== ����PUSH��Ϣ ===*/
	PUSH_ANY_AP,			/*=== ����WAPӦ�� ===*/
	PUSH_SIA_AP,			/*=== PUSH SIA Ӧ�� ===*/
	PUSH_WML_AP,			/*=== WML�û����� ===*/
	PUSH_WTA_AP,			/*=== WTA�û����� ===*/
	PUSH_MMS_AP,			/*=== MMS�û����� ===*/
	PUSH_SYNCML_ALERT_AP,		/*=== SyncML AlertӦ�� ===*/
	PUSH_LOCATION_AP,		/*=== Location�û����� ===*/
	PUSH_SYNCML_DM_AP,		/*=== SyncML Device ManagementӦ�� ===*/
	PUSH_DRM_AP,			/*=== DRM(Digital Rights Management)�û����� ===*/
	PUSH_EMN_AP,			/*=== EMN(Email Notification)�û����� ===*/
	PUSH_WV_AP			/*=== WV(Wireless Village)�û����� ===*/
		
}PUSH_SMS_AP;


/*=============��������============*/

/*===����PUSH��Ϣ��Ӧ��AP===*/
PUSH_SMS_AP CmsDispatchPush(CMS_BROWSER_U8 *PushPDU, CMS_BROWSER_U32 PDULength);
CMS_BROWSER_U32 CmsGetUnitVarValue(P_CMS_BROWSER_U8 PDU , P_CMS_BROWSER_U8 pOffset);
#endif
