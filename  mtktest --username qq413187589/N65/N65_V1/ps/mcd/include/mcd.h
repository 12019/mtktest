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
 *
 * Filename:
 * ---------
 *	mcd.
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   MediaTek Coding/Decoding engine header file. (2002.11.11)
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
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

#ifndef _MCD_H
#define _MCD_H

#define MCD_ERROR ((kal_uint32)-1)
#define MCD_INVALID_STRUCT_ID ((kal_uint16)-1)

#ifdef MCD_DLL
	#define MCDDLL_API typedef __declspec(dllimport)
	#define _DECLARE_(f) (* f##_func)
#elif  defined(MCD_DLL_EXPORT)
	#define MCDDLL_API __declspec(dllexport)
	#define _DECLARE_(f) f
	#define MCD_ENABLE_QUERY
	#define kal_trace
	//#define MCD_OUTSIDE_TABLE
#else
	#define MCDDLL_API extern
	#define _DECLARE_(f) f
#endif

#define MCD_L3_MESSAGE_ERROR_HANDLE

MCDDLL_API void _DECLARE_(mcd_init)(void);
MCDDLL_API kal_uint32 _DECLARE_(mcd_pseudo_alloc)(kal_uint16 msgid,kal_uint32 *dest,kal_uint32 dest_size);
MCDDLL_API kal_uint32 _DECLARE_(mcd_pack)(kal_uint16 msgid,kal_uint32 *dest,kal_uint32 dest_size,kal_uint8 *src);
MCDDLL_API kal_uint32 _DECLARE_(mcd_unpack)(kal_uint16 msgid,kal_uint32 *dest,kal_uint32 dest_size,kal_uint32 *src,kal_uint32 total_bits);

MCDDLL_API kal_uint16 _DECLARE_(mcd_get_structure_id)(const kal_uint8 * struct_name);
MCDDLL_API const kal_uint8 * _DECLARE_(mcd_get_structure_name)(kal_uint16 structid);
MCDDLL_API kal_uint16 _DECLARE_(mcd_find_structure_id)(kal_uint32 msg_id,kal_uint8 *src,kal_uint32 total_bits);

#undef DECLARE

typedef enum
{
	MCD_UNKNOWN_ERROR=1, 
	MCD_COMPREHENSION_ERROR,
	MCD_UNKNOWN_OPCODE_ERROR,
	MCD_UNPACK_NEED_MORE_BITSTREAM_ERROR,
	MCD_UNPACK_USE_THE_SAME_ADDRESS_ERROR,
	MCD_PACK_USE_THE_SAME_ADDRESS_ERROR,
	MCD_BUFFER_MUST_START_AT_4_ALIGNMENT_ERROR,
	MCD_REPEAT_IEI_UNKNOWN_ERROR,
	MCD_ALLOCATE_SEGMENT_OVERFLOW_ERROR,
	MCD_ALLOCATE_MEMORY_NOT_ENOUGH_ERROR,
	MCD_LOST_ENDIF_ERROR,
	MCD_LOST_ENDBERIF_ERROR,
	MCD_FREE_SEGMENT_ERROR,
	MCD_PACK_BUFFER_OVERFLOW_ERROR,
	MCD_RESIZE_MEMORY_NOT_ENOUGH_ERROR,
	MCD_ILLEGAL_SEGMENT_ADDRESS_ERROR,
	MCD_NULL_POINTER_ASSIGNMENT_ERROR, 
	MCD_POINTER_OUT_OF_RANGE_ERROR,
	MCD_CANT_FIND_THE_END_OF_INFINITE_MARK
} mcd_error_enum;


typedef struct
{
	kal_uint8 errorno; // mcd_error_enum
	kal_uint16 op_start;
	kal_uint16 op_pos;
} mcd_error_struct;

/* how many pointers are contained in each structure? 
   (include recursive structure reference)*/

#if defined(MCD_OUTSIDE_TABLE)
#include <stdlib.h>
kal_uint32 MCD_MAX_IEI_LIST;
kal_uint32 MCD_TABLE_SIZE;
kal_uint32 MCD_TOTAL_STRUCTS;
kal_uint32 MCD_MSR_MSG_RULE_SIZE;
kal_uint32 MCD_MSR_GSM0407_SIZE;
kal_uint32 MCD_MSR_GSM0407_PLEN_SIZE;
kal_uint32 MCD_MSR_GSM0407_XTID_SIZE;
kal_uint32 MCD_MSR_ABIS_SIZE;
kal_uint32 MCD_MSR_GSM0808_SIZE;
kal_uint32 MCD_MSR_GSM0816_SIZE;
kal_uint32 MCD_MSR_GSM0460_SIZE;
void kal_release_buffer(void*);
#else

#define SASKEN_STRUCT_START  MCD_TABLE_SIZE + 10000
#define UB_PEER_STRUCT_START MCD_TABLE_SIZE + 20000
#define UB_DB_STRUCT_START MCD_TABLE_SIZE + 30000
#define UB_EXTRA_STRUCT_START MCD_TABLE_SIZE + 40000
#define MA_STRUCT_START MCD_TABLE_SIZE + 50000

/*MTK:BEGIN:generate_mcd_defination*/

#define MCD_MAX_IEI_LIST  24 
#define MCD_TOTAL_STRUCTS 318
#define MCD_TABLE_SIZE    7677
#define MCD_MSR_MSG_RULE_SIZE 14
#define MCD_MSR_GSM0407_SIZE  		113 
#define MCD_MSR_GSM0407_PLEN_SIZE  	0 
#define MCD_MSR_GSM0407_XTID_SIZE  	0 
#define MCD_MSR_ABIS_SIZE  			0 
#define MCD_MSR_GSM0808_SIZE  		0 
#define MCD_MSR_GSM0816_SIZE  		0 
#define MCD_MSR_GSM0460_SIZE  		0 

