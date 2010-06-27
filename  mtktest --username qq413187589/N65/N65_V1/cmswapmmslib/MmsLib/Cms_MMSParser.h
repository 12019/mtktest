/*=====================================================================

 Copyright (c) 2001-2002 MobileSoft Corporation

    All Rights Reserved.

    $Logfile: cmsparser.h

    $Revision:

    $vision:       1.00

    $Date:         07/21/2002

    $Author:       hulf

	$Declare: 
	This document contains information proprietary to MobileSoft  
 Technology (Nanjing),  Corp.    Transmittal, receipt, or possession 
 of this document does not express, license, or imply any rights to 
 use, sell, design, or manufacture from this information. No reproduction, 
 publication, or disclosure of this information, in whole or in part, 
 shall be made without prior written authorization from an officer of 
 MobileSoft Technology (NanJing), Corp.

 

Abstract:

 

Modified By:

 

Environment: 

 

Revision History:

 

=====================================================================*/

#ifndef _CMS_PARSER_H_
#define _CMS_PARSER_H_

#include "Cms_MMSGlobal.h"
#include "Cms_MMSCfg.h"
#include "Cms_MMSSmil.h"
#include "Cms_MMSMain.h"//  Modified by TIPrj[2005/7/20]  
#include "Cms_MMSXmldef.h"
#include "Cms_MMSDebug.h"



/*====================== MACRO DEFINE ==========================*/

/* define const integer */
#define		b_MaxState					65
#define		INVALID_FILEHANDLE			NULL		/* ��Ч�ļ��� */
#define		URLLEN						512			/* ����URI����󳤶� */
#define		PARAMLEN					800			/* �ύ��������󳤶� */
#define		VALUELEN                    512			/* ÿһ����������󳤶� */
#define		INPUT_FILE_BUFFER_SIZE		5*512		/* һ�ν�������󳤶� */
#define		FILENAMELENGTH				200			/* ϵͳ�涨���ļ������� */
#define		MAXCOLORMAPSIZE				256
#define		MAX_LWZ_BITS				12
#define		INPUT_W                  	80
#define		MMS_EL_STACK_SIZE			32
#define		TIMERBASE					100







/******************************* Headers File **************************/


typedef struct{
	CMS_MMS_U32 left;
	CMS_MMS_U32 top;
	CMS_MMS_U32 right;
	CMS_MMS_U32 bottom;
}SRECT;

/* define of element layout struct */
typedef struct   b_tagLAYOUT  b_LAYOUT;	
typedef          b_LAYOUT    *b_Layout;
struct b_tagLAYOUT
{
	CMS_MMS_U32		tx;			/* x coordinate of top left point*/
	CMS_MMS_U32		ty;			/* y coordinate of top left point*/
	CMS_MMS_U32		bx;			/* x coordinate of right bottom point*/
	CMS_MMS_U32		by;			/* y coordinate of right bottom point*/
	CMS_MMS_U8		font;		/* define for text layout limited by "layout" element */
	//CENT_FILL_FIELD3
	CMS_MMS_U32		color;		/* define for text layout limited by "layout" element */
	CMS_MMS_U32		data1;		/* left for text element layout 
							or active item of select element
							or checked for ckeckbox and radiobox element
							or image type of image element */
	CMS_MMS_U32		data2;		/* right for text element 
							or item numbers of select 
							or thread id of image movie */
};

/* ��������ṹ���� */
typedef struct   b_tagATTRIBUTE  b_ATTRIBUTE;
typedef          b_ATTRIBUTE    *b_Attribute;
struct b_tagATTRIBUTE
	{
		b_Attribute b_prev;
		b_Attribute b_next;
		CMS_MMS_U16 b_type;
		CMS_MMS_U8  kind;		/* 0 - enumerate, 1 - int, 2 - text */
		//CENT_FILL_FIELD1
		union
		{
			CMS_MMS_S32	ivalue;
			CMS_MMS_S8 *svalue;
		} value;
	};

/* Ԫ������ṹ���� */
typedef struct b_tagELEMENT  b_ELEMENT;	
typedef        b_ELEMENT    *b_Element;
struct b_tagELEMENT
{
	b_Element    b_prev;
	b_Element    b_next;
	CMS_MMS_U16          b_ElTypeNum;
	////CENT_FILL_FIELD2            
	b_Attribute  b_attribute;
	CMS_MMS_S8			 *content;
	b_Layout	layout;
};




