/************************************************************************* 
 * Copyright (c) 2000-2003 MobileSoft Corporation All Rights Reserved.	
 * ��  �ڣ�  2005-4-8   	
 * ��  �ߣ�  cms    	    	
 * ��  ����  Cms_Info.h 	
 * ��  ����  
 ************************************************************************/
#ifndef _CMS_INFO_H
#define _CMS_INFO_H
#ifdef UNSPPORT_MULTITY_LANGUAGE
unsigned char* Cms_GetInfo(int InfoID, int LanguageDiv);
#endif
unsigned char* Cms_GetCurInfo( int infoId );
typedef enum _Info_Type
{
	Info_NoSuchServer,                       // �÷�����������
	Info_Dialing_Failed,                     // ����ʧ��
	Info_GPRS_Connection_Is_Disconnected,    // GPRS���Ӳ�����
	Info_DownLoad_Ring_Failed,               // ��������ʧ��
	Info_Unknown_File_Type,                  // ��Ч���ļ�����
	Info_Server_Reject,                      // �������ܾ�����
	Info_Invalid_Address,                    // �Ƿ���ַ
	Info_Wrong_Url,							 // ��Ч��ַ
	Info_Error_Page,						 // �����ҳ��

	Info_Download_Error,					 // ��������Ӧ
	Info_Server_Connect_Error,				 // ����������
	Info_Timerout,							 // ��������ʱ
	Info_notSupportFile,					 // ��֧�ָ�����

	Info_Submit,                             // �ύ
	Info_Button,                             // ��ť
	Info_Reset,                              // ����

	Info_Subject,                            // ���� :
	Info_Issuer,                             // ������ :
	Info_Valid_Not_Before,                   // ��Ч��ʼ�� :
	Info_Valid_Not_After,                    // ��Ч�ڽ��� :
	Info_MDInfo,                             // ָ�����㷨 : sha1 \nָ���� :\n
	Info_Signature_Algo,                     // ǩ���㷨 :
	Info_Signature    ,                      // ����ǩ�� : \n

	Info_Valid_Server_Cert ,					// ��Ч�ķ�����֤��
    Info_Invalid_Server_Cert ,					// ����ķ�����֤���֧�ֵ�֤������
	Info_Invalid_CA ,							// δ�ҵ���ӦCA��֤��,�޷���֤֤�����Ч��
	Info_Cert_Revoked ,							// ������֤���Ѿ�������
	Info_Cert_Invalid_Date ,					// ������֤���Ѿ����ڻ�δ��Ч
	Info_Cert_Purpose ,							// �����֤����;
	Info_Cert_Invalid_Name ,					// ֤��ı�ʶ�������ʵ�վ�㲻ƥ��
	Info_Cert_Unknown_Err  ,					// δ֪�Ĵ�������
	Info_Invalid_Cert_Confirm_Info ,			// ���ڷ�����֤���������,�޷�ȷ�������ύ��Ϣ�İ�ȫ��.\n
												//������޷�ȷ�Ϸ�������Ч�ԺͰ�ȫ��,��ѡ��ȡ���ԶϿ��������������.
	Info_SSL_Exchg_Alg ,						// TLS1.0 , %s(%dλ����(��));RSA(%dλ����).\n\n
	Info_Server_Cert_Info ,						// ������֤����Ϣ
	Info_malloc_Failed,							//Э��ջ������ڴ�ʧ��
	Info_socket_Erro,							//OS socket erro
	Info_file_TooLarge,							//�ļ�̫��,�������շ�Χ
	Info_connection_secured,                    // ��ȫ����
	Info_connecting_to_service,                 // �������ӵ�������
	Info_Connecting_Secured_So_Server,          // ������������а�ȫ���ӣ��Ƿ������
	Info_Downloadingimg,						//��������ͼƬ����
	Info_Downloadimgok,							//ͼƬ������ɱ���
	Info_AboutCmsWap,							//�汾��Ϣ
	/* do not remove this entry. */
	Info_MAX_ID 	
} Info_Type;


#endif
