/* $Id: SFApi.h 142 2006-12-22 02:28:50Z snowfish $ */
/**
 * @file SFApi.h
 * @version 1.1.0 (�����ļ�)
 * @author �Ϻ���Ѷ���ӿƼ����޹�˾
 */

#ifndef __SNOWFISH_API__H__
#define __SNOWFISH_API__H__

#include <stdarg.h>

//__SF_API__�汾�ţ�Ϊaabbccdd��ʽ��[aa] bb.cc.dd����bbΪ���汾�ţ�ccΪ�ΰ汾��,ddΪ�޶��汾��,aaΪ�ر�汾�ţ�00��ʾΪ��׼�汾��
#define __SF_API__  00020100

#if defined(WIN32) && !defined(MMI_ON_WIN32)
# define SFAPI_WIN
#endif

#if defined(_DEBUG) && !defined(SF_RT_DEBUG)
# define SF_RT_DEBUG
#endif

#if defined(WIN32) && !defined(SF_PC_EXPORT)
# define SF_PC_EXPORT __declspec(dllexport) 
#endif

#ifndef SF_PC_EXPORT
# define SF_PC_EXPORT
#endif //SF_PC_EXPORT

#ifdef _MSC_VER
# ifdef SFAPI_WIN
#  ifdef _DEBUG
#   pragma comment(lib,"SFAPId.lib")
#  else
#   pragma comment(lib,"SFAPI.lib")
#  endif
# endif
#endif

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

#if __SF_API__<00020000
#if !defined(SF_SCREEN_WIDTH) || !defined(SF_SCREEN_HEIGHT)
# error SF_SCREEN_WIDTH and SF_SCREEN_HEIGHT must be both defined
#endif
#endif

#if 0
#ifndef SF_DYNAMIC_MODULE_CLASS0
#define SFAPI_METHOD(ret_type,name,param) typedef ret_type (*PAPI_##name) param;\
    ret_type name param
#else //!SF_DYNAMIC_MODULE_CLASS0
#define SFAPI_METHOD(ret_type,name,param) typedef ret_type (*PAPI_##name) param;
#endif //!SF_DYNAMIC_MODULE_CLASS0
#endif //0

#ifndef sf_inline
# if defined(_MSC_VER)
#  define sf_inline static __inline
#  define sf_always_inline static __inline
# elif defined(__ARMCC_VERSION)
#  define sf_inline static __inline
#  define sf_always_inline static __inline
# elif defined(__GNUC__)
#  define sf_inline static inline
#  define sf_always_inline static inline
# else
#  define sf_inline static 
#  define sf_always_inline static 
# endif
#endif //!sf_inline


#ifndef _UNICHAR_DEFINED
  #define _UNICHAR_DEFINED
  typedef unsigned short UNICHAR;
#endif //_UNICHAR_DEFINED

#ifndef _UCHAR_DEFINED
  #define _UCHAR_DEFINED
  typedef UNICHAR UChar;
#endif //_UCHAR_DEFINED

#ifndef _USTRING_DEFINED
  #define _USTRING_DEFINED
  typedef const UNICHAR* UString;
#endif //_USTRING_DEFINED

typedef int SFInt;
typedef unsigned int SFUint;
typedef long SFInt32;
#ifndef SFAPI_WIN
typedef long long SFInt64;
typedef unsigned long long SFUint64;
#else
typedef  long SFInt64;
typedef unsigned  long SFUint64;
#endif
typedef unsigned long SFUint32;
typedef signed char SFInt8;
typedef unsigned char SFUint8;
typedef short SFInt16;
typedef unsigned short SFUint16;
typedef char SFChar;
typedef SFUint8 SFByte;
typedef SFByte* SFBytePtr;
typedef const SFByte* SFCBytePtr;

#ifndef NDS_JTYPES_INCLUDE

#ifndef _INT32_DEFINED
  #define _INT32_DEFINED
  typedef SFInt32       int32;
#endif //_INT32_DEFINED

#ifndef _INT16_DEFINED
  #define _INT16_DEFINED
  typedef SFInt16       int16;
#endif //_INT16_DEFINED

#ifndef _INT8_DEFINED
  #define _INT8_DEFINED
  typedef SFInt8        int8;
#endif //_INT8_DEFINED

#ifndef _UINT64_DEFINED
  #define _UINT64_DEFINED
#ifndef WIN32
  typedef unsigned long long uint64;
#else
   typedef unsigned  long uint64;
#endif 
#endif //_UINT64_DEFINED

#ifndef _INT64_DEFINED
  #define _INT64_DEFINED
#ifndef WIN32
  typedef long long int64;
#else
	typedef  long int64;
#endif
#endif //_INT64_DEFINED

#ifndef _UINT32_DEFINED
  #define _UINT32_DEFINED
  typedef SFUint32  uint32;
#endif //_UINT32_DEFINED

#ifndef _UINT16_DEFINED
  #define _UINT16_DEFINED
  typedef SFUint16  uint16;
#endif //_UINT16_DEFINED

#ifndef _UINT8_DEFINED
  #define _UINT8_DEFINED
  typedef SFUint8       uint8;
#endif //_UINT8_DEFINED

#endif //!NDS_JTYPES_INCLUDE

#ifndef __SF_ALIGN
#if defined(_MSC_VER)
#define __SF_ALIGN(n) __declspec(align(n))
#elif defined(__ARMCC_VERSION)
#define __SF_ALIGN(n) __align(n)
#elif defined(__GNUC__)
#define __SF_ALIGN(n) __attribute__((aligned(n)))
#else
#define __SF_ALIGN(n) __SF_ALIGN not supported
#endif
#endif //!__SF_ALIGN

#ifndef __SF_PACKED
#if defined(_MSC_VER)
#define __SF_PACKED __declspec(align(1))
#elif defined(__ARMCC_VERSION)
#define __SF_PACKED __packed
#elif defined(__GNUC__)
#define __SF_PACKED __attribute__((packed))
#else
#define __SF_PACKED __SF_PACKED not supported
#endif
#endif //!__SF_ALIGN

#ifndef __cplusplus
#ifndef _BOOLEAN_DEFINED
typedef uint8 boolean;
#define _BOOLEAN_DEFINED
#endif
# ifndef true
#  define true 1
# endif //true
# ifndef false
#  define false 0
# endif //false
#endif

typedef void SFVoid;
typedef void SFAny;
typedef void* SFAnyPtr;
typedef const void* SFAnyPtrC;
typedef void** SFAnyPtrPtr;

typedef SFUint32 SFUint_Ptr;
typedef SFInt32 SFInt_Ptr;

typedef SFUint32 SFSize_T;

typedef SFUint64 SFModId;
typedef SFUint64 SFCLSID;
#define SFMODID(h,l)   ((((SFUint64)(h))<<32)|(SFUint32)(l))

#ifdef __cplusplus
#define SFNull  0
#define SFNULL  0
#else
#define SFNull  ((void*)0)
#define SFNULL  ((void*)0)
#endif

typedef unsigned int  SFLPARAM;
typedef unsigned int SFWPARAM;
typedef int SFEVT_ID;

typedef int SFBool;

typedef enum _SF_BOOLEAN
{
  SFTrue=1,
  SFFalse=0
} SF_BOOLEAN;

#ifdef SF_NATIVE_COLOR_RGB888
#define SF_NATIVE_COLOR_BITS    24
typedef SFUint32 SFNColor;
#elif defined(SF_NATIVE_COLOR_XRGB8888)
#define SF_NATIVE_COLOR_BITS    32
typedef SFUint32 SFNColor;
#else
#define SF_NATIVE_COLOR_BITS    16
typedef SFUint16 SFNColor;
#endif //SF_NATIVE_COLOR_RGB888

typedef SFUint32 SFColor32;

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



#undef DECLARE_INTERFACE
#undef BEGIN_DEFINE_INTERFACE
#undef END_DEFINE_INTERFACE

