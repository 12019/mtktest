/* $Id: SFApi.h,v 1.1 2007/07/31 11:19:33 bw Exp $ */
/**
 * @file sfapi.h
 * @version 0.9.0
 * @author Myles Yu
 */

#ifndef __SNOWFISH_API__H__
#define __SNOWFISH_API__H__

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

//#define SF_SCREEN_WIDTH	240
//#define SF_SCREEN_HEIGHT	320

typedef unsigned short UNICHAR;

typedef const UNICHAR* UString;

typedef int SFInt;
typedef unsigned int SFUint;
typedef long SFInt32;
typedef unsigned long SFUint32;
typedef char SFInt8;
typedef unsigned char SFUint8;
typedef short SFInt16;
typedef unsigned short SFUint16;
typedef char SFChar;
typedef UNICHAR UChar;
typedef SFUint8 SFByte;
typedef SFByte* SFBytePtr;
typedef const SFByte* SFCBytePtr;

typedef SFInt32		int32;
typedef SFInt16		int16;
typedef SFInt8		int8;
typedef SFUint32	uint32;
typedef SFUint16	uint16;
typedef SFUint8		uint8;


typedef void SFVoid;
typedef void SFAny;
typedef void* SFAnyPtr;
typedef SFAnyPtr* SFAnyPtrPtr;

typedef SFUint32 SFSize_T;

#define SFNull	((void*)0)
#define SFNULL	((void*)0)

typedef unsigned int  SFLPARAM;
typedef unsigned int SFWPARAM;
typedef int SFEVT_ID;

typedef int SFBool;

typedef enum _SF_BOOLEAN
{
  SFTrue=1,
  SFFalse=0
} SF_BOOLEAN;

typedef SFUint16 SFNColor;


#define SFMAKE_PARAM(high,low) (((high&0xffff)<<16)|(low&0xffff))
#define SFGET_HIGH(v)  ((short)((v>>16)&0xffff))
#define SFGET_LOW(v) ((short)((v)&0xffff))

#define SFMAKE_POINT(x,y) SFMAKE_PARAM(x,y)
#define SFPOINT_X(p)  SFGET_HIGH(p)
#define SFPOINT_Y(p)  SFGET_LOW(p)

#define PARAM_UNUSED(x) (x)
//!��ʱ��ID
typedef unsigned int SFTIMER_ID;
//!����ID
typedef unsigned int SFSND_ID;
//!����ϢID
typedef unsigned int SFSMS_ID;

typedef struct tagISFApplication ISFApplication;

//!�¼�������,����ÿһ����Ϣ����һ���¼�ID(idEvent)�����2���Ĺ����Ĳ���(lParam,wParam)
//���¹����¼�һ��д�� evt_id ( [param1 [,param2] ] )
//@param pApp - ϵͳά����ISFApplicationʵ��ָ�� (��ϵͳ����SFApp_Create��������Ӧ����ӦEVT_APP_DESTROY��ָ��������Զ������)
//@param idEvent - �¼�ID
//@param lParam - �¼��Ĳ���1
//@param wParam - �¼��Ĳ���2
typedef void (*SF_EVENT_HANDLER) (ISFApplication*pApp,SFEVT_ID idEvent,SFLPARAM lParam,SFWPARAM wParam);

typedef enum _SF_KEYCODE
{
	SFKEY_NONE=0,
	//�����
	SFKEY_SL=1,
	//�����
	SFKEY_SM,
	//�����
	SFKEY_SR,

	SFKEY_UP,
	SFKEY_DOWN,
	SFKEY_LEFT,
	SFKEY_RIGHT,

	//���ּ�
	SFKEY_NUM0,
	SFKEY_NUM1,
	SFKEY_NUM2,
	SFKEY_NUM3,
	SFKEY_NUM4,
	SFKEY_NUM5,
	SFKEY_NUM6,
	SFKEY_NUM7,
	SFKEY_NUM8,
	SFKEY_NUM9,

	//����
	SFKEY_POUND,
	//�Ǻ�
	SFKEY_STAR,

	SFKEY_CLR,
	SFKEY_BACK
} SF_KEYCODE;

typedef enum _SF_SOCKET_STATUS
{
  SF_SOCK_STATUS_READY=0,
  SF_SOCK_STATUS_ERROR=1
} SF_SOCKET_STATUS;

