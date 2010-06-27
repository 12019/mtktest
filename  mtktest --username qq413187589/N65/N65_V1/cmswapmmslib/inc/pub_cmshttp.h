#ifndef _CMSHTTP_H
#define _CMSHTTP_H
/*=== http�����ļ����Ͷ��� ===*/
typedef enum 
{
	CMS_HTTP_CONTENT_ML					= 0,				/*=== ������� ===*/
	CMS_HTTP_TEXT_PLAIN,									/*��ͨ�ı�����*/
	CMS_HTTP_CONTENT_CSS,								/*=====CSS=========*/
	CMS_HTTP_CONTENT_HTML,								/* text/html content type */
	
	CMS_HTTP_CONTENT_GIF					= 20,			/*=== GIF ===*/
	CMS_HTTP_CONTENT_JPEG,								/*=== JPEG ===*/
	CMS_HTTP_CONTENT_WBMP,								/*=== WBMP ===*/
	CMS_HTTP_CONTENT_BMP,								/*=== BMP ===*/
	CMS_HTTP_CONTENT_PNG,								/*=== PNG ===*/
	CMS_HTTP_CONTENT_IMAGE_ZDD,							/*Download descriptor*/
	CMS_HTTP_CONTENT_IMAGE_VIS,							/*�й�VIS�� mime type*/
	CMS_HTTP_CONTENT_IMAGE_DRM,							/*�й�drm�� mime type*/
	CMS_HTTP_CONTENT_IMAGE_BILL,						/*�Ʒ���Ϣ*/
	CMS_HTTP_CONTENT_IMAGE_STL,							/*�й�drm�� mime type*/
	CMS_HTTP_CONTENT_CHAOTEX_CIM,						/*=== mFlash ===*/
	CMS_HTTP_CONTENT_DZD,								/*ѧϰ���μ�*/
	CMS_HTTP_CONTENT_IMAGE_KJJ,							/*Lenovo KJJ			*///chaozhu.zhou add for kjj
	
	CMS_HTTP_CONTENT_MIDI				= 50,			/*=== Midi ===*/
	CMS_HTTP_CONTENT_AMR,								/*=== ARM music ===*/
	CMS_HTTP_BROWSER_MUSIC_SMAF,
	CMS_HTTP_CONTENT_MP3,
	CMS_HTTP_CONTENT_MPEG4,
	CMS_HTTP_CONTENT_AAC,
	CMS_HTTP_CONTENT_WMA,
	CMS_HTTP_CONTENT_FJAD				= 100,
	CMS_HTTP_CONTENT_FJAR,
	CMS_HTTP_CONTENT_WMLSCRIPT,							/*====wmlscript===*/
	CMS_HTTP_CONTENT_WMLSCRIPTC,						/*====wmlscriptc===*/
	
	CMS_HTTP_CONTENT_DRM_MESSAGE    	= 150,			/*=====DRM MESSAGE== =======*/
	CMS_HTTP_CONTENT_DRM_CONTENT,						/*=====DRM CONTENT== =======*/
	CMS_HTTP_CONTENT_DRM_RIGHTS_XML,					/*=====DRM  ��Ȩ�����ļ�== =======*/
	CMS_HTTP_CONTENT_DRM_RIGHTS_WBXML,				/*=====DRM  ��Ȩ�����ļ�����������== =======*/
	CMS_HTTP_CONTENT_DRM_XWAV,							/*=== audio/x-wav===*/
	
	CMS_HTTP_BROWER_SETTING_XML		= 200,			/*http provisioning xml doc*/
	CMS_HTTP_BROWER_SETTING_WBXML,						/*�����������XML�ļ�*/
	CMS_HTTP_BROWER_BOOKMARK_SETTING_XML,				/*��ǩ����XML*/
	CMS_HTTP_BROWER_BOOKMARK_SETTING_WBXML,			/*��ǩ������WBXML*/
	CMS_HTTP_BROWSER_SYNCML_XML,
	CMS_HTTP_BROWSER_SYNCML_WBXML,
	CMS_HTTP_CONTENT_MSVG,								/*=== Mobile SVG ===*/
	
	CMS_HTTP_OCTET_STREAM				= 252,			/*=== δ֪�����ļ�STREAM ===*/
	CMS_HTTP_CONTENT_DLING_FILE			= 253,			/*=== ����δ֪�����ļ� ===*/
	CMS_HTTP_CONTENT_DLING_IMG			= 254,			/*=== ����ͼƬ��� ===*/
	CMS_HTTP_CONTENT_DLFAILED			= 255			/*=== ����ʧ�ܵ��ļ� ===*/
	
}Cms_ContentType_e;
#endif
