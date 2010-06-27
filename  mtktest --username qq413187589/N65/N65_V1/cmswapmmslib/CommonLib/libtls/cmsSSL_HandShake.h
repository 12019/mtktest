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
/*   cmsSSL_HandShake.h                                                     */
/*                                                                          */
/****************************************************************************/
/*--------------------------------------------------------------------------*/
/*   Date       |  author         |   Description |   version               */
/*--------------------------------------------------------------------------*/
/*   27/12/04   |  Liang Li       |   Creation    |   0.1.1                 */
/*--------------------------------------------------------------------------*/
/****************************************************************************/
#ifndef __CMSSSL_HANDSHAKE_H__
#define __CMSSSL_HANDSHAKE_H__

#include "cmsSSL_CliSession.h"
#include <openssl/x509.h>
#include <openssl/hmac.h>
#include <openssl/evp.h>

VW_EXTERN_C_BEGIN

/*	full handshake.
 
      Client                                               Server

      ClientHello                  -------->
                                                      ServerHello
                                                     Certificate*
                                               ServerKeyExchange*
                                              CertificateRequest* ( not impl. ignore. )
                                   <--------      ServerHelloDone
      Certificate* ( not impl. )
      ClientKeyExchange
      CertificateVerify* ( not impl. )
      [ChangeCipherSpec]
      Finished                     -------->
                                               [ChangeCipherSpec]
                                   <--------             Finished
      Application Data             <------->     Application Data
*/

/*	abbreviated handshake
       Client                                                Server

      ClientHello                   -------->
                                                       ServerHello
                                                [ChangeCipherSpec]
                                    <--------             Finished
      [ChangeCipherSpec]
      Finished                      -------->
      Application Data              <------->     Application Data

 */

#define CMS_SSLH_STAT_NOT_CONN				(0)
#define CMS_SSLH_STAT_SUCC					(1)
#define CMS_SSLH_STAT_FAIL					(2)

/* full handshake. */
#define CMS_SSLH_STAT_CLIENT_HELLO			(10)	/* next stat : server hello. */

#define CMS_SSLH_STAT_SERVER_HELLO			(11)	/* next stat : server  cert  */
#define CMS_SSLH_STAT_SERVER_CERT			(12)	/* next stat : server key exchange */
#define CMS_SSLH_STAT_SERVER_KEY_EXCH		(13)	/* next stat : cert req. */
#define CMS_SSLH_STAT_CERT_REQUEST			(14)	/* next stat : server Hello done. */
#define CMS_SSLH_STAT_SVR_HELLO_DONE		(15)	/* next stat : client cert.). */

#define CMS_SSLH_STAT_CLIENT_CERT			(16)	/* next stat : client key exchange. */
#define CMS_SSLH_STAT_CLIENT_KEY_EXCH		(17)	/* next stat : cert verify. */
/* send change cipher spec here. */
#define CMS_SSLH_STAT_CERT_VERIFY			(18)	/* next stat : client finish. */
#define CMS_SSLH_STAT_CLIENT_FINISH			(19)	/* next stat : server finish. */

/* recv change cipher spec here. */
#define CMS_SSLH_STAT_SERVER_FINISH			(20)	/* OK. */

/* ֤����������. */
#ifndef CMS_SSL_MAX_CERT_SIGN_DEPTH
#	define CMS_SSL_MAX_CERT_SIGN_DEPTH				(4)
#endif

typedef struct cms_SSL_Handshake_Context
{
	cms_SSL_Session_Info		sessionInfo;
	int							sess_id;
	int							stat_handshake;
	vwuint8						clientRand[32];
	vwuint8						serverRand[32];
	EVP_MD_CTX					ctx_md5;		/* calc mac of handshake. */
	EVP_MD_CTX					ctx_sha;		/* calc mac of handshake. */	
	vw_bool						full_handshake;
	vw_bool						rcv_svr_chg_cipher_spec;	
}	cms_SSL_Handshake_Context;

typedef VWRESULT	(*cmsSSL_Handshake_Stat_Changed_callback)( int newstat );

/* this function do not call connect , please call connect before call this function. */
VWRESULT	cms_SSL_Begin_HandShake( VW_RawString host , vwuint16 port , cmsSSL_Handshake_Stat_Changed_callback func );
void		cms_SSL_Clean_HandShake_Ctx( void );

/*
 *	type == CHANGE_CHIPER_SPEC || type == HANDSHAKE.
 */
VWRESULT	cms_SSL_OnSkt_Recv_HandShake_Data( cms_tls1_raw_package* data );
VWRESULT	cms_SSL_OnSkt_Recv_Chg_Cipher_Spec( void );

/*
 *	len > 4.  rand[ 0 ... 3 ] = time( NULL ) .... 
 */
void		cms_SSL_Gen_Rand_Block( vwuint8p buf , size_t len );

/************************************************************************/
/* current handshake context.                                           */
/************************************************************************/
VW_EXTERN	cms_SSL_Handshake_Context* const	ctx_cms_ssl_handshake;

void		cms_SSL_Handshake_Init ( vwvoidp reserved );
void		cms_SSL_Handshake_Clean( void );

vw_bool		cms_SSL_Handshake_Success( void );
vw_bool		cms_SSL_Handshake_inProc ( void );
vw_bool		cms_SSL_Handshake_Failed ( void );	/* !success && !inProc , not_connect || failed. */

void		cms_SSL_SetCertVerifyInfo( 
				vwuint32		nStateMask  ,
				const char*		strHostName ,
				const char*		strOnlineName ,
				const char*		strInfo ,
				X509*			x509Cert );

/* add by changweil for MTK and TI begin */
typedef struct cms_SSL_Get_Cert
{
	vwuint16 *Typedata;			//֤�������ַ���
	vwsint32 Typelength;		//֤�������ַ����ĳ���

	vwsint32 CertVersion;		//ȡ��֤��汾

	vwuint16 *Subjectdata;		//֤�������ַ���
	vwsint32 Subjectlength;		//֤�������ַ����ĳ���

	vwuint16 *Issuerdata;		//֤�鷢�����ַ���
	vwsint32 Issuerlength;		//֤�鷢�����ַ����ĳ���

	vwuint16 *SigAlgNamedata;	//ǩ���㷨�ַ���
	vwsint32 SigAlgNamelength;	//ǩ���㷨�ĳ���

	vwuint8 *NotBeforedata;		//��ʼ��Ч���ַ���
	vwsint32 NotBeforelength;	//��ʼ��Ч�ڵĳ���
	vwsint32 NotBeforetype;

	vwuint8 *NotAfterdata;		//������Ч���ַ���
	vwsint32 NotAfterlength;	//������Ч�ڵĳ���
	vwsint32 NotAftertype;

	vwuint8 *SerialNumberdata;	//���к��ַ���
	vwsint32 SerialNumberlength;//���кŵĳ���
	
}	cms_SSL_Get_Cert;

vwsint8 cms_SSL_utf2unicode(vwuint8 *utf8, vwsint32 utf_len, vwuint16p unicode, vwsint32 uni_len);
cms_SSL_Get_Cert* GetGlobalCert(void);
void FreeGlobalCert(void);
vwuint16p GetCipherSuite(void);
void FreeCipherSuite(void);
/* add by changweil for MTK and TI end */

VW_EXTERN_C_END

#endif

