/*================================================================
 
�ļ���			: CmsCache.h

��������		: Cacheģ��ù��ܼ��ӿں�������

����޸�ʱ��	: 08/11/2004
 
�����д��Ա	: ������

================================================================*/

#ifndef CMSNEWCACHE_H_
#define CMSNEWCACHE_H_

/*======================== ����ͷ�ļ� ======================*/

#include "CmsBrowserPublic.h"
#include "cmshttp.h"
#include "CmsCacheHeap.h"
#include "cms_time.h"


/******************�ṹ����**********************************/
struct CmsCacheTag;
typedef struct CmsCacheTag CmsCacheT;

struct CmsCacheTag
{
	char*		url; 
	Cms_ContentType_e	file_type;
	Cms_EncodingType_e	fileencoding;
	time_t		        expiretime;
	CACHEFILE_HANDLE    fd;	

	CmsCacheT*			next;
};

/*========================= �������� =======================*/



void CmsSetCacheFlag( void );
void CmsClearCacheFlag( void );
int  CmsIsSupportCache( void );
int  CmsIsAddToCache( void );

#endif