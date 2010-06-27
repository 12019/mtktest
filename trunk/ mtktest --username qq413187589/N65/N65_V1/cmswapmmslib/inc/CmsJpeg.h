/**************************************************************************
Copyright (c) 2001-2002 MobileSoft Corporation All Rights Reserved.
	Environment:		Windows 2000 
	Created:			20:5:2003   8:48
	Filename: 			CmsJpegLib.h
	Author:				teng yong
	E_Mail:				teng.yong@sohu.com/yongt@moiblesoft.com.cn	
	Declare:
    This document contains information proprietary to MobileSoft Technology
	(Nanjing),Corp. Transmittal, receipt, or possession of this document 
	does not express,license, or imply any rights to use, sell, design, or
	manufacture from this information. No reproduction, publication, or 
	disclosure of this	information,in whole or in part, shall be made without
	prior written authorization from  an officer of MobileSoft Technology 
	(NanJing) Corp.
	
	Abstract:			Jpeg api function
	Modify records: 
	Who           When		Where       For What       Status
	TengYong	  15:10     NanJing     Create         Finished 
**************************************************************************/

#ifndef CmsJpegLib_h_
#define CmsJpegLib_h_

/* �ص����к��� */
extern int _ex_CmsBrwDrawPixel(unsigned char *DataBuf, int Height, int Width, int Component,
					int xPosition, int yPosition, double x_proportion, double y_proportion,int x_right);

typedef		int (*jpegdrawproc)(unsigned char *, int,int,int,int,int,double);//callback used to jpeg draw 

#ifndef JPEGDRAWPROC
#define JPEGDRAWPROC
typedef		int (*_ex_jpegdrawproc)(unsigned char *, int,int,int,	\
									int,int,double,double);//callback used to jpeg draw 
#endif  // Modified by TIPrj[2005/6/29]

/********************************************************************
 int GetJpegInfo(char *filename,int screenwidth,int *pwidth,int *pheight)
 Description:	 ���screenwidth == -1���õ�ʵ�ʵĳ�����߶ȣ�����õ�ѹ��
                ��ĳ�����߶ȣ�
 Param		:	 (IN)filename;   Jpeg�ļ����ƣ�
                 (IN)screenwidth;��ʾ��Ļ�Ŀ�ȣ�
                 (OUT)pwidth;    ͼƬ��ȣ�
                 (OUT)pheight;   ͼƬ�߶ȣ�
 Return		:	0; if OK;
				-1;if Error. pwidth == NULL || pheight == NULL 
                || screenwidth== 0 || filename == NULL;
 Date		:	2003-7-30
 Author		:	����; yongt@mobilesoft.com.cn
*********************************************************************/
int GetJpegInfo(char *filename,int screenwidth,int *pwidth,int *pheight);

/***************************************************************************
 int DrawJpeg(char *filename,void * pDrawPixel);
 Description:	��ʾһ��JPEG�����ļ�.
 Param		:	(IN)filename, ����ʾ���ļ�����;
				(IN)pDrawPixel, ��һ��JPEG���ݵĻص�����;
				(IN)xPosition, x����ԭ������;
				(IN)yPosition, y����ԭ������;
 Return		:	0; if OK;
				-1;if Error;
 Date		:	2003-6-9
 Author		:	����; yongt@mobilesoft.com.cn
****************************************************************************/
int DrawJpeg(char *filename,jpegdrawproc pDrawPixel,int xPosition,int yPosition,int screenwidth);


/*************************************************************************** 
 Description:	extend ��ʾһ��JPEG�����ļ�,�����ڳ������ȷ�����������.
 Param		:	(IN)filename, ����ʾ���ļ�����;
				(IN)pDrawPixel, ��һ��JPEG���ݵĻص�����;
				(IN)xPosition, x����ԭ������;
				(IN)yPosition, y����ԭ������;
				(IN)display_width; display width
				(IN)display_height;display height

 Return		:	0; if OK;
				-1;if Error;

 Date		:	2003-6-9
 Author		:	����; yongt@mobilesoft.com.cn
****************************************************************************/
int _ex_DrawJpeg(char *filename,
			     _ex_jpegdrawproc pDrawPixel,
				 int xPosition,
				 int yPosition,
				 int display_width,
				 int display_height,
				 int x_right);

#endif