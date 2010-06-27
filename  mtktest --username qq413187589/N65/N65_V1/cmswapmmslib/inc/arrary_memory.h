/************************************************************************* 
 * Copyright (c) 2000-2003 MobileSoft Corporation All Rights Reserved.	
 * ��  �ڣ�  2004-4-23   	
 * ��  �ߣ�  ����; yongt@mobilesoft.com.cn   
 * ��  ����  arrary_memory.h 	    	
 * ��  ����	��������ʵ�־�̬�ڴ��ʹ�á�		
 * �޸ļ�¼�� 
      ��  Ա��   ԭ     ��                   ״   ̬��      ��   �ڣ�
      ����      ����                          ���           2004-4-23
 ************************************************************************/
#ifndef ARRARY_MEMORY_H_
#define ARRARY_MEMORY_H_


/* Ŀ��ͷ�ļ� */
#include "cms_sysfun.h"
#include "cms_debug.h"

#define CACHE_OPEN_TRACE	/* trace ���� */



#ifdef WIN32	/* win32ƽ̨ */

	#ifdef CACHE_OPEN_TRACE	/* ��trace */

		#define cache_trace		cms_trace
		#define cache_trace_all_memory() _cache_trace_all_memory()		

	#else	/* �ر�trace */

		#define cache_trace			
		#define cache_trace_all_memory()
		
	#endif

	#define cache_assert(x)		/* ��Ϻ� */
	
#else	/* Ŀ��ƽ̨ */

	#ifdef CACHE_OPEN_TRACE	/* ��trace */

		#define cache_trace		cms_trace
		#define cache_trace_all_memory() _cache_trace_all_memory()

	#else /* �ر�trace */

		#define cache_trace		
		#define cache_trace_all_memory() 

	#endif

	#define cache_assert(x)		/* ��Ϻ� */


#endif



#define UNIT_USED	1	/* ʹ�ñ�� */
#define UNIT_FREE	0	/* δʹ�ñ�� */

#define IS_ZERO(  X  )		( 0 == X )					/* �Ƿ�Ϊ�� */
#define IS_USED_LEFTBIT(  X  )	( X & 0x80000000 )		/* ��������λ�Ƿ�ʹ�ã� */
#define MOVE_LEFTBIT(  X  )	( ( X << 1 ) & 0xfffffffe )	/* ����һλ */
#define IS_USED_RIGHTBIT(  X  )	( X & 0x00000001 )		/* ��������λ�Ƿ�ʹ�ã� */
#define MOVE_RIGHTBIT(  X  )	( ( X >> 1 ) & 0x7fffffff )	/* ����һλ */
#define LEFT_FIND	1	/* �������Ҳ��� */
#define RIGHT_FIND	0	/* ����������� */


/* ö��cache���� */
typedef enum
{
	cache_pb_t = -2,		/* ��չ��pb���� */
	cache_not_find = -1,	/* û�д洢�ռ� */
	cache_8_t  = 0,			/* 8���ֽڵ�cache */
	cache_16_t ,			/* 16���ֽڵ�cache */
	cache_20_t ,			/* 20���ֽڵ�cache */
	cache_24_t ,			/* 24���ֽڵ�cache */
	cache_100_t ,			/* 100���ֽڵ�cache */
#if 0
	cache_100_t ,			/* 100���ֽڵ�cache */
	cache_300_t ,			/* 300���ֽڵ�cache */
	cache_600_t ,			/* 600���ֽڵ�cache */
	cache_1640_t ,			/* 1640(1.6k)���ֽڵ�cache */
	cache_2560_t,			/* 2560(2.5k)���ֽڵ�cache */
	cache_6k_t,				/* 6144(6k)���ֽڵ�cache */
	cache_10k_t,			/* 10240(10k)���ֽڵ�cache */
	cache_20k_t,			/* 20480(20k)���ֽڵ�cache */
#endif
	cache_dynamic_t,		/* ��̬�ڴ��������� */

	cache_totle_num		/* cache totle num */  //  Modified by TIPrj[2005/6/30]
}e_cache;


#define MAX_BITMAP_NUM	23	/* ����bitmap������,��󹲼�320���洢��Ԫ */
#define CACHE_BITMAP	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0	/* ��¼�ڴ�ʹ�õ���� */

