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
 * FactoryModeResDef.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for factory mode resource Ids
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

enum SCR_ID_FM_ENUM
{
    SCR_ID_FM_ROOT = FACTORY_MODE_BASE /* 34000 */ ,
    SCR_ID_FM_VERSION,
    /* Lisen 0921 */
    SCR_ID_FM_VERSION_SUMMARY,
    SCR_ID_FM_RESOURCE_BIN,
    SCR_ID_FM_RESOURCE_AUDIO,
    SCR_ID_FM_RESOURCE_IMAGE,
    SCR_ID_FM_RESOURCE_STR,
    SCR_ID_FM_RESOURCE_FONT,
    SCR_ID_FM_BBCHIP_VER,
    SCR_ID_FM_DSPCODE_VER,
    SCR_ID_FM_DSPATCH_VER,
    SCR_ID_FM_SW_VER,
    SCR_ID_FM_HW_VER,
    SCR_ID_FM_MELODY_VER,
    SCR_ID_FM_ISN,
    SCR_ID_FM_BUILD_TIME,
    SCR_ID_FM_LED,
    SCR_ID_FM_LCD,
    SCR_ID_FM_LCD_AUTO,
    SCR_ID_FM_LCD_R,
    SCR_ID_FM_LCD_G,
    SCR_ID_FM_LCD_B,
    SCR_ID_FM_LCD_W,
    SCR_ID_FM_LCD_CONTRAST,
    SCR_ID_FM_LCD_CONTRAST_MAINLCD,
    SCR_ID_FM_LCD_CONTRAST_SUBLCD,
    SCR_ID_FM_KEYPAD,
    SCR_ID_FM_LOUDSPK,
    SCR_ID_FM_EACHLOOP,
    SCR_ID_FM_VIBRATOR,
    SCR_ID_FM_ADC,
    SCR_ID_FM_RECEIVER,
    SCR_ID_FM_RTC,
    SCR_ID_FM_HEADSET,
    SCR_ID_FM_CHARGER,
    SCR_ID_FM_RINGTONE,
    SCR_ID_FM_AUTO_TEST_ROOT,
    SCR_ID_FM_AUTO_TEST_REPORT,
    SCR_ID_FM_AUTO_TEST_SUMMARY,
    SCR_ID_FM_AUTO_TEST_RESULT,
    SCR_ID_FM_AUTO_TEST_START,
    SCR_ID_FM_MEMORY_CARD,
    SCR_ID_FM_NAND_FLASH,
    SCR_ID_FM_CAMERA,
    SCR_ID_FM_CAMERA_SENSOR_SETTING,
    SCR_ID_FM_CAMERA_ISP_SETTING,
    SCR_ID_FM_SETCAMERAPARA,
    SCR_ID_FM_MTBF,
    SCR_ID_FM_UART,
    SCR_ID_FM_PARALLEL_PEN,
    SCR_ID_FM_N_CROSS_M_PEN,
    SCR_ID_FM_FM_RADIO,
    SCR_ID_FM_FM_RADIO_CHANNEL_TEST,
    /* hongzhe.liu add start */
    SCR_ID_FM_ANALOGTV
    /* hongzhe.liu add end */
};

enum IMG_ID_FM_ENUM
{
    IMG_ID_FM_ROOT = FACTORY_MODE_BASE /* 34000 */ ,
    IMG_ID_FM_VERSION,
    IMG_ID_FM_BBCHIP_VER,
    IMG_ID_FM_DSPCODE_VER,
    IMG_ID_FM_DSPATCH_VER,
    /* Lisen 0921 */
    IMG_ID_FM_SW_SUMMARY,
    IMG_ID_FM_SW_VER,
    IMG_ID_FM_RESOURCE_BIN,
    IMG_ID_FM_RESOURCE_LANGPACK,
    IMG_ID_FM_RESOURCE_CUSTPACK,
    IMG_ID_FM_HW_VER,
    IMG_ID_FM_MELODY_VER,
    IMG_ID_FM_ISN,
    IMG_ID_FM_BUILD_TIME,
    IMG_ID_FM_LED,
    IMG_ID_FM_LCD,
    IMG_ID_FM_LCD_CONTRAST,
    IMG_ID_FM_KEYPAD,
    IMG_ID_FM_LOUDSPK,
    IMG_ID_FM_EACHLOOP,
    IMG_ID_FM_VIBRATOR,
    IMG_ID_FM_ADC,
    IMG_ID_FM_RECEIVER,
    IMG_ID_FM_HEADSET,
    IMG_ID_FM_CHARGER,
    IMG_ID_FM_RINGTONE,
    IMG_ID_FM_RTC,
    IMG_ID_FM_MTBF,

    IMG_ID_FM_AUTO_TEST_ROOT,
    IMG_ID_FM_AUTO_TEST_REPORT,
    IMG_ID_FM_AUTO_TEST_SUMMARY,
    IMG_ID_FM_AUTO_TEST_RESULT,
    IMG_ID_FM_AUTO_TEST_START,
    IMG_ID_FM_MEMORY_CARD,
    IMG_ID_FM_CAMERA,
    IMG_ID_FM_CAMERA_SETTING,
    IMG_ID_FM_NAND_FLASH,
    IMG_ID_FM_LCD_CONTRAST_MAIN,
    IMG_ID_FM_LCD_CONTRAST_SUB,
    IMG_ID_FM_LCD_AUTO,
    IMG_ID_FM_LCD_R,
    IMG_ID_FM_LCD_G,
    IMG_ID_FM_LCD_B,
    IMG_ID_FM_LCD_W,
    /* Lisen 05312005 */
    IMG_ID_FM_LCD_BLACK,

