/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2005
*
*****************************************************************************/
/*============================================================================
*
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/oleidl.h,v 1.1 2007/05/17 07:25:32 bw Exp $
*
* $Id: oleidl.h,v 1.1 2007/05/17 07:25:32 bw Exp $
*
* $Date: 2007/05/17 07:25:32 $
*
* $Name: 1.1 $
*
* $Locker$
*
* $Revision: 1.1 $
*
* $State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* $Log: oleidl.h,v $
* Revision 1.1  2007/05/17 07:25:32  bw
* UNI@bw_20070517 15:10:01 MTK U25 U26 06B V30 version
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2007
*
*****************************************************************************/
/*============================================================================
*
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/oleidl.h,v 1.1 2007/05/14 09:46:46 bw Exp $
*
* ~Id: oleidl.h,v 1.1 2007/05/14 09:46:46 bw Exp $
*
* ~Date: 2007/05/14 09:46:46 $
*
* ~Name: 1.1 $
*
* ~Locker$
*
* ~Revision: 1.1 $
*
* ~State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* ~Log: oleidl.h,v $
* Revision 1.1  2007/05/14 09:46:46  bw
* UNI@bw_20070514 17:21:01 MTK��ʼ�汾.�ϲ�U25V20��U26V28.
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2005
*
*****************************************************************************/
/*============================================================================
*
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/oleidl.h,v 1.2 2007/04/04 06:51:33 bw Exp $
*
* ~Id: oleidl.h,v 1.2 2007/04/04 06:51:33 bw Exp $
*
* ~Date: 2007/04/04 06:51:33 $
*
* ~Name: 1.2 $
*
* ~Locker$
*
* ~Revision: 1.2 $
*
* ~State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* ~Log: oleidl.h,v $
* Revision 1.2  2007/04/04 06:51:33  bw
* ����.c.h�ļ�ͷģ��
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

#ifndef _OLEIDL_H
#define _OLEIDL_H
#if __GNUC__ >=3
#pragma GCC system_header
#endif

#ifdef __cplusplus
extern "C" {
#endif

#include <objfwd.h>

#define MK_ALT	32

typedef interface IParseDisplayname *LPPARSEDISPLAYNAME;
typedef interface IOleContainer *LPOLECONTAINER;
typedef interface IOleClientSite *LPOLECLIENTSITE;
typedef interface IOleObject *LPOLEOBJECT;
typedef interface IDropTarget *LPDROPTARGET;
typedef interface IDropSource *LPDROPSOURCE;
typedef interface IEnumOleUndoUnits *LPENUMOLEUNDOUNITS;
typedef interface IEnumOLEVERB *LPENUMOLEVERB;
typedef interface IOleWindow *LPOLEWINDOW;
typedef interface IOleInPlaceUIWindow *LPOLEINPLACEUIWINDOW;
typedef interface IOleInPlaceActiveObject *LPOLEINPLACEACTIVEOBJECT;
typedef interface IOleInPlaceFrame *LPOLEINPLACEFRAME;
typedef interface IOleAdviseHolder *LPOLEADVISEHOLDER;
typedef interface IViewObject *LPVIEWOBJECT;
typedef interface IViewObject2 *LPVIEWOBJECT2;

typedef enum tagOLEWHICHMK {
	OLEWHICHMK_CONTAINER=1,
	OLEWHICHMK_OBJREL,
	OLEWHICHMK_OBJFULL
} OLEWHICHMK;
typedef enum tagOLEGETMONIKER {
	OLEGETMONIKER_ONLYIFTHERE=1,
	OLEGETMONIKER_FORCEASSIGN,
	OLEGETMONIKER_UNASSIGN,
	OLEGETMONIKER_TEMPFORUSER
} OLEGETMONIKER;
typedef enum tagUSERCLASSTYPE {
	USERCLASSTYPE_FULL=1,
	USERCLASSTYPE_SHORT,
	USERCLASSTYPE_APPNAME
} USERCLASSTYPE;

#ifdef __GNUC__
__extension__  /* IS0 C says enums limited to range of int */ 
#endif
typedef enum tagDROPEFFECT {
	DROPEFFECT_NONE=0,
	DROPEFFECT_COPY=1,
	DROPEFFECT_MOVE=2,
	DROPEFFECT_LINK=4,
	DROPEFFECT_SCROLL=0x80000000
} DROPEFFECT;
typedef struct tagOleMenuGroupWidths {
	LONG width[6];
} OLEMENUGROUPWIDTHS,*LPOLEMENUGROUPWIDTHS;
typedef HGLOBAL HOLEMENU;
typedef enum tagOLECLOSE {
	OLECLOSE_SAVEIFDIRTY,
	OLECLOSE_NOSAVE,
	OLECLOSE_PROMPTSAVE
} OLECLOSE;
typedef struct tagOLEVERB {
	LONG lVerb;
	LPWSTR lpszVerbName;
	DWORD fuFlags;
	DWORD grfAttribs;
} OLEVERB,*LPOLEVERB;
typedef RECT BORDERWIDTHS;
typedef LPRECT LPBORDERWIDTHS;
typedef LPCRECT LPCBORDERWIDTHS;
typedef struct tagOIFI {
	UINT cb;
	BOOL fMDIApp;
	HWND hwndFrame;
	HACCEL haccel;
	UINT cAccelEntries;
}OLEINPLACEFRAMEINFO,*LPOLEINPLACEFRAMEINFO;