typedef enum _SF_EVENT
{
  //EVT_APP_NONE()
  //@brief ���¼�
  EVT_APP_NONE=0,
  //EVT_APP_START()
  //@brief Ӧ�ó���ʼ���е��ź�
  EVT_APP_START,
  //EVT_APP_PAUSE()
  //@brief Ӧ�ó�����ͣ���ź�
  EVT_APP_PAUSE,
  //EVT_APP_RESUME()
  //@brief Ӧ�ó������ͣ�ָ����ź�
  EVT_APP_RESUME,
  //EVT_APP_DESTROY()
  //@brief Ӧ�ó���رյ��ź�
  EVT_APP_DESTROY,
  
  //EVT_KEYUP(SPLPARAM nKeyCode)
  //@brief
  //@param nKeyCode - �ͷŵİ����ļ�ֵ����SF_KEYCODE
  EVT_KEYUP,
  //EVT_KEYDOWN(SPLPARAM nKeyCode)
  //@brief
  //@param nKeyCode - ���µİ����ļ�ֵ����SF_KEYCODE
  EVT_KEYDOWN,
  
  //EVT_POINTER_PRESSED(SPLPARAM ptPress)
  //@brief ����������
  //@param ptPress - SFMAKE_POINT(x,y) ���µ����Ļ����
  EVT_POINTER_PRESSED,
  //EVT_POINTER_PRESSED(SPLPARAM ptRelease)
  //@brief �������ͷ�
  //@param ptRelease - SFMAKE_POINT(x,y) �ͷŵ����Ļ����
  EVT_POINTER_RELEASED,
  //EVT_POINTER_PRESSED(SPLPARAM ptDrag)
  //@brief �������϶�
  //@param ptDrag - SFMAKE_POINT(x,y) �϶������Ļ����
  EVT_POINTER_DRAGGED,
  
  //EVT_TIMER(SPLPARAM idTimer)
  //@brief ��ʱ����ʱ
  //@param idTimer - SFTIMER_ID ��ʱ�Ķ�ʱ��ID
  EVT_TIMER,
  
  //EVT_SMS_SEND(SPLPARAM idSms,SFWPARAM nResult)
  //@brief ����Ϣ���ͽ��
  //@param idSms - SFSMS_ID ֮ǰȡ���Ķ���Ϣ����ID
  //@param nResult - int ���ͽ����1��ʾ�ɹ���0��ʾʧ��
  EVT_SMS_SEND,

  //EVT_SOCKET(SPLPARAM socket,SFWPARAM evt_err)
  //@brief socket��Ϣ
  //@param socket - SFSMS_ID ֮ǰȡ���Ķ���Ϣ����ID
  //@param evt_err - SFMAKE_PARAM(event,error);
  EVT_SOCKET,
  //EVT_SOCKET_STATUS(SPLPARAM idStatus)
  //@brief ����ϵͳ״̬
  //@param idStatus - SF_SOCK_STATUS_READY��ʾ����ϵͳ��ʼ����socket�Ѿ��������ӡ�SF_SOCK_STATUS_ERROR��ʾ����ϵͳ�ѳ���رգ���Ҫ���³�ʼ����
  EVT_SOCKET_STATUS
#ifdef WIN32
  ,EVT_MEM_PROFILE
#endif
} SF_EVENT;

//Ӧ�ó���ӿ�
struct tagISFApplication
{
  SF_EVENT_HANDLER pfnEvtHandler;
};

//���������ṩʵ�ֵķ�������������������ߵ��ã�����Ҫ��������ֵ
/**
 * @brief ����Ӧ�ó������Ҫϵͳά����Ψһʵ��
 * @param idGame - ��ϷID
 * @return Ӧ��ʵ�����
 */
ISFApplication* SFApp_Create(int idGame);
ISFApplication* SFAppTest_Create(int idGame);
/**
 * @brief ��ʾӦ������Ҫ���˳���ϵͳ���Ӧ�÷���EVT_APP_DESTORY��Ϣ
 */
void SFApp_Exit(void);

/**
 * @brief ��ȡϵͳ����Ļ������
 * @return ��Ļ������ָ��
 */
SFNColor* SFScreen_GetBuffer(void);

#ifdef WIN32
typedef struct HDC__* HDC;
HDC SFScreen_GetDC(void);
#endif //WIN32

/**
 * @brief ��ȡϵͳ����Ļ���
 * @return ��Ļ���
 */
SFInt SFScreen_GetWidth(void);

/**
 * @brief ��ȡϵͳ����Ļ�߶�
 * @return ��Ļ�߶�
 */
SFInt SFScreen_GetHeight(void);

/**
 * @brief ��ϵͳ����Ļ����������ˢ�µ�ǰ̨��ʵ����Ļ��
 */
void SFScreen_Update(void); 

/**
 * @brief ȡ�����ֵ��߼��߶ȣ�����������ͳһ���߼��߶�
 * @return ȡ�õ��߼��߶�
 */