    /* Images */
    IMG_ID_FM_CONTRAST,
    IMG_ID_FM_UART
};

enum STR_ID_FM_ENUM
{
    STR_ID_FM_ROOT = FACTORY_MODE_BASE /* 34000 */ ,
    STR_ID_FM_VERSION,
    STR_ID_FM_BBCHIP_VER,
    STR_ID_FM_DSPCODE_VER,
    STR_ID_FM_DSPATCH_VER,
    /* Lisen 0921 */
    STR_ID_FM_SW_SUMMARY,
    STR_ID_FM_SW_VER,
    STR_ID_FM_RESOURCE_BIN,
    STR_ID_FM_RESOURCE_LANGPACK,
    STR_ID_FM_RESOURCE_CUSTPACK,
    STR_ID_FM_HW_VER,
    STR_ID_FM_MELODY_VER,
    STR_ID_FM_ISN,
    STR_ID_FM_BUILD_TIME,
    STR_ID_FM_LED,
    STR_ID_FM_LCD,
    STR_ID_FM_LCD_CONTRAST,
    STR_ID_FM_KEYPAD,
    STR_ID_FM_LOUDSPK,
    STR_ID_FM_EACHLOOP,
    STR_ID_FM_VIBRATOR,
    STR_ID_FM_ADC,
    STR_ID_FM_RECEIVER,
    STR_ID_FM_HEADSET,
    STR_ID_FM_CHARGER,
    STR_ID_FM_RINGTONE,
    STR_ID_FM_RTC,

    STR_ID_FM_AUTO_TEST_ROOT,
    STR_ID_FM_AUTO_TEST_REPORT,
    //STR_ID_FM_AUTO_TEST_SUMMARY,
    STR_ID_FM_AUTO_TEST_RESULT,
    STR_ID_FM_AUTO_TEST_START,
    STR_ID_FM_AUTO_TEST_PASS,
    STR_ID_FM_AUTO_TEST_FAIL,
    STR_ID_FM_AUTO_TEST_RTC,
    STR_ID_FM_AUTO_TEST_STOP,
    STR_ID_FM_AUTO_TEST_RETEST,
    STR_ID_FM_AUTO_TEST_EXIT,
    STR_ID_FM_AUTO_TEST_ALLDONE,
    STR_ID_FM_AUTO_TEST_ALLPASSED,
    STR_ID_FM_AUTO_TEST_FAILED,
    STR_ID_FM_AUTO_TEST_UNFINISHED,

    STR_ID_FM_AUTOTEST_LED_R,
    STR_ID_FM_AUTOTEST_LED_G,
    STR_ID_FM_AUTOTEST_LED_B,
    STR_ID_FM_AUTOTEST_CLAM,
    //STR_ID_FM_AUTOTEST_SUBLCM,
    STR_ID_FM_AUTOTEST_BACKLIGHT,
    STR_ID_FM_AUTOTEST_RECEIVER,
    STR_ID_FM_AUTOTEST_MIC,
    STR_ID_FM_AUTOTEST_SPEAKER,
    STR_ID_FM_AUTOTEST_HEADSET,
    STR_ID_FM_AUTOTEST_MELODY,
    STR_ID_FM_AUTOTEST_VIB,
    STR_ID_FM_AUTOTEST_NAND,
    STR_ID_FM_AUTOTEST_UART,
    /* Lisen 01262005 */
    STR_ID_FM_AUTOTEST_LEFT_SPEAKER,
    STR_ID_FM_AUTOTEST_RIGHT_SPEAKER,

    STR_ID_FM_MEMORY_CARD,
    STR_ID_FM_CAMERA,
    STR_ID_FM_CAMERA_SENSOR_SETTING,
    STR_ID_FM_CAMERA_ISP_SETTING,
    STR_ID_FM_CAMERA_SAVE_TO_NVRAM,
    STR_ID_FM_CAMERA_RESTORE_DEFAULT,
    STR_ID_FM_CAMERA_SAVE_CONFRIM,
    STR_ID_FM_CAMERA_RESTORE_CONFIRM,
    STR_ID_FM_NAND_FLASH,
    STR_ID_FM_LCD_CONTRAST_MAIN,
    STR_ID_FM_LCD_CONTRAST_SUB,
    STR_ID_FM_LCD_AUTO,
    STR_ID_FM_LCD_R,
    STR_ID_FM_LCD_G,
    STR_ID_FM_LCD_B,
    STR_ID_FM_LCD_W,
    /* Lisen 05312005 */
    STR_ID_FM_LCD_BLACK,

    STR_ID_FM_RTC_NOTIFY,
    STR_ID_FM_MTBF,
    STR_ID_FM_UART,
    STR_ID_FM_PARALLEL_TEST,
    STR_ID_FM_N_CROSS_M_TEST,
    STR_ID_FM_FM_RADIO,
    STR_ID_FM_FM_RADIO_CHANNEL_1,
    STR_ID_FM_FM_RADIO_CHANNEL_2,
    STR_ID_FM_FM_RADIO_CHANNEL_3
};
