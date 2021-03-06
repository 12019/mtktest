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
/*
 * Copyright (C) Teleca Mobile Technologies AB, 2002-2003.
 * All rights reserved.
 *
 * This software is covered by the license agreement between
 * the end user and Teleca Mobile Technologies AB, and may be 
 * used and copied only in accordance with the terms of the 
 * said agreement.
 *
 * Teleca Mobile Technologies AB assumes no responsibility or 
 * liability for any errors or inaccuracies in this software, 
 * or any consequential, incidental or indirect damage arising
 * out of the use of the software.
 *
 */
/*
 * bra_str.h
 *
 * Description:
 *		This file contain defines for all strings used in the BRA
 *    module. All strings are predefined.
 */


#ifndef _bra_str_h
#define _bra_str_h

#ifndef _msf_wid_h 
#include "msf_wid.h"
#endif

#ifndef _bra_rc_h 
#include "bra_rc.h"
#endif


#define BRA_STR_ACCOUNT               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ACCOUNT)
#define BRA_STR_ADD_BOOKMARK          MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ADD_BOOKMARK)
#define BRA_STR_ADDRESS               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ADDRESS)
#define BRA_STR_BACK                  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_BACK)
#define BRA_STR_BOOKMARKS             MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_BOOKMARKS)
#define BRA_STR_BROWSER_OPTIONS       MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_BROWSER_OPTIONS)
#define BRA_STR_CANCEL                MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CANCEL)
#define BRA_STR_CONN_LESS             MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CONN_LESS)
#define BRA_STR_CONN_ORIENT           MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CONN_ORIENT)
#define BRA_STR_CONNECTION            MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CONNECTION)
#define BRA_STR_CONN_TYPE             MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CONN_TYPE)
#define BRA_STR_DELETE                MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DELETE)
#define BRA_STR_DELETE_ASK            MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DELETE_ASK)
#define BRA_STR_DELETED               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DELETED)
#define BRA_STR_DELETE_BOOKMARK       MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DELETE_BOOKMARK)
#define BRA_STR_DISABLE_CACHE_CONF	  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DISABLE_CACHE_CONF)
#define BRA_STR_DISABLE_COOKIES_CONF  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DISABLE_COOKIES_CONF)
#define BRA_STR_EDIT                  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_EDIT)
#define BRA_STR_EDIT_BOOKMARK         MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_EDIT_BOOKMARK)
#define BRA_STR_EDIT_HOMEPAGE         MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_EDIT_HOMEPAGE)
#define BRA_STR_VIEW_URL              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_VIEW_URL)
#define BRA_STR_VIEW_CURRENT_URL      MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_VIEW_CURRENT_URL)
#define BRA_STR_ENABLE_CACHE_CONF	  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ENABLE_CACHE_CONF)
#define BRA_STR_ENABLE_COOKIES_CONF   MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ENABLE_COOKIES_CONF)
#define BRA_STR_ENTER_ADDRESS         MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ENTER_ADDRESS)
#define BRA_STR_EXIT                  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_EXIT)
#define BRA_STR_GATEWAY               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_GATEWAY)
#define BRA_STR_HOMEPAGE              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_HOMEPAGE)
#define BRA_STR_HTTP_URL              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_HTTP_URL)
#define BRA_STR_HTTP                  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_HTTP)
#define BRA_STR_IMAGE_OPT             MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_IMAGE_OPT)
#define BRA_STR_MANAGE_BKM            MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_MANAGE_BKM)
#define BRA_STR_OK                    MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_OK)
#define BRA_STR_OFF                   MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_OFF)
#define BRA_STR_ON                    MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ON)
#define BRA_STR_OPTIONS               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_OPTIONS)
#define BRA_STR_PRX_ADDR              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PRX_ADDR)
#define BRA_STR_PRX_PORT              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PRX_PORT)
#define BRA_STR_PRX_PWD               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PRX_PWD)
#define BRA_STR_PRX_UID               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PRX_UID)
#define BRA_STR_START_TITLE           MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_START_TITLE)
#define BRA_STR_REFRESH               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_REFRESH)
#define BRA_STR_RENAME                MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_RENAME)
#define BRA_STR_SAVE_AS_HOMEP         MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SAVE_AS_HOMEP)
#define BRA_STR_ENTER_SELECT_MODE     MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ENTER_SELECT_MODE)
#define BRA_STR_ENTERING_SELECT_MODE  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ENTERING_SELECT_MODE)
#define BRA_STR_SELECT_PICTURE        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SELECT_PICTURE)
#define BRA_STR_SECURITY              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SECURITY)
#define BRA_STR_ACCEPT                MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ACCEPT)
#define BRA_STR_SELECT_BOOKMARK       MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SELECT_BOOKMARK)
#define BRA_STR_SELECT_PROFILE        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SELECT_PROFILE)
#define BRA_STR_SETTINGS              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SETTINGS)
#define BRA_STR_TIMEOUT               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_TIMEOUT)
#define BRA_STR_TITLE                 MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_TITLE)
#define BRA_STR_ALWAYS                MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ALWAYS)
#define BRA_STR_ASK                   MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ASK)
#define BRA_STR_NEVER                 MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_NEVER)
#define BRA_STR_DISABLE               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DISABLE)
#define BRA_STR_WITHOUT_CONFIRM       MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_WITHOUT_CONFIRM)
#define BRA_STR_CONFIRM               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CONFIRM)
#define BRA_STR_ADD_NEW               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ADD_NEW)
#define BRA_STR_PHONE_NO              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PHONE_NO)
#define BRA_STR_DOMAIN_NAME           MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DOMAIN_NAME)
#define BRA_STR_SOUND_OPT             MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SOUND_OPT)
#define BRA_STR_ERR_INVALID_PHONENO   MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ERR_INVALID_PHONENO)
#define BRA_STR_ERR_INVALID_DOMAINNAME    MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ERR_INVALID_DOMAINNAME)
#define BRA_STR_ERR_INVALID_IP        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ERR_INVALID_IP)
#define BRA_STR_ERR_TRUSTLIST_FULL    MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ERR_TRUSTLIST_FULL)
#define BRA_STR_ERR_SELECT_PROFILE    MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ERR_SELECT_PROFILE)
#define BRA_STR_ERR_BKM_FULL          MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ERR_BKM_FULL)
#define BRA_STR_ERR_TITLE_URL_INVALID MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ERR_TITLE_URL_INVALID)
#define BRA_STR_ERR_TITLE_URL_TOOLONG MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ERR_TITLE_URL_TOOLONG)
#define BRA_STR_CERTIFICATES          MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CERTIFICATES)
#define BRA_STR_CHANGE_AUTH_PIN       MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CHANGE_AUTH_PIN)
#define BRA_STR_CURENT_CERT           MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CURENT_CERT)
#define BRA_STR_SESSION_INFO          MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SESSION_INFO)
#define BRA_STR_CONTRACTS             MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CONTRACTS)
#define BRA_STR_CHANGE_SIGN_TEXT_PIN  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CHANGE_SIGN_TEXT_PIN)
#define BRA_STR_PUSH_SETTINGS         MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PUSH_SETTINGS)
/*#define BRA_STR_PUSH_DELETE           MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PUSH_DELETE)*/
#define BRA_STR_CACHE                 MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CACHE)
#define BRA_STR_CACHE_MODE            MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CACHE_MODE)
#define BRA_STR_CLEAR_CACHE           MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CLEAR_CACHE)
#define BRA_STR_CLEAR_CACHE_ASK       MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CLEAR_CACHE_ASK)
#define BRA_STR_CACHE_SIZE            MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CACHE_SIZE)
#define BRA_STR_COOKIES               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_COOKIES)
#define BRA_STR_ENABLE_COOKIES        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ENABLE_COOKIES)
#define BRA_STR_CLEAR_COOKIES         MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CLEAR_COOKIES)
#define BRA_STR_CLEAR_COOKIES_ASK     MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CLEAR_COOKIES_ASK)
#define BRA_STR_INVALID_INPUT         MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_INVALID_INPUT)
#define BRA_STR_INVALID_URL           MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_INVALID_URL)
#define BRA_STR_SCHEME_NOT_SUPPORTED  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SCHEME_NOT_SUPPORTED)
#define BRA_STR_UNKNOWN_CHARSET       MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_UNKNOWN_CHARSET)
#define BRA_STR_REQUIRE_FRAMES        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_REQUIRE_FRAMES)
#define BRA_STR_WMLS_ERROR            MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_WMLS_ERROR)
#define BRA_STR_ACCESS_RESTR_WML      MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ACCESS_RESTR_WML)
#define BRA_STR_ACCESS_RESTR_WMLS     MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ACCESS_RESTR_WMLS)
#define BRA_STR_ERROR_COMMUNICATION   MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ERROR_COMMUNICATION)
#define BRA_STR_HOST_NOT_FOUND        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_HOST_NOT_FOUND)
#define BRA_STR_REQUEST_TIMED_OUT     MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_REQUEST_TIMED_OUT)
#define BRA_STR_CONNECTION_FAILED     MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CONNECTION_FAILED)
#define BRA_STR_SEC_CONNECTION_FAILED MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SEC_CONNECTION_FAILED)
#define BRA_STR_INTERNAL_ERROR        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_INTERNAL_ERROR)
#define BRA_STR_RESEND_POST_WARNING   MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_RESEND_POST_WARNING)
#define BRA_STR_PARSER_ERROR          MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PARSER_ERROR)
#define BRA_STR_FROM                  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_FROM)
#define BRA_STR_EXPIRES               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_EXPIRES)
#define BRA_STR_URL                   MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_URL)
#define BRA_STR_MESSAGE               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_MESSAGE)
#define BRA_STR_MESSAGE_FORTITLE      MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_MESSAGE_FORTITLE)
#define BRA_STR_PUSH_SL_SETTINGS      MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PUSH_SL_SETTINGS)
#define BRA_STR_IF_SAME_HOST          MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_IF_SAME_HOST)
#define BRA_STR_PUSH_LOAD_SL          MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PUSH_LOAD_SL)
#define BRA_STR_PUSH_SECURITY         MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PUSH_SECURITY)
#define BRA_STR_PUSH_LOAD_ALWAYS      MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PUSH_LOAD_ALWAYS)
#define BRA_STR_PUSH_LOAD_AUTH        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PUSH_LOAD_AUTH)
#define BRA_STR_PUSH_LOAD_NON_WAP     MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PUSH_LOAD_NON_WAP)
#define BRA_STR_PUSH_LOAD_NEVER       MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PUSH_LOAD_NEVER)
#define BRA_STR_SET_NET_ID            MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SET_NET_ID)
#define BRA_STR_SET_NO_NET_IDS        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SET_NO_NET_IDS)
#define BRA_STR_SET_DEF_NET_ID        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SET_DEF_NET_ID)
#define BRA_STR_SET_ENABLE_PUSH       MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SET_ENABLE_PUSH)
#define BRA_STR_SET_PUSH_TRUSTSETTING MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SET_PUSH_TRUSTSETTING)
#define BRA_STR_SET_PUSH_SLSETTING    MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SET_PUSH_SLSETTING)
#define BRA_STR_SET_PUSH_TRUSTLIST    MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SET_PUSH_TRUSTLIST)
#define BRA_STR_SET_PUSH_ADDTO_TRUSTLIST    MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SET_PUSH_ADDTO_TRUSTLIST)
#define BRA_STR_PRS_INSTAL            MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PRS_INSTAL)
#define BRA_STR_PRS_WAP_INSTAL        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PRS_WAP_INSTAL)
#define BRA_STR_PRS_MMS_INSTAL        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PRS_MMS_INSTAL)
#define BRA_STR_LOADING_DOC           MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_LOADING_DOC)
#define BRA_STR_LOADING_OBJ           MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_LOADING_OBJ)
#define BRA_STR_SEC_CLEAR_SESSION     MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SEC_CLEAR_SESSION)
#define BRA_STR_SEND                  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SEND)
#define BRA_STR_VIA_SMS               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_VIA_SMS)
#define BRA_STR_VIA_MMS               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_VIA_MMS)
#define BRA_STR_VIA_EMAIL             MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_VIA_EMAIL)
#define BRA_STR_USB_MODE_EXP_WARNING  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_USB_MODE_EXP_WARNING)
#define BRA_STR_NO_SIMCARD_WARNING    MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_NO_SIMCARD_WARNING)
#define BRA_STR_ERR_UNDEFINED_ERROR   MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ERR_UNDEFINED_ERROR)
#define BRA_STR_NO_HISTORY            MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_NO_HISTORY)
#define BRA_STR_GOTO                  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_GOTO)
#define BRA_STR_DELETE_ALL            MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DELETE_ALL)
#define BRA_STR_DELETE_ALL_ASK        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DELETE_ALL_ASK)
#define BRA_STR_DELETE_ALL_INBOX      MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DELETE_ALL_INBOX)
#define BRA_STR_RECENT_PAGES          MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_RECENT_PAGES)
#define BRA_STR_EDIT_PROFILE          MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_EDIT_PROFILE)
#define BRA_STR_VIEW_PROFILE          MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_VIEW_PROFILE)
#define BRA_STR_SECURITY_INFO         MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SECURITY_INFO)
#define BRA_STR_DEFAULT_PROFILE_NAME  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DEFAULT_PROFILE_NAME)
#define BRA_STR_ACTIVATE_PROFILE      MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ACTIVATE_PROFILE)
#define BRA_STR_PUSH_INBOX            MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PUSH_INBOX)
#define BRA_STR_PUSH_UM_INBOX         MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PUSH_UM_INBOX)
#define BRA_STR_NEW_PUSH_MSG          MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_NEW_PUSH_MSG)
#define BRA_STR_OUT_OF_MEMORY         MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_OUT_OF_MEMORY)
#define BRA_STR_EMPTY                 MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_EMPTY)
#define BRA_STR_READ                  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_READ)
#define BRA_STR_EMPTY_LIST            MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_EMPTY_LIST)
#define BRA_STR_SAVE_AS_FAIL		  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SAVE_AS_FAIL)
#define BRA_STR_DELETE_SUCCESS        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DELETE_SUCCESS)
#define BRA_STR_YES                   MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_YES)
#define BRA_STR_NO                    MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_NO) 
#define BRA_STR_SAME_ITEM_EXIT        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SAME_ITEM_EXIT) 
#define BRA_STR_INVALID_GATEWAY_IP    MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_INVALID_GATEWAY_IP) 
#define BRA_STR_TRUSTED_CERTIFICATES  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_TRUSTED_CERTIFICATES) 
#define BRA_STR_LONG_IDLE_DISCONNECT  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_LONG_IDLE_DISCONNECT) 
#define BRA_STR_BEARER_GSM_CSD        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_BEARER_GSM_CSD) 
#define BRA_STR_BEARER_GPRS           MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_BEARER_GPRS) 
#define BRA_STR_BEARER_WIFI           MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_BEARER_WIFI) 
#define BRA_STR_BEARER_GPRS_GSM_DUAL  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_BEARER_GPRS_GSM_DUAL) 
#define BRA_STR_SELECT_GPRS           MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SELECT_GPRS) 
#define BRA_STR_SELECT_GSM_CSD        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SELECT_GSM_CSD) 
#define BRA_STR_SWITCH_GSM_CSD        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SWITCH_GSM_CSD) 
#define BRA_STR_SWITCH_GSM_GPRS_LOAD  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SWITCH_GSM_GPRS_LOAD) 
#define BRA_STR_SWITCH_GSM_GPRS_IDLE  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SWITCH_GSM_GPRS_IDLE) 
#define BRA_STR_SAVING                MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SAVING) 
#define BRA_STR_SAVE                  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SAVE) 
#define BRA_STR_SAVE_ASK              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SAVE_ASK) 
#define BRA_STR_SAVED                 MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SAVED) 
#define BRA_STR_DIAL                  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DIAL) 
#define BRA_STR_SEND_DTMF             MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SEND_DTMF) 
#define BRA_STR_ADD                   MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ADD) 
#define BRA_STR_DRM_RO_RECEIVED       MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DRM_RO_RECEIVED) 
#define BRA_STR_OFFLINE_PAGES         MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_OFFLINE_PAGES) 
#define BRA_STR_SAVE_OFFLINE_PAGE     MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SAVE_OFFLINE_PAGE) 
#define BRA_STR_SAVE_OFFLINE_PAGE_FAIL MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SAVE_OFFLINE_PAGE_FAIL) 
#define BRA_STR_UPDATE_OFFLINE_PAGE   MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_UPDATE_OFFLINE_PAGE) 
#define BRA_STR_OFFLINE_PAGE_FULL     MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_OFFLINE_PAGE_FULL) 
#define BRA_STR_OFFLINE_PAGE_NOTFOUND MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_OFFLINE_PAGE_NOTFOUND) 
#define BRA_STR_ERR_PHONEBOOK_FULL     MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ERR_PHONEBOOK_FULL) 
#define BRA_STR_20_SECS              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_20_SECS) 
#define BRA_STR_30_SECS              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_30_SECS) 
#define BRA_STR_60_SECS              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_60_SECS) 
#define BRA_STR_2_MINS              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_2_MINS) 
#define BRA_STR_DELETING              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DELETING) 
#define BRA_STR_ERROR_GPRS_UNKNOWN_APN	                MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ERROR_GPRS_UNKNOWN_APN)
#define BRA_STR_ERROR_GPRS_AUTHENTICATION_FAILURE      MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ERROR_GPRS_AUTHENTICATION_FAILURE)
#define BRA_STR_ERROR_GPRS_UNSUPPORTED_SERVICE_OPTION	 MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ERROR_GPRS_UNSUPPORTED_SERVICE_OPTION)
#define BRA_STR_ERROR_GPRS_UNSUBSCRIBED_SERVICE_OPTION MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ERROR_GPRS_UNSUBSCRIBED_SERVICE_OPTION)
#define BRA_STR_ERROR_CSD_AUTH_FAIL MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ERROR_CSD_AUTH_FAIL)
#define BRA_STR_DO_TYPE_ACCEPT	MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DO_TYPE_ACCEPT)
#define BRA_STR_DO_TYPE_DELETE	MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DO_TYPE_DELETE)
#define BRA_STR_DO_TYPE_HELP		MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DO_TYPE_HELP)
#define BRA_STR_DO_TYPE_OPTIONS	MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DO_TYPE_OPTIONS)
#define BRA_STR_DO_TYPE_PREV		MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DO_TYPE_PREV)
#define BRA_STR_DO_TYPE_RESET		MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DO_TYPE_RESET)
#define BRA_STR_DO_TYPE_UNKNOWN	MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DO_TYPE_UNKNOWN)
#define BRA_STR_NEED_ACTIVE_VOICE_CALL MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_NEED_ACTIVE_VOICE_CALL)
#define BRA_STR_INVALID_PROV MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_INVALID_PROV)
#define BRA_STR_UNSUPPORT_PROV MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_UNSUPPORT_PROV)
#define BRA_STR_INVALID_DRM_RO_FORMAT  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_INVALID_DRM_RO_FORMAT)
#define BRA_STR_DRM_RO_EXISTS  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DRM_RO_EXISTS)
#define BRA_STR_MSG_DELETED  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_MSG_DELETED)
#define BRA_STR_MSG_REPLACED  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_MSG_REPLACED)
#define BRA_STR_PRS_BOOKMARK_INSTAL MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PRS_BOOKMARK_INSTAL)
#define BRA_STR_CONTENT_TOO_LARGE MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CONTENT_TOO_LARGE)
#define BRA_STR_RESET MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_RESET)
#define BRA_STR_CHOOSE MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CHOOSE)
#define BRA_STR_NOCERT MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_NOCERT)
#define BRA_STR_LOAD_SCHEME_SMS_CONF MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_LOAD_SCHEME_SMS_CONF)
#define BRA_STR_LOAD_SCHEME_EGE_CONF MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_LOAD_SCHEME_EGE_CONF)
#define BRA_STR_LOAD_SCHEME_RTSP_CONF MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_LOAD_SCHEME_RTSP_CONF)
#define BRA_STR_LOAD_SCHEME_MMS_CONF MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_LOAD_SCHEME_MMS_CONF)
#define BRA_STR_CANCEL_PROV MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_CANCEL_PROV)
#define BRA_STR_LOAD_EXPIRED_MSG_CONF MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_LOAD_EXPIRED_MSG_CONF)
#define BRA_STR_ACCEPT_URL_CONF       MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ACCEPT_URL_CONF)
#define BRA_STR_ACTIVATED            MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ACTIVATED) 
#define BRA_STR_DOWNLOAD             MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_DOWNLOAD) 
#define BRA_STR_SUSPEND_DOWNLOAD     MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SUSPEND_DOWNLOAD) 
#define BRA_STR_AUTHENTICATION       MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_AUTHENTICATION)  
#define BRA_STR_AUTH_FAILED          MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_AUTH_FAILED) 


