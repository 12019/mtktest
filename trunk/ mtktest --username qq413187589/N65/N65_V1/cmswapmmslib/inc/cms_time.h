#ifndef __INC_CMS_TIME_H__
#define __INC_CMS_TIME_H__

#include <time.h>

#ifndef TI //  Modified by TIPrj[2005/6/29]
#if defined( __cplusplus ) && __cplusplus
extern "C" {
#endif
#endif

/* ��Ŀ��ƽ̨ʵ�ֵĺ���. ���� 1970������������. */
long			CmsGetCurrentTime( void );

char *	cms_asctime(const struct tm *);
char *	cms_ctime(const time_t *);
clock_t cms_clock(void);
double	cms_difftime(time_t, time_t);
struct tm * cms_gmtime(const time_t *);
struct tm * cms_localtime(const time_t *);
time_t	cms_mktime(struct tm *);
size_t	cms_strftime(char *, size_t, const char *,const struct tm *);
time_t	cms_time(time_t *);

/* ���õ�ǰʱ��������Ϊ��Ҫ���������������й�( +8 �� ) 8 * 3600. */
void	cms_settimezone( int secadjust );

#ifndef	__VW_NHACKSYM_TIME_FUNCTION__
#	define asctime( tm )				cms_asctime( (tm) )
#	define ctime( tt )					cms_ctime( (tt) )
#	define clock()						cms_clock()
#	define difftime( a , b )			cms_difftime( (a) , (b) )
#	define gmtime( tt )					cms_gmtime( (tt) )
#	define localtime( tt )				cms_localtime( (tt) )
#	define mktime( tm )					cms_mktime( (tm) )
#	define strftime( s , m , f , t )	cms_strftime( (s) , (m) , (f) , (t) )
#	define time( tt )					cms_time( (tt) )
#endif

#ifndef TI //  Modified by TIPrj[2005/6/29]
#if defined( __cplusplus ) && __cplusplus
};
#endif
#endif
#endif
