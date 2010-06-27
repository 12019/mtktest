/****************************************************************************/
/*                                                                          */
/*   MOBILESOFT CHINA (CMS) SYSTEMS, INC.                                   */
/*                WIRELESS APPLICATION DESIGN CENTER (NANJING CHINA)        */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/*   CMS CONFIDENTIAL AND PROPRIETARY                                       */
/*                                                                          */
/*   This source is the sole property of CMS Systems, Inc. Reproduction     */
/*   or utilization of this source in whole or in part is forbidden without */
/*   the written consent of CMS Systems, Inc.                               */
/*                                                                          */
/*   (c) Copyright CMS Systems, Inc., 2000.  All Rights Reserved.           */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/*   cmsSSLCertManager.h                                                    */
/*                                                                          */
/****************************************************************************/
/*--------------------------------------------------------------------------*/
/*   Date       |  author         |   Description |   version               */
/*--------------------------------------------------------------------------*/
/*   21/01/05   |  Liang Li       |   Creation    |   0.1.1                 */
/*--------------------------------------------------------------------------*/
/****************************************************************************/
#ifndef __CMSSSLCERTMANAGER_H__
#define __CMSSSLCERTMANAGER_H__

#include "cmsSSL_stream.h"
#include <openssl/x509.h>

//#	define __USE_STUB_STORAGE_CERT__

#if ( !defined( __CC_ARM ) && !defined( __ARM_CC ) ) && !defined( __USE_STUB_STORAGE_CERT__ )
#	define __USE_STUB_STORAGE_CERT__
#endif

VW_EXTERN_C_BEGIN

typedef struct cms_SSL_Certificate_Info
{
	vwuint8p		pCertData;	/* size_is( szCertDataLen ) */
	size_t			szCertDataLen;
}	cms_SSL_Certificate_Info;

typedef struct cms_SSL_Storage_Certificate_info
{
	const char*						cstrStorageName;		/* name of provider.	  */
	size_t							szCertCount;			/* count of certificate.  */
	cms_SSL_Certificate_Info**		infoCerts;				/* size_is(1,szCertCount) */
}	cms_SSL_Storage_Certificate_info;

/**
 *	��ô洢�ĸ�֤���б���Ϣ,��ҪĿ��ƽ̨ʵ��.
 */
VWRESULT	cms_SSL_Get_Storage_Certificate_Info( 
				/* out */cms_SSL_Storage_Certificate_info* pInfoCerts
			);

/**
 *	�ͷŴ洢�ĸ�֤���б���Ϣ,��ҪĿ��ƽ̨ʵ��.
 */
void		cms_SSL_Release_Storage_Certificate_Info( 
				/*in*/cms_SSL_Storage_Certificate_info* pInfoCerts		/* return by cms_SSL_Get_Storage_Certificate_Info. */
			);

#ifdef __USE_STUB_STORAGE_CERT__
VWRESULT	_cms_SSL_Get_Storage_Certificate_Info_dummy( 
				/* out */cms_SSL_Storage_Certificate_info* pInfoCerts
			);
void		_cms_SSL_Release_Storage_Certificate_Info_dummy( 
				/*in*/cms_SSL_Storage_Certificate_info* pInfoCerts		/* return by cms_SSL_Get_Storage_Certificate_Info. */
			);
#endif

VW_String_Buffer	cms_SSL_Get_Certificate_Info( X509* x509Cert , VW_String_Buffer infoRet , vwuint8p sha1val , vw_bool bshowsign );

enum cms_SSL_Cert_Verify_State_Mask
{
	/* �����֤��.							 */
	cms_SCVSM_Bad_Cert			=		0X00000001 ,	/* �����֤��������ǩ����. */
	cms_SCVSM_Unsupported_Cert	=		0X00000002 ,	/* ��֧�ֵ�֤��.			 */

