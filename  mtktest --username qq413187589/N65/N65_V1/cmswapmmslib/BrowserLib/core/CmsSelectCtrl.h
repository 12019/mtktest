/*****************************************************************************
    Copyright (c) 2003-2004 MobileSoft Corporation All Rights Reserved.
    
    Created:	    2005-4-21  	
	Author:         liangl; liangl@mobilesoft.com.cn
    File name:      CmsSelectCtrl.h
    File ext:       c source file 
	
	purpose:		Select �ؼ�����
    History:
*******************************************************************************/
#ifndef __INC_CMS_SELECTCTRL_H__
#define __INC_CMS_SELECTCTRL_H__

#include "vwlibbase/vwmemory.h"
#include "CmsBrowserCfg.h"

VW_EXTERN_C_BEGIN

#undef  U8
#define U8	vwuint8

#undef	U16
#define U16 vwuint16

//changed by yangjun 06-02-07 for selectbox form
/**********************************************************************
 * ���� : ����Select�ؼ�(�ӿں���).
 * ���� : 
 *		nItemsCount		:	ѡ��������.
 *		nCurrSelected	:	��ǰѡ����.
 *		pItems			:	UTF16 ������ַ�������,���鳤�� nItemsCount.
 * ˵�� :
 *		��ʾһ��Select�ؼ�,���û�ѡ���,���� 
 *		Cms_Browser_SelectCtrl_UserSelecteItem �����������������.
 **********************************************************************/
 #if 0
void Cms_Browser_DrawSelectCtrl( 
					U16                nItemsCount,
					U16                nCurrSelected,
/* UTF16 string  */ U8*				   strTitle ,
                    /* UTF16 string , size_is(nItemsCount) */
                    U8*                pItems[]
             );
 #endif


/************************************************************************
 * ���� : ����Select�ؼ������û�ѡ���ص��ú���(��CMSʵ��)
 * ���� :
 *		nCurrSelected	:	�û�ѡ������( [ 0 , nItemsCount - 1 ] ).
 ************************************************************************/
void Cms_Browser_SelectCtrl_UserSelecteItem( U16 nCurrSelected );

#undef U16
#undef U8

typedef 
struct tag_CmsSelectCtrlItems
{	
	vwuint16		nItemsCount;		/* ѡ����Ŀ.   */
	vwuint16		nCurrSelected;		/* ��ǰѡ����. */	
	
	vwuint8p		*pItems;			/*UTF16 string , size_is(nItemsCount) */
}	CmsSelectCtrlItems;

VWRESULT Cms_Browser_GetSelectMenuParam( 
		 		m_ControlElement    pCtrlObject ,
		/*out*/	CmsSelectCtrlItems* pParam );

void	 _Cms_Browser_ShowSelectCtrl( m_ControlElement pCtrlObject );
void Cms_Browser_DrawSelectCtrl(CmsSelectCtrlItems CtrlItems);//changed by yangjun 06-02-07 for selectbox form
VW_EXTERN_C_END

#endif