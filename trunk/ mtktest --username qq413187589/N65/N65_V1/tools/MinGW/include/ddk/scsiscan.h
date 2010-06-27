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
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/ddk/scsiscan.h,v 1.1 2007/05/17 07:25:41 bw Exp $
*
* $Id: scsiscan.h,v 1.1 2007/05/17 07:25:41 bw Exp $
*
* $Date: 2007/05/17 07:25:41 $
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
* $Log: scsiscan.h,v $
* Revision 1.1  2007/05/17 07:25:41  bw
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
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/ddk/scsiscan.h,v 1.1 2007/05/14 09:47:05 bw Exp $
*
* ~Id: scsiscan.h,v 1.1 2007/05/14 09:47:05 bw Exp $
*
* ~Date: 2007/05/14 09:47:05 $
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
* ~Log: scsiscan.h,v $
* Revision 1.1  2007/05/14 09:47:05  bw
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
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/ddk/scsiscan.h,v 1.2 2007/04/04 06:51:39 bw Exp $
*
* ~Id: scsiscan.h,v 1.2 2007/04/04 06:51:39 bw Exp $
*
* ~Date: 2007/04/04 06:51:39 $
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
* ~Log: scsiscan.h,v $
* Revision 1.2  2007/04/04 06:51:39  bw
* ����.c.h�ļ�ͷģ��
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

/*
 * scsiscan.h
 *
 * SCSI scanner driver interface
 *
 * This file is part of the w32api package.
 *
 * Contributors:
 *   Created by Casper S. Hornstrup <chorns@users.sourceforge.net>
 *
 * THIS SOFTWARE IS NOT COPYRIGHTED
 *
 * This source code is offered for use in the public domain. You may
 * use, modify or distribute it freely.
 *
 * This code is distributed in the hope that it will be useful but
 * WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 * DISCLAIMED. This includes but is not limited to warranties of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

#ifndef __SCSISCAN_H
#define __SCSISCAN_H

#if __GNUC__ >=3
#pragma GCC system_header
#endif

#ifdef __cplusplus
extern "C" {
#endif

#pragma pack(push,4)

#include "ntddk.h"


#define IOCTL_SCSISCAN_CMD \
  CTL_CODE(FILE_DEVICE_SCANNER, SCSISCAN_CMD_CODE, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)

#define IOCTL_SCSISCAN_LOCKDEVICE \
  CTL_CODE(FILE_DEVICE_SCANNER, SCSISCAN_LOCKDEVICE, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)

#define IOCTL_SCSISCAN_SET_TIMEOUT \
  CTL_CODE(FILE_DEVICE_SCANNER, SCSISCAN_SET_TIMEOUT,	METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_SCSISCAN_GET_INFO \
  CTL_CODE(FILE_DEVICE_SCANNER, SCSISCAN_GET_INFO, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)

#define IOCTL_SCSISCAN_UNLOCKDEVICE \
  CTL_CODE(FILE_DEVICE_SCANNER, SCSISCAN_UNLOCKDEVICE, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)


/* SCSISCAN_CMD.SrbFlags constants */
#define SRB_FLAGS_DISABLE_SYNCH_TRANSFER  0x00000008
#define SRB_FLAGS_DISABLE_AUTOSENSE       0x00000020
#define SRB_FLAGS_DATA_IN                 0x00000040
#define SRB_FLAGS_DATA_OUT                0x00000080
#define SRB_FLAGS_NO_DATA_TRANSFER        0x00000000

/* SCSISCAN_CMD.pSrbStatus constants */
#define SRB_STATUS_PENDING                  0x00
#define SRB_STATUS_SUCCESS                  0x01
#define SRB_STATUS_ABORTED                  0x02
#define SRB_STATUS_ABORT_FAILED             0x03
#define SRB_STATUS_ERROR                    0x04
#define SRB_STATUS_BUSY                     0x05
#define SRB_STATUS_INVALID_REQUEST          0x06
#define SRB_STATUS_INVALID_PATH_ID          0x07
#define SRB_STATUS_NO_DEVICE                0x08
#define SRB_STATUS_TIMEOUT                  0x09
#define SRB_STATUS_SELECTION_TIMEOUT        0x0A
#define SRB_STATUS_COMMAND_TIMEOUT          0x0B
#define SRB_STATUS_MESSAGE_REJECTED         0x0D
#define SRB_STATUS_BUS_RESET                0x0E
#define SRB_STATUS_PARITY_ERROR             0x0F
#define SRB_STATUS_REQUEST_SENSE_FAILED     0x10
#define SRB_STATUS_NO_HBA                   0x11
#define SRB_STATUS_DATA_OVERRUN             0x12
#define SRB_STATUS_UNEXPECTED_BUS_FREE      0x13
#define SRB_STATUS_PHASE_SEQUENCE_FAILURE   0x14
#define SRB_STATUS_BAD_SRB_BLOCK_LENGTH     0x15
#define SRB_STATUS_REQUEST_FLUSHED          0x16
#define SRB_STATUS_INVALID_LUN              0x20
#define SRB_STATUS_INVALID_TARGET_ID        0x21
#define SRB_STATUS_BAD_FUNCTION             0x22
#define SRB_STATUS_ERROR_RECOVERY           0x23
#define SRB_STATUS_QUEUE_FROZEN             0x40
#define SRB_STATUS_AUTOSENSE_VALID          0x80

#define SRB_STATUS(Status) (Status & ~(SRB_STATUS_AUTOSENSE_VALID | SRB_STATUS_QUEUE_FROZEN))

typedef struct _SCSISCAN_CMD {
  ULONG  Reserved1;
  ULONG  Size;
  ULONG  SrbFlags;
  UCHAR  CdbLength;
  UCHAR  SenseLength;
  UCHAR  Reserved2;
  UCHAR  Reserved3;
  ULONG  TransferLength;
  UCHAR  Cdb[16];
  PUCHAR  pSrbStatus;
  PUCHAR  pSenseBuffer;
} SCSISCAN_CMD, *PSCSISCAN_CMD;

#define MAX_STRING 128

/* SCSISCAN_INFO.Flags constants */
#define SCSISCAN_RESERVED         0x000
#define SCSISCAN_CMD_CODE         0x004
#define SCSISCAN_LOCKDEVICE       0x005
#define SCSISCAN_UNLOCKDEVICE     0x006
#define SCSISCAN_SET_TIMEOUT      0x007
#define SCSISCAN_GET_INFO         0x008

typedef struct _SCSISCAN_INFO {
  ULONG  Size;
  ULONG  Flags;
  UCHAR  PortNumber;
  UCHAR  PathId;
  UCHAR  TargetId;
  UCHAR  Lun;
  UCHAR  AdapterName[MAX_STRING];
  ULONG  Reserved;
} SCSISCAN_INFO, *PSCSISCAN_INFO;

#pragma pack(pop)

#ifdef __cplusplus
}
#endif

#endif /* __SCSISCAN_H */
