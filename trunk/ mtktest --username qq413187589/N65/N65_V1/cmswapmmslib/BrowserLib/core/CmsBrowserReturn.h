/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2003
 ALL RIGHTS RESERVED

================================================================

��������		: mBrowser Ver3.3
 
�ļ���			: CmsBrowserReturn.h

��������		: mBrowser���Ľӿں�������ֵ����

����޸�ʱ��	: 11/5/2003
 
�����д��Ա	: �ֺ���

================================================================*/

#ifndef CMSBROWSERRETURN_H
#define CMSBROWSERRETURN_H

/*========================= �������ģ��ӿں�������ֵ =======================*/

typedef enum _CMS_BROWSER_RET
{
	/*=== ����ķ���ֵ ===*/
	E_CMS_PARSER_HTML = -259,			/* ����text/html�Ľű� */

	/*=== tableģ�鷵��ֵ ===*/
	E_CMS_TABLE_NOCSS = -258,			/*=== û��css���� ===*/
	E_CMS_TABLE_NOELEMENT = -257,		/*=== �ƶ�����û�з��ֽ���Ԫ�� ===*/
	E_CMS_TABLE_OUTOFSCRREN = -256,		/*=== td������ʾ��֮�� ===*/
		
	/*=== ����ģ�鷵��ֵ ===*/
	E_CMS_CACHE_SAVEERROR = -255,		/*=== ���滺����Ϣ�ļ�ʧ�� ===*/
	E_CMS_CACHE_FILEERROR = -254,		/*=== ������Ϣ�ļ����ƻ� ===*/
	E_CMS_CACHE_INVALIDCACHE = -253,	/*=== ��ЧCACHE��Ϣ ===*/
	
	/*=== ����ģ�鷵��ֵ ===*/
	E_CMS_SU_SAVEERROR = -252,			/*=== ���������ļ�ʧ�� ===*/
	E_CMS_SU_INVALIDHOMEPAGE = -251,	/*=== ��Ч��ҳ ===*/
	E_CMS_SU_INVALIDGATEWAY = -250,		/*=== ��Ч���� ===*/
	
	/*=== ��ǩģ�鷵��ֵ ===*/
	E_CMS_BM_SAVEERROR = -249,			/*=== ������ǩ�����ļ�ʧ�� ===*/
	E_CMS_BM_RECORDFULL = -248,			/*=== ��ǩ��¼���� ===*/
	E_CMS_BM_INVALIDURL = -247,			/*=== ��ЧURL ===*/
	E_CMS_BM_INVALIDTITLE = -246,		/*=== ��Ч���� ===*/
	E_CMS_BM_INVALIDID = -245,			/*=== �������ǩ������ ===*/
	
	/*=== ��ʷ��¼ģ�鷵��ֵ ===*/
	E_CMS_HISTROY_INVALIDURL = -244,	/*=== ��ЧURL��Ϣ ===*/
	
	/*=== ��ʼ��ģ�鷵��ֵ ===*/
	E_CMS_INITBROWSER_NOTFREE = -243,	/*=== ��һ�ε������Ϣδ���ͷ� ===*/
	E_CMS_INITBROWSER_SAVEPAGE = -242,	/*=== ҳ�汣��ģ���ʼ��ʧ�� ===*/
	E_CMS_INITBROWSER_INITAUTO = -241,	/*=== �����Զ�����ʼ��ʧ�� ===*/
	E_CMS_INITBROWSER_INPUTURL = -240,	/*=== URL����ģ���ʼ��ʧ�� ===*/
	E_CMS_INITBROWSER_CACHE = -239,		/*=== ����ģ���ʼ��ʧ�� ===*/
	E_CMS_INITBROWSER_BOOKMARK = -238,	/*=== ��ǩģ���ʼ��ʧ�� ===*/
	
	/*=== URL����ģ�鷵��ֵ ===*/
	E_CMS_INPUTURL_RECORDFULL = -237,	/*=== URL��¼���� ===*/
	E_CMS_INPUTURL_SAVEERROR = -236,	/*=== ��������URL��Ϣ�ļ�ʧ�� ===*/
	E_CMS_INPUTURL_INVALIDID = -235,	/*=== �����URL�б������� ===*/
	
	/*=== ҳ�汣��ģ�鷵��ֵ ===*/
	E_CMS_SAVEPAGE_INVALIDID = -234,	/*=== �����ҳ�汣���б������� ===*/
	E_CMS_SAVEPAGE_RECORDFULL = -233,	/*=== ҳ�汣���¼���� ===*/
	E_CMS_SAVEPAGE_FILEERROR = -232,	/*=== �Ѵ���Ϣ�ļ����ƻ����޷�����д���� ===*/
	
	/*=== WBMPģ�鷵��ֵ ===*/
	E_CMS_WBMP_INVALID = -231,			/*=== WBMPͼƬ�ߴ���Ч ===*/
	E_CMS_WBMP_TYPEERROR = -230,		/*=== ��WBMP��ʽ ===*/
	E_CMS_WBMP_FILEERROR = -229,		/*=== �ļ���ʧ�� ===*/
	
	/*=== ����ģ�鷵��ֵ ===*/
	E_CMS_NETWORK_HEADMESSAGE = -228,	/*=== HTTPͷ��Ϣ���� ===*/
	E_CMS_NETWORK_FILEERROR = -227,		/*=== �ļ��������� ===*/
	E_CMS_NETWORK_NEEDDOWNLOAD = -226,	/*=== ��Ҫ�������� ===*/
	E_CMS_NETWORK_UNKNOWNFILE = -225,	/*=== ��֧�ֵ������ļ����� ===*/
	E_CMS_NETWORK_DIALFAILED = -224,	/*=== ����ʧ�� ===*/
	E_CMS_NETWORK_INVALIDSOCKET = -223,	/*=== ��Ч�׽��� ===*/
	E_CMS_NETWORK_SETSOCKETFAIL = -222,	/*=== �����׽�������ʧ�� ===*/
	E_CMS_NETWORK_GETHOSTFAIL = -221,	/*=== ��������ʧ�� ===*/
	E_CMS_NETWORK_CONNECTFAIL = -220,	/*=== ���ӷ�����ʧ�� ===*/
	E_CMS_NETWORK_TCPSENDFAIL = -219,	/*=== TCP��������ʧ�� ===*/
	E_CMS_NETWORK_TCPRECVFAIL = -218,	/*=== TCP��������ʧ�� ===*/

	/*=== ����ģ�鷵��ֵ ===*/
	E_CMS_PARSER_HEADMESSAGE = -217,	/*=== HTTPͷ��Ϣ���� ===*/
	E_CMS_PARSER_DATAFILEERROR = -216,	/*=== ���������ʱ�ļ����� ===*/
	E_CMS_PARSER_GETDATAERROR = -215,	/*=== ��ȡ����������� ===*/
	E_CMS_PARSER_PARAMERROR = -214,		/*=== �ڲ��������� ===*/
	E_CMS_PARSER_UNKNOWNCHARSET = -213,	/*=== ��Ч�ַ��� ===*/
	E_CMS_PARSER_ATTRTOOLONG = -212,	/*=== ���Գ��� ===*/

	/*=== �Ű�ģ�鷵��ֵ ===*/
	E_CMS_LAYOUT_INVALID = -211,		/*=== ��ʾ������Ч ===*/
	E_CMS_LAYOUT_FEWDATA = -210,		/*=== �Ű�����ȫ����Ҫ�������� ===*/
	E_CMS_LAYOUT_SCRIPT = -209,			/*=== ��֧�ֵĽű����� ===*/
	
	/*=== ������ģ�鷵��ֵ ===*/
	E_CMS_PENDOWN_INVALID = -208,		/*=== ������Ч ===*/
	E_CMS_PENDOWN_SCRIPT = -207,		/*=== ��������Ӧ�˽ű����� ===*/

	/*=== ���ô���� ===*/
	E_CMS_BROWSER_INVALIDINPUT = -1,	/*=== ����Ƿ� ===*/
	E_CMS_BROWSER_NOMEMORY = 0,			/*=== �ڴ�ľ� ===*/

	/*=== �޴�ʱ�ķ���ֵ ===*/
	CMS_BROWSER_RET_OK = 1,				/*=== ������ȷ ===*/
	CMS_BROWSER_WMLONEVENT = 2,			/*=== WML ON�¼� ===*/
	CMS_BROWSER_WMLONFORWARD = 3,		/*=== WMLǰת�¼� ===*/
	CMS_BROWSER_WMLONBACKWARD = 4,		/*=== WML��ת�¼� ===*/
	CMS_BROWSER_WMLONTIMER = 5,			/*=== WML��ʱ���¼� ===*/
	CMS_BROWSER_CURRENTPARSEROVER = 6,	/*=== ��ǰ��ȫ��������� ===*/
	CMS_BROWSER_PARSEROVER = 7,			/*=== ��ҳȫ��������� ===*/
	CMS_BROWSER_DOWNLOADIMG = 8,		/*=== ����ͼƬ ===*/
	CMS_BROWSER_PENDOWNVALID = 9,		/*=== ��������Ӧ����Ч��URL ===*/
	CMS_BROWSER_PENDOWNEDIT = 10,		/*=== ��������Ӧ�˲����༭�¼� ===*/
	CMS_BROWSER_PENDOWNSELECT = 11,		/*=== ��������Ӧ�˿ؼ�ѡ���¼� ===*/
	CMS_BROWSER_PENDOWNREFRESH = 12,	/*=== ��������Ӧ��ˢ���¼� ===*/

	CMS_BROWSER_LAYOUTTABLE = 13,		/*=== �Ű�table�¼� ===*/
	CMS_BROWSER_ISDRAWING   = 14,
	CMS_BROWSER_DOWNLOAD    = 15,		/*=== ��Ҫ�����¼� ===*/

	CMS_BROWSER_VERSION		= 0xFFFF	/* �汾��Ϣ */
}CMS_BROWSER_RET;

#endif
