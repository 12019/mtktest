/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *  NetworkSetupResDef.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *  Resource definitions.
 *
 *  Author:
 * -------
 *  
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

#ifndef NETWORKSETUPRESDEF_H
#define NETWORKSETUPRESDEF_H

#include "MMI_features.h"
#include "MMIDataType.h"

typedef enum
{
    SCR_ID_NETSET_MAIN = NETWORK_SETUP_BASE + 1,
    SCR_ID_NETSET_SELECTION_MODE,
    SCR_ID_NETSET_BAND_SELECTION,
    SCR_ID_NETSET_SHOW_PLMN_LIST,
    SCR_ID_NETSET_SHOW_PREFERRED_LIST,
    SCR_ID_NETSET_SHOW_PREF_NWK_OPTIONS,
    SCR_ID_NETSET_ADD_NEW_NETWORK_PLMN_LIST,
    SCR_ID_NETSET_ADD_NEW_NETWORK_PRIORITY,
    SCR_ID_NETSET_EDIT_NETWORK,
    SCR_ID_NETSET_NEW_NETWORK,
    SCR_ID_NETSET_MANUAL_SEARCH_PROGRESS,
    SCR_ID_NETSET_MANUAL_REG_PROGRESS,
    SCR_ID_NETSET_AUTO_SEARCH_PROGRESS,
    SCR_ID_NETSET_CONFIRM_DELETE_NETWORK,
    SCR_ID_NETSET_BAND_SELECTION_PROGRESS,

    /* dual mode screens */
    SCR_ID_NETSET_SERVICE_SELECTION,    /* screen "service selection" */
    SCR_ID_NETSET_NETWORK_INFO,         /* screen "network information" */

    SCR_ID_NETSET_DUMMY_PROGRESS,

    /* PLMN management screens */
    SCR_ID_NETSET_USER_CTRL_PLMN_LIST,
    SCR_ID_NETSET_USER_CTRL_PLMN_OPTIONS,
    SCR_ID_NETSET_USER_CTRL_PLMN_ADD,
    SCR_ID_NETSET_UNKNOWN_PLMN_MSG,

    SCR_ID_ADD_FROM_LIST_OPTIONS,       /* diamond, 2006/03/08 New PLMN management */

    /* preferred mode screens */
    SCR_ID_NETSET_PREFERRED_MODE,
    SCR_ID_NETSET_DIAL_MODE_SELECTION,

    SCR_ID_NETSET_END
} SCREENID_LIST_NETWORK_SETUP;

