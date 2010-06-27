/*================================================================

�ļ���			: CmsHistroy.h

��������		: ��ʷ��¼ģ�鹦�ܼ��ӿں�������

����޸�ʱ��	: 11/15/2004
 
�����д��Ա	: ������

================================================================*/


#ifndef _CMS_HISTORY_H_
#define _CMS_HISTORY_H_


/*=========����ͷ�ļ�=============*/

#include "CmsBrowserPublic.h"

/*========================================*/

P_HISTORY Cms_Create_History_Q(CMS_BROWSER_VOID);
void Cms_Browser_FreeAHisNode(P_HISTORYNODE his_node);
void Cms_FreeHeadHistory(P_HISTORYNODE his_node);
CMS_BROWSER_VOID Cms_Free_History_Q(CMS_BROWSER_VOID);
P_HISTORYNODE Cms_Create_History_Node(CMS_BROWSER_BOOL method, P_CMS_BROWSER_U8 url, 
									  P_CMS_BROWSER_U8 param,CMS_BROWSER_U32  prevtabindex);
int Cms_Browser_InsertToHistory_Q(P_HISTORYNODE his_node);
int Cms_Browser_InvalidTailURI(CMS_BROWSER_VOID);
CMS_BROWSER_VOID Cms_Browser_InvalidCurrentURI(CMS_BROWSER_VOID);
int Cms_Browser_MoveToPrevURL(void);
int Cms_Browser_MoveToNextURL(void);
CMS_BROWSER_RET Cms_Browser_GetPrevURI(CMS_BROWSER_VOID);
CMS_BROWSER_VOID Cms_Browser_GoPrevURIEvent(CMS_BROWSER_VOID);
CMS_BROWSER_RET Cms_Browser_GetNextURI(CMS_BROWSER_VOID);
CMS_BROWSER_VOID Cms_Browser_GoNextURIEvent(CMS_BROWSER_VOID);
CMS_BROWSER_BOOL Cms_Browser_GetJADURL(P_CMS_BROWSER_U8 url, CMS_BROWSER_U32 urllen);
CMS_BROWSER_RET Cms_Browser_InsertHistory(CMS_BROWSER_VOID);
void Cms_Browser_ConfirmInsertHistory(void);
char* Cms_GetCurHistoryURL(void);
char* Cms_GetCurrentURL(void);
void Cms_Browser_LinkPageHistory(CMS_BROWSER_U8 ID);
CMS_BROWSER_VOID Cms_Browser_InvalidCurrentHis(CMS_BROWSER_VOID);
P_CMS_BROWSER_U8 Cms_Browser_GetUIHistoryTitle(CMS_BROWSER_U8 ID);
typedef struct _BRWHISTORY	{	
    CMS_BROWSER_S32   urlCurrent;              				 /* ����url�ĵ�ǰλ�� */
	P_CMS_BROWSER_U8  url[MAXSTOREHISTORY];	    	/*=== ��ʷ��¼ָ������ ===*/
    P_CMS_BROWSER_U8  title[MAXSTOREHISTORY];		/*=== ��ʷ��¼�ı��� ===*/
}BRWHISTORY, *P_BRWHISTORY;//add by xiaoyongq 

#endif