DECLARE_ENUMERATOR(OLEVERB);
typedef IEnumOLEVERB IEnumOleVerb;

EXTERN_C const IID IID_IParseDisplayName;
#undef INTERFACE
#define INTERFACE IParseDisplayName
DECLARE_INTERFACE_(IParseDisplayName,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(ParseDisplayName)(THIS_ IBindCtx*,LPOLESTR,ULONG*,IMoniker**) PURE;
};

EXTERN_C const IID IID_IOleContainer;
#undef INTERFACE
#define INTERFACE IOleContainer
DECLARE_INTERFACE_(IOleContainer,IParseDisplayName)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(ParseDisplayName)(THIS_ IBindCtx*,LPOLESTR,ULONG*,IMoniker**) PURE;
	STDMETHOD(EnumObjects)(THIS_ DWORD,IEnumUnknown**) PURE;
	STDMETHOD(LockContainer)(THIS_ BOOL) PURE;
};

EXTERN_C const IID IID_IOleItemContainer;
#undef INTERFACE
#define INTERFACE IOleItemContainer
DECLARE_INTERFACE_(IOleItemContainer,IOleContainer)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(ParseDisplayName)(THIS_ IBindCtx*,LPOLESTR,ULONG*,IMoniker**) PURE;
	STDMETHOD(EnumObjects)(THIS_ DWORD,IEnumUnknown**) PURE;
	STDMETHOD(LockContainer)(THIS_ BOOL) PURE;
	STDMETHOD(GetObject)(THIS_ LPOLESTR,DWORD,IBindCtx*,REFIID,void**) PURE;
	STDMETHOD(GetObjectStorage)(THIS_ LPOLESTR,IBindCtx*,REFIID,void**) PURE;
	STDMETHOD(IsRunning)(THIS_ LPOLESTR) PURE;
};

EXTERN_C const IID IID_IOleClientSite;
#undef INTERFACE
#define INTERFACE IOleClientSite
DECLARE_INTERFACE_(IOleClientSite,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(SaveObject)(THIS) PURE;
	STDMETHOD(GetMoniker)(THIS_ DWORD,DWORD,LPMONIKER*) PURE;
	STDMETHOD(GetContainer)(THIS_ LPOLECONTAINER*) PURE;
	STDMETHOD(ShowObject)(THIS) PURE;
	STDMETHOD(OnShowWindow)(THIS_ BOOL) PURE;
	STDMETHOD(RequestNewObjectLayout)(THIS) PURE;
};

