/*================================================================

�ļ���			: CmsSaveAs.h

��������		: ҳ�汣��ģ�鹦�ܼ��ӿں�������

����޸�ʱ��	: 11/19/2004
 
�����д��Ա	: ������

================================================================*/

#ifndef _CMS_SAVEAS_H_
#define _CMS_SAVEAS_H_

/*======================== ����ͷ�ļ� ======================*/

#include "CmsBrowserPublic.h"

/*========================= �������� =======================*/
int Cms_LocalPageLoad( unsigned char *title, /* (in) title */ 
					   unsigned char *url,	 /* (int) url */
					   unsigned char *buf,   /* (in)data buf ��Ҫ�ͷ����� */
					   unsigned int  len	 /* (in)buf length */);

int Cms_Browser_SavePageEvent(CMS_BROWSER_VOID);


CMS_BROWSER_RET Cms_Browser_AddSavePage(P_CMS_BROWSER_U8 title);
int AddFileList( char* filename, int type );
char* GetNameFromFileList(int filenum);
int GetTypeFromFileList(int filenum);

CMS_BROWSER_RET Cms_Browser_TestLocalEvent(void);
char* GetSnapShotPtr( void );


#endif