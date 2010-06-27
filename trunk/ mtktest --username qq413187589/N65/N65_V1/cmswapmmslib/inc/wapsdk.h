#ifndef WAPSDK_H
#define WAPSDK_H

#include "Cms_Css.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    int		cms_PrintHZOnScr(int x, int y, unsigned char* str, int isAnchor);
    int		cms_DrawLine(int x, int y, int length, int Horizontal);
    int		cms_DrawRect(int x, int y, int width, int height, int color);
    int		cms_ClearRect(int x, int y, int width, int height);
    int		cms_DrawCycle(int x, int y, int radius, int fill);
    int		cms_DrawPiex( int x, int y, unsigned int color );
    int cms_Put565ImgDataOnScr(int x, int y, unsigned char* ImgData );
    
    int cms_StartTimer( int timer_id,			/* (out) timer id */
						  unsigned short time_out );	/* timer period */
    void cms_StopTimer(int timerid);    
    int Cms_DisplayString (unsigned char font_type, /*(in)�������� */
					   int x, /*(in) ��ʼ��ĺ�����*/
                       int y, /*(in) ��ʼ���������*/
                       unsigned char *str, /* (in)����ʾ���ַ���*/
                       unsigned int color, /*(in)������ɫ */
                       unsigned char Mark, /*(in)�Ƿ�����ʾ*/
                       int isAnchor);/*(in)�Ƿ����»���*/
    
    int Cms_MFCDrawColorLine (LineType_t  type, /*(in)����*/
					   unsigned int width, /*�ߵĿ��*/
                       unsigned int color,  /*�ߵ���ɫ*/
                       int bx, /*(in)��ʼ�������*/
                       int by, /*(in)��ʼ��������*/
                       int ex, /*(in)�յ������*/
                       int ey); /*(in)�յ�������*/
    
    void Cms_DrawBackGroundColor( unsigned int x, 
        unsigned int y, 
        unsigned int width, 
        unsigned int height,
        unsigned int BackGroudColor);
    void Cms_Browser_DrawTitle(unsigned char* title);

    void TraceInfo(char* str, ...);
    void Cms_DisplaySoftKey(unsigned char* pls, unsigned char* Rls);
    void AppExit(void);
    void Cms_Brw_SaveFile(char * data,int datalen,int type,int forwardtype);

    
#ifdef __cplusplus 
}
#endif

#endif // WAPSDK_H