EXTERN_C const IID IID_IOleObject;
#undef INTERFACE
#define INTERFACE IOleObject
DECLARE_INTERFACE_(IOleObject,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(SetClientSite)(THIS_ LPOLECLIENTSITE) PURE;
	STDMETHOD(GetClientSite)(THIS_ LPOLECLIENTSITE*) PURE;
	STDMETHOD(SetHostNames)(THIS_ LPCOLESTR,LPCOLESTR) PURE;
	STDMETHOD(Close)(THIS_ DWORD) PURE;
	STDMETHOD(SetMoniker)(THIS_ DWORD,LPMONIKER) PURE;
	STDMETHOD(GetMoniker)(THIS_ DWORD,DWORD,LPMONIKER*) PURE;
	STDMETHOD(InitFromData)(THIS_ LPDATAOBJECT,BOOL,DWORD) PURE;
	STDMETHOD(GetClipboardData)(THIS_ DWORD,LPDATAOBJECT*) PURE;
	STDMETHOD(DoVerb)(THIS_ LONG,LPMSG,LPOLECLIENTSITE,LONG,HWND,LPCRECT) PURE;
	STDMETHOD(EnumVerbs)(THIS_ LPENUMOLEVERB*) PURE;
	STDMETHOD(Update)(THIS) PURE;
	STDMETHOD(IsUpToDate)(THIS) PURE;
	STDMETHOD(GetUserClassID)(THIS_ LPCLSID) PURE;
	STDMETHOD(GetUserType)(THIS_ DWORD,LPOLESTR*) PURE;
	STDMETHOD(SetExtent)(THIS_ DWORD,SIZEL*) PURE;
	STDMETHOD(GetExtent)(THIS_ DWORD,SIZEL*) PURE;
	STDMETHOD(Advise)(THIS_ LPADVISESINK,PDWORD) PURE;
	STDMETHOD(Unadvise)(THIS_ DWORD) PURE;
	STDMETHOD(EnumAdvise)(THIS_ LPENUMSTATDATA*) PURE;
	STDMETHOD(GetMiscStatus)(THIS_ DWORD,PDWORD) PURE;
	STDMETHOD(SetColorScheme)(THIS_ LPLOGPALETTE) PURE;
};

EXTERN_C const IID IID_IOleWindow;
#undef INTERFACE
#define INTERFACE IOleWindow
DECLARE_INTERFACE_(IOleWindow,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetWindow)(THIS_ HWND*) PURE;
	STDMETHOD(ContextSensitiveHelp)(THIS_ BOOL) PURE;
};

EXTERN_C const IID IID_IOleInPlaceUIWindow;
#undef INTERFACE
#define INTERFACE IOleInPlaceUIWindow
DECLARE_INTERFACE_(IOleInPlaceUIWindow,IOleWindow)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetWindow)(THIS_ HWND*) PURE;
	STDMETHOD(ContextSensitiveHelp)(THIS_ BOOL) PURE;
	STDMETHOD(GetBorder)(THIS_ LPRECT) PURE;
	STDMETHOD(RequestBorderSpace)(THIS_ LPCBORDERWIDTHS) PURE;
	STDMETHOD(SetBorderSpace)(THIS_ LPCBORDERWIDTHS) PURE;
	STDMETHOD(SetActiveObject)(THIS_ LPOLEINPLACEACTIVEOBJECT,LPCOLESTR) PURE;
};

EXTERN_C const IID IID_IOleInPlaceObject;
#undef INTERFACE
#define INTERFACE IOleInPlaceObject
DECLARE_INTERFACE_(IOleInPlaceObject,IOleWindow)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetWindow)(THIS_ HWND*) PURE;
	STDMETHOD(ContextSensitiveHelp)(THIS_ BOOL) PURE;
	STDMETHOD(InPlaceDeactivate)(THIS) PURE;
	STDMETHOD(UIDeactivate)(THIS) PURE;
	STDMETHOD(SetObjectRects)(THIS_ LPCRECT,LPCRECT) PURE;
	STDMETHOD(ReactivateAndUndo)(THIS) PURE;
};

