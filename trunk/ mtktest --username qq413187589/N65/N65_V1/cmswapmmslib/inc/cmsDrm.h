#ifndef _CMSDRM_H
#define _CMSDRM_H

#include "CmsHttp.h"

#ifdef __cplusplus
extern "C" {
#endif

#define BODY_MAX_BOUNDARY_STR_LENGTH 156
#define BODYPART_MAX_HEADER_LENGTH 128
#define BODYPART_MAX_NAME_LENGTH 64	
/* inner the content data(head) maybe include these information */
typedef struct _DRM_MESSAGE_BODYPART_INF
{
	Cms_ContentType_e	subType;		/*��ý�����content����*/
	char	id[BODYPART_MAX_NAME_LENGTH];			/*��ý�����ID*/
	char	location[BODYPART_MAX_NAME_LENGTH];		/*��ý������ַ*/
	char	encoding[BODYPART_MAX_NAME_LENGTH];		/*��ý���������뷽ʽ*/
	int     contentLen ;					/*��ý����󳤶�*/
	unsigned char *bufStart;				/*��ʼ��ַָ��*/
}DRM_MESSAGE_BODYPART_INF;
typedef DRM_MESSAGE_BODYPART_INF *P_DRM_MESSAGE_BODYPART_INF;

/* content-type block maybe include these information*/
typedef struct _DRM_MESSAGE_BODY_INF 
{
	int                 subBodypartNums;	/*��ý�������Ŀ*/
	Cms_ContentType_e	drmMessage;			/*multiý���������*/
	char				boundary_str[BODY_MAX_BOUNDARY_STR_LENGTH]; 
											/*�ֽ��߷��Ŵ�*/
	int                 boundary_str_len;	/*�ֽ��߷��Ŵ�����*/
	P_DRM_MESSAGE_BODYPART_INF subMideaObject[10];/*֧��5��sub body*/
	int					messageBodyLen;
	unsigned char *     messageBodyBuf;
}DRM_MESSAGE_BODY_INF;
typedef DRM_MESSAGE_BODY_INF *P_DRM_MESSAGE_BODY_INF;

P_DRM_MESSAGE_BODY_INF DealWithDrmFile(unsigned char *drmContent,
					const    int   drmContentLen,
					Cms_ContentType_e   drmDealingType);
void destroyDRM(P_DRM_MESSAGE_BODY_INF pDrmBody);
#ifdef __cplusplus
};
#endif

#endif									 







										 
										 
