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
/*****************************************************************************
*
 * Filename:
 * ---------
 * SmashDefs.h
  *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  Smash game id defines
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
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
 *============================================================================
 ****************************************************************************/

#ifndef GAME_SMASH_DEFS_H
#define GAME_SMASH_DEFS_H

typedef enum
{
    STR_GX_SMASH_GAME_NAME = GAME_SMASH_BASE + 1,
    STR_GX_SMASH_TIME_SEC,
    STR_GX_SMASH_NORMAL,
    STR_GX_SMASH_SPEEDY,
    STR_GX_SMASH_ACCURACY,
    STR_GX_SMASH_HELP_DESCRIPTION
} SMASH_STR_IDS;

/* Image ID */
typedef enum
{
    /* Image */
    IMG_GX_SMASH_GAME_ICON = GAME_SMASH_BASE + 1,
    IMG_GX_SMASH_BG_0,
    IMG_GX_SMASH_BG_1,
    IMG_GX_SMASH_BG_2,
    IMG_GX_SMASH_BG_3,
    IMG_GX_SMASH_BG_4,
    IMG_GX_SMASH_BG_5,
    IMG_GX_SMASH_BG_6,
    IMG_GX_SMASH_BG_7,
    IMG_GX_SMASH_BG_8,
    IMG_GX_SMASH_MOUSE_0,
    IMG_GX_SMASH_MOUSE_1,
    IMG_GX_SMASH_MOUSE_2,
    IMG_GX_SMASH_MOUSE_3,
    IMG_GX_SMASH_MOUSE_4,
    IMG_GX_SMASH_MOUSE_5,
    IMG_GX_SMASH_COW_0,
    IMG_GX_SMASH_COW_1,
    IMG_GX_SMASH_COW_2,
    IMG_GX_SMASH_COW_3,
    IMG_GX_SMASH_COW_4,
    IMG_GX_SMASH_COW_5,
    IMG_GX_SMASH_BONE_0,
    IMG_GX_SMASH_BONE_1,
    IMG_GX_SMASH_BONE_2,
    IMG_GX_SMASH_BONE_3,
    IMG_GX_SMASH_BONE_4,
    IMG_GX_SMASH_BONE_5,
    IMG_GX_SMASH_PIG_0,
    IMG_GX_SMASH_PIG_1,
    IMG_GX_SMASH_PIG_2,
    IMG_GX_SMASH_PIG_3,
    IMG_GX_SMASH_PIG_4,
    IMG_GX_SMASH_PIG_5,
    IMG_GX_SMASH_HAND_0,
    IMG_GX_SMASH_HAND_1,
    IMG_GX_SMASH_HAND_2,
    
#ifndef __MMI_GAME_MULTI_LANGUAGE_SUPPORT__    
    IMG_GX_SMASH_HITTHIS,
    IMG_GX_SMASH_GOTEXT,
#else   /*__MMI_GAME_MULTI_LANGUAGE_SUPPORT__*/
    IMG_GX_SMASH_SCORE_LANGUAGE0,
    IMG_GX_SMASH_HITTHIS_LANGUAGE0,
    IMG_GX_SMASH_GOTEXT_LANGUAGE0,
    IMG_GX_SMASH_SCORE_LANGUAGE1,
    IMG_GX_SMASH_HITTHIS_LANGUAGE1,
    IMG_GX_SMASH_GOTEXT_LANGUAGE1,
    IMG_GX_SMASH_SCORE_LANGUAGE2,
    IMG_GX_SMASH_HITTHIS_LANGUAGE2,
    IMG_GX_SMASH_GOTEXT_LANGUAGE2,
    IMG_GX_SMASH_SCORE_LANGUAGE3,
    IMG_GX_SMASH_HITTHIS_LANGUAGE3,
    IMG_GX_SMASH_GOTEXT_LANGUAGE3,
    IMG_GX_SMASH_SCORE_LANGUAGE4,
    IMG_GX_SMASH_HITTHIS_LANGUAGE4,
    IMG_GX_SMASH_GOTEXT_LANGUAGE4,
    IMG_GX_SMASH_SCORE_LANGUAGE5,
    IMG_GX_SMASH_HITTHIS_LANGUAGE5,
    IMG_GX_SMASH_GOTEXT_LANGUAGE05,
    IMG_GX_SMASH_SCORE_LANGUAGE6,
    IMG_GX_SMASH_HITTHIS_LANGUAGE6,
    IMG_GX_SMASH_GOTEXT_LANGUAGE6,
    IMG_GX_SMASH_SCORE_LANGUAGE7,
    IMG_GX_SMASH_HITTHIS_LANGUAGE7,
    IMG_GX_SMASH_GOTEXT_LANGUAGE7,
    IMG_GX_SMASH_SCORE_LANGUAGE8,
    IMG_GX_SMASH_HITTHIS_LANGUAGE8,
    IMG_GX_SMASH_GOTEXT_LANGUAGE8,
    IMG_GX_SMASH_SCORE_LANGUAGE9,
    IMG_GX_SMASH_HITTHIS_LANGUAGE9,
    IMG_GX_SMASH_GOTEXT_LANGUAGE9,
#endif      /*__MMI_GAME_MULTI_LANGUAGE_SUPPORT__*/

    IMG_GX_SMASH_GRADESMAP,
    IMG_GX_SMASH_GOPIC,
    IMG_GX_SMASH_TOTAL
} SMASH_IMG_IDS;

#endif /* GAME_SMASH_DEFS_H */ 