EXTERN_C const IID IID_IOleInPlaceActiveObject;
#undef INTERFACE
#define INTERFACE IOleInPlaceActiveObject
DECLARE_INTERFACE_(IOleInPlaceActiveObject,IOleWindow)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetWindow)(THIS_ HWND*) PURE;
	STDMETHOD(ContextSensitiveHelp)(THIS_ BOOL) PURE;
	STDMETHOD(TranslateAccelerator)(THIS_ LPMSG) PURE;
	STDMETHOD(OnFrameWindowActivate)(THIS_ BOOL) PURE;
	STDMETHOD(OnDocWindowActivate)(THIS_ BOOL) PURE;
	STDMETHOD(ResizeBorder)(THIS_ LPCRECT,LPOLEINPLACEUIWINDOW,BOOL) PURE;
	STDMETHOD(EnableModeless)(THIS_ BOOL) PURE;
};

EXTERN_C const IID IID_IOleInPlaceFrame;
#undef INTERFACE
#define INTERFACE IOleInPlaceFrame
DECLARE_INTERFACE_(IOleInPlaceFrame,IOleInPlaceUIWindow)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetWindow)(THIS_ HWND*) PURE;
	STDMETHOD(ContextSensitiveHelp)(THIS_ BOOL) PURE;
	STDMETHOD(GetBorder)(THIS_ LPRECT) PURE;
	STDMETHOD(RequestBorderSpace)(THIS_ LPCBORDERWIDTHS) PURE;
	STDMETHOD(SetBorderSpace)(THIS_ LPCBORDERWIDTHS) PURE;
	STDMETHOD(SetActiveObject)(THIS_ LPOLEINPLACEACTIVEOBJECT,LPCOLESTR) PURE;
	STDMETHOD(InsertMenus)(THIS_ HMENU,LPOLEMENUGROUPWIDTHS) PURE;
	STDMETHOD(SetMenu)(THIS_ HMENU,HOLEMENU,HWND) PURE;
	STDMETHOD(RemoveMenus)(THIS_ HMENU) PURE;
	STDMETHOD(SetStatusText)(THIS_ LPCOLESTR) PURE;
	STDMETHOD(EnableModeless)(THIS_ BOOL) PURE;
	STDMETHOD(TranslateAccelerator)(THIS_ LPMSG,WORD) PURE;
};

EXTERN_C const IID IID_IOleInPlaceSite;
#undef INTERFACE
#define INTERFACE IOleInPlaceSite
DECLARE_INTERFACE_(IOleInPlaceSite,IOleWindow)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetWindow)(THIS_ HWND*) PURE;
	STDMETHOD(ContextSensitiveHelp)(THIS_ BOOL) PURE;
	STDMETHOD(CanInPlaceActivate)(THIS) PURE;
	STDMETHOD(OnInPlaceActivate)(THIS) PURE;
	STDMETHOD(OnUIActivate)(THIS) PURE;
	STDMETHOD(GetWindowContext)(THIS_ IOleInPlaceFrame**,IOleInPlaceUIWindow**,LPRECT,LPRECT,LPOLEINPLACEFRAMEINFO) PURE;
	STDMETHOD(Scroll)(THIS_ SIZE) PURE;
	STDMETHOD(OnUIDeactivate)(THIS_ BOOL) PURE;
	STDMETHOD(OnInPlaceDeactivate)(THIS) PURE;
	STDMETHOD(DiscardUndoState)(THIS) PURE;
	STDMETHOD(DeactivateAndUndo)(THIS) PURE;
	STDMETHOD(OnPosRectChange)(THIS_ LPCRECT) PURE;
};