/*#ifdef BRA_CFG_CCA*/
#define BRA_STR_BROWSER              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_BROWSER) 
#define BRA_STR_MMS                  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_MMS) 
#define BRA_STR_PROFILE              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PROFILE) 
#define BRA_STR_PROFILE_NAME         MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PROFILE_NAME) 
#define BRA_STR_SKIP                 MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SKIP) 
#define BRA_STR_INSTALL              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_INSTALL) 
#define BRA_STR_INSTALL_SETTING      MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_INSTALL_SETTING) 
#define BRA_STR_REPLACE_SETTING      MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_REPLACE_SETTING) 
#define BRA_STR_SKIP_PROFILE         MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SKIP_PROFILE) 
#define BRA_STR_PROFILE_IN_USE       MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PROFILE_IN_USE) 
/*#endif BRA_CFG_CCA*/


/* BRA_CFG_DUAL_SIM */
#define BRA_STR_SELECT_SIM                  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SELECT_SIM) 
#define BRA_STR_SIM1                        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SIM1) 
#define BRA_STR_SIM2                        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SIM2) 
#define BRA_STR_SELECT_CALL                 MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SELECT_CALL) 
#define BRA_STR_SIM1_CALL                   MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SIM1_CALL) 
#define BRA_STR_SIM2_CALL                   MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SIM2_CALL) 
#define BRA_STR_ALWAYS_ASK                  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_ALWAYS_ASK) 
#define BRA_STR_SIM1_NOT_EXIST              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SIM1_NOT_EXIST) 
#define BRA_STR_SIM2_NOT_EXIST              MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SIM2_NOT_EXIST) 
#define BRA_STR_SIM1_NOT_OPEN               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SIM1_NOT_OPEN) 
#define BRA_STR_SIM2_NOT_OPEN               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SIM2_NOT_OPEN) 
#define BRA_STR_NO_SIM_IS_AVAILABLE         MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_NO_SIM_IS_AVAILABLE) 