/*����cache���ݽṹ */
typedef struct _cache_t
{
	e_cache	 cache_type;		/*cache ���� */
	
	
	unsigned short	unit_len;	/* ��Ԫ���� */
	short		    free_num;	/* ���е�Ԫ��Ŀ */

	int			    bitmap_num;	/* bitmap��Ŀ */
	unsigned int	bitmap[MAX_BITMAP_NUM];	/* �ڴ�bitmap */
	unsigned int base_pointer;	/* ��ָ���ַ */
	unsigned int end_pointer;	/* βָ���ַ */

}cache_t;


/* 16 byte cache �������� */

#define CACHE_8_UNIT_LEN	8	/* �����ʼ��cache_8_t��Ԫ���� */
#define CACHE_8_BITMAP_NUM	16	/* ����cache_8 bitmap����,ҪС��MAX_BITMAP_NUM ��320��Ԫ*/
#define CACHE_8_FREE_NUM	(CACHE_8_BITMAP_NUM*sizeof(unsigned int)*8)
#define CACHE_8_SIZE	( CACHE_8_UNIT_LEN*CACHE_8_FREE_NUM )	/* cache size */

#define CACHE_8_BASE_POINTER	((unsigned int)cache_base_8)
#define CACHE_8_END_POINTER	(CACHE_8_BASE_POINTER + CACHE_8_SIZE )


/* 16 byte cache �������� */
#define CACHE_16_UNIT_LEN	16	/* �����ʼ��cache_16_t��Ԫ���� */
#define CACHE_16_BITMAP_NUM	1	/* ����cache_16 bitmap����,ҪС��MAX_BITMAP_NUM ��320��Ԫ*/
#define CACHE_16_FREE_NUM	(CACHE_16_BITMAP_NUM*sizeof(unsigned int)*8)
#define CACHE_16_SIZE	( CACHE_16_UNIT_LEN*CACHE_16_FREE_NUM )	/* cache size */

#define CACHE_16_BASE_POINTER	((unsigned int)cache_base_16)
#define CACHE_16_END_POINTER	(CACHE_16_BASE_POINTER + CACHE_16_SIZE )


/* 20 byte cache �������� */
#define CACHE_20_UNIT_LEN	20	/* �����ʼ��cache_20_t��Ԫ���� */
#define CACHE_20_BITMAP_NUM	16	/* ����cache_20 bitmap����,ҪС��MAX_BITMAP_NUM ��320��Ԫ*/
#define CACHE_20_FREE_NUM	(CACHE_20_BITMAP_NUM*sizeof(unsigned int)*8)
#define CACHE_20_SIZE	( CACHE_20_UNIT_LEN*CACHE_20_FREE_NUM )	/* cache size */

#define CACHE_20_BASE_POINTER	((unsigned int)cache_base_20)
#define CACHE_20_END_POINTER	(CACHE_20_BASE_POINTER + CACHE_20_SIZE )


/* 32 byte cache �������� */
#define CACHE_24_UNIT_LEN	24	/* �����ʼ��cache_24_t��Ԫ���� */
#define CACHE_24_BITMAP_NUM	10	/* ����cache_24 bitmap����,ҪС��MAX_BITMAP_NUM ��160��Ԫ */
#define CACHE_24_FREE_NUM	(CACHE_24_BITMAP_NUM*sizeof(unsigned int)*8)
#define CACHE_24_SIZE	( CACHE_24_UNIT_LEN*CACHE_24_FREE_NUM )	/* cache size */

#define CACHE_24_BASE_POINTER	((unsigned int)cache_base_24)
#define CACHE_24_END_POINTER	(CACHE_24_BASE_POINTER + CACHE_24_SIZE )


/* 100 byte cache �������� */
#define CACHE_100_UNIT_LEN	100	/* �����ʼ��cache_100_t��Ԫ���� */
#define CACHE_100_BITMAP_NUM	1	/* ����cache_100 bitmap����,ҪС��MAX_BITMAP_NUM ��128��Ԫ */
#define CACHE_100_FREE_NUM	(CACHE_100_BITMAP_NUM*sizeof(unsigned int)*8)
#define CACHE_100_SIZE	( CACHE_100_UNIT_LEN*CACHE_100_FREE_NUM )	/* cache size */

#define CACHE_100_BASE_POINTER	((unsigned int)cache_base_100)
#define CACHE_100_END_POINTER	(CACHE_100_BASE_POINTER + CACHE_100_SIZE )

#if 0
/* 100 byte cache �������� */
#define CACHE_100_UNIT_LEN	100	/* �����ʼ��cache_100_t��Ԫ���� */
#define CACHE_100_BITMAP_NUM	2	/* ����cache_100 bitmap����,ҪС��MAX_BITMAP_NUM ��64��Ԫ */
#define CACHE_100_FREE_NUM	(CACHE_100_BITMAP_NUM*sizeof(unsigned int)*8)
#define CACHE_100_SIZE	( CACHE_100_UNIT_LEN*CACHE_100_FREE_NUM )	/* cache size */