EXTERN_C const IID IID_IOleAdviseHolder;
#undef INTERFACE
#define INTERFACE IOleAdviseHolder
DECLARE_INTERFACE_(IOleAdviseHolder,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(Advise)(THIS_ LPADVISESINK,PDWORD) PURE;
	STDMETHOD(Unadvise)(THIS_ DWORD) PURE;
	STDMETHOD(EnumAdvise)(THIS_ LPENUMSTATDATA*) PURE;
	STDMETHOD(SendOnRename)(THIS_ LPMONIKER) PURE;
	STDMETHOD(SendOnSave)(THIS) PURE;
	STDMETHOD(SendOnClose)(THIS) PURE;
};

EXTERN_C const IID IID_IDropSource;
#undef INTERFACE
#define INTERFACE IDropSource
DECLARE_INTERFACE_(IDropSource,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(QueryContinueDrag)(THIS_ BOOL,DWORD) PURE;
	STDMETHOD(GiveFeedback)(THIS_ DWORD) PURE;
};

EXTERN_C const IID IID_IDropTarget;
#undef INTERFACE
#define INTERFACE IDropTarget
DECLARE_INTERFACE_(IDropTarget,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(DragEnter)(THIS_ LPDATAOBJECT,DWORD,POINTL,PDWORD) PURE;
	STDMETHOD(DragOver)(THIS_ DWORD,POINTL,PDWORD) PURE;
	STDMETHOD(DragLeave)(THIS) PURE;
	STDMETHOD(Drop)(THIS_ LPDATAOBJECT,DWORD,POINTL,PDWORD) PURE;
};

typedef BOOL(CALLBACK *__IView_pfncont)(DWORD);
EXTERN_C const IID IID_IViewObject;
#undef INTERFACE
#define INTERFACE IViewObject
DECLARE_INTERFACE_(IViewObject,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(Draw)(THIS_ DWORD,LONG,PVOID,DVTARGETDEVICE*,HDC,HDC,LPCRECTL,LPCRECTL,__IView_pfncont pfnContinue,DWORD) PURE;
	STDMETHOD(GetColorSet)(THIS_ DWORD,LONG,PVOID,DVTARGETDEVICE*,HDC,LPLOGPALETTE*) PURE;
	STDMETHOD(Freeze)(THIS_ DWORD,LONG,PVOID,PDWORD) PURE;
	STDMETHOD(Unfreeze)(THIS_ DWORD) PURE;
	STDMETHOD(SetAdvise)(THIS_ DWORD,DWORD,IAdviseSink*) PURE;
	STDMETHOD(GetAdvise)(THIS_ PDWORD,PDWORD,IAdviseSink**) PURE;
};

EXTERN_C const IID IID_IViewObject2;
#undef INTERFACE
#define INTERFACE IViewObject2
DECLARE_INTERFACE_(IViewObject2,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(Draw)(THIS_ DWORD,LONG,PVOID,DVTARGETDEVICE*,HDC,HDC,LPCRECTL,LPCRECTL,__IView_pfncont pfnContinue,DWORD) PURE;
	STDMETHOD(GetColorSet)(THIS_ DWORD,LONG,PVOID,DVTARGETDEVICE*,HDC,LPLOGPALETTE*) PURE;
	STDMETHOD(Freeze)(THIS_ DWORD,LONG,PVOID,PDWORD) PURE;
	STDMETHOD(Unfreeze)(THIS_ DWORD) PURE;
	STDMETHOD(SetAdvise)(THIS_ DWORD,DWORD,IAdviseSink*) PURE;
	STDMETHOD(GetAdvise)(THIS_ PDWORD,PDWORD,IAdviseSink**) PURE;
	STDMETHOD(GetExtent)(THIS_ DWORD,LONG,DVTARGETDEVICE*,LPSIZEL) PURE;
};


#ifdef __cplusplus
}
#endif
#endif