/*********************** Parser information **********************/

typedef CMS_MMS_U8 			b_State;
typedef struct 		b_Transition *b_PtrTransition;

typedef struct 		b_Transition
{
     CMS_MMS_U8					b_trigger;
     b_State			b_newState;	
	 //CENT_FILL_FIELD2
     b_PtrTransition	b_nextTransition;
} b_Transition;


typedef struct b_StateDescr
{				
     b_State			b_automatonState;
	 //CENT_FILL_FIELD3
     b_PtrTransition	b_firstTransition;
} b_StateDescr;



typedef struct b_sourceTransition
{
     b_State               b_initState;
     CMS_MMS_U8                    b_trigger;
     b_State               b_newState;
	 //CENT_FILL_FIELD1
} b_sourceTransition;




/***************** parser information ******************************************/

typedef struct _BPARSERINFO 
{
	CMS_MMS_U32            b_match;
	b_PtrTransition			b_trans;   
	CMS_MMS_U32            b_currentState; 
	b_StateDescr			b_automaton[b_MaxState];
	
	CMS_MMS_U8			InBuffer[INPUT_FILE_BUFFER_SIZE+1];		/*  ����������,��Ž�Ҫ���������� */
	CMS_MMS_U8			OutBuffer[INPUT_FILE_BUFFER_SIZE+1];	/*	����������,��ŵ���Ԫ�ػ����Ե����� */
	//CMS_MMS_S8					EleAttrName[16];						/*	Ԫ������ */
	CMS_MMS_S8					EleAttrName[20];						/*	2003.8.30 */
	CMS_MMS_S8					ParserFileName[FILENAMELENGTH];			/*	Ҫ�������ļ��� */
	CMS_MMS_U64			Mms_now,Mms_long,Mms_Verylong;			/*	����Ϊ:  ��ǰ�ļ�(����)ƫ���� */
																	/*	Ԫ�����Եĳ���  */
	CMS_MMS_U32			CurCharInFileBuffer;				
	CMS_MMS_U32			LastCharInFileBuffer;
	CMS_MMS_U64			FileOffset;								/*  �ѽ������ַ��� */
	CMS_MMS_U16			Upnum;									/*  �Ϸ���ҳ��,���ڿ����Ϸ�������·�ʱ,���Ѿ� */
	CMS_MMS_U8	  		LastElementIsStyle;						/*  ��ʽ������ */
	CMS_MMS_U8			Mms_Charnum;
	
																	/*    ��ʾ��,��ֱ����ʾ,���������غ�����ʾ */
	b_Element				Mms_root,Mms_pro;

	
	CMS_MMS_S32    		  			Check_Ele;								/*  ��ЧԪ�� */
	CMS_MMS_S32    					Check_Attr;								/*  ��Ч���� */
	CMS_MMS_S32						TextErr;								/*  ����<< >>	 */
	CMS_MMS_S32						EndHtmlAnchor;							/*  ����Ԫ�ؽ��� */
	
	CMS_MMS_S32				  		ParserOver;

} BPARSERINFO, *p_BPARSERINFO;




CMS_MMS_S32		mms_parse_file(p_BPARSERINFO parserinfo);
CMS_MMS_S32		mms_parse_ok(p_BPARSERINFO parserinfo);
CMS_MMS_S32		mms_parse_block(p_BPARSERINFO parserinfo);


CMS_MMS_VOID	mms_parser_exit(p_BPARSERINFO parserinfo);
CMS_MMS_S32		mms_parse(p_BPARSERINFO parserinfo);
CMS_MMS_S32		mms_deletedocument(b_Element el);
CMS_MMS_VOID	delete_elements(b_Element root);


CMS_MMS_VOID	mms_init_auotmation (p_BPARSERINFO parserinfo);
CMS_MMS_VOID	mms_exit_auotmation(p_BPARSERINFO parserinfo);

CMS_MMS_U8		*getstringattvalue(b_Element el, CMS_MMS_U16 type);


#include "Cms_MMSAutomaton.h"
#include "Cms_MMSMaptable.h"

#endif /* _CMS_PARSER_H_ */