#define CACHE_100_BASE_POINTER	((unsigned int)cache_base_100)
#define CACHE_100_END_POINTER	(CACHE_100_BASE_POINTER + CACHE_100_SIZE )



/* 300 byte cache �������� */
#define CACHE_300_UNIT_LEN	300	/* �����ʼ��cache_300_t��Ԫ���� */
#define CACHE_300_BITMAP_NUM	1	/* ����cache_300 bitmap����,ҪС��MAX_BITMAP_NUM ��15��Ԫ */
#define CACHE_300_FREE_NUM	(15)	/* ������Ϊ15���洢��Ԫ */
#define CACHE_300_SIZE	( CACHE_300_UNIT_LEN*CACHE_300_FREE_NUM )	/* cache size */

#define CACHE_300_BASE_POINTER	((unsigned int)cache_base_300)
#define CACHE_300_END_POINTER	(CACHE_300_BASE_POINTER + CACHE_300_SIZE )


/* 600 byte cache �������� */
#define CACHE_600_UNIT_LEN	600	/* �����ʼ��cache_600_t��Ԫ���� */
#define CACHE_600_BITMAP_NUM	1	/* ����cache_600 bitmap����,ҪС��MAX_BITMAP_NUM ��7��Ԫ */
#define CACHE_600_FREE_NUM	(10)	/* ������Ϊ7���洢��Ԫ */
#define CACHE_600_SIZE	( CACHE_600_UNIT_LEN*CACHE_600_FREE_NUM )	/* cache size */

#define CACHE_600_BASE_POINTER	((unsigned int)cache_base_600)
#define CACHE_600_END_POINTER	(CACHE_600_BASE_POINTER + CACHE_600_SIZE )


/* 1640 byte cache �������� */
#define CACHE_1640_UNIT_LEN	1500	/* �����ʼ��cache_1640_t��Ԫ���� */
#define CACHE_1640_BITMAP_NUM	1	/* ����cache_1640 bitmap����,ҪС��MAX_BITMAP_NUM ��4��Ԫ */
#define CACHE_1640_FREE_NUM	(16)	/* ������Ϊ16���洢��Ԫ */
#define CACHE_1640_SIZE	( CACHE_1640_UNIT_LEN*CACHE_1640_FREE_NUM )	/* cache size */

#define CACHE_1640_BASE_POINTER	((unsigned int)cache_base_1640)
#define CACHE_1640_END_POINTER	(CACHE_1640_BASE_POINTER + CACHE_1640_SIZE )


/* 1640 byte cache �������� */
#define CACHE_2560_UNIT_LEN	2560	/* �����ʼ��cache_2560_t��Ԫ���� */
#define CACHE_2560_BITMAP_NUM	1	/* ����cache_2560 bitmap����,ҪС��MAX_BITMAP_NUM ��4��Ԫ */
#define CACHE_2560_FREE_NUM	(8)	/* ������Ϊ8���洢��Ԫ */
#define CACHE_2560_SIZE	( CACHE_2560_UNIT_LEN*CACHE_2560_FREE_NUM )	/* cache size */

#define CACHE_2560_BASE_POINTER	((unsigned int)cache_base_2560)
#define CACHE_2560_END_POINTER	(CACHE_2560_BASE_POINTER + CACHE_2560_SIZE )


/* 6k byte cache �������� */
#define CACHE_6k_UNIT_LEN	6144	/* �����ʼ��cache_6k_t��Ԫ���� */
#define CACHE_6k_BITMAP_NUM	1	/* ����cache_6k bitmap����,ҪС��MAX_BITMAP_NUM ��5��Ԫ */
#define CACHE_6k_FREE_NUM	(5)	/* ������Ϊ5���洢��Ԫ */
#define CACHE_6k_SIZE	( CACHE_6k_UNIT_LEN*CACHE_6k_FREE_NUM )	/* cache size */

#define CACHE_6k_BASE_POINTER	((unsigned int)cache_base_6k)
#define CACHE_6k_END_POINTER	(CACHE_6k_BASE_POINTER + CACHE_6k_SIZE )