SFInt SFFont_GetHeight(void);

/**
 * @brief ��ȡ�����ַ��Ŀ��
 * @return ȡ�õĿ��
 */
SFInt SFFont_GetCharWidth(UChar aChar);

/**
 * @brief ��ȡ�ַ����Ŀ��
 * @return ȡ�õĿ��
 */
SFInt SFFont_GetStringWidth(UString aStr,SFInt aLength);

/**
 * @brief ����clipping�����������ֵ�clipping
 */
void SFScreen_SetClip(SFInt x,SFInt y,SFInt w,SFInt h);

/**
 * @brief ����clipping����
 */
void SFScreen_ResetClip(void);

/**
 * @brief ����һ����ʱ��
 * @param idTimer - IN ��ʱ��ID
 * @param nExpiredTime - IN �Ժ���Ϊ��λ�Ķ�ʱʱ��
 * @param bOnceOrPeriod - IN YSTrue ��ʾ��ʱ��ֻ��Чһ�Σ�YSFalse ��ʾ��ָ��������������ź�
 */
void SFTimer_Start(SFTIMER_ID idTimer,int nExpiredTime,SFBool bOnce,ISFApplication*pHandler);

/**
 * @brief ָֹͣ���Ķ�ʱ��
 * @param idTimer - IN ��ʱ��ID
 */
void SFTimer_Stop(SFTIMER_ID idTimer);

/**
 * @brief ��ȡ��Ϸ�пɷ���������ռ��׵�ַ
 * @return ȡ�õĿռ��׵�ַ
 */
SFAnyPtr SFSystem_GetHeap(void);
/**
 * @brief ��ȡ��Ϸ�пɷ���������ռ��С
 * @return �ռ�Ĵ�С
 */
SFSize_T SFSystem_GetHeapSize(void);

typedef enum _SFSND_FORMAT
{
  SNDFORMAT_UNKNOWN=0,
  SNDFORMAT_MIDI=1,
  SNDFORMAT_WAVE=2
} SFSND_FORMAT;

/**
 * @brief ��ʼ����һ������
 * @param pSndBuffer - ��������
 * @param uBufferSize - ���������С
 * @param format - �������ݸ�ʽ
 * @param nLoopCount - 0��ʾѭ�����ţ�������ʾ���Ŵ���
 * @return ����ID
 */
SFSND_ID SFSnd_Play(void*pSndBuffer,unsigned int uBufferSize,SFSND_FORMAT format,int nLoopCount);

/**
 * @brief �������ر������Ĳ���
 * @param idSnd - ��������ID
 */
void SFSnd_Stop(SFSND_ID idSnd);

/**
 * @brief����һ������Ϣ
 * @param pNumber - ���͵��ĺ���
 * @param pContent - ���͵�����
 * @return ���͵���ϢID
 */
SFSMS_ID SFSms_Send(const UChar*pNumber,const UChar *pContent);

#ifdef WIN32
typedef struct _MemProfile MemProfile;
void SFMem_Profile(MemProfile*profile);
typedef struct _MemProfileEx MemProfileEx;
void SFMem_ProfileEx(MemProfileEx*profile);
#endif


typedef struct _SFDateTime
{
	SFInt nYear;
	SFInt nMonth;
	SFInt nDay;
	SFInt nHour;
	SFInt nMinute;
	SFInt nSecond;
	SFUint nMill;
} SFDateTime;

void SFSystem_GetCurrentDataTime(SFDateTime*pDataTime);

/**
* @brief ��鵱ǰ�Ƿ���SIM��
* @return SFTrue ��ʾ��SIM��,SFFalse ��ʾû��
*/
SFBool SFSystem_HasSim(void);

/**
* @brief ��鵱ǰƽ̨�Ƿ�֧�ִ�����
* @return SFTrue ��ʾ֧��,SFFalse ��ʾ��֧��
*/
SFBool SFSystem_IsTouchSupported(void);

/**
 * @brief ����һ������
 * @param str - ���Ƶ��ַ�������Ҫ��0��β
 * @param length - ���ַ�Ϊ��λ�����ֳ���
 * @param x - ���Ƶ�ˮƽλ��
 * @param y - ���ƵĴ�ֱλ��
 * @param cr - ָ����RRGGBB��ɫֵ
 */
void SFScreen_DrawTextN(UString str,SFInt length,SFInt x,SFInt y,SFUint32 cr);

//void SFSystem_Initialize(void);
//void SFSystem_Finalize(void);

//SFBool SFKey_IsPressed(SFInt aKeyCode);

