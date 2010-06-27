/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2004
 ALL RIGHTS RESERVED

================================================================

��������		: WAP2.0 HTTP STACK
 
�ļ���			: Cms_WHTTPCookieMemery.h

��������		: this module provides a simple HTTP Cookie managerment according to 
					viutual memery file system

����޸�ʱ��	: 9/16/2004
 
�����д��Ա	: shoumingl@mobilesoft.com.cn

================================================================*/
#ifndef _CMS_WHTTPCOOKIEMANAGE_H
#define _CMS_WHTTPCOOKIEMANAGE_H

#include "Cms_WHTTPCookie.h"

#ifdef __cplusplus
extern "C" {
#endif

#define TOTALDOMAINS					30
#define DOMAINMAXLEN					40
#define PATHMAXLEN						150
#define CMS_HTTP_FILE int
	
#define FORMAT_STATION_SEPERATE			8
#define HEAD_DOMAIN_SEPERATE			16
#define DOMAIN_PATH_SEPERATE			1000

#define DOMAIN_NUMS_FIELD_BYTES			4	
#define FORMAT_FLAG_FIELD_BYTES			4	
#define DOMAIN_TAIL_FIELD_BYTES			4
#define PATH_TAIL_FIELD_BYTES			4
	
#define DOMAIN_LEN_FIELD_BYTES			4
#define DOMAIN_TAG_FIELD_BYTES			4

#define PATH_LEN_FIELD_BYTES			4
#define EXPIRE_LEN_FIELD_BYTES			4
#define COOKIE_NAME_LEN_FIELD_BYTES		4
#define PATH_TAG_FIELD_BYTES			4

#define COOKIE_BUF_FORMAT_FLAG 1224
/*_CookiePathNode �ڴ�path�ڵ�*/
struct _CookiePathNode
{
	unsigned char *path;
	unsigned char *cookieName;
	unsigned char *expire;
	struct _CookiePathNode *next;
	int           next_path_offset;
};
typedef struct _CookiePathNode CookiePathNode;

/*_CookiePathNode �ڴ�domain�ڵ�*/
struct _CookieHostNode
{
	int path_offset;
	unsigned char	*domain;
	struct _CookieHostNode *next;
	CookiePathNode	*sonNode;
};
typedef	struct _CookieHostNode CookieHostNode;

struct _cookiebuf
{
	int numbers_domain;		/*��¼domain����Ŀ*/
	int format_flag;		/*��¼�ڴ���ʽ�����*/
	int domain_tail;		/*��¼domain��β��λ��*/
	int path_tail;			/*��¼path��β��λ��*/
	
	unsigned char *buffer;	/*��centel��ȡ���ڴ���׵�ַ*/
	unsigned int  length;	/*��centel��ȡ���ڴ�鳤��*/
};
typedef struct _cookiebuf Cms_cookie_buf;

typedef enum
{
	CMS_JANUARY = 1,
	CMS_FEBRUARY ,
	CMS_MARCH,
	CMS_APRIL,
	CMS_MAY,
	CMS_JUNE,
	CMS_JULY,
	CMS_AUGUST,
	CMS_SEPTEMBER,
	CMS_OCTOBER,
	CMS_NOVEMBER,
	CMS_DECEMBER
} month_e;

typedef enum
{
	CMS_MONDAY = 1,
	CMS_TUESDAY,
	CMS_WEDNESDAY,
	CMS_THURSDAY,
	CMS_FRIDAY,
	CMS_SATURDAY,
	CMS_SUNNDAY
} week_e;
/*
 *	�������е�cookie��Ϣ,ȫ��ˢ�±���
 */
// void cms_SaveCookie(void); //  Modified by TIPrj[2005/7/5]
CMS_BOOL match2strHead(const CMS_U8 *cookiePath,const CMS_U8 *fetchPath);
extern int cms_manage_set_cookie(HTSETCookie * pSetCookie);
extern int cms_manage_cookie(unsigned char *cookie);
#ifdef __cplusplus
};
#endif

#endif