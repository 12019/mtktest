/*==============================================================

 C   H E A D E R   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2005
 ALL RIGHTS RESERVED

==============================================================

��������		: XML Parser Ver1.0
 
�ļ���			: CmsXMLParser.h

��������		: XML����ģ��

����޸�ʱ��	: 02/24/2005
 
�����д��Ա	: �ֺ���

==============================================================*/

#ifndef _CMSXMLPARSER_H_
#define _CMSXMLPARSER_H_

/*============================================================*/

#include "Cms_WAPMain.h"
#include "cms_sysfun.h"
#include "Cms_Debug.h" 

/*============================================================*/
#ifndef TI //  Modified by TIPrj[2005/6/29]
#if __cplusplus
extern "C" {
#endif
#endif
#ifndef FALSE
#define FALSE 0
#endif //TI

#ifndef TRUE
#define TRUE 1
#endif

#define CMS_XML_MAX_TAG_LEN 64

#define CMS_XML_TEXT_TAG 250
#define CMS_XML_INVALID_TAG 255

/*=================== XML������ݽṹ���� ==================*/	

typedef struct _CMS_XML_TAG
{
	P_CMS_U8	pTagName;
	CMS_U32		TagID;
	
}CMS_XML_TAG, *P_CMS_XML_TAG;

/*=================== �������� ==================*/	

CMS_U32 CmsXMLParserInit(P_CMS_XML_TAG pXMLEleMAP, P_CMS_XML_TAG pXMLAttrMAP, P_CMS_U32 pXMLNoNestEle);
CMS_U32 CmsXMLParserExit(CMS_VOID);
CMS_U32 CmsXMLParser(P_CMS_U8 pXMLContent);
P_CMS_VOID CmsGetXMLEleValue(CMS_U32 XMLEle, CMS_U32 XMLSrcAttr, P_CMS_U8 pAttrValue, CMS_U32 XMLTargetAttr, CMS_BOOL inCurrTree);

#ifndef TI //  Modified by TIPrj[2005/6/29]
#if __cplusplus
}
#endif
#endif  //TI
#endif	/*=== end of _CMSXMLPARSER_H_ ===*/