typedef int SFFS_HANDLE;

enum SFFS_Flags
{
	SFFSF_CREATE=1,
	SFFSF_READ=2,
	SFFSF_WRITE=4
};

#define SFFS_INVALID_HANDLE	0

/**
 * @brief ��һ���ļ�
 * @param path - �ļ�·��
 * @param flags - �򿪱�־���μ�::SFFS_Flags����������Щ��־�Ļ�
 * @return �󿪵��ļ�����������ʧ�ܷ���SFFS_INVALID_HANDLE
 */
SFFS_HANDLE SFFS_Open(UString path,SFUint flags);

/**
 * @brief ��һ���ļ���ȡ����
 * @param hFile - �ļ����
 * @param buf -�������ݵĻ��������׵�ַ
 * @param sz - Ҫ��������ֽ�Ϊ��λ�Ĵ�С
 * @return ʵ�ʶ���Ĵ�С
 */
SFSize_T SFFS_Read(SFFS_HANDLE hFile,SFAnyPtr buf,SFSize_T sz);

/**
 * @brief ��һ���ļ�д������
 * @param hFile - �ļ����
 * @param buf - д������ݵ��׵�ַ
 * @param sz - д������ֽ�Ϊ��λ�Ĵ�С
 * @return ʵ��д��Ĵ�С
 */
SFSize_T SFFS_Write(SFFS_HANDLE hFile,const SFAny*buf,SFSize_T sz);

/**
 * @brief �ر�һ���򿪵��ļ����
 * @param hHandle - �򿪵��ļ����
 */
void SFFS_Close(SFFS_HANDLE hHandle);

/**
 * @brief ��ȡһ���򿪵��ļ��ĵ�ǰ����
 * @param hHandle - �򿪵��ļ����
 * @return �ɹ���ʧ�� 
 */
SFBool SFFS_GetSize(SFFS_HANDLE hHandle,SFSize_T*pSz);


typedef SFInt32 SFReason;

enum SFReasons
{
	SF_REASON_OK=0,
	SF_REASON_FAIL=-1,
	SF_REASON_BUSY=-2,
	SF_REASON_CANCEL=-3,
	SF_REASON_NOTFOUND=-4
};

/**
 * @brief �����ѡ��һ���ļ��Թ�֮���
 * @param aBuffer - �����ļ����Ļ���
 * @param aMaxSize - �������ַ�Ϊ��λ�Ĵ�С����0��β
 * @param abOpenFile - �Ƿ��Ǵ��ļ����Ǳ����ļ�
 * @param aFilter - �����ַ�������ʽΪ"*.aaa;*.bbb"�����ΪSFNull��ʾ"*.*"
 * @param aReason - �첽���õ�֪ͨ����Ĵ�ŵ�ַ�����ú�Ӧ����ΪSF_REASON_BUSY��Ȼ����ϵͳ�����������ʵ�ʵĴ��������ɹ��Ļ���ΪSF_REASON_OK
 * @remarks ����һ���첽���ã����ú���֮�����Ȩ����ϵͳʱ�뿪��Ӧ�ý���ϵͳ�Ĵ򿪽��棬֮��ص�Ӧ�������ý����
 */
void SFSystem_SelectFile(UChar* aBuffer,SFSize_T aMaxSize,SFBool bOpenFile,const UChar* aFilter,SFReason* aReason);


/**
 * @brief �����÷��������ڴ��������Ϣ
 */
void SFDEBUG(const char*str);

typedef struct _SFPCMDevice
{
	void * data;
}
SFPCMDevice;

/**
* @brief �����豸�ṹ�������ֻҪָ�룬����Ҫ֪����ṹ
*/
typedef struct _SFPCMDevice SFPCMDevice;

/**
* @brief ����һ��PCM�����豸
* @param aFormat - ����Ϊ0
* @param aSamplesPerSec - ÿ��Ĳ�����
* @param aBit - ��������8/16
* @param aChannel - ����
* @return �����������豸
*/
SFPCMDevice* SFPCMDevice_Create(SFInt aFormat,SFInt aSamplesPerSec,SFInt
aBit,SFInt aChannel);

/**
* @brief ��ʼ����ָ�����豸
* @param aDevice - ���ŵ��豸
*/
void SFPCMDevice_Start(SFPCMDevice* aDevice);

/**
* @brief ֹͣ��������
* @param aDevice - ���ŵ��豸
*/
void SFPCMDevice_Stop(SFPCMDevice* aDevice);

/**
* @brief �ر��豸
* @param aDevice - �����������豸
*/
void SFPCMDevice_Close(SFPCMDevice* aDevice);