#define DECLARE_INTERFACE(name) struct _interface_##name;\
    typedef struct _interface_##name name;\
    struct _interface_##name##_class;\
    typedef struct _interface_##name##_class name##_class;\
    typedef void (*_interface_##name##_AddRef_T)(name* self);\
    typedef int (*_interface_##name##_Release_T)(name* self);\
    typedef SFReason (*_interface_##name##_QueryInterface_T)(name* self,SFUint32 l,SFUint32 h,void**ptr);

#define BEGIN_DEFINE_INTERFACE(name)   struct _interface_##name {\
        const struct _interface_##name##_class* __vftab;\
    };\
    struct _interface_##name##_class {\
        void (*AddRef)(name* self);\
        int (*Release)(name* self);\
        SFReason (*QueryInterface)(name* self,SFUint32 l,SFUint32 h,void**ptr);
    

#define DEFINE_INTERFACE_VFTABLE(name) const struct _interface_##name##_class* __vftab;

#define END_DEFINE_INTERFACE(name)     };

#define DECLARE_INTERFACE_BASIC_FUNCS(name)   void (*AddRef)(name* self);\
    int (*Release)(name* self);\
    SFReason (*QueryInterface)(name* self,SFUint32 l,SFUint32 h,void**ptr);

#define DEFINE_INTERFACE_BASIC_FUNCS(name,prefix)  (_interface_##name##_AddRef_T)prefix##AddRef,\
    (_interface_##name##_Release_T)prefix##Release,\
    (_interface_##name##_QueryInterface_T)prefix##QueryInterface

#define IMPLEMENT_SHARED_INTERFACE_BASIC_FUNCS(name,prefix) \
    void prefix##AddRef(name* self) {}\
    int prefix##Release(name* self) { return 1; }\
    SFReason prefix##QueryInterface(name* self,SFUint32 l,SFUint32 h,void**ptr) { return SFReasonNotSupported; }


typedef struct tagISFApplication ISFApplication;

//!�¼�������,����ÿһ����Ϣ����һ���¼�ID(idEvent)�����2���Ĺ����Ĳ���(lParam,wParam)
//���¹����¼�һ��д�� evt_id ( [param1 [,param2] ] )
//@param pApp - ϵͳά����ISFApplicationʵ��ָ�� (��ϵͳ����SFApp_Create��������Ӧ����ӦEVT_APP_DESTROY��ָ��������Զ������)
//@param idEvent - �¼�ID
//@param lParam - �¼��Ĳ���1
//@param wParam - �¼��Ĳ���2
typedef void (*SF_EVENT_HANDLER) (ISFApplication*pApp,SFEVT_ID idEvent,SFLPARAM lParam,SFWPARAM wParam);

typedef ISFApplication* (*SF_MODULE_CREATE)(void);

typedef void (*SF_FUNC_VOID__VOID)(void);

typedef void (*SF_FUNC_CALLBACK)(void*);

typedef void* (*SF_FUNC_ALLOC_P)(void* param,SFSize_T sz);

typedef void* (*SF_FUNC_REALLOC_P)(void* param,void* ptr,SFSize_T sz);

typedef void (*SF_FUNC_FREE_P)(void* param,void* ptr);

typedef void* (*SF_FUNC_ALLOC)(SFSize_T sz);

typedef void* (*SF_FUNC_REALLOC)(void* ptr,SFSize_T sz);

typedef void (*SF_FUNC_FREE)(void* ptr);

/**
 * @brief ������ֵ
 */
typedef enum _SF_KEYCODE
{
    SFKEY_NONE=0,   //!< ��ʾ�޼����µ�ֵ
    SFKEY_SL=1,     //!< �����
    SFKEY_SM,       //!< �����
    SFKEY_SR,       //!< �����

    SFKEY_UP,       //!< �������
    SFKEY_DOWN,     //!< �������
    SFKEY_LEFT,     //!< �������
    SFKEY_RIGHT,    //!< �������

    //���ּ�
    SFKEY_NUM0,     //!< ���ּ�0
    SFKEY_NUM1,     //!< ���ּ�1
    SFKEY_NUM2,     //!< ���ּ�2
    SFKEY_NUM3,     //!< ���ּ�3
    SFKEY_NUM4,     //!< ���ּ�4
    SFKEY_NUM5,     //!< ���ּ�5
    SFKEY_NUM6,     //!< ���ּ�6
    SFKEY_NUM7,     //!< ���ּ�7
    SFKEY_NUM8,     //!< ���ּ�8
    SFKEY_NUM9,     //!< ���ּ�9

    SFKEY_POUND,    //!< ����
    
    SFKEY_STAR,     //!< �Ǻ�

    SFKEY_CLR,      //!< ǿ���˳�

    SFKEY_END,
    SFKEY_SEND,
    SFKEY_POWER,
    SFKEY_VOLUP,
    SFKEY_VOLDOWN,

    SFKEY_LAST
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
  //@since 1.0.0
  EVT_APP_NONE=0,
  //EVT_APP_START()
  //@brief Ӧ�ó���ʼ���е��ź�
  //@since 1.0.0
  EVT_APP_START,
  //EVT_APP_PAUSE()
  //@brief Ӧ�ó�����ͣ���ź�
  //@since 1.0.0
  EVT_APP_PAUSE,
  //EVT_APP_RESUME()
  //@brief Ӧ�ó������ͣ�ָ����ź�
  //@since 1.0.0
  EVT_APP_RESUME,
  //EVT_APP_DESTROY()
  //@brief Ӧ�ó���رյ��ź�
  //@since 1.0.0
  EVT_APP_DESTROY,
  
  //EVT_KEYUP(SPLPARAM nKeyCode)
  //@brief
  //@param nKeyCode - �ͷŵİ����ļ�ֵ����SF_KEYCODE
  //@since 1.0.0
  EVT_KEYUP,
  //EVT_KEYDOWN(SPLPARAM nKeyCode)
  //@brief
  //@param nKeyCode - ���µİ����ļ�ֵ����SF_KEYCODE
  //@since 1.0.0
  EVT_KEYDOWN,
  
  //EVT_POINTER_PRESSED(SPLPARAM ptPress)
  //@brief ����������
  //@param ptPress - SFMAKE_POINT(x,y) ���µ����Ļ����
  //@since 1.0.0
  EVT_POINTER_PRESSED,
  //EVT_POINTER_PRESSED(SPLPARAM ptRelease)
  //@brief �������ͷ�
  //@param ptRelease - SFMAKE_POINT(x,y) �ͷŵ����Ļ����
  //@since 1.0.0
  EVT_POINTER_RELEASED,
  //EVT_POINTER_PRESSED(SPLPARAM ptDrag)
  //@brief �������϶�
  //@param ptDrag - SFMAKE_POINT(x,y) �϶������Ļ����
  //@since 1.0.0
  EVT_POINTER_DRAGGED,
  
  //EVT_TIMER(SPLPARAM idTimer)
  //@brief ��ʱ����ʱ
  //@param idTimer - SFTIMER_ID ��ʱ�Ķ�ʱ��ID
  //@since 1.0.0
  EVT_TIMER,
  
  //EVT_SMS_SEND(SPLPARAM idSms,SFWPARAM nResult)
  //@brief ����Ϣ���ͽ��
  //@param idSms - SFSMS_ID ֮ǰȡ���Ķ���Ϣ����ID
  //@param nResult - int ���ͽ����1��ʾ�ɹ���0��ʾʧ��
  //@since 1.0.0
  EVT_SMS_SEND,

  //EVT_SOCKET(SPLPARAM socket,SFWPARAM evt_err)
  //@brief socket��Ϣ
  //@param socket - SFSMS_ID ֮ǰȡ���Ķ���Ϣ����ID
  //@param evt_err - SFMAKE_PARAM(event,error);
  //@since 1.0.0
  EVT_SOCKET,
  
  //EVT_SOCKET_STATUS(SPLPARAM idStatus)
  //@brief ����ϵͳ״̬
  //@param idStatus - SF_SOCK_STATUS_READY��ʾ����ϵͳ��ʼ����socket�Ѿ��������ӡ�SF_SOCK_STATUS_ERROR��ʾ����ϵͳ�ѳ���رգ���Ҫ���³�ʼ����
  //@since 1.0.0
  //@remarks �ѷ���
  EVT_SOCKET_STATUS,

  //EVT_APP_HANDLE_FILE(SPLPARAM path)
  //@brief ����һ���ļ���EVT_APP_START��ſ����յ�
  //@param path - UCS-2������ļ�·��
  EVT_APP_HANDLE_FILE,
  
  //EVT_APP_HANDLE_URL(SPLPARAM url)
  //@brief ����һ��URL��EVT_APP_START��ſ����յ�
  //@param url - UCS-2�����URL
  EVT_APP_HANDLE_URL,
  
  //EVT_APP_HANDLE_MESSAGE(SPLPARAM lparam)
  //@brief ����һ���ض���Ϣ��EVT_APP_START��ſ����յ�
  //@param lparam - ����1��һһ��UNICODE�ַ���
  EVT_APP_HANDLE_MESSAGE,

  //EVT_PAINT(...)
  //@remarks ��ʱδʹ��
  EVT_PAINT,
  
  //EVT_NOTIFY(...)
  //@remarks ��ʱδʹ��
  EVT_NOTIFY,

  //EVT_COMMAND(...)
  //@remarks ��ʱδʹ��
  EVT_COMMAND,

  //EVT_DBLCLICK(...)
  //@remarks ��ʱδʹ��
  EVT_DBLCLICK,

//#ifdef WIN32
//  EVT_MEM_PROFILE=0x1000,
//#endif

  __EVT_INT32_PROTECTION__=0x7FFFFFFF
} SF_EVENT;

/**
 * @brief Ӧ�ó���ӿڶ���ṹ
 * @since 1.0.0
 */
struct tagISFApplication
{
    SF_EVENT_HANDLER pfnEvtHandler; //!< ��Ϣ������
};


/**
 * @brief �����첽���õ���Ϣ֪ͨ����������
 */
typedef SFInt32 SFReason;

/**
 * @brief SFReasonȡֵ
 */
enum SFReasons
{
    SF_REASON_OK=0,         //!< �첽���õ���Ϣֵ֪ͨ����ʾ�ɹ�
    SFReasonOK=SF_REASON_OK,
    
    SF_REASON_FAIL=-1,      //!< �첽���õ���Ϣֵ֪ͨ����ʾһ���ʧ��
    SFReasonFail=SF_REASON_FAIL,
    SFReasonError=SF_REASON_FAIL,
    
    SF_REASON_BUSY=-2,      //!< �첽���õ���Ϣֵ֪ͨ����ʾ�������ڽ��У���ȴ�
    SFReasonBusy=SF_REASON_BUSY,
    SF_REASON_PENDING=SF_REASON_BUSY,
    SF_REASON_WOULDBLOCK=SF_REASON_BUSY,
    SFReasonPending=SF_REASON_BUSY,
    SFReasonWouldBlock=SF_REASON_BUSY,
    
    SF_REASON_CANCEL=-3,    //!< �첽���õ���Ϣֵ֪ͨ��һ���ʾȡ��
    SFReasonCancel=SF_REASON_CANCEL,
    
    SF_REASON_NOTFOUND=-4,  //!< �첽���õ���Ϣֵ֪ͨ��һ���ʾû���ҵ�
    SFReasonNotFound=SF_REASON_NOTFOUND,

    SF_REASON_BADPARAMETER=-5,
    SFReasonBadParameter=SF_REASON_BADPARAMETER,

    SF_REASON_QUITREQUEST=-6,
    SFReasonQuitRequest=SF_REASON_QUITREQUEST,

    SF_REASON_NORESULT=-7, //!< ϵͳ�ѽ������󣬵��޷���֪���
    SFReasonNoResult=SF_REASON_NORESULT,

    SF_REASON_NOTSUPPORTED=-8,
    SFReasonNotSupported=SF_REASON_NOTSUPPORTED,

    SF_REASON_OUTOFMEMORY=-9,
    SFReasonOutOfMemory=SF_REASON_OUTOFMEMORY,

    SF_REASON_OUTOFRESOURCE=-10,
    SFReasonOutOfResource=SF_REASON_OUTOFRESOURCE,

    SF_REASON_INTERNALERROR=-11,
    SFReasonInternalError=SF_REASON_INTERNALERROR,

    SF_REASON_OSERROR=-12,
    SFReasonOSError=SF_REASON_OSERROR,

    SF_REASON_ACCESSDENIED=-13,
    SFReasonAccessDenied=SF_REASON_ACCESSDENIED,

    SF_REASON_FULL=-14,
    SFReasonFull=SF_REASON_FULL,

    SF_REASON_CORRUPTED=-15,
    SFReasonCorrupted=SF_REASON_CORRUPTED,

    SF_REASON_DEVICECHANGED=-16,
    SFReasonDeviceChanged=SF_REASON_DEVICECHANGED,

    SF_REASON_NOTREADY=-17,
    SFReasonNotReady=SF_REASON_NOTREADY,

    SF_REASON_DEVICEBUSY=-18,
    SFReasonDeviceBusy=SF_REASON_DEVICEBUSY,

    SF_REASON_EXISTS=-19,
    SFReasonExists=SF_REASON_EXISTS,

    SF_REASON_OUTOFRANGE=-20,
    SFReasonOutOfRange=SF_REASON_OUTOFRANGE,

    SF_REASON_ENDOFFILE=-21,
    SFReasonEndOfFile=SF_REASON_ENDOFFILE,

    SF_REASON_BADFORMAT=-22,
    SFReasonBadFormat=SF_REASON_BADFORMAT,
    

    __SFReasons__INT32__=0x7FFFFFFF
};

#define MAKE_REASON_E(v1,v2)    ((SFReason)(0x80000000|((v1)<<12)|(v2)))

struct _SFEModule;
struct _SFBuiltInApp;
typedef struct _SFEModule SFEModule;
typedef struct _SFBuiltInApp SFBuiltInApp;

enum SFModuleAttrs
{
    SFMOD_ATTR_SYSTEM=0x00000001,               //!< system module, with all the acess rights
    SFMOD_ATTR_SERVICE=0x00000002,              //!< service module
    SFMOD_ATTR_APPLICATION=0x00000004,          //!< application module

    SFMOD_ATTR_NATIVE=0x00000008,               //!< native code
    SFMOD_ATTR_BUILTIN=0x00000010,              //!< whether the module is built-in or not

    SFMOD_ATTR_FAST_SCREEN_UPDATE=0x00000020,   //!< fast screen update support
    SFMOD_ATTR_MOVEABLE=0x00000040,             //!< the module can be moved to any other memory space
    SFMOD_ATTR_NATIVE_SFAPI_COMPATIBILITY=0x00000080, //!< native module with the ability to use the SFAPI, can only be used with SFMOD_ATTR_NATIVE
    SFMOD_ATTR_DYNAMIC_MEMORY=0x00000100,    //!< free the memory resource

    __SFMOD_ATTR__INT32__=0x7FFFFFFF
};


typedef SFReason (*SFEMODULE_ENTRY)(SFModId aModId,void** ppObj);
typedef SFReason (*SFEMODULE_ENTRY_LEGACY)(const SFModId* pModId,void** ppObj);

SFReason SFSystem_LeaveSFAPICompabileNativeModule(SFModId mod);
SFReason SFSystem_EnterSFAPICompabileNativeModule(SFModId mod);

/**
 * @brief the base structure for an EModule object
 */
struct _SFEModule
{
    SFUint16 iStructSize;       //!< the size of the structure
    SFUint16 iImageVersion;     //!< the format version of the loaded image, 1 is the first version, 2 is the second version, currently the version number is 3
    union
    {
        SFEMODULE_ENTRY iMethod;              //!< new modules (iImageVersion>3) should use this
        SFEMODULE_ENTRY_LEGACY iLegacyMethod; //!< for compatible with the legacy applications
    } iEntry;
    SFUint16 iFlag;             //!< @see SFModuleAttrs��ignore SFMOD_ATTR_NATIVE and SFMOD_ATTR_BUILTIN
    SFUint16 iLocalHeapSize;    //!< local heap size in KB
    SFUint32* iImageBase;       //!< the base of the loaded image, but the address may not be the allocated address of the memory block
    SFUint32 iImageSize;        //!< the size of the loaded image
    const SFCLSID* iRights;     //!< access rights in SFCLSID
};

struct _SFBuiltInApp
{
    SFModId iModId;
    SFUint16 iFlag;                 //!< @see SFModuleAttrs, SFMOD_ATTR_BUILTIN will be added automatically
    SFUint16 iLocalHeapSize;        //!< local heap size in KB
    SF_FUNC_VOID__VOID iEntryFunc;  //!< for the normal native app
    const SFUint16* iRight;         //!< access rights in native format
};

extern const SFUint16 SF_DEFAULT_APP_RIGHTS[];

enum
{
    SF_LAUNCH_NORMAL=0,
    SF_LAUNCH_WITH_FILE=1,
    SF_LAUNCH_WITH_URL=2,
    SF_LAUNCH_WITH_MESSAGE=3,

    SF_LAUNCH_TYPE_MASK=0xFF
};

SFReason SFSystem_LaunchModule(SFModId mod,const UChar* aCmdLine,SFUint32 aFlag);


/**
 * @brief ��ʾӦ������Ҫ���˳���ϵͳ�����뷢��EVT_APP_DESTORY��Ϣ����Ӧ�ó�����������
 * @since 1.0.0
 */
void SFApp_Exit(void);


/**
 * @brief ��ȡϵͳ����Ļ������
 * @return ��Ļ������ָ��
 * @since 1.0.0
 */
SFNColor* SFScreen_GetBuffer(void);

#ifdef WIN32
typedef struct HDC__* HDC;
HDC SFScreen_GetDC(void);
#endif //WIN32

/**
 * @brief ��ȡϵͳ����Ļ���
 * @return ��Ļ���
 * @since 1.0.0
 */
SFInt SFScreen_GetWidth(void);

/**
 * @brief ��ȡϵͳ����Ļ�߶�
 * @return ��Ļ�߶�
 * @since 1.0.0
 */
SFInt SFScreen_GetHeight(void);

/**
 * @brief ��ϵͳ����Ļ����������ˢ�µ�ǰ̨��ʵ����Ļ��
 * @since 1.0.0
 */
void SFScreen_Update(void); 

enum
{
    SF_GDI_FONT_STYLE_PLAIN=0x00,
    SF_GDI_FONT_STYLE_UNDERLINE=0x01,
    SF_GDI_FONT_STYLE_BOLD=0x02,
    SF_GDI_FONT_STYLE_ITALIC=0x04,
    SF_GDI_FONT_STYLE_OBLIQUE=0x08,
    SF_GDI_FONT_STYLE_STRIKETHROUGH=0x10,

    SF_GDI_FONT_SIZE_SMALL=-1,
    SF_GDI_FONT_SIZE_MEDIUM=0,
    SF_GDI_FONT_SIZE_LARGE=-2,

    SF_GDI_FONT_FACE_SYSTEM=0,
    SF_GDI_FONT_FACE_MONOSPACE=1,
    SF_GDI_FONT_FACE_PROPORTIONAL=2,

    SF_GDI_FONT_TYPE_ANY=0,
    SF_GDI_FONT_TYPE_TITLE=1,
    SF_GDI_FONT_TYPE_UI=2,
    SF_GDI_FONT_TYPE_INPUT=3,
    SF_GDI_FONT_TYPE_STATIC=4
};

typedef struct _SFGDIFont
{
    SFUint8 iFace;
    SFUint8 iStyle;
    SFInt8 iSize;
    SFUint8 iType;
} SFGDIFont;

void SFFont_SetFont(const SFGDIFont* pFont);

void SFFont_GetFont(SFGDIFont* pFont);

/**
 * @brief ȡ�����ֵ��߼��߶ȣ�����������ͳһ���߼��߶�
 * @return ȡ�õ��߼��߶�
 * @since 1.0.0
 */
SFInt SFFont_GetHeight(void);

/**
 * @brief ��ȡ�����ַ��Ŀ��
 * @param aChar - UNICODE UTF16 ������ַ�
 * @return ȡ�õĿ��
 * @since 1.0.0
 */
SFInt SFFont_GetCharWidth(UChar aChar);

/**
 * @brief ��ȡ�ַ����Ŀ�ȣ���ʹ��'\\0'��β��
 * @param aStr - UNICODE UTF16 ������ַ���
 * @param aLength - �ַ����ĳ���
 * @return ȡ�õĿ��
 * @since 1.0.0
 */
SFInt SFFont_GetStringWidth(UString aStr,SFInt aLength);

/**
 * @brief ������Ļ�ü������������ֵĲü�
 * @param x - ���Ͻ�X����
 * @param y - ���Ͻ�Y����
 * @param w - �ü�������
 * @param h - �ü�����߶�
 * @since 1.0.0
 */
void SFScreen_SetClip(SFInt x,SFInt y,SFInt w,SFInt h);

/**
 * @brief ������Ļ�ü�����
 * @since 1.0.0
 */
void SFScreen_ResetClip(void);

/**
 * @brief ����һ����ʱ��
 * @param idTimer - ��ʱ��ID
 * @param nExpiredTime - �Ժ���Ϊ��λ�Ķ�ʱʱ��
 * @param bOnce - YSTrue ��ʾ��ʱ��ֻ��Чһ�Σ�YSFalse ��ʾ��ָ��������������ź�
 * @param pHandler - ���ڽ��ܶ�ʱ���¼�����Ϣ���������μ�EVT_TIMER
 * @remarks �ѷ������µ�Ӧ�ó���Ӧ��ʹ��
 * @since 1.0.0
 */
void SFTimer_Start(SFTIMER_ID idTimer,int nExpiredTime,SFBool bOnce,ISFApplication*pHandler);

/**
 * @brief ָֹͣ���Ķ�ʱ��
 * @param idTimer - ��ʱ��ID
 * @since 1.0.0
 */
void SFTimer_Stop(SFTIMER_ID idTimer);

/**
 * @brief ��ȡ��Ϸ�пɷ���������ռ��׵�ַ
 * @return ȡ�õĿռ��׵�ַ
 * @remarks ��������ᱻ�������ã�����ط���ͬһ�����ռ���׵�ַ
 * @since 1.0.0
 */
SFAnyPtr SFSystem_GetHeap(void);
/**
 * @brief ��ȡ��Ϸ�пɷ���������ռ��С
 * @return �ռ�Ĵ�С
 * @since 1.0.0
 */
SFSize_T SFSystem_GetHeapSize(void);

/**
 * @brief ϵͳ�ķ����ڴ淽��
 * @param newSize - ����Ŀռ�Ĵ�С
 * @return ����Ŀռ���׵�ַ
 * @since 1.0.2
 */
SFAnyPtr SFSystem_Alloc(SFSize_T newSize);

/**
 * @brief ϵͳ���ط����ڴ淽��
 * @param ptr - ԭ�ڴ���׵�ַ
 * @param newSize - �¿ռ�Ĵ�С
 * @return �¿ռ���׵�ַ��ԭ�ռ�ͬʱ���ͷţ�ΪSFNull��ʾʧ�ܣ���ԭ�ռ�û�б��ͷ�
 * @since 1.0.2
 */
SFAnyPtr SFSystem_Realloc(SFAnyPtr ptr,SFSize_T newSize);

/**
 * @brief ϵͳ���ͷſռ�ķ���
 * @param ptr - Ҫ�ͷŵĿռ���׵�ַ����������֮ǰ��SFSystem_Alloc/SFSystem_Realloc���÷��ص�
 * @since 1.0.2
 */
void SFSystem_Free(SFAnyPtr ptr);



/**
 * @brief �������Ÿ�ʽ
 */
typedef enum _SFSND_FORMAT
{
  SNDFORMAT_UNKNOWN=0,  //!< δ֪��ʽ�����Ժ���
  SNDFORMAT_MIDI=1,     //!< MIDI��ʽ
  SNDFORMAT_WAVE=2,		//!< WAVE��ʽ
  SNDFORMAT_AMR=3,      //!<AMR-NB��@since 2.1.0
  SNDFORMAT_AAC=4       //!<AAC��@since 2.1.0
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


SFSND_ID SFSnd_PlayFile(const UChar* path,SFSND_FORMAT format,int nLoopCount);

/**
 * @brief �������ر������Ĳ���
 * @param idSnd - ��������ID
 */
void SFSnd_Stop(SFSND_ID idSnd);

/**
 * @brief ����һ������Ϣ�����Ӧ������ϢEVT_SMS_SEND��ʽ������ǰ��Ӧ�ã��µ�Ӧ��Ӧ��ʹ��SFSms_SendEx
 * @param pNumber - ���͵��ĺ���
 * @param pContent - ���͵�����
 * @return ���͵���ϢID
 * @remarks һ�㶼��ͬʱֻ����һ��Ӧ�ã��°汾��Ӧ�û���ʹ��::SFSms_SendEx
 */
SFSMS_ID SFSms_Send(const UChar*pNumber,const UChar *pContent);

/**
 * @brief ����һ������Ϣ�����Ӧ������ϢEVT_SMS_SEND��ʽ����pHandler
 * @param pNumber - ���͵��ĺ���
 * @param pContent - ���͵�����
 * @param pHandler - ����֪ͨ��Ϣ��Ӧ�þ��
 * @return ���͵���ϢID
 */
SFSMS_ID SFSms_SendEx(const UChar*pNumber,const UChar *pContent,ISFApplication* pHandler);


#ifdef WIN32
# ifndef __MemProfile_T
#  define __MemProfile_T
typedef struct _MemProfile MemProfile;
# endif //__MemProfile_T
void SFMem_Profile(MemProfile*profile);
# ifndef __MemProfileEx_T
#  define __MemProfileEx_T
typedef struct _MemProfileEx MemProfileEx;
# endif //__MemProfileEx_T
void SFMem_ProfileEx(MemProfileEx*profile);
#endif


/**
 * @brief ��ȡϵͳʱ��Ľṹ
 */
typedef struct _SFDateTime
{
    SFInt nYear;    //!< ���
    SFInt nMonth;   //!< �·�
    SFInt nDay;     //!< ��
    SFInt nHour;    //!< Сʱ
    SFInt nMinute;  //!< ����
    SFInt nSecond;  //!< ��
    SFUint nMill;   //!< ϵͳ�߹��ĺ��뼶���ʱ��
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

/**
 * @brief �ļ��������
 */
typedef int SFFS_HANDLE;

/**
 * @brief �ļ��Ĵ��ñ�־
 */
enum SFFS_Flags
{
    SFFSF_CREATE=1, //!< ����
    SFFSF_READ=2,   //!< ��ȡ
    SFFSF_WRITE=4,  //!< д��
    SFFSF_APPEND=8
};


/**
 * @brief ��Ч���
 */
#define SFFS_INVALID_HANDLE 0

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

enum SFFS_Seek_Flags
{
    SFFS_SEEK_SET=0,
    SFFS_SEEK_CUR=1,
    SFFS_SEEK_END=2
};
SFSize_T SFFS_Seek(SFFS_HANDLE hFile,SFSize_T sz,int pos);

/**
 * @brief �ر�һ���򿪵��ļ����
 * @param hHandle - �򿪵��ļ����
 */
void SFFS_Close(SFFS_HANDLE hHandle);

/**
 * @brief ��ȡһ���򿪵��ļ��ĵ�ǰ����
 * @param hHandle - �򿪵��ļ����
 * @param pSz - ���Ի�ȡ�ļ����ȵ�ָ��
 * @return �ɹ���ʧ�� 
 */
SFBool SFFS_GetSize(SFFS_HANDLE hHandle,SFSize_T*pSz);


#define SFFS_MAX_FILE_NAME_LEN  256
#define SFFS_MAX_PATH_LEN       520

enum SFFS_Attrs
{
    SFFS_ATTR_NORMAL           =0x00,
    SFFS_ATTR_READ_ONLY        =0x01,
    SFFS_ATTR_HIDDEN           =0x02,
    SFFS_ATTR_SYSTEM           =0x04,
    SFFS_ATTR_VOLUME           =0x08,
    SFFS_ATTR_DIR              =0x10,
    SFFS_ATTR_ARCHIVE          =0x20,
    SFFS_LONGNAME_ATTR         =0x0F
};

int SFFS_SetAttributes(UString path,SFUint32 attr);

int SFFS_GetAttributes(UString path,SFUint32* attr);


typedef SFInt32 SFRESULT;

enum SFRESULTS
{
    SFR_OK=0,
    SFR_ERROR=-1,
    SFR_EOF=-2,
    SFR_FAIL=-3,
    SFR_BUSY=-4,
    SFR_CANCEL=-5,
    SFR_NOTFOUND=-6,
    SFR_WOULDBLOCK=-7
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
void SFSystem_SelectFile(UChar* aBuffer,SFSize_T aMaxSize,SFUint32 aFlags,const UChar* aFilter,SFReason* aReason);


enum SF_INPUT_TYPES
{
    SF_INPUT_TYPE_ANY=0,
    SF_INPUT_TYPE_NUMERIC=1,
    SF_INPUT_TYPE_EMAILADDR=2,
    SF_INPUT_TYPE_PHONENUMBER=3,
    SF_INPUT_TYPE_URL=4,
    SF_INPUT_TYPE_DECIMAL=5,

    SF_INPUT_TYPE_PASSWORD=0x100,
    SF_INPUT_TYPE_UNEDITABLE=0x200,
    SF_INPUT_TYPE_SENSITIVE=0x400,
    SF_INPUT_TYPE_NON_PREDICTIVE=0x800,
    SF_INPUT_TYPE_INITIAL_CAPS_WORD=0x1000,
    SF_INPUT_TYPE_INITIAL_CAPS_SENTENCE=0x2000,
    SF_INPUT_TYPE_UPPERCASE=0x4000,
    SF_INPUT_TYPE_ENGLISH_ONLY=0x8000
};


/**
 * @brief �첽���������û�����һ���ı�
 * @param aCaption - �������⣬ΪSFNull��ʾû�б���
 * @param aBuffer - ��������Ļ����������ʼ������Ϊ��������ı��ĳ�ʼ���ݣ���������L'\0'��β
 * @param aMaxLength - �����������󳤶ȣ�����L'0'��β
 * @param aNotifier - ���ڻ�ȡ�첽֪ͨ�ı������������Ǿֲ������ĵ�ַ
 * @remarks ������Ϊ�첽�����������������У����û�г���ϵͳ������aNotifier��������Ϊ::SFReasons::SFReasonPending��
 *                   �����������ΪSFReasonError���ɹ����ú󣬷������Ϸ��صȵ�ǰ�¼���������л�Ϊϵͳ���棬����������귵�أ�
 *                   ����û�����ȷ�ϣ���aNotifier��Ϊ::SFReasons::SFReasonOK������û�ȡ�������aNotifier��Ϊ::SFReasons::SFReasonCancel��
 *                   �����첽���ã��û�����Ӧ����ѯaNotifier����ʵ�������൯��ϵͳ����ģ���ϵͳ��������ʱ���յ�ǰ��ܵ�ʵ�֣�
 *                   �ǲ�����õ�ǰӦ�õķ����ģ����ֻ���ڷ����û�����Ż����е��û���ѯ�Ĵ��루ͨ���ָ���ʱ������ӦRESUME��
 */

void SFSystem_InputText(UString aCaption,SFUint32 aFlags,UChar * aBuffer,SFSize_T aMaxLength,const char* aInputMode,SFReason* aNotifier);


/**
 * @brief �첽��������������������ָ����URL
 * @param aURL - Ҫ���ʵ�URL��UTF8
 * @param aNotifier - ���ڻ�ȡ�첽֪ͨ�ı������������Ǿֲ������ĵ�ַ
 * @remarks aNotifier��Ϊ::VResultConsts::KResultQuitRequest�����Ҫ��ǰӦ���˳���
 *  ::SFReasons::SFReasonPending��ʾ����������У�
 *  ::SFReasons::SFReasonOK��ʾ�����������
 *  ::SFReasons::SFReasonError��ʾ����
 *  �����첽��������ϸ˵���μ�VOS_InputText(const UChar * aCaption,UChar * aBuffer,int aMaxLength,VResult* aNotifier)��˵��
 */
void SFSystem_OpenBrowser(const char* aURL,SFUint32 aFlags,SFReason* aNotifier);


/**
 * @brief �첽����������ָ���ĵ绰����
 * @param aPhoneNumber - Ҫ����ĺ���
 * @param aNotifier - ���ڻ�ȡ�첽֪ͨ�ı������������Ǿֲ������ĵ�ַ
 * @remarks aNotifier��Ϊ::SFReasons::SFReasonQuitRequest�����Ҫ��ǰӦ���˳���
 *  ::SFReasons::SFReasonPending��ʾ����ͨ���У�
 *  ::SFReasons::SFReasonOK��ʾͨ��������
 *  ::SFReasons::SFReasonError��ʾ����
 *  ::SFReasons::SFReasonCancel��ʾ�û�ȡ��
 *  �����첽��������ϸ˵���μ�SFSystem_InputText(const UChar * aCaption,SFUint32 aFlags,UChar * aBuffer,SFSize_T aMaxLength,SFReason* aNotifier)��˵��
 */
void SFSystem_MakeVoiceCall(UString aPhoneNumber,SFReason* aNotifier);


SFInt SFSystem_MultiBytesToWideChars(UChar* dest,SFInt dest_len,const char* src,const char* encoding);

SFInt SFSystem_WideCharsToMultiBytes(char* dest,SFInt dest_len,const UChar* src,const char* encoding);

#define SFSMS_MAX_MSG_LEN           (160)
#define SFSMS_MAX_DIGITS_LEN        41

enum SFSMS_DCS_ENUM
{
    SFSMS_DCS_GSM_7BIT_DEFAULT  = 0x00,  /* GSM 7-bit */
    SFSMS_DCS_OCTET             = 0x04,  /* 8-bit */
    SFSMS_DCS_UCS2              = 0x08,  /* UCS2 */  

    __SFSMS_DCS_ENUM__INT32__   = 0x7FFFFFFF
};

typedef struct _SFSMSMsg
{
    SFUint16 iDestPort;
    SFUint16 iSrcPort;
    SFUint8  iDCS;
    SFUint8  iMTI;
    
    SFUint16 iMessageLen;
    SFUint8  iTotalSegments; /* total segments*/
    SFUint8  iSegment; /* indicate which segment*/

    SFUint8  iNumberLen;
    char     iNumber[SFSMS_MAX_DIGITS_LEN];
   
    SFUint8  iSCTS[7+1];//pedding
    //align 4
    SFUint8  iMessageData[SFSMS_MAX_MSG_LEN];
} SFSMSMsg;

typedef struct _SFCallback
{
    void (*iCallback)(void*param);
    void* iParam;
} SFCallback;

enum SFAPP_SYS_CALLBACKS
{
    SFSYS_CALLBACK_NONE=0,
    SFSYS_CALLBACK_SMS_MSG,
    SFSYS_CALLBACK_SMS_DATA,
    SFSYS_CALLBACK_MAKE_CALL,

    SFSYS_CALLBACK_LAST,

    __SFAPP_SYS_CALLBACKS__INT32__=0x7FFFFFFF
};

SFReason SFSystem_RegisterCallback(SFInt aIdxCallback,SFCallback aCallback);

SFReason SFSystem_UnregisterCallback(SFInt aIdxCallback,SFCallback aCallback);


/**
 * @brief �����÷��������ڴ��������Ϣ����ʽ����Ը���ʵ��
 */
void SFDEBUG(const char*str);

/**
 * @brief �����豸�ṹ���������ֻҪָ�룬����Ҫ֪����ṹ
 */
typedef struct _SFPCMDevice SFPCMDevice;

/**
 * @brief ����һ��PCM�����豸
 * @param aFormat - ����Ϊ0
 * @param aSamplesPerSec - ÿ��Ĳ�������ʵ��ֻ��8000��16000��
 * @param aBit - ��������8/16��ʵ������ʱֻ��16bit��
 * @param aChannel - ������ʵ��ֻ��1��
 * @return �����������豸
 */
SFPCMDevice* SFPCMDevice_Create(SFInt aFormat,SFInt aSamplesPerSec,SFInt aBit,SFInt aChannel);

/**
 * @brief ��ʼ����ָ�����豸
 * @param aDevice - ���ŵ��豸
 */
void SFPCMDevice_Start(SFPCMDevice* aDevice);

/**
 * @brief ֹͣ�������ţ������ر��豸��֮����Ȼ���Ե���SFPCMDevice_Start
 * @param aDevice - ���ŵ��豸
 */
void SFPCMDevice_Stop(SFPCMDevice* aDevice);

/**
 * @brief �ر��豸���رպ��豸�����Ϊ��Ч
 * @param aDevice - �����������豸
 */
void SFPCMDevice_Close(SFPCMDevice* aDevice);

/**
 * @brief ���豸д�������ݣ�����֮ǰ���ŵ�����֮��
 * @param aDevice - �����������豸
 * @param aData - �������ݻ���ָ��
 * @param aSize - �������ݻ�������ֽ�Ϊ��λ�Ĵ�С
 * @deprecated ��������
 */
void SFPCMDevice_Write(SFPCMDevice* aDevice,const SFAny* aData,SFSize_T aSize);

/**
 * @brief �����豸���������
 */
#define SF_MAX_VOLUME   32767
    
/**
 * @brief �����豸������
 * @param aDevice - �����������豸
 * @param aVolume - ���õ�����
 */
void SFPCMDevice_SetVolume(SFPCMDevice* aDevice,SFInt aVolume);


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
 * @remarks ����һ��ѭ�����ŵĻ��壬����������ﻺ���ĩβ���ܻ���������ռ䲻���������
 *          ��ô��������ռ䣬����Ҫ�������λ�ڻ�����ʼ�Ŀռ䣬���Ծ���Ҫ���������
 *          �μ�DirectX�е�DirectSound��IDirectSoundBuffer
 */
void SFPCMDevice_LockBuffer(SFPCMDevice* aDevice,SFUint32 offset,SFUint32 size,SFAny** pBuf0,SFUint32* pBufSize0,SFAny**pBuf1,SFUint32* pBufSize1);

/**
 * @brief �ύ֮ǰ��õĻ�������
 * @param aDevice - �����������豸
 * @param aBuf0 - ֮ǰ��ȡ�Ļ����һ��
 * @param aBUfSize0 - ʵ��Ҫ�ύ�Ļ����һ�εĳ���
 * @param aBuf1 - ֮ǰ��ȡ�Ļ���ڶ��Σ����û�����SFNull
 * @param aBUfSize1 - ʵ��Ҫ�ύ�Ļ����һ�εĳ���
 */
void SFPCMDevice_UnlockBuffer(SFPCMDevice* aDevice,SFAny* aBuf0,SFUint32 aBufSize0,SFAny* aBuf1,SFUint32 aBufSize1);

/**
 * @brief ��ȡ�豸������
 * @param aDevice - �����������豸
 * @return ����
 */
SFInt SFPCMDevice_GetVolume(SFPCMDevice* aDevice);

/**
 * @brief ��ȡ����Ӧ�õĶ������'\\0'��β
 * @param aBuffer - ���ڻ�ȡ�����ַ�������Ļ��壬ΪUNICODE UTF16��ʽ
 * @param aSize - ����ȡ�Ĵ�С�����ַ�Ϊ��λ
 * @return ʵ�ʵĴ�С�����ַ�Ϊ��λ������'\\0'��β
 */
SFSize_T SFApp_GetCommandLine(UChar* aBuffer,SFSize_T aSize);

/**
 * @brief ��ȡ��ǰ�İ���״̬
 * @return ��ǰ�İ���״̬��ÿһλ����һ��������״̬��Ϊ1��ʾ���£�Ϊ0��ʾû�а��£��μ�::SFKeyStates
 */
SFUint32 SFSystem_GetKeyState(void);

/**
 * @brief ����״̬����ֵ
 */
enum SFKeyStates
{
    SFKS_UP=1,          //!< �������
    SFKS_DOWN=1<<1,     //!< �������
    SFKS_LEFT=1<<2,     //!< �������
    SFKS_RIGHT=1<<3,    //!< �������
    SFKS_NUM0=1<<4,     //!< ���ּ�0
    SFKS_NUM1=1<<5,     //!< ���ּ�1
    SFKS_NUM2=1<<6,     //!< ���ּ�2
    SFKS_NUM3=1<<7,     //!< ���ּ�3
    SFKS_NUM4=1<<8,     //!< ���ּ�4
    SFKS_NUM5=1<<9,     //!< ���ּ�5
    SFKS_NUM6=1<<10,    //!< ���ּ�6
    SFKS_NUM7=1<<11,    //!< ���ּ�7
    SFKS_NUM8=1<<12,    //!< ���ּ�8
    SFKS_NUM9=1<<13,    //!< ���ּ�9
    SFKS_POUND=1<<14,   //!< #
    SFKS_STAR=1<<15,    //!< *
    SFKS_SL=1<<16,      //!< �����
    SFKS_SM=1<<17,      //!< �����
    SFKS_SR=1<<18,      //!< �����
    SFKS_END=1<<19,
    SFKS_SEND=1<<20,
    SFKS_CLR=1<<21,
    SFKS_POWER=1<<22,
    SFKS_VOLUP=1<<23,
    SFKS_VOLDOWN=1<<24
};


/**
* @brief Ӧ��һ���¶�ջ����һ������
* @stack_addr - ��ջ�׵�ַ
* @stack_size -��ջ�ߴ�
* @method -����
* @argc -��������
* @... - ���Ӳ���
* @return �����÷����ķ���ֵ
*/
SFUint32 SFOS32_InvokeWithStack(void* stack_addr,SFUint32 stack_size,void (*method)(void),SFUint32 argc,...);

/**
 * @brief ��ȡ��ǰ�Ժ���Ϊ��λ��ʱ�䣬���ֵ����������ʱ������Ҫ����ü����̫�ã��޷�ȷ����ֵΪ0ʱ��׼ȷʱ�̡�
 * @return �Ժ���Ϊ��λ��ϵͳʱ�䡣
 */
SFUint64 SFOS32_GetCurrentTimeMillis(void);

#ifdef SF_STOCK_RESOURCE
//���е�������Դ��������ʶ�������͵��ֶΣ�һ���ڷ��ص�����֮ǰ4��8���ֽڣ� 
SFInt32 SFOS32_GetStockResource(SFUint32 idx,void *res);

SFInt32 SFOS32_ReleaseStockResource(void *res);
#endif //SF_STOCK_RESOURCE

//raw size without '\0'
#define SF_IMEI_LENGTH  15
//raw size without '\0'
#define SF_IMSI_LENGTH  16

/**
* @brief ��ȡ�ֻ�ʶ����
* @param pIMEI - ���ڱ����ֻ�ʶ����Ļ�����׵�ַ������С��SF_IMEI_LENGTH
* @param pReason - �첽����֪ͨ
*/
void SFSystem_GetIMEI(char* pIMEI,SFReason* pReason);

/**
* @brief ��ȡ����ʶ����
* @param pIMEI - ���ڱ������ʶ����Ļ�����׵�ַ������С��SF_IMSI_LENGTH
* @param pReason - �첽����֪ͨ�������SIM����ֱ�ӷ���SF_REASON_FAIL
*/
void SFSystem_GetIMSI(char* pIMSI,SFReason* pReason);




void SFSystem_Exec(void (*exec_entry)(void*param),void*param);

//void* SFSystem_CreateNativeGraphicsHandler(SFInt w,SFInt h,void* p,SFInt nBits);


enum
{
    SF_FOLDER_APPDATA=0,//read only
    SF_FOLDER_APPCONFIG,//rw only for this app
    SF_FOLDER_APPPRIVATE,//rw only for this app, not visible by normal user (may be encrypted)
    SF_FOLDER_SYSDATA,//global read only
    SF_FOLDER_SYSCONFIG,//global rw
    SF_FOLDER_SYSPRIVATE//global rw, not visible by normal user(may be encrypted)
};

SFInt SFSystem_GetFolder(SFInt idx,UChar* buf,SFInt len);

enum
{
    SF_NETWORK_ACCOUNT_AUTO=0,
    SF_NETWORK_ACCOUNT_WAP,//with wap support
    SF_NETWORK_ACCOUNT_SOCKET//with socket support
};


SFRESULT SFSystem_SetNetworkAccount(SFInt type);





typedef SFUint64 sf_time_t;

/**
 * @brief ��ȡ��ǰϵͳʱ�� 壣��������ںͺ��룬�����벻��֤��ȷ��������֤���溬���룩
 * @parma tm - ���Ի�ȡʱ���ָ��
 */
void sf_time(sf_time_t* tm);

DECLARE_INTERFACE(ISFMalloc)
    
BEGIN_DEFINE_INTERFACE(ISFMalloc)
    void* (*Alloc)(ISFMalloc*self,SFSize_T sz);
    void* (*Realloc)(ISFMalloc*self,void* ptr,SFSize_T sz);
    void (*Free)(ISFMalloc*self,void* ptr);
    int (*DidAlloc)(ISFMalloc*self,void* ptr);
    SFSize_T (*GetSize)(ISFMalloc*self,void* ptr);
    //SFSize_T (*GetMaxAllocatableSize)(ISFHeap*self);
    //SFSize_T (*GetTotalAllocatedSize)(ISFHeap*self);
END_DEFINE_INTERFACE(ISFMalloc)

#define ISFMalloc_AddRef(self)                 (self)->__vftab->AddRef((ISFMalloc*)(self))
#define ISFMalloc_Release(self)                (self)->__vftab->Release((ISFMalloc*)(self))
#define ISFMalloc_QueryInterface(self,clsid_l,clsid_h,ppInterface)  (p)->__vftab->QueryInterface((ISFMalloc*)(self),clsid_l,clsid_h,ppInterface)
#define ISFMalloc_Alloc(self,size)               (self)->__vftab->Alloc((ISFMalloc*)(self),size)
#define ISFMalloc_Free(self,ptr)                (self)->__vftab->Free((ISFMalloc*)(self),ptr)
#define ISFMalloc_Realloc(self,ptr,new_size)          (self)->__vftab->Realloc((ISFMalloc*)(self),(void*)ptr,new_size)
#define ISFMalloc_DidAlloc(self,ptr)            (self)->__vftab->DidAlloc((ISFMalloc*)(self),(void*)ptr)
#define ISFMalloc_GetSize(self,ptr)             (self)->__vftab->GetSize((ISFMalloc*)(self),(void*)ptr)


DECLARE_INTERFACE(ISFTimer)

BEGIN_DEFINE_INTERFACE(ISFTimer)
    SFReason (*SetParentTimer)(ISFTimer*self,ISFTimer* parent);
    SFReason (*SetTimer)(ISFTimer*self,SFInt32 dwMSecs,SF_FUNC_CALLBACK pfn,void* pUser);
    SFReason (*KillTimer)(ISFTimer*self,SF_FUNC_CALLBACK pfn,void* pUser);
    SFReason (*KillAll)(ISFTimer*self);
END_DEFINE_INTERFACE(ISFTimer)

#define ISFTimer_AddRef(self)                       (self)->__vftab->AddRef((ISFTimer*)(self))
#define ISFTimer_Release(self)                      (self)->__vftab->Release((ISFTimer*)(self))
#define ISFTimer_QueryInterface(self,clsid_l,clsid_h,ppInterface)        (self)->__vftab->QueryInterface((ISFTimer*)(self),clsid_l,clsid_h,ppInterface) 
#define ISFTimer_SetParentTimer(self,pParentTimer)            (self)->__vftab->SetParentTimer((ISFTimer*)(self),(ISFTimer*)(pParentTimer))
#define ISFTimer_SetTimer(self,dwMSecs,pfn,pUser)   (self)->__vftab->SetTimer((ISFTimer*)(self),dwMSecs,pfn,pUser)
#define ISFTimer_KillTimer(self,pfn,pUser)          (self)->__vftab->KillTimer((ISFTimer*)(self),pfn,pUser)
#define ISFTimer_KillAll(self)                      (self)->__vftab->KillAll((ISFTimer*)(self))


typedef struct _SFWapProfile
{
    SFUint16 iStructSize;
    SFUint16 iType;//wap/http/...
    SFUint8 iProxyIP[4];
    SFUint16 iProxyPort;
    SFUint16 iNetworkAccount;
    SFUint8 iUserName[32];
    SFUint8 iUserPass[32];
} SFWapProfile;


enum
{
    SF_NETACCOUNT_AUTH_PAP=0,
    SF_NETACCOUNT_AUTH_CHAP=1
};

typedef struct _SFNetworkAccountInfo
{
    SFUint16 iStructSize;
    SFUint16 iAuthType;
    UChar iName[32];
    UChar iAPN[64];
    SFUint8 iDNSIP[4];
    SFUint8 iUserName[32];
    SFUint8 iUserPass[32];
} SFNetworkAccountInfo;


DECLARE_INTERFACE(ISFNetworkManager)
    
BEGIN_DEFINE_INTERFACE(ISFNetworkManager)
    SFReason (*GetActiveAccount)(ISFNetworkManager*self,SFInt* pIdx);
    SFReason (*SetActiveAccount)(ISFNetworkManager*self,SFInt idx);
    SFReason (*GetAccountCount)(ISFNetworkManager*self,SFInt* account);
    void (*AGetAccountInfo)(ISFNetworkManager*self,int idx,SFNetworkAccountInfo* pAccount,SFReason* aReason);
    void (*ASetAccountInfo)(ISFNetworkManager*self,int idx,const SFNetworkAccountInfo* pAccount,SFReason* aReason);
    void (*ASelectAccount)(ISFNetworkManager*self,SFReason* pReason);
    void (*AGetWapProfile)(ISFNetworkManager*self,int idx,SFWapProfile* pProfile,SFReason* pReason);
END_DEFINE_INTERFACE(ISFNetworkManager)

#define ISFNetworkManager_AddRef(self)                                  (self)->__vftab->AddRef((ISFNetworkManager*)(self))
#define ISFNetworkManager_Release(self)                                 (self)->__vftab->Release((ISFNetworkManager*)(self))
#define ISFNetworkManager_QueryInterface(self)                          (self)->__vftab->QueryInterface((ISFNetworkManager*)(self))
#define ISFNetworkManager_GetActiveAccount(self,pAccountIdx)            (self)->__vftab->GetActiveAccount((ISFNetworkManager*)(self),pAccountIdx)
#define ISFNetworkManager_SetActiveAccount(self,aAccountIdx)            (self)->__vftab->SetActiveAccount((ISFNetworkManager*)(self),aAccountIdx)
#define ISFNetworkManager_GetAccountCount(self,pCount)                  (self)->__vftab->GetAccountCount((ISFNetworkManager*)(self),pCount)
#define ISFNetworkManager_AGetAccountInfo(self,aAccountIdx,pInfo,aReason) (self)->__vftab->AGetAccountInfo((ISFNetworkManager*)(self),aAccountIdx,pInfo,aReason)
#define ISFNetworkManager_ASetAccountInfo(self,aAccountIdx,pInfo,aReason) (self)->__vftab->ASetAccountInfo((ISFNetworkManager*)(self),aAccountIdx,pInfo,aReason)
#define ISFNetworkManager_ASelectAccount(self,aAyncNotify)              (self)->__vftab->ASelectAccount((ISFNetworkManager*)(self),aAyncNotify)
#define ISFNetworkManager_AGetWapProfile(self,idx,pProfile,pReason)     (self)->__vftab->AGetWapProfile((ISFNetworkManager*)(self),idx,pProfile,pReason)




void SFSystem_NotifyAll(SFReason* aReason);
void SFSystem_Cancel(SFReason* aReason);
SFReason SFSystem_WaitFor(SFReason* aReason,const SFCallback* cb);

typedef SFUint32 sf_vfs_size_t;         //!<�ļ�ϵͳʹ�õĴ�С
typedef SFInt32 sf_vfs_offset_t;        //!<�ļ�ϵͳʹ�õ�ƫ����
typedef SFUint32 sf_vfs_attr_t;         //!<�ļ�������
typedef SFUint32 sf_vfs_access_t;       //!<�ļ��ķ���Ȩ��
typedef UChar sf_vfs_char_t;            //!<�ļ����õĵ����ַ�
typedef const UChar* sf_vfs_string_t;   //!<�ļ���

struct _sf_vfs_fileinfo;

DECLARE_INTERFACE(sf_vfs_file)
DECLARE_INTERFACE(sf_vfs)


typedef struct _sf_vfs_fileinfo
{
   sf_vfs_attr_t attrib;        //!< �ļ�����
   sf_vfs_access_t access;      //!< ����Ȩ��
   sf_vfs_size_t size;          //!< �ļ���С
   SFUint32 reserved;           //!<  ����Ŀ��
   
   sf_time_t time_create;       //!< ����ʱ��
   sf_time_t time_access;       //!< �ϴη���ʱ�䣬�˰汾�У���Ϊд��ʱ��
   sf_time_t time_write;        //!< �ϴ��޸�ʱ��
   
   sf_vfs_char_t name[SFFS_MAX_FILE_NAME_LEN];
} sf_vfs_fileinfo;

BEGIN_DEFINE_INTERFACE(sf_vfs_file)
    
    /**
     * @brief �رմ˴򿪵��ļ�������漴��Ч��ͬʱ�˲��������һ��Release����˵���Close��Ӧ���Դ˶����ٵ���Release�����⼴ʱ����û�е��ù�Close����һ��ReleaseҲ��رմ��ļ�ָ��
     * @param fd - �ļ�����ָ��
     * @return 
     */
    int (*vfs_file_close)(sf_vfs_file* fd);
    
    /**
     * @brief ��ȡ�ļ�
     * @param fd - �ļ�����ָ��
     * @param buf - ��Ŷ�ȡ���ݵĻ�����׵�ַ
     * @param sz - Ҫ��ȡ�ĳ���
     * @param rsz - ���ڻ�ȡʵ�ʶ�ȡ���ȵ�ָ��
     * @return 
     */
    int (*vfs_file_read)(sf_vfs_file* fd,void* buf,sf_vfs_size_t sz,sf_vfs_size_t* rsz);
    
    /**
     * @brief д���ļ�
     * @param fd - �ļ�����ָ��
     * @param buf - ��Ŵ�д�����ݵĻ�����׵�ַ
     * @param sz - Ҫд��ĳ���
     * @param rsz - ���Ի�ȡʵ��д�볤�ȵ�ָ��
     * @return 
     */
    int (*vfs_file_write)(sf_vfs_file* fd,void* buf,sf_vfs_size_t sz,sf_vfs_size_t* rsz);
    
    /**
     * @brief 
     * @param fd - �ļ�����ָ��
     * @param offset - 
     * @param orig -
     * @return 
     */
    int (*vfs_file_seek)(sf_vfs_file* fd,sf_vfs_offset_t offset,int orig);
    
    /**
    * @brief �ύ���е�δʵ��д����̵����ݺͲ���
    * @param fd - �ļ�����ָ��
    * @return 
    */
    int (*vfs_file_commit)(sf_vfs_file* fd);
    
    /**
    * @brief ��ȡ��ǰ���ļ���дָ���λ��
    * @param fd - �ļ�����ָ��
    * @param offset - ���ڴ�Ŷ�дָ��λ�õ�ָ��
    * @return 
    */
    int (*vfs_file_tell)(sf_vfs_file* fd,sf_vfs_offset_t* poffset);
    
    /**
    * @brief �ı�һ���ļ��Ĵ�С���ļ����봦�ڿ�д���ģʽ
    * @param fd - �ļ�����ָ��
    * @param sz - Ҫ�ı䵽�Ĵ�С
    * @return 
    */
    int (*vfs_file_chsize)(sf_vfs_file* fd,sf_vfs_size_t sz);
    
    /**
    * @brief ��鵱ǰ�ļ�ָ���Ƿ񵽴����ļ���ĩβ
    * @param fd - �ļ�����ָ��
    * @return 0 ��ʾû�е���ĩβ��1��ʾ����ĩβ
    */
    int (*vfs_file_eof)(sf_vfs_file* fd);
    
    /**
    * @brief �ض��ļ�����ǰд��ָ���λ�ã��ļ����봦�ڿ�д���ģʽ
    * @param fd - �ļ�����ָ��
    * @return 
    */
    int (*vfs_file_trunc)(sf_vfs_file* fd);
    
    /**
    * @brief ���Ի�ȡ������ļ������ϵ���һ������
    * @param fd - �ļ�����ָ��
    * @return 
    */
    int (*vfs_file_getlasterror)(sf_vfs_file* fd);
    
    /**
    * @brief ��ȡ�ļ��ĳ���
    * @param fd - �ļ�����ָ��
    * @param psize - ���ڴ�ŷ��ش�С��ָ��
    * @return 
    */
    int (*vfs_file_filelength)(sf_vfs_file* fd,sf_vfs_size_t* psize);
END_DEFINE_INTERFACE(sf_vfs_file)


BEGIN_DEFINE_INTERFACE(sf_vfs)
    /**
        * @brief 
        */
    int (*vfs_open_file)(sf_vfs* fs,sf_vfs_string_t file,int mode,sf_vfs_file**pfile);

    /**
        * @brief 
        */
    int (*vfs_getlasterror)(sf_vfs* fs);

    /**
        * @brief 
        */
    int (*vfs_rename)(sf_vfs* fs,sf_vfs_string_t name,sf_vfs_string_t newname);

    /**
        * @brief 
        */
    int (*vfs_getattr)(sf_vfs* fs,sf_vfs_string_t name,sf_vfs_attr_t* pattr);

    /**
        * @brief 
        */
    int (*vfs_setattr)(sf_vfs* fs,sf_vfs_string_t name,sf_vfs_attr_t attr);

    /**
        * @brief 
        */
    int (*vfs_getaccess)(sf_vfs* fs,sf_vfs_string_t name,sf_vfs_access_t* paccess);

    /**
        * @brief 
        */
    int (*vfs_setaccess)(sf_vfs* fs,sf_vfs_string_t name,sf_vfs_access_t access);

    /**
        * @brief 
        */
    int (*vfs_remove)(sf_vfs* fs,sf_vfs_string_t name);

    /**
        * @brief 
        */
    int (*vfs_getcwd)(sf_vfs* fs,sf_vfs_char_t* buf,SFSize_T maxlen);

    /**
        * @brief 
        */
    int (*vfs_chcwd)(sf_vfs* fs,sf_vfs_string_t path);

    /**
        * @brief 
        */
    int (*vfs_mkdir)(sf_vfs* fs,sf_vfs_string_t name);

    /**
        * @brief 
        */
    int (*vfs_rmdir)(sf_vfs* fs,sf_vfs_string_t name);

    /**
        * @brief 
        */
    int (*vfs_exists)(sf_vfs* fs,sf_vfs_string_t name,int mode);

    /**
        * @brief 
        */
    int (*vfs_getfileinfo)(sf_vfs* fs,sf_vfs_string_t name,sf_vfs_fileinfo* pinfo);

    /**
        * @brief 
        */
    int (*vfs_enum_first)(sf_vfs* fs,sf_vfs_string_t path,int mode,sf_vfs_fileinfo* pinfo);

    /**
        * @brief 
        */
    int (*vfs_enum_next)(sf_vfs* fs,sf_vfs_fileinfo* pinfo);

    /**
        * @brief 
        */
    int (*vfs_enum_close)(sf_vfs* fs);

    /**
        * @brief 
        */
    int (*vfs_getfreespace)(sf_vfs* fs,sf_vfs_string_t path,sf_vfs_size_t *psize);
END_DEFINE_INTERFACE(sf_vfs)



enum sf_vfs_open_mode_enum
{
    SF_VFS_OPEN_CREATE=0x01,    //!< 
    SF_VFS_OPEN_READ=0x02,      //!< 
    SF_VFS_OPEN_WRITE=0x04,     //!< 
    SF_VFS_OPEN_APPEND=0x08,    //!< 
    
    SF_VFS_OPEN_RW=SF_VFS_OPEN_READ|SF_VFS_OPEN_WRITE
};

enum sf_vfs_file_position_enum
{
    SF_VFS_SEEK_SET=0,
    SF_VFS_SEEK_CUR=1,
    SF_VFS_SEEK_END=2
};

enum sf_vfs_find_mode_enum
{
    SF_VFS_FIND_FILE=1,
    SF_VFS_FIND_DIR=2,
    SF_VFS_FIND_ALL=SF_VFS_FIND_FILE|SF_VFS_FIND_DIR
};

#define sf_vfs_file_addref(fd)                  (fd)->__vftab->AddRef((sf_vfs_file*)(fd))
#define sf_vfs_file_release(fd)                 (fd)->__vftab->Release((sf_vfs_file*)(fd))
#define sf_vfs_file_close(fd)                   (fd)->__vftab->vfs_file_close((sf_vfs_file*)(fd))
#define sf_vfs_file_read(fd,buf,sz,rsz)         (fd)->__vftab->vfs_file_read((sf_vfs_file*)(fd),buf,sz,rsz)
#define sf_vfs_file_write(fd,buf,sz,rsz)        (fd)->__vftab->vfs_file_write((sf_vfs_file*)(fd),buf,sz,rsz)
#define sf_vfs_file_seek(fd,offset,orig)        (fd)->__vftab->vfs_file_seek((sf_vfs_file*)(fd),offset,orig)
#define sf_vfs_file_commit(fd)                  (fd)->__vftab->vfs_file_commit((sf_vfs_file*)(fd))
#define sf_vfs_file_tell(fd,poffset)            (fd)->__vftab->vfs_file_tell((sf_vfs_file*)(fd),poffset)
#define sf_vfs_file_chsize(fd,sz)               (fd)->__vftab->vfs_file_chsize((sf_vfs_file*)(fd),sz)
#define sf_vfs_file_eof(fd)                     (fd)->__vftab->vfs_file_eof((sf_vfs_file*)(fd))
#define sf_vfs_file_trunc(fd)                   (fd)->__vftab->vfs_file_trunc((sf_vfs_file*)(fd))
#define sf_vfs_file_getlasterror(fd)            (fd)->__vftab->vfs_file_getlasterror((sf_vfs_file*)(fd))
#define sf_vfs_file_filelength(fd,psize)        (fd)->__vftab->vfs_file_filelength((sf_vfs_file*)(fd),psize)

#define sf_vfs_release(fs)                      (fs)->__vftab->Release((sf_vfs*)(fs))
#define sf_vfs_addref(fs)                      (fs)->__vftab->AddRef((sf_vfs*)(fs))
#define sf_vfs_open_file(fs,file,mode,pfile)    (fs)->__vftab->vfs_open_file((sf_vfs*)(fs),file,mode,pfile)
#define sf_vfs_getlasterror(fs)                 (fs)->__vftab->vfs_getlasterror((sf_vfs*)(fs))
#define sf_vfs_rename(fs,name,newname)          (fs)->__vftab->vfs_rename((sf_vfs*)(fs),name,newname)
#define sf_vfs_getattr(fs,name,pattr)           (fs)->__vftab->vfs_getattr((sf_vfs*)(fs),name,pattr)
#define sf_vfs_setattr(fs,name,attr)            (fs)->__vftab->vfs_setattr((sf_vfs*)(fs),name,attr)
#define sf_vfs_getaccess(fs,name,paccess)       (fs)->__vftab->vfs_getaccess((sf_vfs*)(fs),name,paccess)
#define sf_vfs_setaccess(fs,name,access)        (fs)->__vftab->vfs_setaccess((sf_vfs*)(fs),name,access)
#define sf_vfs_remove(fs,name)                  (fs)->__vftab->vfs_remove((sf_vfs*)(fs),name)
#define sf_vfs_getcwd(fs,buf,maxlen)            (fs)->__vftab->vfs_getcwd((sf_vfs*)(fs),buf,maxlen)
#define sf_vfs_chcwd(fs,path)                   (fs)->__vftab->vfs_chcwd((sf_vfs*)(fs),path)
#define sf_vfs_mkdir(fs,name)                   (fs)->__vftab->vfs_mkdir((sf_vfs*)(fs),name)
#define sf_vfs_rmdir(fs,name)                   (fs)->__vftab->vfs_rmdir((sf_vfs*)(fs),name)
#define sf_vfs_exists(fs,name,mode)             (fs)->__vftab->vfs_exists((sf_vfs*)(fs),name,mode)
#define sf_vfs_getfileinfo(fs,name,pinfo)       (fs)->__vftab->vfs_getfileinfo((sf_vfs*)(fs),name,pinfo)
#define sf_vfs_enum_first(fs,path,mode,pinfo)   (fs)->__vftab->vfs_enum_first((sf_vfs*)(fs),path,mode,pinfo)
#define sf_vfs_enum_next(fs,pinfo)              (fs)->__vftab->vfs_enum_next((sf_vfs*)(fs),pinfo)
#define sf_vfs_enum_close(fs)                   (fs)->__vftab->vfs_enum_close((sf_vfs*)(fs))
#define sf_vfs_getfreespace(fs,path,psize)      (fs)->__vftab->vfs_getfreespace((sf_vfs*)(fs),path,psize)


#define SF_CLSID_IUnknown_L 0x00000010
#define SF_CLSID_IUnknown_H 0x00001219
#define SF_CLSID_IUnknown SF_CLSID_IUnknown_L,SF_CLSID_IUnknown_H


#define SF_CLSID_IVFS_L 0x00000030
#define SF_CLSID_IVFS_H 0x00001219
#define SF_CLSID_IVFS SF_CLSID_IVFS_L,SF_CLSID_IVFS_H

#define SF_CLSID_ISFTimer_L 0x00000030
#define SF_CLSID_ISFTimer_H 0x00001226
#define SF_CLSID_ISFTimer SF_CLSID_ISFTimer_L,SF_CLSID_ISFTimer_H

#define SF_CLSID_ISFNetworkManager_L    0x00000030
#define SF_CLSID_ISFNetworkManager_H    0x00001231
#define SF_CLSID_ISFNetworkManager SF_CLSID_ISFNetworkManager_L,SF_CLSID_ISFNetworkManager_H



int sf_create_object(SFUint32 l,SFUint32 h,void**ptr);




int SFApp_WriteSecureRecord(SFInt32 id_record,SFInt32 vL,SFInt32 vH);

int SFApp_ReadSecureRecord(SFInt32 id_record,SFInt32* vL,SFInt32* vH);

enum
{
    SF_STOCK_OBJ_SFGRAPHICS=1,
    SF_STOCK_OBJ_GRAPHICS=2
};

SFRESULT SFSystem_GetStockObject(SFUint type,void**p);

enum
{
    SF_MAIN_SCREEN=0
};
enum
{
    SF_PIXELFORMAT_PAL2=1,
    SF_PIXELFORMAT_PAL4,
    SF_PIXELFORMAT_PAL16,
    SF_PIXELFORMAT_PAL256,
    SF_PIXELFORMAT_RGB565,
    SF_PIXELFORMAT_RGB555,
    SF_PIXELFORMAT_ARGB1555,
    SF_PIXELFORMAT_RGB444,
    SF_PIXELFORMAT_ARGB4444,
    SF_PIXELFORMAT_RGB888,
    SF_PIXELFORMAT_XRGB8888,
    SF_PIXELFORMAT_ARGB8888
};
typedef struct _SFScreenInfo
{
    SFUint16 iScreenId; //!< [IN|OUT] 
    SFUint16 iFlags;    //!< 
    void* pBits;        
    SFUint16 iFormat;
    SFUint16 iWidth;
    SFUint16 iHeight;
    SFUint16 iPitch;
} SFScreenInfo;

SFReason SFScreen_GetInfo(SFScreenInfo* pInfo);
SFReason SFScreen_UpdateEx(SFInt id,SFInt x,SFInt y,SFInt w,SFInt h);

struct _SFAppPlatformFeatureNode;

typedef struct _SFAppPlatformFeatureNode SFAppPlatformFeatureNode;

struct _SFAppPlatformFeatureNode
{
    const SFAppPlatformFeatureNode* pNextFeature;
    SFUint32 iFeatureType;
};

enum SFAppPlatformFeatures
{
    SFAPPPLAT_FEATURE_NONE=0,
    SFAPPPLAT_FEATURE_KEYBOARD=1,//!< ����֧��
    SFAPPPLAT_FEATURE_TOUCH=1<<1,//!< ����֧��
    SFAPPPLAT_FEATURE_WAP=1<<2,//!< ����WAP�����֧��
    SFAPPPLAT_FEATURE_SMS=1<<3,//!< ���ŷ���֧��
    SFAPPPLAT_FEATURE_SOCKET=1<<4,//!< SOCKET֧��
    SFAPPPLAT_FEATURE_FAST_MEM=1<<5,//!< �����ڴ�֧��
    SFAPPPLAT_FEATURE_GRAPHICS_ARC=1<<6,//!< ARC֧��
    SFAPPPLAT_FEATURE_API2=1<<15
};

struct _SFAppPlatformInfo;

typedef struct _SFAppPlatformInfo SFAppPlatformInfo;

struct _SFAppPlatformInfo

{
    SFUint32 iPlatformVersion;
    SFUint32 iAPIVersion;
    SFUint32 iPlatformFeature;
    const SFAppPlatformFeatureNode* iFeatureDetail;
} ;

//�ڲ���Ϣ
struct _SFAppPlatformSysInfo;

typedef struct _SFAppPlatformSysInfo SFAppPlatformSysInfo;

struct _SFAppPlatformSysInfo
{
    const UChar* iManufacture;//�32��UNICODE UCS-2 ���ַ���������'\0'��β
    const char iIMEI[16];
};

struct _SFAppPlatformSysInfo2;

typedef struct _SFAppPlatformSysInfo2 SFAppPlatformSysInfo2;

struct _SFAppPlatformSysInfo2
{
    SFUint8 iWapDataAccount;
    SFUint8 iNetDataAccount;
};



#define APK_MANIFEST__MOD_ID                "APK-Mod-ID"
#define APK_MANIFEST__MOD_NAME              "APK-Mod-Name"
#define APK_MANIFEST__MOD_DESC              "APK-Mod-Desc"
#define APK_MANIFEST__MOD_TYPE              "APK-Mod-Type"
#define APK_MANIFEST__MOD_LANG              "APK-Mod-Lang"
#define APK_MANIFEST__MOD_ICON              "APK-Mod-Icon"
#define APK_MANIFEST__MOD_VENDOR            "APK-Mod-Vendor"
#define APK_MANIFEST__MOD_LOCALHEAPSIZE     "APK-Mod-LocalHeapSize"
#define APK_MANIFEST__MOD_PATH              "APK-Mod-Path"



#ifdef __cplusplus
}
#endif //__cplusplus

#endif //!__SNOWFISH_API__H__

