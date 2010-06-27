#ifndef __GIF_H__
#define __GIF_H__

#define GIF_MAXCOLORS	256

/************************************************************/
/*					Gif���ݽṹ								*/
/************************************************************/
typedef struct tagCOLOR
{
	char red;
	char green;
	char blue;
	//CENT_FILL_FIELD1
} GIFColor;

typedef enum {
	gif_image, 
	gif_comment, 
	gif_text
} GIFStreamType;

typedef enum {
	gif_no_disposal = 0,
	gif_keep_disposal = 1, 
	gif_color_restore = 2, 
	gif_image_restore = 3
} GIFDisposalType;

typedef struct {
	int		transparent;	/* transparency index           */
	int		delayTime;	    /* Time in 1/100 of a second    */
	int		inputFlag;	    /* wait for input after display */
	GIFDisposalType	disposal;
} GIF89info;

typedef struct GIFData {
	GIF89info	info;
	int		x, y;
	int		width, height;
	GIFStreamType	type;
	union unData{
		struct tagImage{
			int		cmapSize;
			unsigned char	cmapData[GIF_MAXCOLORS][3];
			unsigned char	*data;
			int		interlaced;
		} image;
		struct tagText{
			int	fg, bg;
			int	cellWidth, cellHeight;
			int	len;
			char	*text;
		} text;
		struct tagComment{
			int	len;
			char	*text;
		} comment;
	} data;

	struct GIFData	*next;
} GIFData;

typedef struct {
	int		width, height;

	int		colorResolution;
	int		colorMapSize;
	int		cmapSize;
	unsigned char	cmapData[GIF_MAXCOLORS][3];

	int		background;
	int		aspectRatio;

	GIFData		*data;
} GIFStream;

/* Revised by Longqiangl 2003-12-22*/
//GIFData *GIFReadSlide(FILE_HANDLE fd);
char GIFReadSlide(FILE_HANDLE fd,GIFData **pFrame);

GIFStream *GIFReadHead(FILE_HANDLE fd);


typedef struct _tagGifInfo{
    char *filename;         /***	gif�ļ�����  ***/    
    int screenwidth;        /***	��ʾ��Ļ�Ŀ��***/
    
    double proportion;      /***	gifѹ������  ***/    
    int bsingleframe;       /***	0:��֡��1����֡  ***/        
    int width;              /***	gif�����Ŀ��  ***/    
    int height;             /***	gif�����ĸ߶�  ***/
    int proporwidth;        /***	gif����ѹ����Ŀ��  ***/
    int proporheight;       /***	gif����ѹ����ĸ߶�  ***/    
}GifInfo_t;

/***************************************************************************
 int LoadGif(void);
 Description:	����Gif��;
 Param		:	NULL;
 Return		:	0; if OK;
				-1;if Error;
 Date		:	2003-6-9
 Author		:	����; yongt@mobilesoft.com.cn
****************************************************************************/
int LoadGif(void);

/***************************************************************************
 int UnLoadGif(void) ;
 Description:	�˳�Gif��
 Param		:	NULL;
 Return		:	0; if OK;
				-1;if Error;
 Date		:	2003-6-9
 Author		:	����; yongt@mobilesoft.com.cn
****************************************************************************/
int UnLoadGif(void);

/********************************************************************
 int GetGifInfo(GifInfo_t *pGifinfo)
 Description:   ���gif������������Ϣ;
 Param		:	(IN/OUT)��  gif������������Ϣ;
 Return		:	0��if Ok;
                -1;if Error;

 Date		:	2003-7-21
 Author		:	����; yongt@mobilesoft.com.cn
*********************************************************************/
int GetGifInfo(GifInfo_t *pGifinfo);






/***************************************************************************
 int	GIF_Verify_Legal_File(char *);	 
 Description:	�ж�������ļ��Ƿ�Ϊgif�ļ�����;
 Param		:	(IN)file;Gif�ļ�;
 Return		:	1;if��Gif�ļ�����;
				2;if����Gif�ļ�����;
 Date		:	2003-5-20
 Author		:	����; yongt@mobilesoft.com.cn
****************************************************************************/
int GIF_Verify_Legal_File(char *file);

/***************************************************************************
 double GetProportion(int picturewidth,int screenwidth);
 Description:	��û�ͼ����;
 Param		:	(IN)picturewidth,ͼƬ�Ŀ��;
				(IN)screenwidth, ��Ļ�Ŀ��;
 Return		:	double, ��ʾͼƬ�ı���;
 Date		:	2003-6-9
 Author		:	����; yongt@mobilesoft.com.cn
****************************************************************************/
float tGetProportion(int picturewidth,int screenwidth);


void FreeGifData(GIFData *pGifData);
void FreeGifStream(GIFStream *pStream);

int _ex_GetGifInfo(unsigned char * filename,int  screenwidth,unsigned int * pWidth, unsigned int * pHeight);

#endif