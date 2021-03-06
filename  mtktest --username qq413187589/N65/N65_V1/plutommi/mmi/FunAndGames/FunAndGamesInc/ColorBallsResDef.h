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
 * ColorBallsDefs.h
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  ColorBalls id define
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

#ifndef COLORBALLDEFS_H
#define COLORBALLDEFS_H

typedef enum
{
    STR_GX_COLORBALLS_GAME_NAME = GAME_COLORBALLS_BASE + 1,
    STR_GX_COLORBALLS_EASY,
    STR_GX_COLORBALLS_NORMAL,
    STR_GX_COLORBALLS_HARD,
    STR_GX_COLORBALLS_DESCRIPTION
} COLORBALLS_STR_IDS;

typedef enum
{
    IMG_GX_COLORBALLS_GAME_ICON = GAME_COLORBALLS_BASE + 1,
    IMG_GX_COLORBALLS_BIG_BLUE,
    IMG_GX_COLORBALLS_BIG_GREEN,
    IMG_GX_COLORBALLS_BIG_LIGHT,
    IMG_GX_COLORBALLS_BIG_PINK,
    IMG_GX_COLORBALLS_SMALL_BLUE,
    IMG_GX_COLORBALLS_SMALL_GREEN,
    IMG_GX_COLORBALLS_SMALL_LIGHT,
    IMG_GX_COLORBALLS_SMALL_PINK,
    IMG_GX_COLORBALLS_BG,
    IMG_GX_COLORBALLS_SCORE,
    IMG_GX_COLORBALLS_LAUNCH,
    IMG_GX_COLORBALLS_ENERGYBG,
    IMG_GX_COLORBALLS_GRADEBG,
    IMG_GX_COLORBALLS_LEVELBG,
    IMG_GX_COLORBALLS_ENERGYBAR,
#ifndef __MMI_GAME_MULTI_LANGUAGE_SUPPORT__
    IMG_GX_COLORBALLS_GOTEXT,
#endif    
    IMG_GX_COLORBALLS_GRADESMAP,
    IMG_GX_COLORBALLS_GOPIC,
    
#ifdef __MMI_GAME_MULTI_LANGUAGE_SUPPORT__
    //added for multi-language support
    IMG_GX_COLORBALLS_LEVEL_LANGUAGE0,
    IMG_GX_COLORBALLS_GRADE_LANGUAGE0,
    IMG_GX_COLORBALLS_ENERGY_LANGUAGE0,
    IMG_GX_COLORBALLS_GOTEXT_LANGUAGE0,
    IMG_GX_COLORBALLS_LEVEL_LANGUAGE1,
    IMG_GX_COLORBALLS_GRADE_LANGUAGE1,
    IMG_GX_COLORBALLS_ENERGY_LANGUAGE1,
    IMG_GX_COLORBALLS_GOTEXT_LANGUAGE1,
    IMG_GX_COLORBALLS_LEVEL_LANGUAGE2,
    IMG_GX_COLORBALLS_GRADE_LANGUAGE2,
    IMG_GX_COLORBALLS_ENERGY_LANGUAGE2,
    IMG_GX_COLORBALLS_GOTEXT_LANGUAGE2,
    IMG_GX_COLORBALLS_LEVEL_LANGUAGE3,
    IMG_GX_COLORBALLS_GRADE_LANGUAGE3,
    IMG_GX_COLORBALLS_ENERGY_LANGUAGE3,
    IMG_GX_COLORBALLS_GOTEXT_LANGUAGE3,
    IMG_GX_COLORBALLS_LEVEL_LANGUAGE4,
    IMG_GX_COLORBALLS_GRADE_LANGUAGE4,
    IMG_GX_COLORBALLS_ENERGY_LANGUAGE4,
    IMG_GX_COLORBALLS_GOTEXT_LANGUAGE4,
    IMG_GX_COLORBALLS_LEVEL_LANGUAGE5,
    IMG_GX_COLORBALLS_GRADE_LANGUAGE5,
    IMG_GX_COLORBALLS_ENERGY_LANGUAGE5,
    IMG_GX_COLORBALLS_GOTEXT_LANGUAGE5,
    IMG_GX_COLORBALLS_LEVEL_LANGUAGE6,
    IMG_GX_COLORBALLS_GRADE_LANGUAGE6,
    IMG_GX_COLORBALLS_ENERGY_LANGUAGE6,
    IMG_GX_COLORBALLS_GOTEXT_LANGUAGE6,
    IMG_GX_COLORBALLS_LEVEL_LANGUAGE7,
    IMG_GX_COLORBALLS_GRADE_LANGUAGE7,
    IMG_GX_COLORBALLS_ENERGY_LANGUAGE7,
    IMG_GX_COLORBALLS_GOTEXT_LANGUAGE7,
    IMG_GX_COLORBALLS_LEVEL_LANGUAGE8,
    IMG_GX_COLORBALLS_GRADE_LANGUAGE8,
    IMG_GX_COLORBALLS_ENERGY_LANGUAGE8,
    IMG_GX_COLORBALLS_GOTEXT_LANGUAGE8,
    IMG_GX_COLORBALLS_LEVEL_LANGUAGE9,
    IMG_GX_COLORBALLS_GRADE_LANGUAGE9,
    IMG_GX_COLORBALLS_ENERGY_LANGUAGE9,
    IMG_GX_COLORBALLS_GOTEXT_LANGUAGE9,
#endif  /* __MMI_GAME_MULTI_LANGUAGE_SUPPORT__ */

    IMG_GX_COLORBALLS_ALL
} COLORBALLS_IMG_IDS;

#endif /* COLORBALLDEFS_H */ 