#define SF_MAX_VOLUME 32767
/**
* @brief �����豸������
* @param aDevice - �����������豸
* @param aVolume - ���õ�����
*/
void SFPCMDevice_SetVolume(SFPCMDevice* aDevice,SFInt aVolume);

/**
* @brief ��ȡ�豸������
* @param aDevice - �����������豸
* @return ����
*/
SFInt SFPCMDevice_GetVolume(SFPCMDevice* aDevice);

/**
* @brief ��ȡ����Ӧ�õĶ������0��β
* @param aBuffer - ���ڻ�ȡ�����ַ�������Ļ���
* @param aSize - ����ȡ�Ĵ�С�����ַ�Ϊ��λ
* @return ʵ�ʵĴ�С�����ַ�Ϊ��λ������0��β
*/
SFSize_T SFApp_GetCommandLine(UChar* aBuffer,SFSize_T aSize);

/*
* @brief ��ȡ��ǰ�İ���״̬��ÿһλ����һ��������״̬��1��ʾ���£�0��ʾ�ɿ����μ�enum SFKeyStates
*/
SFUint32 SFSystem_GetKeyState(void);

enum SFKeyStates
{
	SFKS_UP=1,
	SFKS_DOWN=1<<1,
	SFKS_LEFT=1<<2,
	SFKS_RIGHT=1<<3,
	SFKS_NUM0=1<<4,
	SFKS_NUM1=1<<5,
	SFKS_NUM2=1<<6,
	SFKS_NUM3=1<<7,
	SFKS_NUM4=1<<8,
	SFKS_NUM5=1<<9,
	SFKS_NUM6=1<<10,
	SFKS_NUM7=1<<11,
	SFKS_NUM8=1<<12,
	SFKS_NUM9=1<<13,
	SFKS_POUND=1<<14,
	SFKS_STAR=1<<15,
	SFKS_SL=1<<16,
	SFKS_SM=1<<17,
	SFKS_SR=1<<18,
	SFKS_END=1<<19
};

/**
* @brief ��ȡһ����д���������ݻ����
* @param aDevice - �����������豸
* @param offset - ���������е�ƫ�ƣ������0xFFFFFFFF���ʾҪ��ǰд��λ��
��֮ǰ�ύ�����ݵ�ĩβ����ģ�����н�ʹ��0xFFFFFFFF
* @param size - Ҫ��ȡ����������Ĵ�С
* @param pBuf0 - ��ȡ�Ļ����һ��
* @param pBUfSize0 - ��ȡ�Ļ����һ�εĴ�С
* @param pBuf1 - ��ȡ�Ļ���ڶ��Σ����û�л���ʵ���в����ֵڶ��λ�����
��������SFNull
* @param pBUfSize1 - ��ȡ�Ļ���ڶ��εĴ�С�����û�����0
* @remarks ����һ��ѭ�����ŵĻ��壬����������ﻺ���ĩβ���ܻ��������
�ռ䲻���������
* ��ô��������ռ䣬����Ҫ�������λ�ڻ�����ʼ�Ŀռ䣬���Ծ���Ҫ���������
* �μ�DirectX�е�DirectSound��IDirectSoundBuffer
*/
void SFPCMDevice_LockBuffer(SFPCMDevice* aDevice,SFUint32
offset,SFUint32 size,SFAny** pBuf0,SFUint32* pBufSize0,SFAny**
pBuf1,SFUint32* pBufSize1);

/**
* @brief �ύ֮ǰ��õĻ�������
* @param aDevice - �����������豸
* @param aBuf0 - ֮ǰ��ȡ�Ļ����һ��
* @param aBUfSize0 - ʵ��Ҫ�ύ�Ļ����һ�εĳ���
* @param aBuf1 - ֮ǰ��ȡ�Ļ���ڶ��Σ����û�����SFNull
* @param aBUfSize1 - ʵ��Ҫ�ύ�Ļ����һ�εĳ���
*/
void SFPCMDevice_UnlockBuffer(SFPCMDevice* aDevice,SFAny* aBuf0,SFUint32
aBufSize0,SFAny* aBuf1,SFUint32 aBufSize1);

enum
{
	NESEMU_STATUS_NONE=0, //!< ����״̬
	NESEMU_STATUS_GAME=1, //!< ��Ϸ�У�������Ļ
	NESEMU_STATUS_GAMER90=2 //!< ��Ϸ�У���ת90��
};

SFInt SFNesEmuApp_GetStatus(void);

#ifdef __cplusplus
}
#endif //__cplusplus

#endif //!__SNOWFISH_API__H__