typedef enum
{
    STR_ID_NETSET_MITEM9185 = NETWORK_SETUP_BASE + 1,
    STR_ID_NETSET_MITEM9186,
    STR_ID_NETSET_MITEM9186_MANUAL,
    STR_ID_NETSET_MITEM9186_AUTOMATIC,
    STR_ID_NETSET_REGISTERING_NW,
    /* micha_Man_sel */
#ifdef __MANUAL_MODE_NW_SEL__
    STR_ID_NETSET_SELECTION_MODE_CHOICE,
    STR_ID_NETSET_SELECTION_NEW_SEARCH,
    STR_ID_NETSET_SELECTION_SELECT_NETWORK,
#endif /* __MANUAL_MODE_NW_SEL__ */ 
    STR_ID_NETSET_MITEM9187,
    STR_ID_NETSET_MITEM9188,
#ifdef __MMI_GPRS_FEATURES__
    STR_ID_NETSET_MITEM9189,
    STR_ID_NETSET_GPRS_CONNECTION_MODE_ALWAYS,
    STR_ID_NETSET_GPRS_CONNECTION_MODE_WHENNEEDED,
#endif /* __MMI_GPRS_FEATURES__ */
    STR_ID_NETSET_CHANGE, 
#if defined(__GSM_RAT__) && defined(__WCDMA_RAT__)
/* under construction !*/
/* under construction !*/
#endif /* defined(__GSM_RAT__) && defined(__WCDMA_RAT__) */ 
    STR_ID_NETSET_ITEM_WCDMA,           /* radio buttom "WCDMA" in service selection menu */
    STR_ID_NETSET_ITEM_GSM,             /* radio buttom "GSM/GPRS" in service selection menu */
    STR_ID_NETSET_ITEM_ALL,             /* radio buttom "Dual Mode" in service selection menu */
    STR_ID_NETSET_SCR9185_CAPTION,
    STR_ID_NETSET_SCR9186_CAPTION,
    STR_ID_NETSET_SCR9188_CAPTION,
    STR_ID_NETSET_SCR_SELECT_NETWORK_CAPTION,
    STR_ID_NETSET_BAND_900,
    STR_ID_NETSET_BAND_1800,
    STR_ID_NETSET_BAND_DUAL,
    STR_ID_NETSET_BAND_850,
    STR_ID_NETSET_BAND_1900,
    STR_ID_NETSET_BAND_850_1900,
    STR_ID_NETSET_BAND_AUTO,
    /* micha1214 */
    STR_ID_NETSET_BAND_850_1800,
    STR_ID_NETSET_PRF_NWK_TITLE,
    STR_ID_NETSET_LSK_OPTIONS,
    STR_ID_NETSET_MITEM_PRF_NWK_ADD,
    STR_ID_NETSET_MITEM_PRF_NWK_EDIT,
    STR_ID_NETSET_PRF_ADD_SHW_NWK_TITLE,
    STR_ID_NETSET_PRF_NWK_ADDED_ERR,
    STR_ID_NETSET_PRF_ADD_SHW_NWK_PRIORITY_TITLE,
    STR_ID_NETSET_NW_SELECTED,
    STR_ID_NETSET_SEARCHIN_NW,
    STR_ID_NETSET_PRR_NWK_NEW,
    STR_ID_NETSET_PRR_SV_CAPTION,
    STR_ID_NETSET_PRR_MCC_CAPTION,
    STR_ID_NETSET_PRR_PR_CAPTION,
#ifdef __MANUAL_MODE_NW_SEL__
    STR_ID_NETSET_MANUAL_MODE_TITLE,
    STR_ID_NETSET_MANUAL_MODE_SHORT,    /* diamond, 2005/12/18 Check if the input string length is larger than main lcd width */
#endif /* __MANUAL_MODE_NW_SEL__ */ 
#ifdef __MMI_USER_CTRL_PLMN_SUPPORT__
    STR_ID_NETSET_USER_CTRL_PLMN,
    STR_ID_NETSET_OP_NAME_CAPTION,
    STR_ID_NETSET_UNKNOWN_PLMN_MSG,
    STR_ID_NETSET_DUPLICATED_PLMN,
#endif /* __MMI_USER_CTRL_PLMN_SUPPORT__ */ 
    STR_ID_PLMN_LIST_SORT_BY_ALPHABET,  /* diamond, 2006/03/08 New PLMN management */
    STR_ID_PLMN_LIST_SORT_BY_DEFAULT,
#ifdef __MMI_WLAN_FEATURES__
    STR_ID_NETSET_PREFERRED_MODE,
    STR_ID_NETSET_PREFERRED_MODE_GSM_ONLY,
    STR_ID_NETSET_PREFERRED_MODE_WLAN_ONLY,
    STR_ID_NETSET_PREFERRED_MODE_GSM_PREFERRED,
    STR_ID_NETSET_PREFERRED_MODE_WLAN_PREFERRED,
#endif /* __MMI_WLAN_FEATURES__ */
    STD_ID_NETSET_NW_SELECT_FAIL,
    STR_ID_NETSET_NW_LIST_FAIL,
    STR_ID_NETSET_SET_BAND_FAIL,
    STRING_MTPNP_NETSET_SIM1_INVALID,
    STR_SIM_INVALID_SIM_SELECT_NETWORK,
    STR_ID_NETSET_END
} STRID_LIST_NETWORK_SETUP;

typedef enum
{
    IMG_ID_NETSET_MITEM9185 = NETWORK_SETUP_BASE + 1,
    IMG_ID_NETSET_MITEM9186_MANUAL,
    IMG_ID_NETSET_MITEM9186_AUTOMATIC,
    IMG_ID_NETSET_PRF_NWK_TITLE,
    IMG_ID_NETSET_LSK_ABORT,
    IMG_ID_NETSET_PNWK_GET_LIST_MSG,
    IMG_ID_NETSET_LSK_OPTIONS,
    IMG_ID_NETSET_MITEM_PRF_NWK_ADD,
    IMG_ID_NETSET_MITEM_PRF_NWK_DELETE,
    IMG_ID_NETSET_MITEM_PRF_NWK_EDIT,
    IMG_ID_NETSET_ABORT_LSK,
    IMG_ID_NETSET_NW_SEARCH,
    IMG_ID_NETSET_PRF_HOME_PLMN,
    IMG_ID_NETSET_PRF_ADDNEW_MMC,
    IMG_ID_NETSET_PRF_ADDNEW_POY,
    IMG_ID_NETSET_FORBIDDEN_PLMN, /* forbidden PLMN icons */
    IMG_ID_NETSET_UNKNOWN_PLMN,   /* unknown PLMN icons */
    IMG_ID_NETSET_END
} IMGID_LIST_NETWORK_SETUP;

#endif /* NETWORKSETUPRESDEF_H */ 