#define BRA_STR_BEARER_DETAIL_INFO          MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_BEARER_DETAIL_INFO) 
#define BRA_STR_PRS_SIM1_INSTALL            MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PRS_SIM1_INSTALL) 
#define BRA_STR_PRS_SIM2_INSTALL            MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PRS_SIM2_INSTALL) 
#define BRA_STR_PRS_SIM1_WAP_INSTALL        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PRS_SIM1_WAP_INSTALL) 
#define BRA_STR_PRS_SIM2_WAP_INSTALL        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PRS_SIM2_WAP_INSTALL) 
#define BRA_STR_PRS_SIM1_MMS_INSTALL        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PRS_SIM1_MMS_INSTALL) 
#define BRA_STR_PRS_SIM2_MMS_INSTALL        MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_PRS_SIM2_MMS_INSTALL) 

/* BRA_CFG_DUAL_SIM */


#define BRA_STR_SUBMIT_ASK                  MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_SUBMIT_ASK) 
#define BRA_STR_QUESTION_MARK               MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_QUESTION_MARK) 







/* This comment is part of an example to add a File Browser option to 
 * the BRA Options menu.
 * The full example is described in the BRA Reference Manual 
 *
 * Ex: 3.2
 *
 * 2. Add a String here.
 *
 * #define BRA_STR_FILE_BROWSER            MSF_WIDGET_STRING_GET_PREDEFINED(BRA_STR_ID_FILE_BROWSER) 
 */


#endif


