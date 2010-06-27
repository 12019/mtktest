#ifndef _CMSURL_H_
#define _CMSURL_H_

#include "cms_debug.h"
#include "cms_sysfun.h"
//#include "CmsBrowserPublic.h"

typedef struct _URL_TAG
{
	char * scheme;
	char * authority;
	char * path;
	char * query;
	char * fregment;
}URL,* pURL;


void initURL(void);
void freeURL(void);

//judge �ж�ҳ��url����ҳ��url��0 ��ʾҳ�ڣ�1��ʾҳ��
unsigned char * urlstrcat(unsigned char * cururlstr, unsigned char * catstr);

int inURL(const char * str);
char * outABSURL(void);
void changeOutlineURL(const char * str);

//�ṩ��socket �Ľӿ�
char * URLoutScheme(void);
char * URLoutAuthority(void);
char * URLoutHost(void);
char * URLoutPath(void);
char * URLoutQuery(void);
char * URLsetQuery(char * str);
char * URLoutFregment(void);

//�ṩ��SCRIPT�Ľӿ�

char * URLoutScriptScheme(char * cstr);
char * URLoutScriptAuthority(char * cstr);
char * URLoutScriptPath(char * cstr);
char * URLoutScriptQuery(char * cstr);
char * URLoutScriptFregment(char * cstr);
char * URLoutScriptHost(char * cstr);
char * URLoutScriptPort(char * cstr);
char * URLoutScriptParameters(char * cstr);
char * Eascape(const char * cstr);
char * UnEascape(const char * cstr);

//�ṩ�ϲ����URLƥ��
//����0,��ʾ��ȫƥ��,����-1,��ʾmatchstr��,1,��ʾdesstr��
int URL_matchURI(char * matchstr, char * desstr);
//����0,��ʾǰ׺ƥ�����,����-1,��ʾʧ��
int URL_prefixURI(char * matchstr, char * desstr);

int hostscanner(char * host);
#endif
