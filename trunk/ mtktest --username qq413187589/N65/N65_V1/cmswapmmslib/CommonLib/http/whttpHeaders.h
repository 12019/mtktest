/*================================================================

 C   M O D U L E   F I L E

 (c) Copyright MobileSoft Technology (NanJing) Co.,LTD. 2000-2004
 ALL RIGHTS RESERVED

================================================================

��������		: WAP2.0 HTTP STACK
 
�ļ���			: whttpHeaders.h

��������		: �����ļ����ͺ궨��

����޸�ʱ��	: 12/10/2004

�����д��Ա	: Li Shouming;shoumingl@mobilesoft.com.cn

================================================================*/
WHTTP_HEADERS_TYPE("Cache-control",Deal_Cache_Control_Header)
WHTTP_HEADERS_TYPE("Content-Length",Deal_Content_Length_Header)
WHTTP_HEADERS_TYPE("Set-Cookie",Deal_Set_Cookie_Header)
//WHTTP_HEADERS_TYPE("Connection",Deal_Connection_Header)
WHTTP_HEADERS_TYPE("Content-Type",Deal_Content_Type_Header)
WHTTP_HEADERS_TYPE("Content-Encoding",Deal_Content_Encoding_Header)
WHTTP_HEADERS_TYPE("Date",Deal_Date_Header)
WHTTP_HEADERS_TYPE("Content-Location", Deal_Content_Location_Header)

#undef WHTTP_HEADERS_TYPE
