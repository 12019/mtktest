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
 *  wgui_categories_inputsenum.h
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  
 *
 * Author:
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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

/**
 * Copyright Notice
 * (c) 2002 - 2003, Pixtel Communications, Inc., 1489 43rd Ave. W.,
 * Vancouver, B.C. V6M 4K8 Canada. All Rights Reserved.
 *  (It is illegal to remove this copyright notice from this software or any
 *  portion of it)
 */

/**************************************************************

   FILENAME : wgui_categories_inputsenum.h

   PURPOSE     : This file defines enum value for global resources used in input method.

   REMARKS     : 

   AUTHOR      : MTK00866

   DATE     : 05-23-2005

**************************************************************/
#ifndef __WGUI_CATEGORIES_INPUTS_ENUM_H__
#define __WGUI_CATEGORIES_INPUTS_ENUM_H__
typedef enum
{
    INPUT_TYPE_NONE = 0,
    INPUT_TYPE_NUMERIC = 1,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE = 2,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE = 3,
    INPUT_TYPE_ALPHANUMERIC_SENTENCECASE,
    INPUT_TYPE_NUMERIC_PASSWORD,
    INPUT_TYPE_ALPHANUMERIC_PASSWORD,
    INPUT_TYPE_PHONE_NUMBER,
    INPUT_TYPE_SAT_NUMERIC_PASSWORD,
    INPUT_TYPE_KEYPAD_NUMERIC,
    INPUT_TYPE_DECIMAL_NUMERIC,    
    INPUT_TYPE_DECIMAL_NUMERIC_PASSWORD,
    INPUT_TYPE_NUMERIC_CHANGEABLE,
    INPUT_TYPE_TR_BOPOMO,
    INPUT_TYPE_SM_PINYIN,
    INPUT_TYPE_TR_STROKE,
    INPUT_TYPE_SM_STROKE,
    INPUT_TYPE_SMART_UPPERCASE_ABC,
    INPUT_TYPE_SMART_LOWERCASE_ABC,
    INPUT_TYPE_SMART_FIRST_UPPERCASE_ABC,
    INPUT_TYPE_TR_MULTITAP_BOPOMO,
    INPUT_TYPE_SM_MULTITAP_PINYIN,
    INPUT_TYPE_MMI_MULTITAP_BPMF,
    INPUT_TYPE_MMI_MULTITAP_PINYIN,
    INPUT_TYPE_MMI_SM_STROKE,
    INPUT_TYPE_MMI_TR_STROKE,
    INPUT_TYPE_MMI_NUMERIC,
    INPUT_TYPE_MMI_LOWERCASE_ABC,
    INPUT_TYPE_ALPHABATIC_UPPERCASE,
    INPUT_TYPE_ALPHABATIC_LOWERCASE,
    INPUT_TYPE_NUMERIC_SYMBOL,
    INPUT_TYPE_ALPHANUMERIC_MULTITAP_THAI,
    INPUT_TYPE_ALPHANUMERIC_ARABIC,
    INPUT_TYPE_MMI_MULTITAP_ARABIC,
    INPUT_TYPE_MMI_ARABIC_NUMERIC,
    INPUT_TYPE_ARABIC_NUMERIC,
    INPUT_TYPE_ALPHANUMERIC_PERSIAN,
    INPUT_TYPE_MMI_MULTITAP_PERSIAN,
    INPUT_TYPE_SMART_PERSIAN,
    INPUT_TYPE_ALPHANUMERIC_URDU,
    INPUT_TYPE_MMI_MULTITAP_URDU,
    INPUT_TYPE_SMART_URDU, 
    INPUT_TYPE_SMART_THAI,
    INPUT_TYPE_MULTITAP_THAI,
    INPUT_TYPE_MMI_MULTITAP_THAI,
    INPUT_TYPE_ALPHANUMERIC_MULTITAP_HEBREW,
    INPUT_TYPE_SMART_ARABIC,
    INPUT_TYPE_MMI_MULTITAP_HEBREW,
    INPUT_TYPE_SMART_HEBREW,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_SPANISH,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_SPANISH,
    INPUT_TYPE_MMI_LOWERCASE_SPANISH,
    INPUT_TYPE_SMART_UPPERCASE_SPANISH,
    INPUT_TYPE_SMART_LOWERCASE_SPANISH,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_DANISH,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_DANISH,
    INPUT_TYPE_MMI_LOWERCASE_DANISH,
    INPUT_TYPE_SMART_UPPERCASE_DANISH,
    INPUT_TYPE_SMART_LOWERCASE_DANISH,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_POLISH,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_POLISH,
    INPUT_TYPE_MMI_LOWERCASE_POLISH,
    INPUT_TYPE_SMART_UPPERCASE_POLISH,
    INPUT_TYPE_SMART_LOWERCASE_POLISH,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_FRENCH,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_FRENCH,
    INPUT_TYPE_MMI_LOWERCASE_FRENCH,
    INPUT_TYPE_SMART_UPPERCASE_FRENCH,
    INPUT_TYPE_SMART_LOWERCASE_FRENCH,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_GERMAN,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_GERMAN,
    INPUT_TYPE_MMI_LOWERCASE_GERMAN,
    INPUT_TYPE_SMART_UPPERCASE_GERMAN,
    INPUT_TYPE_SMART_LOWERCASE_GERMAN,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_ITALIAN,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_ITALIAN,
    INPUT_TYPE_MMI_LOWERCASE_ITALIAN,
    INPUT_TYPE_SMART_UPPERCASE_ITALIAN,
    INPUT_TYPE_SMART_LOWERCASE_ITALIAN,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_RUSSIAN,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_RUSSIAN,
    INPUT_TYPE_MMI_LOWERCASE_RUSSIAN,
    INPUT_TYPE_SMART_UPPERCASE_RUSSIAN,
    INPUT_TYPE_SMART_LOWERCASE_RUSSIAN,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_UKRAINIAN,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_UKRAINIAN,
    INPUT_TYPE_MMI_LOWERCASE_UKRAINIAN,
    INPUT_TYPE_SMART_UPPERCASE_UKRAINIAN,
    INPUT_TYPE_SMART_LOWERCASE_UKRAINIAN,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_BULGARIAN,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_BULGARIAN,
    INPUT_TYPE_MMI_LOWERCASE_BULGARIAN,
    INPUT_TYPE_SMART_UPPERCASE_BULGARIAN,
    INPUT_TYPE_SMART_LOWERCASE_BULGARIAN,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_TURKISH,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_TURKISH,
    INPUT_TYPE_MMI_LOWERCASE_TURKISH,
    INPUT_TYPE_SMART_UPPERCASE_TURKISH,
    INPUT_TYPE_SMART_LOWERCASE_TURKISH,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_PORTUGUESE,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_PORTUGUESE,
    INPUT_TYPE_MMI_LOWERCASE_PORTUGUESE,
    INPUT_TYPE_SMART_UPPERCASE_PORTUGUESE,
    INPUT_TYPE_SMART_LOWERCASE_PORTUGUESE,
    INPUT_TYPE_MULTITAP_HINDI,
    INPUT_TYPE_MMI_MULTITAP_HINDI,
    INPUT_TYPE_SMART_HINDI,
    INPUT_TYPE_ALPHANUMERIC_HEBREW,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_INDONESIAN,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_INDONESIAN,
    INPUT_TYPE_MMI_LOWERCASE_INDONESIAN,
    INPUT_TYPE_SMART_UPPERCASE_INDONESIAN,
    INPUT_TYPE_SMART_LOWERCASE_INDONESIAN,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_CZECH,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_CZECH,
    INPUT_TYPE_MMI_LOWERCASE_CZECH,
    INPUT_TYPE_SMART_UPPERCASE_CZECH,
    INPUT_TYPE_SMART_LOWERCASE_CZECH,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_MALAY,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_MALAY,
    INPUT_TYPE_MMI_LOWERCASE_MALAY,
    INPUT_TYPE_SMART_UPPERCASE_MALAY,
    INPUT_TYPE_SMART_LOWERCASE_MALAY,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_VIETNAMESE,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_VIETNAMESE,
    INPUT_TYPE_MMI_LOWERCASE_VIETNAMESE,
    INPUT_TYPE_SMART_UPPERCASE_VIETNAMESE,
    INPUT_TYPE_SMART_LOWERCASE_VIETNAMESE,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_FINNISH,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_FINNISH,
    INPUT_TYPE_MMI_LOWERCASE_FINNISH,
    INPUT_TYPE_SMART_UPPERCASE_FINNISH,
    INPUT_TYPE_SMART_LOWERCASE_FINNISH,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_HUNGARIAN,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_HUNGARIAN,
    INPUT_TYPE_MMI_LOWERCASE_HUNGARIAN,
    INPUT_TYPE_SMART_UPPERCASE_HUNGARIAN,
    INPUT_TYPE_SMART_LOWERCASE_HUNGARIAN,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_SLOVAK,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_SLOVAK,
    INPUT_TYPE_MMI_LOWERCASE_SLOVAK,
    INPUT_TYPE_SMART_UPPERCASE_SLOVAK,
    INPUT_TYPE_SMART_LOWERCASE_SLOVAK,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_DUTCH,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_DUTCH,
    INPUT_TYPE_MMI_LOWERCASE_DUTCH,
    INPUT_TYPE_SMART_UPPERCASE_DUTCH,
    INPUT_TYPE_SMART_LOWERCASE_DUTCH,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_NORWEGIAN,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_NORWEGIAN,
    INPUT_TYPE_MMI_LOWERCASE_NORWEGIAN,
    INPUT_TYPE_SMART_UPPERCASE_NORWEGIAN,
    INPUT_TYPE_SMART_LOWERCASE_NORWEGIAN,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_SWEDISH,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_SWEDISH,
    INPUT_TYPE_MMI_LOWERCASE_SWEDISH,
    INPUT_TYPE_SMART_UPPERCASE_SWEDISH,
    INPUT_TYPE_SMART_LOWERCASE_SWEDISH,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_CROATIAN,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_CROATIAN,
    INPUT_TYPE_MMI_LOWERCASE_CROATIAN,
    INPUT_TYPE_SMART_UPPERCASE_CROATIAN,
    INPUT_TYPE_SMART_LOWERCASE_CROATIAN,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_ROMANIAN,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_ROMANIAN,
    INPUT_TYPE_MMI_LOWERCASE_ROMANIAN,
    INPUT_TYPE_SMART_UPPERCASE_ROMANIAN,
    INPUT_TYPE_SMART_LOWERCASE_ROMANIAN,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_SLOVENIAN,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_SLOVENIAN,
    INPUT_TYPE_MMI_LOWERCASE_SLOVENIAN,
    INPUT_TYPE_SMART_UPPERCASE_SLOVENIAN,
    INPUT_TYPE_SMART_LOWERCASE_SLOVENIAN,
    INPUT_TYPE_ALPHANUMERIC_UPPERCASE_GREEK,
    INPUT_TYPE_ALPHANUMERIC_LOWERCASE_GREEK,
    INPUT_TYPE_MMI_LOWERCASE_GREEK,
    INPUT_TYPE_SMART_UPPERCASE_GREEK,
    INPUT_TYPE_SMART_LOWERCASE_GREEK,
    INPUT_TYPE_MULTITAP_MARATHI,
    INPUT_TYPE_MMI_MULTITAP_MARATHI,
    INPUT_TYPE_SMART_MARATHI, 
    INPUT_TYPE_MULTITAP_TAMIL,
    INPUT_TYPE_MMI_MULTITAP_TAMIL,
    INPUT_TYPE_SMART_TAMIL, 
    INPUT_TYPE_MULTITAP_BENGALI,
    INPUT_TYPE_MMI_MULTITAP_BENGALI,
    INPUT_TYPE_SMART_BENGALI, 
    INPUT_TYPE_MULTITAP_PUNJABI,
    INPUT_TYPE_MMI_MULTITAP_PUNJABI,
    INPUT_TYPE_SMART_PUNJABI,
    INPUT_TYPE_MULTITAP_TELUGU,
    INPUT_TYPE_MMI_MULTITAP_TELUGU,
    INPUT_TYPE_SMART_TELUGU,
    INPUT_TYPE_SIGNED_NUMERIC,
    INPUT_TYPE_SIGNED_DECIMAL_NUMERIC,    
    INPUT_TYPE_SIGNED_DECIMAL_NUMERIC_PASSWORD,
    INPUT_TYPE_SIGNED_NUMERIC_PASSWORD,
    INPUT_TYPE_MAX_NUM
} SUPPORT_INPUT_TYPES;

