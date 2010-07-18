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
/**
 *	Copyright Notice
 *	?2002 - 2003, Pixtel Communications, Inc., 1489 43rd Ave. W.,
 *	Vancouver, B.C. V6M 4K8 Canada. All Rights Reserved.
 *  (It is illegal to remove this copyright notice from this software or any
 *  portion of it)
 */

/**************************************************************

	FILENAME	: Res_MtkApp.c

  	PURPOSE		: Populate Resource for MtkApp

	REMARKS		: nil

	AUTHOR		: Yogesh

	DATE		: August-15-2003

**************************************************************/

#include "MMI_features.h" 
#ifdef __MMI_VOICE_MEMO__

#include "MMIDataType.h"    /* for resource base */

#include "CustResDef.h"         /* for image/audio path */
#include "CustDataProts.h"      /* for resource generator API */
#include "GlobalMenuItems.h"    /* for menu resource */
#include "GlobalDefs.h"             /* for global string */
#include "VoiceMemoResDef.h"
#include "FunAndGamesResDef.h"


void populateVoiceMemoMenu(void)
{

	ADD_APPLICATION_STRING2(VOICE_MEMO_TITLE_TEXT	,"Voice Memo", "Voice Memo String");
	ADD_APPLICATION_STRING2(VOICE_MEMO_LSK_TEXT		,"Ok", "Voice Memo String");
	ADD_APPLICATION_STRING2(VOICE_MEMO_RSK_TEXT		,"Back", "Voice Memo String");
	ADD_APPLICATION_STRING2(VOICE_MEMO_OPTION_TEXT		,"Option", "Voice Memo String");

	ADD_APPLICATION_STRING2(VM_RECORD_TITLE_TEXT			,"Record", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_PLAY_TITLE_TEXT			,"Play", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_APPEND_TITLE_TEXT			,"Append", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_DELETE_TITLE_TEXT			,"Delete", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_DELETE_ALL_TITLE_TEXT			,"Delete All", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_RENAME_TITLE_TEXT			,"Rename", "Voice Memo String");

	ADD_APPLICATION_STRING2(VM_RECORD_LSK_TEXT		,"Pause", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_RECORD_RSK_TEXT		,"Stop", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_RESUME_LSK_TEXT		,"Cont.", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_PLAY_LSK_TEXT,"Pause", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_PLAY_RSK_TEXT,"Stop", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_APPEND_LSK_TEXT,"Append", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_APPEND_RSK_TEXT,"Back", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_DELETE_LSK_TEXT		,"Yes", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_DELETE_RSK_TEXT		,"No", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_DELETE_ALL_LSK_TEXT,"Yes", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_DELETE_ALL_RSK_TEXT,"No", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_RENAME_LSK_TEXT		,"Ok", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_RENAME_RSK_TEXT		,"Back", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_RENAME_OPTION_TEXT		,"Option", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_RENAME_OPTION_SAVE_TEXT		,"Save", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_RENAME_OPTION_INPUT_METHOD_TEXT,"Input Method", "Voice Memo String");

	ADD_APPLICATION_STRING2(VM_DELETE_QUERY_TEXT, "Delete", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_DELETE_ALL_QUERY_TEXT, "Delete all", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_SAVE_QUERY_TEXT, "Save", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_ABORT_QUERY_TEXT, "Abort", "Voice Memo String");

	ADD_APPLICATION_STRING2(VM_NOTICE_ERROR_TEXT, "Error!!", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_NOTICE_WARNING_TEXT, "Warning!!", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_NOTICE_SUCCESS_TEXT, "Success!!", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_DISC_FULL_TEXT, "Memory Full!", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_OPEN_FILE_ERROR_TEXT, "Error!", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_DELETING_TEXT, "Deleting...", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_DELETE_FINISH_TEXT, "Deleted!", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_DEVICE_BUSY_TEXT, "Busy!", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_NO_RECORD_TEXT, "No Record!!", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_RECORDING_TEXT, "Recording...", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_PAUSED_TEXT, "Paused...", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_PLAYING_TEXT, "Playing...", "Voice Memo String");
	ADD_APPLICATION_STRING2(VM_EMPTY_TEXT, "<Empty>", "Voice Memo String");


	ADD_APPLICATION_MENUITEM((MENU3104_VOICE_MEMO,MAIN_MENU_MULTIMEDIA_MENUID,6,
      VM_RECORD_MENUID,			
      VM_PLAY_MENUID	,
      VM_APPEND_MENUID,			
	   VM_RENAME_MENUID,
	   VM_DELETE_MENUID,			
	   VM_DELETE_ALL_MENUID,
		SHOW, SHORTCUTABLE, DISP_LIST,VOICE_MEMO_TITLE_TEXT,IMG_MENU3104_VOICE_MEMO));

	ADD_APPLICATION_MENUITEM((MITEM2022_CM_VOICE_MEMO,MITEM2001_CM_SINGLE_ACTIVE_LSKOPTIONS,5,
      VM_RECORD_MENUID,			
      VM_APPEND_MENUID,			
	   VM_RENAME_MENUID,
	   VM_DELETE_MENUID,			
	   VM_DELETE_ALL_MENUID,
		SHOW, NONMOVEABLE, DISP_LIST,VOICE_MEMO_TITLE_TEXT,0));

	ADD_APPLICATION_MENUITEM((VOICE_MEMO_NO_RECORD_MENUID,0,1,
      VM_RECORD_MENUID,
		SHOW, NONMOVEABLE, DISP_LIST,VOICE_MEMO_TITLE_TEXT,0));

	ADD_APPLICATION_MENUITEM((VOICE_MEMO_FULL_MENUID,0,5,
      VM_PLAY_MENUID	,
      VM_APPEND_MENUID,			
	   VM_RENAME_MENUID,
	   VM_DELETE_MENUID,			
	   VM_DELETE_ALL_MENUID,
		SHOW, NONMOVEABLE, DISP_LIST,VOICE_MEMO_TITLE_TEXT,0));

	ADD_APPLICATION_MENUITEM((VOICE_MEMO_FULL_IN_CALL_MENUID,0,4,
      VM_APPEND_MENUID,			
	   VM_RENAME_MENUID,
	   VM_DELETE_MENUID,			
	   VM_DELETE_ALL_MENUID,
		SHOW, NONMOVEABLE, DISP_LIST,VOICE_MEMO_TITLE_TEXT,0));

	ADD_APPLICATION_MENUITEM((VM_RECORD_MENUID,MENU3104_VOICE_MEMO,0,
		SHOW, NONMOVEABLE, DISP_LIST,VM_RECORD_TITLE_TEXT,0));

	ADD_APPLICATION_MENUITEM((VM_PLAY_MENUID,MENU3104_VOICE_MEMO,0,
		SHOW, NONMOVEABLE, DISP_LIST,VM_PLAY_TITLE_TEXT,0));
	ADD_APPLICATION_MENUITEM((VM_APPEND_MENUID,MENU3104_VOICE_MEMO,0,
		SHOW, NONMOVEABLE, DISP_LIST,VM_APPEND_TITLE_TEXT,0));
	ADD_APPLICATION_MENUITEM((VM_DELETE_MENUID,MENU3104_VOICE_MEMO,0,
		SHOW, NONMOVEABLE, DISP_LIST,VM_DELETE_TITLE_TEXT,0));
	ADD_APPLICATION_MENUITEM((VM_DELETE_ALL_MENUID,MENU3104_VOICE_MEMO,0,
		SHOW, NONMOVEABLE, DISP_LIST,VM_DELETE_ALL_TITLE_TEXT,0));
	ADD_APPLICATION_MENUITEM((VM_RENAME_MENUID,MENU3104_VOICE_MEMO,0,
		SHOW, NONMOVEABLE, DISP_LIST,VM_RENAME_TITLE_TEXT,0));

	ADD_APPLICATION_MENUITEM((VM_RENAME_OPTION_MENUID,
							0,  // No parent 
							2,  // Two children
							VM_RENAME_OPTION_SAVE_MENUID,
							VM_RENAME_OPTION_INPUT_METHOD_MENUID,
							SHOW, NONMOVEABLE, DISP_LIST,
							VOICE_MEMO_OPTION_TEXT, 0));
	ADD_APPLICATION_MENUITEM((VM_RENAME_OPTION_SAVE_MENUID,
							VM_RENAME_OPTION_MENUID, 0, 
							SHOW, NONMOVEABLE, DISP_LIST,
							VM_RENAME_OPTION_SAVE_TEXT, VM_RENAME_OPTION_SAVE_ICON));
	ADD_APPLICATION_MENUITEM((VM_RENAME_OPTION_INPUT_METHOD_MENUID,
							VM_RENAME_OPTION_MENUID, 0, 
							SHOW, NONMOVEABLE, DISP_LIST,
							VM_RENAME_OPTION_INPUT_METHOD_TEXT, VM_RENAME_OPTION_INPUT_METHOD_ICON));

//MTK Leo add, for VoiceMemo images
	ADD_APPLICATION_IMAGE2(VM_RECORDING_IMG,CUST_IMG_PATH"\\\\MainLCD\\\\Active\\\\Recorder\\\\RECORD.GIF","VM Recording");
	ADD_APPLICATION_IMAGE2(VM_RECORDING_PAUSED_IMG,CUST_IMG_PATH"\\\\MainLCD\\\\Active\\\\Recorder\\\\RECORD_P.GIF","VM Record Pause");
	ADD_APPLICATION_IMAGE2(VM_PLAYING_IMG,CUST_IMG_PATH"\\\\MainLCD\\\\Active\\\\Recorder\\\\PLAY.GIF","VM Playing");
	ADD_APPLICATION_IMAGE2(VM_PLAYING_PAUSED_IMG,CUST_IMG_PATH"\\\\MainLCD\\\\Active\\\\Recorder\\\\PLAY_P.GIF","VM Play Pause");
//MTK Leo end
}
#endif /* __MMI_VOICE_MEMO__ */

