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
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/ddk/mountmgr.h,v 1.1 2007/05/17 07:25:38 bw Exp $
*
* $Id: mountmgr.h,v 1.1 2007/05/17 07:25:38 bw Exp $
*
* $Date: 2007/05/17 07:25:38 $
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
* $Log: mountmgr.h,v $
* Revision 1.1  2007/05/17 07:25:38  bw
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
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/ddk/mountmgr.h,v 1.1 2007/05/14 09:47:02 bw Exp $
*
* ~Id: mountmgr.h,v 1.1 2007/05/14 09:47:02 bw Exp $
*
* ~Date: 2007/05/14 09:47:02 $
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
* ~Log: mountmgr.h,v $
* Revision 1.1  2007/05/14 09:47:02  bw
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
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/ddk/mountmgr.h,v 1.2 2007/04/04 06:51:38 bw Exp $
*
* ~Id: mountmgr.h,v 1.2 2007/04/04 06:51:38 bw Exp $
*
* ~Date: 2007/04/04 06:51:38 $
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
* ~Log: mountmgr.h,v $
* Revision 1.2  2007/04/04 06:51:38  bw
* ����.c.h�ļ�ͷģ��
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

/*
 * mountmgr.h
 *
 * Mount point manager interface.
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

#ifndef __MOUNTMGR_H
#define __MOUNTMGR_H

#if __GNUC__ >=3
#pragma GCC system_header
#endif

#ifdef __cplusplus
extern "C" {
#endif

#pragma pack(push,4)

#include "ntddk.h"


DEFINE_GUID(MOUNTDEV_MOUNTED_DEVICE_GUID,
	0x53f5630d, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);

#define MOUNTMGRCONTROLTYPE  							((ULONG)'m')
#define MOUNTDEVCONTROLTYPE  							((ULONG)'M')

#define MOUNTMGR_DEVICE_NAME              L"\\Device\\MountPointManager"
#define MOUNTMGR_DOS_DEVICE_NAME          L"\\\\.\\MountPointManager"

#define IOCTL_MOUNTMGR_CREATE_POINT \
  CTL_CODE(MOUNTMGRCONTROLTYPE, 0, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#define IOCTL_MOUNTMGR_QUERY_POINTS \
  CTL_CODE(MOUNTMGRCONTROLTYPE, 2, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_MOUNTMGR_DELETE_POINTS \
  CTL_CODE(MOUNTMGRCONTROLTYPE, 1, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#define IOCTL_MOUNTMGR_DELETE_POINTS_DBONLY \
  CTL_CODE(MOUNTMGRCONTROLTYPE, 3, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#define IOCTL_MOUNTMGR_NEXT_DRIVE_LETTER \
  CTL_CODE(MOUNTMGRCONTROLTYPE, 4, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#define IOCTL_MOUNTMGR_AUTO_DL_ASSIGNMENTS \
  CTL_CODE(MOUNTMGRCONTROLTYPE, 5, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#define IOCTL_MOUNTMGR_VOLUME_MOUNT_POINT_CREATED \
  CTL_CODE(MOUNTMGRCONTROLTYPE, 6, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#define IOCTL_MOUNTMGR_VOLUME_MOUNT_POINT_DELETED \
  CTL_CODE(MOUNTMGRCONTROLTYPE, 7, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#define IOCTL_MOUNTMGR_CHANGE_NOTIFY \
  CTL_CODE(MOUNTMGRCONTROLTYPE, 8, METHOD_BUFFERED, FILE_READ_ACCESS)

#define IOCTL_MOUNTMGR_KEEP_LINKS_WHEN_OFFLINE \
  CTL_CODE(MOUNTMGRCONTROLTYPE, 9, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#define IOCTL_MOUNTMGR_CHECK_UNPROCESSED_VOLUMES \
  CTL_CODE(MOUNTMGRCONTROLTYPE, 10, METHOD_BUFFERED, FILE_READ_ACCESS)

#define IOCTL_MOUNTMGR_VOLUME_ARRIVAL_NOTIFICATION \
  CTL_CODE(MOUNTMGRCONTROLTYPE, 11, METHOD_BUFFERED, FILE_READ_ACCESS)


typedef struct _MOUNTDEV_NAME {
  USHORT  NameLength;
  WCHAR  Name[1];
} MOUNTDEV_NAME, *PMOUNTDEV_NAME;

typedef struct _MOUNTMGR_CHANGE_NOTIFY_INFO {
  ULONG  EpicNumber;
} MOUNTMGR_CHANGE_NOTIFY_INFO, *PMOUNTMGR_CHANGE_NOTIFY_INFO;

typedef struct _MOUNTMGR_CREATE_POINT_INPUT {
  USHORT  SymbolicLinkNameOffset;
  USHORT  SymbolicLinkNameLength;
  USHORT  DeviceNameOffset;
  USHORT  DeviceNameLength;
} MOUNTMGR_CREATE_POINT_INPUT, *PMOUNTMGR_CREATE_POINT_INPUT;

typedef struct _MOUNTMGR_DRIVE_LETTER_INFORMATION {
  BOOLEAN  DriveLetterWasAssigned;
  UCHAR  CurrentDriveLetter;
} MOUNTMGR_DRIVE_LETTER_INFORMATION, *PMOUNTMGR_DRIVE_LETTER_INFORMATION;

typedef struct _MOUNTMGR_DRIVE_LETTER_TARGET {
  USHORT  DeviceNameLength;
  WCHAR  DeviceName[1];
} MOUNTMGR_DRIVE_LETTER_TARGET, *PMOUNTMGR_DRIVE_LETTER_TARGET;

typedef struct _MOUNTMGR_MOUNT_POINT {
  ULONG  SymbolicLinkNameOffset;
  USHORT  SymbolicLinkNameLength;
  ULONG  UniqueIdOffset;
  USHORT  UniqueIdLength;
  ULONG  DeviceNameOffset;
  USHORT  DeviceNameLength;
} MOUNTMGR_MOUNT_POINT, *PMOUNTMGR_MOUNT_POINT;

typedef struct _MOUNTMGR_MOUNT_POINTS {
  ULONG  Size;
  ULONG  NumberOfMountPoints;
  MOUNTMGR_MOUNT_POINT  MountPoints[1];
} MOUNTMGR_MOUNT_POINTS, *PMOUNTMGR_MOUNT_POINTS;

typedef struct _MOUNTMGR_TARGET_NAME {
  USHORT  DeviceNameLength;
  WCHAR  DeviceName[1];
} MOUNTMGR_TARGET_NAME, *PMOUNTMGR_TARGET_NAME;

typedef struct _MOUNTMGR_VOLUME_MOUNT_POINT {
  USHORT  SourceVolumeNameOffset;
  USHORT  SourceVolumeNameLength;
  USHORT  TargetVolumeNameOffset;
  USHORT  TargetVolumeNameLength;
} MOUNTMGR_VOLUME_MOUNT_POINT, *PMOUNTMGR_VOLUME_MOUNT_POINT;

#pragma pack(pop)

#ifdef __cplusplus
}
#endif

#endif /* __MOUNTMGR_H */