/************************************************************************* 
 * Copyright (c) 2000-2004 MobileSoft Corporation All Rights Reserved.	
 * ��  �ڣ�  2004-9-26   	
 * ��  �ߣ�  ����; yongt@mobilesoft.com.cn   
 * ��  ����  cmspictogram.h 	    	
 * ��  ����  pictogram header file 
 ************************************************************************/
#ifndef _CMSPICTOGRAM_H
#define _CMSPICTOGRAM_H



#ifdef __cplusplus
extern "C"{
#endif
	


int Cms_IsPictScheme( char *abs_URI );
char *Cms_GetPictoClassName( char *abs_URI );
	
#ifdef __cplusplus
}
#endif



#endif