typedef enum
{
    INPUT_MODE_MULTITAP_UPPERCASE_ABC = 0,
    INPUT_MODE_MULTITAP_LOWERCASE_ABC,
    INPUT_MODE_123,
    INPUT_MODE_MULTITAP_UPPERCASE_ABC_NO_NUMERIC,
    INPUT_MODE_MULTITAP_LOWERCASE_ABC_NO_NUMERIC,
    INPUT_MODE_123_SYMBOLS,
    INPUT_MODE_TR_MULTITAP_BOPOMO,
    INPUT_MODE_SM_MULTITAP_PINYIN,
    INPUT_MODE_TR_BOPOMO,
    INPUT_MODE_SM_PINYIN,
    INPUT_MODE_TR_STROKE,
    INPUT_MODE_SM_STROKE,
    INPUT_MODE_SMART_UPPERCASE_ABC,
    INPUT_MODE_SMART_LOWERCASE_ABC,
    INPUT_MODE_SMART_FIRST_UPPERCASE_ABC,
    INPUT_MODE_MMI_MULTITAP_BPMF,
    INPUT_MODE_MMI_MULTITAP_PINYIN,
    INPUT_MODE_MMI_SM_STROKE,
    INPUT_MODE_MMI_TR_STROKE,
    INPUT_MODE_MMI_LOWERCASE_ABC,
    INPUT_MODE_MMI_NUMERIC,
    INPUT_MODE_MULTITAP_THAI,
    INPUT_MODE_SMART_THAI,
    INPUT_MODE_MMI_MULTITAP_THAI,
    INPUT_MODE_MULTITAP_ARABIC,
    INPUT_MODE_MMI_MULTITAP_ARABIC,
    INPUT_MODE_SMART_ARABIC,
    INPUT_MODE_MMI_ARABIC_NUMERIC,
    INPUT_MODE_ARABIC_NUMERIC,
    INPUT_MODE_MULTITAP_PERSIAN,
    INPUT_MODE_MMI_MULTITAP_PERSIAN,
    INPUT_MODE_SMART_PERSIAN,
    INPUT_MODE_MULTITAP_URDU,
    INPUT_MODE_MMI_MULTITAP_URDU,
    INPUT_MODE_SMART_URDU,
    INPUT_MODE_MULTITAP_HEBREW,
    INPUT_MODE_MMI_MULTITAP_HEBREW,
    INPUT_MODE_SMART_HEBREW,
    INPUT_MODE_MULTITAP_UPPERCASE_SPANISH,
    INPUT_MODE_MULTITAP_LOWERCASE_SPANISH,
    INPUT_MODE_MMI_LOWERCASE_SPANISH,
    INPUT_MODE_SMART_UPPERCASE_SPANISH,
    INPUT_MODE_SMART_LOWERCASE_SPANISH,
    INPUT_MODE_MULTITAP_UPPERCASE_DANISH,
    INPUT_MODE_MULTITAP_LOWERCASE_DANISH,
    INPUT_MODE_MMI_LOWERCASE_DANISH,
    INPUT_MODE_SMART_UPPERCASE_DANISH,
    INPUT_MODE_SMART_LOWERCASE_DANISH,
    INPUT_MODE_MULTITAP_UPPERCASE_POLISH,
    INPUT_MODE_MULTITAP_LOWERCASE_POLISH,
    INPUT_MODE_MMI_LOWERCASE_POLISH,
    INPUT_MODE_SMART_UPPERCASE_POLISH,
    INPUT_MODE_SMART_LOWERCASE_POLISH,
    INPUT_MODE_MULTITAP_UPPERCASE_FRENCH,
    INPUT_MODE_MULTITAP_LOWERCASE_FRENCH,
    INPUT_MODE_MMI_LOWERCASE_FRENCH,
    INPUT_MODE_SMART_UPPERCASE_FRENCH,
    INPUT_MODE_SMART_LOWERCASE_FRENCH,
    INPUT_MODE_MULTITAP_UPPERCASE_GERMAN,
    INPUT_MODE_MULTITAP_LOWERCASE_GERMAN,
    INPUT_MODE_MMI_LOWERCASE_GERMAN,
    INPUT_MODE_SMART_UPPERCASE_GERMAN,
    INPUT_MODE_SMART_LOWERCASE_GERMAN,
    INPUT_MODE_MULTITAP_UPPERCASE_ITALIAN,
    INPUT_MODE_MULTITAP_LOWERCASE_ITALIAN,
    INPUT_MODE_MMI_LOWERCASE_ITALIAN,
    INPUT_MODE_SMART_UPPERCASE_ITALIAN,
    INPUT_MODE_SMART_LOWERCASE_ITALIAN,
    INPUT_MODE_MULTITAP_UPPERCASE_RUSSIAN,
    INPUT_MODE_MULTITAP_LOWERCASE_RUSSIAN,
    INPUT_MODE_MMI_LOWERCASE_RUSSIAN,
    INPUT_MODE_SMART_UPPERCASE_RUSSIAN,
    INPUT_MODE_SMART_LOWERCASE_RUSSIAN,
    INPUT_MODE_MULTITAP_UPPERCASE_BULGARIAN,
    INPUT_MODE_MULTITAP_LOWERCASE_BULGARIAN,
    INPUT_MODE_MULTITAP_UPPERCASE_UKRAINIAN,
    INPUT_MODE_MULTITAP_LOWERCASE_UKRAINIAN,
    INPUT_MODE_SMART_UPPERCASE_UKRAINIAN,
    INPUT_MODE_SMART_LOWERCASE_UKRAINIAN,
    INPUT_MODE_MMI_LOWERCASE_BULGARIAN,
    INPUT_MODE_MMI_LOWERCASE_UKRAINIAN,
    INPUT_MODE_SMART_UPPERCASE_BULGARIAN,
    INPUT_MODE_SMART_LOWERCASE_BULGARIAN,
    INPUT_MODE_MULTITAP_UPPERCASE_TURKISH,
    INPUT_MODE_MULTITAP_LOWERCASE_TURKISH,
    INPUT_MODE_MMI_LOWERCASE_TURKISH,
    INPUT_MODE_SMART_UPPERCASE_TURKISH,
    INPUT_MODE_SMART_LOWERCASE_TURKISH,
    INPUT_MODE_MULTITAP_UPPERCASE_PORTUGUESE,
    INPUT_MODE_MULTITAP_LOWERCASE_PORTUGUESE,
    INPUT_MODE_MMI_LOWERCASE_PORTUGUESE,
    INPUT_MODE_SMART_UPPERCASE_PORTUGUESE,
    INPUT_MODE_SMART_LOWERCASE_PORTUGUESE,
    INPUT_MODE_MULTITAP_HINDI,    
    INPUT_MODE_MMI_MULTITAP_HINDI,
    INPUT_MODE_SMART_HINDI,
    INPUT_MODE_MULTITAP_UPPERCASE_INDONESIAN,
    INPUT_MODE_MULTITAP_LOWERCASE_INDONESIAN,
    INPUT_MODE_MMI_LOWERCASE_INDONESIAN,
    INPUT_MODE_SMART_UPPERCASE_INDONESIAN,
    INPUT_MODE_SMART_LOWERCASE_INDONESIAN,
    INPUT_MODE_MULTITAP_UPPERCASE_CZECH,
    INPUT_MODE_MULTITAP_LOWERCASE_CZECH,
    INPUT_MODE_MMI_LOWERCASE_CZECH,
    INPUT_MODE_SMART_UPPERCASE_CZECH,
    INPUT_MODE_SMART_LOWERCASE_CZECH,
    INPUT_MODE_MULTITAP_UPPERCASE_MALAY,
    INPUT_MODE_MULTITAP_LOWERCASE_MALAY,
    INPUT_MODE_MMI_LOWERCASE_MALAY,
    INPUT_MODE_SMART_UPPERCASE_MALAY,
    INPUT_MODE_SMART_LOWERCASE_MALAY,
    INPUT_MODE_MULTITAP_UPPERCASE_VIETNAMESE,
    INPUT_MODE_MULTITAP_LOWERCASE_VIETNAMESE,
    INPUT_MODE_MMI_LOWERCASE_VIETNAMESE,
    INPUT_MODE_SMART_UPPERCASE_VIETNAMESE,
    INPUT_MODE_SMART_LOWERCASE_VIETNAMESE,
    INPUT_MODE_MULTITAP_UPPERCASE_FINNISH,
    INPUT_MODE_MULTITAP_LOWERCASE_FINNISH,
    INPUT_MODE_MMI_LOWERCASE_FINNISH,
    INPUT_MODE_SMART_UPPERCASE_FINNISH,
    INPUT_MODE_SMART_LOWERCASE_FINNISH,
    INPUT_MODE_MULTITAP_UPPERCASE_HUNGARIAN,
    INPUT_MODE_MULTITAP_LOWERCASE_HUNGARIAN,
    INPUT_MODE_MMI_LOWERCASE_HUNGARIAN,
    INPUT_MODE_SMART_UPPERCASE_HUNGARIAN,
    INPUT_MODE_SMART_LOWERCASE_HUNGARIAN,
    INPUT_MODE_MULTITAP_UPPERCASE_SLOVAK,
    INPUT_MODE_MULTITAP_LOWERCASE_SLOVAK,
    INPUT_MODE_MMI_LOWERCASE_SLOVAK,
    INPUT_MODE_SMART_UPPERCASE_SLOVAK,
    INPUT_MODE_SMART_LOWERCASE_SLOVAK,
    INPUT_MODE_MULTITAP_UPPERCASE_DUTCH,
    INPUT_MODE_MULTITAP_LOWERCASE_DUTCH,
    INPUT_MODE_MMI_LOWERCASE_DUTCH,
    INPUT_MODE_SMART_UPPERCASE_DUTCH,
    INPUT_MODE_SMART_LOWERCASE_DUTCH,
    INPUT_MODE_MULTITAP_UPPERCASE_NORWEGIAN,
    INPUT_MODE_MULTITAP_LOWERCASE_NORWEGIAN,
    INPUT_MODE_MMI_LOWERCASE_NORWEGIAN,
    INPUT_MODE_SMART_UPPERCASE_NORWEGIAN,
    INPUT_MODE_SMART_LOWERCASE_NORWEGIAN,
    INPUT_MODE_MULTITAP_UPPERCASE_SWEDISH,
    INPUT_MODE_MULTITAP_LOWERCASE_SWEDISH,
    INPUT_MODE_MMI_LOWERCASE_SWEDISH,
    INPUT_MODE_SMART_UPPERCASE_SWEDISH,
    INPUT_MODE_SMART_LOWERCASE_SWEDISH,
    INPUT_MODE_MULTITAP_UPPERCASE_CROATIAN,
    INPUT_MODE_MULTITAP_LOWERCASE_CROATIAN,
    INPUT_MODE_MMI_LOWERCASE_CROATIAN,
    INPUT_MODE_SMART_UPPERCASE_CROATIAN,
    INPUT_MODE_SMART_LOWERCASE_CROATIAN,
    INPUT_MODE_MULTITAP_UPPERCASE_ROMANIAN,
    INPUT_MODE_MULTITAP_LOWERCASE_ROMANIAN,
    INPUT_MODE_MMI_LOWERCASE_ROMANIAN,
    INPUT_MODE_SMART_UPPERCASE_ROMANIAN,
    INPUT_MODE_SMART_LOWERCASE_ROMANIAN,
    INPUT_MODE_MULTITAP_UPPERCASE_SLOVENIAN,
    INPUT_MODE_MULTITAP_LOWERCASE_SLOVENIAN,
    INPUT_MODE_MMI_LOWERCASE_SLOVENIAN,
    INPUT_MODE_SMART_UPPERCASE_SLOVENIAN,
    INPUT_MODE_SMART_LOWERCASE_SLOVENIAN,
    INPUT_MODE_MULTITAP_UPPERCASE_GREEK,
    INPUT_MODE_MULTITAP_LOWERCASE_GREEK,
    INPUT_MODE_MMI_LOWERCASE_GREEK,
    INPUT_MODE_SMART_UPPERCASE_GREEK,
    INPUT_MODE_SMART_LOWERCASE_GREEK,
    INPUT_MODE_MMI_MULTITAP_MARATHI,
    INPUT_MODE_MULTITAP_MARATHI,
    INPUT_MODE_SMART_MARATHI,
    INPUT_MODE_MULTITAP_TAMIL,
    INPUT_MODE_MMI_MULTITAP_TAMIL,
    INPUT_MODE_SMART_TAMIL, 
    INPUT_MODE_MULTITAP_BENGALI,
    INPUT_MODE_MMI_MULTITAP_BENGALI,
    INPUT_MODE_SMART_BENGALI,  
    INPUT_MODE_MULTITAP_PUNJABI,
    INPUT_MODE_MMI_MULTITAP_PUNJABI,
    INPUT_MODE_SMART_PUNJABI, 
    INPUT_MODE_MMI_MULTITAP_TELUGU,
    INPUT_MODE_MULTITAP_TELUGU,
    INPUT_MODE_SMART_TELUGU, 
    INPUT_MODE_MAX_NUM
} SUPPORT_INPUT_MODES;
#endif /* __WGUI_CATEGORIES_INPUTS_ENUM_H__ */ 

