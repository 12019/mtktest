/************************************************************************* 
 * Copyright (c) 2000-2003 MobileSoft Corporation All Rights Reserved.	
 * ��  �ڣ�  2004-3-31   	
 * ��  �ߣ�  ����; yongt@mobilesoft.com.cn   
 * ��  ����  memory_test.h 	    	
 * ��  ����		���ڲ����ڴ�й¶�������	
 * �޸ļ�¼�� 
      ��  Ա��   ԭ     ��                   ״   ̬��      ��   �ڣ�
      ����      ����                          ���           2004-3-31
 ************************************************************************/
#ifndef MEMORY_TEST_H_
#define MEMORY_TEST_H_



#define my_malloc(x)	test_memory_malloc(x,__FILE__,__LINE__)
#define my_free(x)		test_memory_free(x, __FILE__, __LINE__, 1)
#define my_bogusfree(x) test_memory_free(x, __FILE__, __LINE__, 0)

#ifndef TI //  Modified by TIPrj[2005/6/29]
#if defined( __cplusplus  ) && __cplusplus
extern "C" {
#endif
#endif
	
	
/************************************************************************* 
 * ��  ����   ���Է����ڴ�
 * ����ֵ��   ������ڴ��ַ.  
 * ȫ������   g_memory_info;
          
 * ��  �ڣ�  2004-3-31
 * ��  �ߣ�  ����; yongt@mobilesoft.com.cn
 ************************************************************************/
void * test_memory_malloc(unsigned int size,	/* ��������ڴ��С */ 
						  char *file,			/* �����ļ� */
						  int line);


/************************************************************************* 
 * ��  ����   �����ͷ��ڴ�
 * ����ֵ��    
 * ȫ������  g_memory_info;
          
 * ��  �ڣ�  2004-3-31
 * ��  �ߣ�  ����; yongt@mobilesoft.com.cn
 ************************************************************************/
void test_memory_free(void *p_object , char* file, int line, int free_flag);


/************************************************************************* 
 * ��  ����   ��ʼ�������ڴ�;
 * ����ֵ��  1/0;  
 * ȫ������  g_memory_info;
          
 * ��  �ڣ�  2004-3-31
 * ��  �ߣ�  ����; yongt@mobilesoft.com.cn
 ************************************************************************/
short init_memory_test( void );


/************************************************************************* 
 * ��  ����   ��ʼ�������ڴ�;
 * ����ֵ��    g_memory_info
 * ȫ������  
          
 * ��  �ڣ�  2004-3-31
 * ��  �ߣ�  ����; yongt@mobilesoft.com.cn
 ************************************************************************/
void unload_memory_test( void );

#ifndef TI //  Modified by TIPrj[2005/6/29]
#if defined( __cplusplus  ) && __cplusplus
}
#endif
#endif

#endif

