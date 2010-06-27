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
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/ddk/upssvc.h,v 1.1 2007/05/17 07:25:41 bw Exp $
*
* $Id: upssvc.h,v 1.1 2007/05/17 07:25:41 bw Exp $
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
* $Log: upssvc.h,v $
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
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/ddk/upssvc.h,v 1.1 2007/05/14 09:47:05 bw Exp $
*
* ~Id: upssvc.h,v 1.1 2007/05/14 09:47:05 bw Exp $
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
* ~Log: upssvc.h,v $
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
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/ddk/upssvc.h,v 1.2 2007/04/04 06:51:39 bw Exp $
*
* ~Id: upssvc.h,v 1.2 2007/04/04 06:51:39 bw Exp $
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
* ~Log: upssvc.h,v $
* Revision 1.2  2007/04/04 06:51:39  bw
* ����.c.h�ļ�ͷģ��
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

/*
 * upssvc.h
 *
 * UPS service interface
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

#ifndef __UPSSVC_H
#define __UPSSVC_H

#if __GNUC__ >=3
#pragma GCC system_header
#endif

#ifdef __cplusplus
extern "C" {
#endif

#pragma pack(push,4)

#include "ntddk.h"

#if defined(_APCUPS_)
  #define UPSAPI DECLSPEC_EXPORT
#else
  #define UPSAPI DECLSPEC_IMPORT
#endif


#define UPS_ONLINE                        1
#define UPS_ONBATTERY                     2
#define UPS_LOWBATTERY                    4
#define UPS_NOCOMM                        8
#define UPS_CRITICAL                      16

UPSAPI
VOID
DDKAPI
UPSCancelWait(VOID);

UPSAPI
DWORD
DDKAPI
UPSGetState(VOID);

#define UPS_INITUNKNOWNERROR              0
#define UPS_INITOK                        1
#define UPS_INITNOSUCHDRIVER              2
#define UPS_INITBADINTERFACE              3
#define UPS_INITREGISTRYERROR             4
#define UPS_INITCOMMOPENERROR             5
#define UPS_INITCOMMSETUPERROR            6

UPSAPI
DWORD
DDKAPI
UPSInit(VOID);

UPSAPI
VOID
DDKAPI
UPSStop(VOID);

UPSAPI
VOID
DDKAPI
UPSTurnOff(
  IN DWORD  aTurnOffDelay);

UPSAPI
VOID
DDKAPI
UPSWaitForStateChange(
  IN DWORD  aCurrentState,
  IN DWORD  anInterval);

#pragma pack(pop)

#ifdef __cplusplus
}
#endif

#endif /* __UPSSVC_H */