/* 10k byte cache �������� */
#define CACHE_10k_UNIT_LEN	10240	/* �����ʼ��cache_10k_t��Ԫ���� */
#define CACHE_10k_BITMAP_NUM	1	/* ����cache_10k bitmap����,ҪС��MAX_BITMAP_NUM ��4��Ԫ */
#define CACHE_10k_FREE_NUM	(2)	/* ������Ϊ2���洢��Ԫ */
#define CACHE_10k_SIZE	( CACHE_10k_UNIT_LEN*CACHE_10k_FREE_NUM )	/* cache size */

#define CACHE_10k_BASE_POINTER	((unsigned int)cache_base_10k)
#define CACHE_10k_END_POINTER	(CACHE_10k_BASE_POINTER + CACHE_10k_SIZE )


/* 20k byte cache �������� */
#define CACHE_20k_UNIT_LEN	20480	/* �����ʼ��cache_20k_t��Ԫ���� */
#define CACHE_20k_BITMAP_NUM	1	/* ����cache_20k bitmap����,ҪС��MAX_BITMAP_NUM ��4��Ԫ */
#define CACHE_20k_FREE_NUM	(1)	/* ������Ϊ1���洢��Ԫ */
#define CACHE_20k_SIZE	( CACHE_20k_UNIT_LEN*CACHE_20k_FREE_NUM )	/* cache size */

#define CACHE_20k_BASE_POINTER	((unsigned int)cache_base_20k)
#define CACHE_20k_END_POINTER	(CACHE_20k_BASE_POINTER + CACHE_20k_SIZE )


#endif

/* dynamic cache �������� */
#define CACHE_dynamic_UNIT_LEN	1//1500	/* �����ʼ��cache_dynamic_t��Ԫ���� */
#define CACHE_dynamic_BITMAP_NUM 1//	3	/* ����cache_dynamic bitmap����,ҪС��MAX_BITMAP_NUM ��96��Ԫ */
#define CACHE_dynamic_FREE_NUM	(1)//CACHE_dynamic_BITMAP_NUM*sizeof(unsigned int)*8)	/* ������Ϊ1���洢��Ԫ */
#define CACHE_dynamic_SIZE	( CACHE_dynamic_UNIT_LEN*CACHE_dynamic_FREE_NUM )	/* cache size */

#define CACHE_dynamic_BASE_POINTER	((unsigned int)cache_base_dynamic)
#define CACHE_dynamic_END_POINTER	(CACHE_dynamic_BASE_POINTER + CACHE_dynamic_SIZE )

#define AR_DYNAMIC_NO_FREE_POS	( -1 )	/* ��̬�ڴ�û�п���λ�� */	
#define AR_DYNAMIC_MAX_SIZE	( CACHE_dynamic_SIZE-CACHE_dynamic_UNIT_LEN)	/* ���̬���ڴ� */
#define AR_DYNAMIC_MIN_SIZE	800	/* ��С��̬���ڴ� */
#define AR_DYNAMIC_MID_SIZE ( 50176 ) /* 49*1024 ��̬�ڴ��м���ֵ */
#define DYNAMIC_CAL_UNIT_NUM( size ) (size/CACHE_dynamic_UNIT_LEN+1) /*�������趯̬�ڴ浥Ԫ���� */

/* phone book (pb) cache �������� */
#define CACHE_PB_UNIT_LEN	44	/* �����ʼ�� phone book ��Ԫ���� */
#define CACHE_PB_BITMAP_NUM	0	/* ����cache_PB bitmap����,512��Ԫ*/
#define CACHE_PB_FREE_NUM	(1)//CACHE_PB_BITMAP_NUM*sizeof(unsigned int)*8)
#define CACHE_PB_SIZE	( CACHE_PB_UNIT_LEN*CACHE_PB_FREE_NUM )	/* cache size */

#define CACHE_PB_BASE_POINTER	((unsigned int)cache_base_PB)
#define CACHE_PB_END_POINTER	(CACHE_PB_BASE_POINTER + CACHE_PB_SIZE )


/* �������λ�õ�ƫ���� */
#define CACHE_OFFSET(cache_type,free_pos) ( g_ar_cache[cache_type].unit_len*free_pos)
/* ����ƫ�����Ĵ洢λ�� */
#define CACHE_POS( cache_type, cache_pointer ) ( (cache_pointer-g_ar_cache[cache_type].base_pointer)/g_ar_cache[cache_type].unit_len)
/* �����Ƿ��д洢�ռ� */ 
#define CACHE_IS_HAVE_FREE_ROOM( cache_type ) ( g_ar_cache[cache_type].free_num > 0 )


void *array_alloc_by_type( e_cache cache_type );

#endif