#define MCD_ADDRESSSTRING 4204
#define MCD_ALERTINGPATTERN 4068
#define MCD_BASICSERVICECODE 4130
#define MCD_BASICSERVICECODESEQ 4163
#define MCD_BASICSERVICEGROUPLIST 4196
#define MCD_BEARERSERVICECODE 4118
#define MCD_CCBS_FEATURE 4304
#define MCD_CCBS_FEATURELIST 4347
#define MCD_CCBS_INDEX 4040
#define MCD_CUG_INDEX 4708
#define MCD_CALLBARRINGFEATURE 4530
#define MCD_CALLBARRINGFEATURELIST 4547
#define MCD_CALLBARRINGINFO 4555
#define MCD_CALLDEFLECTION 4719
#define MCD_CALLDEFLECTIONARG 5177
#define MCD_CHARGINGINFORMATION 4767
#define MCD_CLIRESTRICTIONOPTION 4030
#define MCD_COMPONENT 5324
#define MCD_COMPONENTPORTION 5377
#define MCD_E1 4753
#define MCD_E2 4755
#define MCD_E3 4757
#define MCD_E4 4759
#define MCD_E5 4761
#define MCD_E6 4763
#define MCD_E7 4765
#define MCD_ECT_CALLSTATE 4867
#define MCD_ECT_INDICATOR 5010
#define MCD_EMLPP_PRIORITY 4048
#define MCD_ERASECC_ENTRYARG 4074
#define MCD_ERASECC_ENTRYRES 4096
#define MCD_FORWARDCUG_INFOARG 4724
#define MCD_FORWARDCHARGEADVICEARG 4840
#define MCD_FORWARDINGFEATURE 4229
#define MCD_FORWARDINGFEATURELIST 4296
#define MCD_FORWARDINGINFO 4565
#define MCD_FORWARDINGOPTIONS 4221
#define MCD_GENERALPROBLEM 5199
#define MCD_GENERICSERVICEINFO 4355
#define MCD_GUIDANCEINFO 4700
#define MCD_ISDN_ADDRESSSTRING 4210
#define MCD_ISDN_SUBADDRESSSTRING 4215
#define MCD_INTERROGATESS_RES 4419
#define MCD_INVOKE 5209
#define MCD_INVOKEIDTYPE 5207
#define MCD_INVOKEPROBLEM 5201
#define MCD_NAME 4897
#define MCD_NAMEINDICATOR 4936
#define MCD_NAMESET 4869
#define MCD_NOREPLYCONDITIONTIME 4227
#define MCD_NOTIFYSS_ARG 5030
#define MCD_OPERATIONCODE 4710
#define MCD_OVERRIDECATEGORY 4032
#define MCD_PASSWORD 4702
#define MCD_RDN 4971
#define MCD_REGISTERCC_ENTRYRES 5145
#define MCD_REGISTERSS_ARG 4462
#define MCD_REJECT 5269
#define MCD_REMOTEPARTYNUMBER 4949
#define MCD_RETURNERROR 5253
#define MCD_RETURNERRORPROBLEM 5205
#define MCD_RETURNRESULT 5235
#define MCD_RETURNRESULTPROBLEM 5203
#define MCD_SS_CODE 4034
#define MCD_SS_DATA 4598
#define MCD_SS_FORBS_CODE 4520
#define MCD_SS_INFO 4635
#define MCD_SS_NOTIFICATION 4861
#define MCD_SS_STATUS 4042
#define MCD_SS_SUBSCRIPTIONOPTION 4575
#define MCD_TELESERVICECODE 4124
#define MCD_USSDIA5_STRING 4062
#define MCD_USSD_ARG 4668
#define MCD_USSD_DATACODINGSCHEME 4050
#define MCD_USSD_RES 4691
#define MCD_USSD_STRING 4056
#define MCD_UUS_SERVICE 5158
#define MCD_USERUSERSERVICEARG 5160
#define MCD_ACTIVATE_PDP_CONTEXT_ACC_STRUCT 6621
#define MCD_ACTIVATE_PDP_CONTEXT_REJ_STRUCT 6697
#define MCD_ACTIVATE_PDP_CONTEXT_REQ_STRUCT 6556
#define MCD_ACTIVATE_SEC_PDP_CONTEXT_ACC_STRUCT 6796
#define MCD_ACTIVATE_SEC_PDP_CONTEXT_REJ_STRUCT 6857
#define MCD_ACTIVATE_SEC_PDP_CONTEXT_REQ_STRUCT 6733
#define MCD_ATTACH_RESULT_STRUCT 5414
#define MCD_ATTACH_TYPE_STRUCT 5399
#define MCD_CC_PEER_ALERT_PATTERN_STRUCT 316
#define MCD_CC_PEER_ALLOWED_ACTIONS_STRUCT 233
#define MCD_CC_PEER_AUX_STATE_STRUCT 323
#define MCD_CC_PEER_BEARER_CAPABILITY_FOR_SETUP_MSG_STRUCT 285
#define MCD_CC_PEER_BEARER_CAPABILITY_STRUCT 278
#define MCD_CC_PEER_BUF_HDR_STRUCT 114
#define MCD_CC_PEER_CALL_CONFIRMED_STRUCT 679
#define MCD_CC_PEER_CALL_PROCEEDING_STRUCT 762
#define MCD_CC_PEER_CALL_STATE_STRUCT 189
#define MCD_CC_PEER_CALLED_NUM_STRUCT 302
#define MCD_CC_PEER_CALLING_NUM_STRUCT 295
#define MCD_CC_PEER_CAUSE_OF_NO_CLI_STRUCT 259
#define MCD_CC_PEER_CAUSE_STRUCT 164
#define MCD_CC_PEER_CC_CAPABILITY_STRUCT 174
#define MCD_CC_PEER_CC_ESTABLISHMENT_CNF_MS_NW_STRUCT 1167
#define MCD_CC_PEER_CC_ESTABLISHMENT_NW_MS_STRUCT 1121
#define MCD_CC_PEER_CONGESTION_CONTROL_STRUCT 2401
#define MCD_CC_PEER_CONGESTION_LEVEL_STRUCT 171
#define MCD_CC_PEER_CONNECT_ACKNOWLEDGE_STRUCT 999
#define MCD_CC_PEER_CONNECT_MS_NW_STRUCT 928
#define MCD_CC_PEER_CONNECT_NW_MS_STRUCT 857
#define MCD_CC_PEER_CONNECTED_NUMBER_STRUCT 219
#define MCD_CC_PEER_DISCONNECT_MS_NW_STRUCT 1884
#define MCD_CC_PEER_DISCONNECT_NW_MS_STRUCT 1822
#define MCD_CC_PEER_EMERGENCY_SETUP_STRUCT 1008
#define MCD_CC_PEER_FACILITY_MS_NW_STRUCT 2566
#define MCD_CC_PEER_FACILITY_NW_MS_STRUCT 2554
#define MCD_CC_PEER_FACILITY_STRUCT 123
#define MCD_CC_PEER_HIGH_LAYER_COMPATIBILITY_STRUCT 271
#define MCD_CC_PEER_HOLD_ACKNOWLEDGE_NW_MS_STRUCT 2350
#define MCD_CC_PEER_HOLD_MS_NW_STRUCT 2341
#define MCD_CC_PEER_HOLD_REJECT_NW_MS_STRUCT 2359
#define MCD_CC_PEER_KEYPAD_STRUCT 130
#define MCD_CC_PEER_LOW_LAYER_COMPATIBILITY_STRUCT 264
#define MCD_CC_PEER_MODIFY_COMPLETE_STRUCT 2228
#define MCD_CC_PEER_MODIFY_REJECT_STRUCT 2276
#define MCD_CC_PEER_MODIFY_STRUCT 2170
#define MCD_CC_PEER_MS_NW_ALERTING_STRUCT 632
#define MCD_CC_PEER_NETWORK_CC_CAPABILITY_STRUCT 252
#define MCD_CC_PEER_NOTIFICATION_IND_STRUCT 135
#define MCD_CC_PEER_NOTIFY_STRUCT 2429
#define MCD_CC_PEER_NW_MS_ALERTING_STRUCT 585
#define MCD_CC_PEER_PRIORITY_STRUCT 214
#define MCD_CC_PEER_PROGRESS_IND_STRUCT 199
#define MCD_CC_PEER_PROGRESS_STRUCT 1055
#define MCD_CC_PEER_RECALL_NW_MS_STRUCT 1226
#define MCD_CC_PEER_RECALL_TYPE_STRUCT 194
#define MCD_CC_PEER_REDIRECTING_NUM_STRUCT 309
#define MCD_CC_PEER_RELEASE_COMPLETE_MS_NW_STRUCT 2111
#define MCD_CC_PEER_RELEASE_COMPLETE_NW_MS_STRUCT 2064
#define MCD_CC_PEER_RELEASE_MS_NW_STRUCT 1993
#define MCD_CC_PEER_RELEASE_NW_MS_STRUCT 1934
#define MCD_CC_PEER_REPEAT_IND_STRUCT 161
#define MCD_CC_PEER_RETRIEVE_ACKNOWLEDGE_NW_MS_STRUCT 2380
#define MCD_CC_PEER_RETRIEVE_MS_NW_STRUCT 2371
#define MCD_CC_PEER_RETRIEVE_REJECT_NW_MS_STRUCT 2389
#define MCD_CC_PEER_SERVICE_CATEGORY_STRUCT 245
#define MCD_CC_PEER_SETUP_CONTAINER_STRUCT 1081
#define MCD_CC_PEER_SETUP_FROM_SETUP_CONTAINER_STRUCT 334
#define MCD_CC_PEER_SETUP_MS_NW_STRUCT 1563
#define MCD_CC_PEER_SETUP_NW_MS_STRUCT 1264
#define MCD_CC_PEER_SIGNAL_STRUCT 292
#define MCD_CC_PEER_SS_VERSION_IND_STRUCT 154
#define MCD_CC_PEER_START_CC_STRUCT 1241
#define MCD_CC_PEER_START_DTMF_ACKNOWLEDGE_STRUCT 2519
#define MCD_CC_PEER_START_DTMF_REJECT_STRUCT 2542
#define MCD_CC_PEER_START_DTMF_STRUCT 2478
#define MCD_CC_PEER_STATUS_ENQ_STRUCT 2469
#define MCD_CC_PEER_STATUS_STRUCT 2441
#define MCD_CC_PEER_STOP_DTMF_ACKNOWLEDGE_STRUCT 2510
#define MCD_CC_PEER_STOP_DTMF_STRUCT 2501
#define MCD_CC_PEER_STREAM_IDENTIFIER_STRUCT 240
#define MCD_CC_PEER_SUB_ADDR_STRUCT 226
#define MCD_CC_PEER_USER2USER_FOR_SETUP_MSG_STRUCT 147
#define MCD_CC_PEER_USER2USER_STRUCT 140
#define MCD_CC_PEER_USER_USER_STRUCT 2317
#define MCD_CIPHER_KEY_SEQ_NUM_STRUCT 5404
#define MCD_CISS_PEER_BUFF_HEADER_STRUCT 3910
#define MCD_CISS_PEER_CAUSE_STRUCT 3896
#define MCD_CISS_PEER_FACILITY_IE_STRUCT 3889
#define MCD_CISS_PEER_FACILITY_STRUCT 3919
#define MCD_CISS_PEER_REGISTER_MS_NW_STRUCT 3956
#define MCD_CISS_PEER_REGISTER_NW_MS_STRUCT 3932
#define MCD_CISS_PEER_RELEASE_COMPLETE_STRUCT 3993
#define MCD_CISS_PEER_SS_VERSION_IND_STRUCT 3903
#define MCD_CONCISE_QOS_STRUCT 44
#define MCD_CS_UPDATE_TYPE_STRUCT 3438
#define MCD_DATA_LIST 3323
#define MCD_DEACTIVATE_PDP_CONTEXT_ACC_STRUCT 7340
#define MCD_DEACTIVATE_PDP_CONTEXT_REQ_STRUCT 7291
#define MCD_DETACH_TYPE_STRUCT 5443
#define MCD_FORCE_TO_STANDBY_STRUCT 5419
#define MCD_FRMR_STRUCT 7567
#define MCD_GMM_PEER_ATTACH_ACC_STRUCT 5551
#define MCD_GMM_PEER_ATTACH_COM_STRUCT 5688
#define MCD_GMM_PEER_ATTACH_REJ_STRUCT 5695
#define MCD_GMM_PEER_ATTACH_REQ_STRUCT 5470
#define MCD_GMM_PEER_AUTH_CIPHER_FAILURE_STRUCT 5977
#define MCD_GMM_PEER_AUTH_CIPHER_REJ_STRUCT 6003
#define MCD_GMM_PEER_AUTH_CIPHER_REQ_STRUCT 5858
#define MCD_GMM_PEER_AUTH_CIPHER_RSP_STRUCT 5923
#define MCD_GMM_PEER_DETACH_ACC_MSTON_STRUCT 5792
#define MCD_GMM_PEER_DETACH_ACC_NTOMS_STRUCT 5799
#define MCD_GMM_PEER_DETACH_REQ_MSTON_STRUCT 5747
#define MCD_GMM_PEER_DETACH_REQ_NTOMS_STRUCT 5719
#define MCD_GMM_PEER_HDR_STRUCT 5458
#define MCD_GMM_PEER_IDENTITY_REQ_STRUCT 6010
#define MCD_GMM_PEER_IDENTITY_RSP_STRUCT 6025
#define MCD_GMM_PEER_INFO_STRUCT 6370
#define MCD_GMM_PEER_PTMSI_REALLOC_CMD_STRUCT 5812
#define MCD_GMM_PEER_PTMSI_REALLOC_COM_STRUCT 5851
#define MCD_GMM_PEER_RAU_ACC_STRUCT 6161
#define MCD_GMM_PEER_RAU_COM_STRUCT 6307
#define MCD_GMM_PEER_RAU_REJ_STRUCT 6331
#define MCD_GMM_PEER_RAU_REQ_STRUCT 6038
#define MCD_GMM_PEER_SERVICE_ACC_STRUCT 6501
#define MCD_GMM_PEER_SERVICE_REJ_STRUCT 6508
#define MCD_GMM_PEER_SERVICE_REQ_STRUCT 6463
#define MCD_GMM_PEER_STATUS_STRUCT 6361
#define MCD_I_CONTROL_FIELD_NO_SACK_STRUCT 7495
#define MCD_IDENTITY_TYPE_STRUCT 3292
#define MCD_IMEISV_STRUCT 0
#define MCD_L0_XID_STRUCT 7586
#define MCD_L1_XID_STRUCT 7593
#define MCD_L2_XID_STRUCT 7602
#define MCD_L4_ADDR_BCD_STRUCT 96
#define MCD_L4_NAME_STRUCT 104
#define MCD_L4_XID_STRUCT 7613
#define MCD_L4CSAT_CLOSE_CHANNEL_IND_PEER_STRUCT 3240
#define MCD_L4CSAT_OPEN_CHANNEL_IND_PEER_STRUCT 3229
#define MCD_L4CSAT_RECV_DATA_IND_PEER_STRUCT 3262
#define MCD_L4CSAT_SEND_DATA_IND_PEER_STRUCT 3251
#define MCD_LAI_STRUCT 34
#define MCD_LINKED_TI_STRUCT 6534
#define MCD_LLC_XID_PARAM_STRUCT 7632
#define MCD_MM_PEER_ABORT_STRUCT 3623
#define MCD_MM_PEER_AUTH_FAIL_STRUCT 3525
#define MCD_MM_PEER_AUTHENTICATION_REJ_STRUCT 3457
#define MCD_MM_PEER_AUTHENTICATION_REQ_STRUCT 3464
#define MCD_MM_PEER_AUTHENTICATION_RSP_STRUCT 3499
#define MCD_MM_PEER_CM_REEST_REQ_STRUCT 3551
#define MCD_MM_PEER_CM_SERVICE_ABORT_STRUCT 3616
#define MCD_MM_PEER_CM_SERVICE_ACCEPT_STRUCT 3589
#define MCD_MM_PEER_CM_SERVICE_PROMPT_STRUCT 3596
#define MCD_MM_PEER_CM_SERVICE_REJECT_STRUCT 3607
#define MCD_MM_PEER_CM_SERVICE_REQ_STRUCT 3632
#define MCD_MM_PEER_HDR_STRUCT 3273
#define MCD_MM_PEER_IDENTITY_REQ_STRUCT 3670
#define MCD_MM_PEER_IDENTITY_RSP_STRUCT 3683
#define MCD_MM_PEER_IMSI_DETACH_IND_STRUCT 3696
#define MCD_MM_PEER_INFORMATION_STRUCT 3345
#define MCD_MM_PEER_LU_ACC_STRUCT 3777
#define MCD_MM_PEER_LU_REJ_STRUCT 3841
#define MCD_MM_PEER_LU_REQ_STRUCT 3735
#define MCD_MM_PEER_NULL_STRUCT 3859
#define MCD_MM_PEER_PAGING_RSP_STRUCT 3866
#define MCD_MM_PEER_STATUS_STRUCT 3850
#define MCD_MM_PEER_TMSI_REALLOC_CMD_STRUCT 3711
#define MCD_MM_PEER_TMSI_REALLOC_COM_STRUCT 3728
#define MCD_MODIFY_PDP_CONTEXT_MS_ACC_STRUCT 7135
#define MCD_MODIFY_PDP_CONTEXT_MS_REQ_STRUCT 7060
#define MCD_MODIFY_PDP_CONTEXT_NW_ACC_STRUCT 7169
#define MCD_MODIFY_PDP_CONTEXT_NW_REQ_STRUCT 6984
#define MCD_MODIFY_PDP_CONTEXT_REJ_STRUCT 7255
#define MCD_NPDU_LIST_ENTRY_STRUCT 5429
#define MCD_NPDU_LIST_STRUCT 5434
#define MCD_NW_TIME_ZONE_TIME_STRUCT 3330
#define MCD_P_TMSI_SIGN_STRUCT 5391
#define MCD_PD_AND_SAPI_STRUCT 3445
#define MCD_PLMN_ID_RAT_STRUCT 27
#define MCD_PLMN_ID_STRUCT 14
#define MCD_PROPOSE_COMP_ENTT_STRUCT 7393
#define MCD_PRORITY_STRUCT 3452
#define MCD_PTMSI_STRUCT 3297
#define MCD_QOS_STRUCT 53
#define MCD_RADIO_PRIORITY_STRUCT 5424
#define MCD_RAI_STRUCT 3311
#define MCD_REQUEST_PDP_CONTEXT_ACTIVATION_REJ_STRUCT 6948
#define MCD_REQUEST_PDP_CONTEXT_ACTIVATION_STRUCT 6893
#define MCD_REUSE_COMP_ENTT_STRUCT 7402
#define MCD_S_CONTROL_FIELD_STRUCT 7518
#define MCD_SAT_ADDR_STRUCT 3080
#define MCD_SAT_CLOSE_CHANNEL_IND_PEER_STRUCT 3183
#define MCD_SAT_DSPL_TEXT_IND_PEER_STRUCT 2867
#define MCD_SAT_GET_INKEY_IND_PEER_STRUCT 2876
#define MCD_SAT_GET_INKEY_RES_PEER_STRUCT 2885
#define MCD_SAT_GET_INPUT_IND_PEER_STRUCT 2894
#define MCD_SAT_GET_INPUT_RES_PEER_STRUCT 2911
#define MCD_SAT_LAUNCH_BROWSER_IND_PEER_STRUCT 3130
#define MCD_SAT_MMI_INFO_IND_PEER_STRUCT 3069
#define MCD_SAT_OPEN_CSD_CHANNEL_IND_PEER_STRUCT 3172
#define MCD_SAT_OPEN_GPRS_CHANNEL_IND_PEER_STRUCT 3161
#define MCD_SAT_PLAY_TONE_IND_PEER_STRUCT 2978
#define MCD_SAT_RECV_DATA_IND_PEER_STRUCT 3211
#define MCD_SAT_RECV_DATA_RES_PEER_STRUCT 3222
#define MCD_SAT_RUN_AT_COMMAND_IND_PEER_STRUCT 3096
#define MCD_SAT_SELECT_ITEM_IND_PEER_STRUCT 2949
#define MCD_SAT_SEND_DATA_IND_PEER_STRUCT 3194
#define MCD_SAT_SEND_DTMF_IND_PEER_STRUCT 3113
#define MCD_SAT_SEND_SMS_IND_PEER_STRUCT 3016
#define MCD_SAT_SEND_SS_IND_PEER_STRUCT 3033
#define MCD_SAT_SEND_USSD_IND_PEER_STRUCT 3050
#define MCD_SAT_SETUP_CALL_IND_PEER_STRUCT 2989
#define MCD_SAT_SETUP_IDLE_DSPL_IND_PEER_STRUCT 3087
#define MCD_SAT_SETUP_MENU_IND_PEER_STRUCT 2920
#define MCD_SERVICE_TYPE_STRUCT 5465
#define MCD_SM_MSG_HEADER_STRUCT 6517
#define MCD_SM_STATUS_STRUCT 7374
#define MCD_SMS_CP_ACK_STRUCT 2605
#define MCD_SMS_CP_DATA_STRUCT 2592
#define MCD_SMS_CP_ERROR_STRUCT 2612
#define MCD_SMS_RP_ACK_STRUCT 2678
#define MCD_SMS_RP_ERROR_STRUCT 2702
#define MCD_SMS_RP_MO_DATA_STRUCT 2646
#define MCD_SMS_RP_MT_DATA_STRUCT 2621
#define MCD_SMS_RP_SMMA_STRUCT 2671
#define MCD_SMSAL_COMMAND_MSG_STRUCT 2813
#define MCD_SMSAL_DELIVER_MSG_STRUCT 2755
#define MCD_SMSAL_SEND_MSG_REQ_STRUCT 2831
#define MCD_SMSAL_STATUS_REPORT_MSG_STRUCT 2781
#define MCD_SMSAL_SUBMIT_MSG_STRUCT 2732
#define MCD_SND_XID_BLOCK_STRUCT 7407
#define MCD_SND_XID_PEER_MSG_STRUCT 7444
#define MCD_TEARDOWN_STRUCT 6551
#define MCD_TIMER_2_STRUCT 3285
#define MCD_TIMER_STRUCT 3280
#define MCD_TMSI_STATUS_STRUCT 5409
#define MCD_U_CONTROL_FIELD_STRUCT 7556
#define MCD_UEM_GREETING_TEXT_STRUCT 2860
#define MCD_UI_CONTROL_FIELD_STRUCT 7537
#define MCD_UPDATE_RESULT_STRUCT 5453
#define MCD_UPDATE_TYPE_STRUCT 5448