	/* �޷���֤֤�����Ч��,֤�����������.  */
	cms_SCVSM_Unknown_CA		=		0X00000004 ,	/* ����Ч��CA֤����֤.		 */	
	cms_SCVSM_Revoked			=		0X00000008 ,	/* �Ѿ���ǩ���ߵ���.         */
	cms_SCVSM_Expired			=		0X00000010 ,	/* ֤���Ѿ�����.             */
	cms_SCVSM_Unmatch_Host		=		0X00000020 ,	/* ֤���ʶ��վ�㲻ƥ��.     */	
	cms_SCVSM_Invalid_Purpose	=		0X00000040 		/* ֤���������;��ƥ��.     */
};

enum  cms_SSL_Cert_Verify_Prompt_Caller
{
	cms_SCVPC_TLS				=	0 ,
	cms_SCVPC_WTLS				=	1 ,
	cms_SCVPC_WPKI				=	2 ,
	cms_SCVPC_WIM				=	3 ,

	//////////////////////////////////////////////////////////////////////////	
	cms_SCVPC_UNKNOWN			=	-1
};


/**
 *  ���յ�������֤��ʱ,���û�ȷ��,��ҪĿ��ƽ̨ʵ��.
 *		����ֵ : 
 *			vw_true : �û���ȷ��,��������.
 *			vw_false: �û�ȡ������.
 */
vw_bool		cms_SSL_Certificate_Verify_Prompt(
					vwuint32			nCallFrom	  ,	/* �����߱�ʶ. �� cms_SCVPC_TLS , cms_SCVPC_WTLS ��  */
					vwuint32			nStateMask    ,	/* �� cms_SSL_Cert_Verify_State_Mask , 0 ��ʾ��Ч.   */
					const char*			strHostName   ,	/* ����������.                                       */
					const char*			strOnlineName ,	/* ֤�������.									     */
					const char*			strInfo		  , /* ֤����֤��Ϣ.								     */
					size_t				nCertCount    , /* ������֤���б����.							     */
					X509**				certList		/* ֤���б�.							             */
			);

/*
 * ���ش� pInfoCerts �����֤�����, 0 ��ʾʧ��.
 */
size_t		cms_SSL_Load_Storage_Certificate( /*in*/cms_SSL_Storage_Certificate_info* pInfoCerts );

/*
 * �ͷ� X509 ����,�벻Ҫֱ�ӵ��� X509_free.
 */
void		cms_SSL_X509_free( X509* objX509 );

/*
 * ����һ���洢��֤��,����NULL��ʾʧ��,�ͷ�֤����ʹ�� cms_SSL_X509_free.
 */
X509*		cms_SSL_Load_Certificate( vwuint8p pCertData , size_t szCertDataLen );

/*
 * ��洢֤���б������һ���µ�֤��.
 */
VWRESULT	cms_SSL_Add_Certificate( X509* objX509 , vw_bool bReleaseIfFailed );

/*
 * �洢֤���б�ĸ���.
 */
size_t		cms_SSL_Get_Storage_Certificate_Count( void );

/*
 * ��ô洢��֤��. 0 <= index < cms_SSL_Get_Storage_Certificate_Count()
 */
X509*		cms_SSL_Get_Storage_Certificate( int index );

/*
 * ���֤����Ϣ. nID : ie. NID_cNAMERecord .... 
 */
const char*	cms_SSL_Get_CertificateInfo( X509* x509 , int nID );

#define		cms_SSL_Get_CertificateName( x509 )	cms_SSL_Get_CertificateInfo( (x509) , NID_commonName )

/*
 * �ͷ����д洢��֤��.
 */
void		cms_SSL_Release_All_Storage_Certificate( void );

/*
 *	return VWE_S_OK		for verify ok.
 *	return VWE_S_FALSE  for verify failed.
 *	return VWFAILED( vr ) for error.
 */
VWRESULT	cms_SSL_Verify_Certificate_List( 
				vwuint32	nCallFrom		,		/* */
				int			purpose			,		/* ʹ��Ŀ��.			*/
				const char* strCommName		,		/* ������֤������.      */
				size_t		szCertCount	    ,		/* �յ���֤���б���.  */
				X509**		certList				/* �յ���֤���б�       */
			);

VW_EXTERN_C_END

#endif

