/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2005
*
*****************************************************************************/
/*============================================================================
*
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/wsahelp.h,v 1.1 2007/05/17 07:25:37 bw Exp $
*
* $Id: wsahelp.h,v 1.1 2007/05/17 07:25:37 bw Exp $
*
* $Date: 2007/05/17 07:25:37 $
*
* $Name: 1.1 $
*
* $Locker$
*
* $Revision: 1.1 $
*
* $State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* $Log: wsahelp.h,v $
* Revision 1.1  2007/05/17 07:25:37  bw
* UNI@bw_20070517 15:10:01 MTK U25 U26 06B V30 version
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2007
*
*****************************************************************************/
/*============================================================================
*
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/wsahelp.h,v 1.1 2007/05/14 09:46:55 bw Exp $
*
* ~Id: wsahelp.h,v 1.1 2007/05/14 09:46:55 bw Exp $
*
* ~Date: 2007/05/14 09:46:55 $
*
* ~Name: 1.1 $
*
* ~Locker$
*
* ~Revision: 1.1 $
*
* ~State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* ~Log: wsahelp.h,v $
* Revision 1.1  2007/05/14 09:46:55  bw
* UNI@bw_20070514 17:21:01 MTK��ʼ�汾.�ϲ�U25V20��U26V28.
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2005
*
*****************************************************************************/
/*============================================================================
*
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/wsahelp.h,v 1.2 2007/04/04 06:51:35 bw Exp $
*
* ~Id: wsahelp.h,v 1.2 2007/04/04 06:51:35 bw Exp $
*
* ~Date: 2007/04/04 06:51:35 $
*
* ~Name: 1.2 $
*
* ~Locker$
*
* ~Revision: 1.2 $
*
* ~State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* ~Log: wsahelp.h,v $
* Revision 1.2  2007/04/04 06:51:35  bw
* ����.c.h�ļ�ͷģ��
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

#ifndef _WSAHELP_H
#define _WSAHELP_H

#include <winsock2.h>
#include <ntsecapi.h>
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define WSH_NOTIFY_BIND 0x00000001
#define WSH_NOTIFY_LISTEN 0x00000002
#define WSH_NOTIFY_CONNECT 0x00000004
#define WSH_NOTIFY_ACCEPT 0x00000008
#define WSH_NOTIFY_SHUTDOWN_RECEIVE 0x00000010
#define WSH_NOTIFY_SHUTDOWN_SEND 0x00000020
#define WSH_NOTIFY_SHUTDOWN_ALL 0x00000040
#define WSH_NOTIFY_CLOSE 0x00000080
#define WSH_NOTIFY_CONNECT_ERROR 0x00000100
#define SOL_INTERNAL 0xFFFE
#define SO_CONTEXT 1

#ifndef RC_INVOKED
typedef enum _SOCKADDR_ADDRESS_INFO {
  SockaddrAddressInfoNormal,
  SockaddrAddressInfoWildcard,
  SockaddrAddressInfoBroadcast,
  SockaddrAddressInfoLoopback
} SOCKADDR_ADDRESS_INFO, *PSOCKADDR_ADDRESS_INFO;
typedef enum _SOCKADDR_ENDPOINT_INFO {
  SockaddrEndpointInfoNormal,
  SockaddrEndpointInfoWildcard,
  SockaddrEndpointInfoReserved
} SOCKADDR_ENDPOINT_INFO, *PSOCKADDR_ENDPOINT_INFO;
typedef struct _WINSOCK_MAPPING {
	DWORD Rows;
	DWORD Columns;
	struct {
		DWORD AddressFamily;
		DWORD SocketType;
		DWORD Protocol;
	} Mapping[1];
} WINSOCK_MAPPING, *PWINSOCK_MAPPING;
typedef struct _SOCKADDR_INFO {
  SOCKADDR_ADDRESS_INFO AddressInfo;
  SOCKADDR_ENDPOINT_INFO EndpointInfo;
} SOCKADDR_INFO, *PSOCKADDR_INFO;

INT WINAPI WSHAddressToString(LPSOCKADDR,INT,LPWSAPROTOCOL_INFOW,LPWSTR,LPDWORD);
INT WINAPI WSHEnumProtocols(LPINT,LPWSTR,LPVOID,LPDWORD);
INT WINAPI WSHGetBroadcastSockaddr(PVOID,PSOCKADDR,PINT);
INT WINAPI WSHGetProviderGuid(LPWSTR,LPGUID);
INT WINAPI WSHGetSockaddrType(PSOCKADDR,DWORD,PSOCKADDR_INFO);
INT WINAPI WSHGetSocketInformation(PVOID,SOCKET,HANDLE,HANDLE,INT,INT,PCHAR,INT);
INT WINAPI WSHGetWildcardSockaddr(PVOID,PSOCKADDR,PINT);
DWORD WINAPI WSHGetWinsockMapping(PWINSOCK_MAPPING,DWORD);
INT WINAPI WSHGetWSAProtocolInfo(LPWSTR,LPWSAPROTOCOL_INFOW*,LPDWORD);
INT WINAPI WSHIoctl(PVOID,SOCKET,HANDLE,HANDLE,DWORD,LPVOID,DWORD,LPVOID,DWORD,
LPDWORD,LPWSAOVERLAPPED,LPWSAOVERLAPPED_COMPLETION_ROUTINE,LPBOOL);
INT WINAPI WSHJoinLeaf(PVOID,SOCKET,HANDLE,HANDLE,PVOID,SOCKET,PSOCKADDR,
DWORD,LPWSABUF,LPWSABUF,LPQOS,LPQOS,DWORD);
INT WINAPI WSHNotify(PVOID,SOCKET,HANDLE,HANDLE,DWORD);
INT WINAPI WSHOpenSocket(PINT,PINT,PINT,PUNICODE_STRING,PVOID,PDWORD);
INT WINAPI WSHOpenSocket2(PINT,PINT,PINT,GROUP,DWORD,PUNICODE_STRING,PVOID*,PDWORD);
INT WINAPI WSHSetSocketInformation(PVOID,SOCKET,HANDLE,HANDLE,INT,INT,PCHAR,INT);
INT WINAPI WSHStringToAddress(LPWSTR,DWORD,LPWSAPROTOCOL_INFOW,LPSOCKADDR,LPDWORD);

typedef INT (WINAPI *PWSH_ADDRESS_TO_STRING)(LPSOCKADDR,INT,LPWSAPROTOCOL_INFOW,LPWSTR,LPDWORD);
typedef INT (WINAPI *PWSH_ENUM_PROTOCOLS)(LPINT,LPWSTR,LPVOID,LPDWORD);
typedef INT (WINAPI *PWSH_GET_BROADCAST_SOCKADDR)(PVOID,PSOCKADDR,PINT);
typedef INT (WINAPI *PWSH_GET_PROVIDER_GUID)(LPWSTR,LPGUID);
typedef INT (WINAPI *PWSH_GET_SOCKADDR_TYPE)(PSOCKADDR,DWORD,PSOCKADDR_INFO);
typedef INT (WINAPI *PWSH_GET_SOCKET_INFORMATION)(PVOID,SOCKET,HANDLE,HANDLE,INT,INT,PCHAR,INT);
typedef INT (WINAPI *PWSH_GET_WILDCARD_SOCKEADDR)(PVOID,PSOCKADDR,PINT);
typedef DWORD (WINAPI *PWSH_GET_WINSOCK_MAPPING)(PWINSOCK_MAPPING,DWORD);
typedef INT (WINAPI *PWSH_GET_WSAPROTOCOL_INFO)(LPWSTR,LPWSAPROTOCOL_INFOW*,LPDWORD);
typedef INT (WINAPI *PWSH_IOCTL)(PVOID,SOCKET,HANDLE,HANDLE,DWORD,LPVOID,DWORD,
	     LPVOID,DWORD,LPDWORD,LPWSAOVERLAPPED,LPWSAOVERLAPPED_COMPLETION_ROUTINE,LPBOOL);
typedef INT (WINAPI *PWSH_JOIN_LEAF)(PVOID,SOCKET,HANDLE,HANDLE,PVOID,SOCKET,
	     PSOCKADDR,DWORD,LPWSABUF,LPWSABUF,LPQOS,LPQOS,DWORD);
typedef INT (WINAPI *PWSH_NOTIFY)(PVOID,SOCKET,HANDLE,HANDLE,DWORD);
typedef INT (WINAPI *PWSH_OPEN_SOCKET)(PINT,PINT,PINT,PUNICODE_STRING,PVOID,PDWORD);
typedef INT (WINAPI *PWSH_OPEN_SOCKET2)(PINT,PINT,PINT,GROUP,DWORD,PUNICODE_STRING,PVOID*,PDWORD);
typedef INT (WINAPI *PWSH_SET_SOCKET_INFORMATION)(PVOID,SOCKET,HANDLE,HANDLE,INT,INT,PCHAR,INT);
typedef INT (WINAPI *PWSH_STRING_TO_ADDRESS)(LPWSTR,DWORD,LPWSAPROTOCOL_INFOW,LPSOCKADDR,LPDWORD);

#endif /* RC_INVOKED */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _WSAHELP_H */