#ifdef GEN_FOR_PC
typedef enum {
	STRUCT_ID_ADDRESSSTRING = 4204,
	STRUCT_ID_ALERTINGPATTERN = 4068,
	STRUCT_ID_BASICSERVICECODE = 4130,
	STRUCT_ID_BASICSERVICECODESEQ = 4163,
	STRUCT_ID_BASICSERVICEGROUPLIST = 4196,
	STRUCT_ID_BEARERSERVICECODE = 4118,
	STRUCT_ID_CCBS_FEATURE = 4304,
	STRUCT_ID_CCBS_FEATURELIST = 4347,
	STRUCT_ID_CCBS_INDEX = 4040,
	STRUCT_ID_CUG_INDEX = 4708,
	STRUCT_ID_CALLBARRINGFEATURE = 4530,
	STRUCT_ID_CALLBARRINGFEATURELIST = 4547,
	STRUCT_ID_CALLBARRINGINFO = 4555,
	STRUCT_ID_CALLDEFLECTION = 4719,
	STRUCT_ID_CALLDEFLECTIONARG = 5177,
	STRUCT_ID_CHARGINGINFORMATION = 4767,
	STRUCT_ID_CLIRESTRICTIONOPTION = 4030,
	STRUCT_ID_COMPONENT = 5324,
	STRUCT_ID_COMPONENTPORTION = 5377,
	STRUCT_ID_E1 = 4753,
	STRUCT_ID_E2 = 4755,
	STRUCT_ID_E3 = 4757,
	STRUCT_ID_E4 = 4759,
	STRUCT_ID_E5 = 4761,
	STRUCT_ID_E6 = 4763,
	STRUCT_ID_E7 = 4765,
	STRUCT_ID_ECT_CALLSTATE = 4867,
	STRUCT_ID_ECT_INDICATOR = 5010,
	STRUCT_ID_EMLPP_PRIORITY = 4048,
	STRUCT_ID_ERASECC_ENTRYARG = 4074,
	STRUCT_ID_ERASECC_ENTRYRES = 4096,
	STRUCT_ID_FORWARDCUG_INFOARG = 4724,
	STRUCT_ID_FORWARDCHARGEADVICEARG = 4840,
	STRUCT_ID_FORWARDINGFEATURE = 4229,
	STRUCT_ID_FORWARDINGFEATURELIST = 4296,
	STRUCT_ID_FORWARDINGINFO = 4565,
	STRUCT_ID_FORWARDINGOPTIONS = 4221,
	STRUCT_ID_GENERALPROBLEM = 5199,
	STRUCT_ID_GENERICSERVICEINFO = 4355,
	STRUCT_ID_GUIDANCEINFO = 4700,
	STRUCT_ID_ISDN_ADDRESSSTRING = 4210,
	STRUCT_ID_ISDN_SUBADDRESSSTRING = 4215,
	STRUCT_ID_INTERROGATESS_RES = 4419,
	STRUCT_ID_INVOKE = 5209,
	STRUCT_ID_INVOKEIDTYPE = 5207,
	STRUCT_ID_INVOKEPROBLEM = 5201,
	STRUCT_ID_NAME = 4897,
	STRUCT_ID_NAMEINDICATOR = 4936,
	STRUCT_ID_NAMESET = 4869,
	STRUCT_ID_NOREPLYCONDITIONTIME = 4227,
	STRUCT_ID_NOTIFYSS_ARG = 5030,
	STRUCT_ID_OPERATIONCODE = 4710,
	STRUCT_ID_OVERRIDECATEGORY = 4032,
	STRUCT_ID_PASSWORD = 4702,
	STRUCT_ID_RDN = 4971,
	STRUCT_ID_REGISTERCC_ENTRYRES = 5145,
	STRUCT_ID_REGISTERSS_ARG = 4462,
	STRUCT_ID_REJECT = 5269,
	STRUCT_ID_REMOTEPARTYNUMBER = 4949,
	STRUCT_ID_RETURNERROR = 5253,
	STRUCT_ID_RETURNERRORPROBLEM = 5205,
	STRUCT_ID_RETURNRESULT = 5235,
	STRUCT_ID_RETURNRESULTPROBLEM = 5203,
	STRUCT_ID_SS_CODE = 4034,
	STRUCT_ID_SS_DATA = 4598,
	STRUCT_ID_SS_FORBS_CODE = 4520,
	STRUCT_ID_SS_INFO = 4635,
	STRUCT_ID_SS_NOTIFICATION = 4861,
	STRUCT_ID_SS_STATUS = 4042,
	STRUCT_ID_SS_SUBSCRIPTIONOPTION = 4575,
	STRUCT_ID_TELESERVICECODE = 4124,
	STRUCT_ID_USSDIA5_STRING = 4062,
	STRUCT_ID_USSD_ARG = 4668,
	STRUCT_ID_USSD_DATACODINGSCHEME = 4050,
	STRUCT_ID_USSD_RES = 4691,
	STRUCT_ID_USSD_STRING = 4056,
	STRUCT_ID_UUS_SERVICE = 5158,
	STRUCT_ID_USERUSERSERVICEARG = 5160,
	STRUCT_ID_ACTIVATE_PDP_CONTEXT_ACC_STRUCT = 6621,
	STRUCT_ID_ACTIVATE_PDP_CONTEXT_REJ_STRUCT = 6697,
	STRUCT_ID_ACTIVATE_PDP_CONTEXT_REQ_STRUCT = 6556,
	STRUCT_ID_ACTIVATE_SEC_PDP_CONTEXT_ACC_STRUCT = 6796,
	STRUCT_ID_ACTIVATE_SEC_PDP_CONTEXT_REJ_STRUCT = 6857,
	STRUCT_ID_ACTIVATE_SEC_PDP_CONTEXT_REQ_STRUCT = 6733,
	STRUCT_ID_ATTACH_RESULT_STRUCT = 5414,
	STRUCT_ID_ATTACH_TYPE_STRUCT = 5399,
	STRUCT_ID_CC_PEER_ALERT_PATTERN_STRUCT = 316,
	STRUCT_ID_CC_PEER_ALLOWED_ACTIONS_STRUCT = 233,
	STRUCT_ID_CC_PEER_AUX_STATE_STRUCT = 323,
	STRUCT_ID_CC_PEER_BEARER_CAPABILITY_FOR_SETUP_MSG_STRUCT = 285,
	STRUCT_ID_CC_PEER_BEARER_CAPABILITY_STRUCT = 278,
	STRUCT_ID_CC_PEER_BUF_HDR_STRUCT = 114,
	STRUCT_ID_CC_PEER_CALL_CONFIRMED_STRUCT = 679,
	STRUCT_ID_CC_PEER_CALL_PROCEEDING_STRUCT = 762,
	STRUCT_ID_CC_PEER_CALL_STATE_STRUCT = 189,
	STRUCT_ID_CC_PEER_CALLED_NUM_STRUCT = 302,
	STRUCT_ID_CC_PEER_CALLING_NUM_STRUCT = 295,
	STRUCT_ID_CC_PEER_CAUSE_OF_NO_CLI_STRUCT = 259,
	STRUCT_ID_CC_PEER_CAUSE_STRUCT = 164,
	STRUCT_ID_CC_PEER_CC_CAPABILITY_STRUCT = 174,
	STRUCT_ID_CC_PEER_CC_ESTABLISHMENT_CNF_MS_NW_STRUCT = 1167,
	STRUCT_ID_CC_PEER_CC_ESTABLISHMENT_NW_MS_STRUCT = 1121,
	STRUCT_ID_CC_PEER_CONGESTION_CONTROL_STRUCT = 2401,
	STRUCT_ID_CC_PEER_CONGESTION_LEVEL_STRUCT = 171,
	STRUCT_ID_CC_PEER_CONNECT_ACKNOWLEDGE_STRUCT = 999,
	STRUCT_ID_CC_PEER_CONNECT_MS_NW_STRUCT = 928,
	STRUCT_ID_CC_PEER_CONNECT_NW_MS_STRUCT = 857,
	STRUCT_ID_CC_PEER_CONNECTED_NUMBER_STRUCT = 219,
	STRUCT_ID_CC_PEER_DISCONNECT_MS_NW_STRUCT = 1884,
	STRUCT_ID_CC_PEER_DISCONNECT_NW_MS_STRUCT = 1822,
	STRUCT_ID_CC_PEER_EMERGENCY_SETUP_STRUCT = 1008,
	STRUCT_ID_CC_PEER_FACILITY_MS_NW_STRUCT = 2566,
	STRUCT_ID_CC_PEER_FACILITY_NW_MS_STRUCT = 2554,
	STRUCT_ID_CC_PEER_FACILITY_STRUCT = 123,
	STRUCT_ID_CC_PEER_HIGH_LAYER_COMPATIBILITY_STRUCT = 271,
	STRUCT_ID_CC_PEER_HOLD_ACKNOWLEDGE_NW_MS_STRUCT = 2350,
	STRUCT_ID_CC_PEER_HOLD_MS_NW_STRUCT = 2341,
	STRUCT_ID_CC_PEER_HOLD_REJECT_NW_MS_STRUCT = 2359,
	STRUCT_ID_CC_PEER_KEYPAD_STRUCT = 130,
	STRUCT_ID_CC_PEER_LOW_LAYER_COMPATIBILITY_STRUCT = 264,
	STRUCT_ID_CC_PEER_MODIFY_COMPLETE_STRUCT = 2228,
	STRUCT_ID_CC_PEER_MODIFY_REJECT_STRUCT = 2276,
	STRUCT_ID_CC_PEER_MODIFY_STRUCT = 2170,
	STRUCT_ID_CC_PEER_MS_NW_ALERTING_STRUCT = 632,
	STRUCT_ID_CC_PEER_NETWORK_CC_CAPABILITY_STRUCT = 252,
	STRUCT_ID_CC_PEER_NOTIFICATION_IND_STRUCT = 135,
	STRUCT_ID_CC_PEER_NOTIFY_STRUCT = 2429,
	STRUCT_ID_CC_PEER_NW_MS_ALERTING_STRUCT = 585,
	STRUCT_ID_CC_PEER_PRIORITY_STRUCT = 214,
	STRUCT_ID_CC_PEER_PROGRESS_IND_STRUCT = 199,
	STRUCT_ID_CC_PEER_PROGRESS_STRUCT = 1055,
	STRUCT_ID_CC_PEER_RECALL_NW_MS_STRUCT = 1226,
	STRUCT_ID_CC_PEER_RECALL_TYPE_STRUCT = 194,
	STRUCT_ID_CC_PEER_REDIRECTING_NUM_STRUCT = 309,
	STRUCT_ID_CC_PEER_RELEASE_COMPLETE_MS_NW_STRUCT = 2111,
	STRUCT_ID_CC_PEER_RELEASE_COMPLETE_NW_MS_STRUCT = 2064,
	STRUCT_ID_CC_PEER_RELEASE_MS_NW_STRUCT = 1993,
	STRUCT_ID_CC_PEER_RELEASE_NW_MS_STRUCT = 1934,
	STRUCT_ID_CC_PEER_REPEAT_IND_STRUCT = 161,
	STRUCT_ID_CC_PEER_RETRIEVE_ACKNOWLEDGE_NW_MS_STRUCT = 2380,
	STRUCT_ID_CC_PEER_RETRIEVE_MS_NW_STRUCT = 2371,
	STRUCT_ID_CC_PEER_RETRIEVE_REJECT_NW_MS_STRUCT = 2389,
	STRUCT_ID_CC_PEER_SERVICE_CATEGORY_STRUCT = 245,
	STRUCT_ID_CC_PEER_SETUP_CONTAINER_STRUCT = 1081,
	STRUCT_ID_CC_PEER_SETUP_FROM_SETUP_CONTAINER_STRUCT = 334,
	STRUCT_ID_CC_PEER_SETUP_MS_NW_STRUCT = 1563,
	STRUCT_ID_CC_PEER_SETUP_NW_MS_STRUCT = 1264,
	STRUCT_ID_CC_PEER_SIGNAL_STRUCT = 292,
	STRUCT_ID_CC_PEER_SS_VERSION_IND_STRUCT = 154,
	STRUCT_ID_CC_PEER_START_CC_STRUCT = 1241,
	STRUCT_ID_CC_PEER_START_DTMF_ACKNOWLEDGE_STRUCT = 2519,
	STRUCT_ID_CC_PEER_START_DTMF_REJECT_STRUCT = 2542,
	STRUCT_ID_CC_PEER_START_DTMF_STRUCT = 2478,
	STRUCT_ID_CC_PEER_STATUS_ENQ_STRUCT = 2469,
	STRUCT_ID_CC_PEER_STATUS_STRUCT = 2441,
	STRUCT_ID_CC_PEER_STOP_DTMF_ACKNOWLEDGE_STRUCT = 2510,
	STRUCT_ID_CC_PEER_STOP_DTMF_STRUCT = 2501,
	STRUCT_ID_CC_PEER_STREAM_IDENTIFIER_STRUCT = 240,
	STRUCT_ID_CC_PEER_SUB_ADDR_STRUCT = 226,
	STRUCT_ID_CC_PEER_USER2USER_FOR_SETUP_MSG_STRUCT = 147,
	STRUCT_ID_CC_PEER_USER2USER_STRUCT = 140,
	STRUCT_ID_CC_PEER_USER_USER_STRUCT = 2317,
	STRUCT_ID_CIPHER_KEY_SEQ_NUM_STRUCT = 5404,
	STRUCT_ID_CISS_PEER_BUFF_HEADER_STRUCT = 3910,
	STRUCT_ID_CISS_PEER_CAUSE_STRUCT = 3896,
	STRUCT_ID_CISS_PEER_FACILITY_IE_STRUCT = 3889,
	STRUCT_ID_CISS_PEER_FACILITY_STRUCT = 3919,
	STRUCT_ID_CISS_PEER_REGISTER_MS_NW_STRUCT = 3956,
	STRUCT_ID_CISS_PEER_REGISTER_NW_MS_STRUCT = 3932,
	STRUCT_ID_CISS_PEER_RELEASE_COMPLETE_STRUCT = 3993,
	STRUCT_ID_CISS_PEER_SS_VERSION_IND_STRUCT = 3903,
	STRUCT_ID_CONCISE_QOS_STRUCT = 44,
	STRUCT_ID_CS_UPDATE_TYPE_STRUCT = 3438,
	STRUCT_ID_DATA_LIST = 3323,
	STRUCT_ID_DEACTIVATE_PDP_CONTEXT_ACC_STRUCT = 7340,
	STRUCT_ID_DEACTIVATE_PDP_CONTEXT_REQ_STRUCT = 7291,
	STRUCT_ID_DETACH_TYPE_STRUCT = 5443,
	STRUCT_ID_FORCE_TO_STANDBY_STRUCT = 5419,
	STRUCT_ID_FRMR_STRUCT = 7567,
	STRUCT_ID_GMM_PEER_ATTACH_ACC_STRUCT = 5551,
	STRUCT_ID_GMM_PEER_ATTACH_COM_STRUCT = 5688,
	STRUCT_ID_GMM_PEER_ATTACH_REJ_STRUCT = 5695,
	STRUCT_ID_GMM_PEER_ATTACH_REQ_STRUCT = 5470,
	STRUCT_ID_GMM_PEER_AUTH_CIPHER_FAILURE_STRUCT = 5977,
	STRUCT_ID_GMM_PEER_AUTH_CIPHER_REJ_STRUCT = 6003,
	STRUCT_ID_GMM_PEER_AUTH_CIPHER_REQ_STRUCT = 5858,
	STRUCT_ID_GMM_PEER_AUTH_CIPHER_RSP_STRUCT = 5923,
	STRUCT_ID_GMM_PEER_DETACH_ACC_MSTON_STRUCT = 5792,
	STRUCT_ID_GMM_PEER_DETACH_ACC_NTOMS_STRUCT = 5799,
	STRUCT_ID_GMM_PEER_DETACH_REQ_MSTON_STRUCT = 5747,
	STRUCT_ID_GMM_PEER_DETACH_REQ_NTOMS_STRUCT = 5719,
	STRUCT_ID_GMM_PEER_HDR_STRUCT = 5458,
	STRUCT_ID_GMM_PEER_IDENTITY_REQ_STRUCT = 6010,
	STRUCT_ID_GMM_PEER_IDENTITY_RSP_STRUCT = 6025,
	STRUCT_ID_GMM_PEER_INFO_STRUCT = 6370,
	STRUCT_ID_GMM_PEER_PTMSI_REALLOC_CMD_STRUCT = 5812,
	STRUCT_ID_GMM_PEER_PTMSI_REALLOC_COM_STRUCT = 5851,
	STRUCT_ID_GMM_PEER_RAU_ACC_STRUCT = 6161,
	STRUCT_ID_GMM_PEER_RAU_COM_STRUCT = 6307,
	STRUCT_ID_GMM_PEER_RAU_REJ_STRUCT = 6331,
	STRUCT_ID_GMM_PEER_RAU_REQ_STRUCT = 6038,
	STRUCT_ID_GMM_PEER_SERVICE_ACC_STRUCT = 6501,
	STRUCT_ID_GMM_PEER_SERVICE_REJ_STRUCT = 6508,
	STRUCT_ID_GMM_PEER_SERVICE_REQ_STRUCT = 6463,
	STRUCT_ID_GMM_PEER_STATUS_STRUCT = 6361,
	STRUCT_ID_I_CONTROL_FIELD_NO_SACK_STRUCT = 7495,
	STRUCT_ID_IDENTITY_TYPE_STRUCT = 3292,
	STRUCT_ID_IMEISV_STRUCT = 0,
	STRUCT_ID_L0_XID_STRUCT = 7586,
	STRUCT_ID_L1_XID_STRUCT = 7593,
	STRUCT_ID_L2_XID_STRUCT = 7602,
	STRUCT_ID_L4_ADDR_BCD_STRUCT = 96,
	STRUCT_ID_L4_NAME_STRUCT = 104,
	STRUCT_ID_L4_XID_STRUCT = 7613,
	STRUCT_ID_L4CSAT_CLOSE_CHANNEL_IND_PEER_STRUCT = 3240,
	STRUCT_ID_L4CSAT_OPEN_CHANNEL_IND_PEER_STRUCT = 3229,
	STRUCT_ID_L4CSAT_RECV_DATA_IND_PEER_STRUCT = 3262,
	STRUCT_ID_L4CSAT_SEND_DATA_IND_PEER_STRUCT = 3251,
	STRUCT_ID_LAI_STRUCT = 34,
	STRUCT_ID_LINKED_TI_STRUCT = 6534,
	STRUCT_ID_LLC_XID_PARAM_STRUCT = 7632,
	STRUCT_ID_MM_PEER_ABORT_STRUCT = 3623,
	STRUCT_ID_MM_PEER_AUTH_FAIL_STRUCT = 3525,
	STRUCT_ID_MM_PEER_AUTHENTICATION_REJ_STRUCT = 3457,
	STRUCT_ID_MM_PEER_AUTHENTICATION_REQ_STRUCT = 3464,
	STRUCT_ID_MM_PEER_AUTHENTICATION_RSP_STRUCT = 3499,
	STRUCT_ID_MM_PEER_CM_REEST_REQ_STRUCT = 3551,
	STRUCT_ID_MM_PEER_CM_SERVICE_ABORT_STRUCT = 3616,
	STRUCT_ID_MM_PEER_CM_SERVICE_ACCEPT_STRUCT = 3589,
	STRUCT_ID_MM_PEER_CM_SERVICE_PROMPT_STRUCT = 3596,
	STRUCT_ID_MM_PEER_CM_SERVICE_REJECT_STRUCT = 3607,
	STRUCT_ID_MM_PEER_CM_SERVICE_REQ_STRUCT = 3632,
	STRUCT_ID_MM_PEER_HDR_STRUCT = 3273,
	STRUCT_ID_MM_PEER_IDENTITY_REQ_STRUCT = 3670,
	STRUCT_ID_MM_PEER_IDENTITY_RSP_STRUCT = 3683,
	STRUCT_ID_MM_PEER_IMSI_DETACH_IND_STRUCT = 3696,
	STRUCT_ID_MM_PEER_INFORMATION_STRUCT = 3345,
	STRUCT_ID_MM_PEER_LU_ACC_STRUCT = 3777,
	STRUCT_ID_MM_PEER_LU_REJ_STRUCT = 3841,
	STRUCT_ID_MM_PEER_LU_REQ_STRUCT = 3735,
	STRUCT_ID_MM_PEER_NULL_STRUCT = 3859,
	STRUCT_ID_MM_PEER_PAGING_RSP_STRUCT = 3866,
	STRUCT_ID_MM_PEER_STATUS_STRUCT = 3850,
	STRUCT_ID_MM_PEER_TMSI_REALLOC_CMD_STRUCT = 3711,
	STRUCT_ID_MM_PEER_TMSI_REALLOC_COM_STRUCT = 3728,
	STRUCT_ID_MODIFY_PDP_CONTEXT_MS_ACC_STRUCT = 7135,
	STRUCT_ID_MODIFY_PDP_CONTEXT_MS_REQ_STRUCT = 7060,
	STRUCT_ID_MODIFY_PDP_CONTEXT_NW_ACC_STRUCT = 7169,
	STRUCT_ID_MODIFY_PDP_CONTEXT_NW_REQ_STRUCT = 6984,
	STRUCT_ID_MODIFY_PDP_CONTEXT_REJ_STRUCT = 7255,
	STRUCT_ID_NPDU_LIST_ENTRY_STRUCT = 5429,
	STRUCT_ID_NPDU_LIST_STRUCT = 5434,
	STRUCT_ID_NW_TIME_ZONE_TIME_STRUCT = 3330,
	STRUCT_ID_P_TMSI_SIGN_STRUCT = 5391,
	STRUCT_ID_PD_AND_SAPI_STRUCT = 3445,
	STRUCT_ID_PLMN_ID_RAT_STRUCT = 27,
	STRUCT_ID_PLMN_ID_STRUCT = 14,
	STRUCT_ID_PROPOSE_COMP_ENTT_STRUCT = 7393,
	STRUCT_ID_PRORITY_STRUCT = 3452,
	STRUCT_ID_PTMSI_STRUCT = 3297,
	STRUCT_ID_QOS_STRUCT = 53,
	STRUCT_ID_RADIO_PRIORITY_STRUCT = 5424,
	STRUCT_ID_RAI_STRUCT = 3311,
	STRUCT_ID_REQUEST_PDP_CONTEXT_ACTIVATION_REJ_STRUCT = 6948,
	STRUCT_ID_REQUEST_PDP_CONTEXT_ACTIVATION_STRUCT = 6893,
	STRUCT_ID_REUSE_COMP_ENTT_STRUCT = 7402,
	STRUCT_ID_S_CONTROL_FIELD_STRUCT = 7518,
	STRUCT_ID_SAT_ADDR_STRUCT = 3080,
	STRUCT_ID_SAT_CLOSE_CHANNEL_IND_PEER_STRUCT = 3183,
	STRUCT_ID_SAT_DSPL_TEXT_IND_PEER_STRUCT = 2867,
	STRUCT_ID_SAT_GET_INKEY_IND_PEER_STRUCT = 2876,
	STRUCT_ID_SAT_GET_INKEY_RES_PEER_STRUCT = 2885,
	STRUCT_ID_SAT_GET_INPUT_IND_PEER_STRUCT = 2894,
	STRUCT_ID_SAT_GET_INPUT_RES_PEER_STRUCT = 2911,
	STRUCT_ID_SAT_LAUNCH_BROWSER_IND_PEER_STRUCT = 3130,
	STRUCT_ID_SAT_MMI_INFO_IND_PEER_STRUCT = 3069,
	STRUCT_ID_SAT_OPEN_CSD_CHANNEL_IND_PEER_STRUCT = 3172,
	STRUCT_ID_SAT_OPEN_GPRS_CHANNEL_IND_PEER_STRUCT = 3161,
	STRUCT_ID_SAT_PLAY_TONE_IND_PEER_STRUCT = 2978,
	STRUCT_ID_SAT_RECV_DATA_IND_PEER_STRUCT = 3211,
	STRUCT_ID_SAT_RECV_DATA_RES_PEER_STRUCT = 3222,
	STRUCT_ID_SAT_RUN_AT_COMMAND_IND_PEER_STRUCT = 3096,
	STRUCT_ID_SAT_SELECT_ITEM_IND_PEER_STRUCT = 2949,
	STRUCT_ID_SAT_SEND_DATA_IND_PEER_STRUCT = 3194,
	STRUCT_ID_SAT_SEND_DTMF_IND_PEER_STRUCT = 3113,
	STRUCT_ID_SAT_SEND_SMS_IND_PEER_STRUCT = 3016,
	STRUCT_ID_SAT_SEND_SS_IND_PEER_STRUCT = 3033,
	STRUCT_ID_SAT_SEND_USSD_IND_PEER_STRUCT = 3050,
	STRUCT_ID_SAT_SETUP_CALL_IND_PEER_STRUCT = 2989,
	STRUCT_ID_SAT_SETUP_IDLE_DSPL_IND_PEER_STRUCT = 3087,
	STRUCT_ID_SAT_SETUP_MENU_IND_PEER_STRUCT = 2920,
	STRUCT_ID_SERVICE_TYPE_STRUCT = 5465,
	STRUCT_ID_SM_MSG_HEADER_STRUCT = 6517,
	STRUCT_ID_SM_STATUS_STRUCT = 7374,
	STRUCT_ID_SMS_CP_ACK_STRUCT = 2605,
	STRUCT_ID_SMS_CP_DATA_STRUCT = 2592,
	STRUCT_ID_SMS_CP_ERROR_STRUCT = 2612,
	STRUCT_ID_SMS_RP_ACK_STRUCT = 2678,
	STRUCT_ID_SMS_RP_ERROR_STRUCT = 2702,
	STRUCT_ID_SMS_RP_MO_DATA_STRUCT = 2646,
	STRUCT_ID_SMS_RP_MT_DATA_STRUCT = 2621,
	STRUCT_ID_SMS_RP_SMMA_STRUCT = 2671,
	STRUCT_ID_SMSAL_COMMAND_MSG_STRUCT = 2813,
	STRUCT_ID_SMSAL_DELIVER_MSG_STRUCT = 2755,
	STRUCT_ID_SMSAL_SEND_MSG_REQ_STRUCT = 2831,
	STRUCT_ID_SMSAL_STATUS_REPORT_MSG_STRUCT = 2781,
	STRUCT_ID_SMSAL_SUBMIT_MSG_STRUCT = 2732,
	STRUCT_ID_SND_XID_BLOCK_STRUCT = 7407,
	STRUCT_ID_SND_XID_PEER_MSG_STRUCT = 7444,
	STRUCT_ID_TEARDOWN_STRUCT = 6551,
	STRUCT_ID_TIMER_2_STRUCT = 3285,
	STRUCT_ID_TIMER_STRUCT = 3280,
	STRUCT_ID_TMSI_STATUS_STRUCT = 5409,
	STRUCT_ID_U_CONTROL_FIELD_STRUCT = 7556,
	STRUCT_ID_UEM_GREETING_TEXT_STRUCT = 2860,
	STRUCT_ID_UI_CONTROL_FIELD_STRUCT = 7537,
	STRUCT_ID_UPDATE_RESULT_STRUCT = 5453,
	STRUCT_ID_UPDATE_TYPE_STRUCT = 5448,
	STRUCT_ID_INVALID
} mcd_struct_id;
#endif
  
/*MTK:END*/
#endif  //#if defined(MCD_OUTSIDE_TABLE)

#endif // _MCD_H


