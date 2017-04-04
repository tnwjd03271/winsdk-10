

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0618 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __msdadc_h__
#define __msdadc_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDataConvert_FWD_DEFINED__
#define __IDataConvert_FWD_DEFINED__
typedef interface IDataConvert IDataConvert;

#endif 	/* __IDataConvert_FWD_DEFINED__ */


#ifndef __IDCInfo_FWD_DEFINED__
#define __IDCInfo_FWD_DEFINED__
typedef interface IDCInfo IDCInfo;

#endif 	/* __IDCInfo_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "oledb.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdadc_0000_0000 */
/* [local] */ 

//-----------------------------------------------------------------------------
// File:				.C or .H file generated by msdadc.idl 
//
// Copyright:		Copyright (c) 1998-1999 Microsoft Corporation
//
// Contents: 		.C or .H file generated by msdadc.idl
//
// Comments: 		
//
//-----------------------------------------------------------------------------
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <pshpack8.h>	// 8-byte structure packing
#undef OLEDBDECLSPEC
#if _MSC_VER >= 1100
#define OLEDBDECLSPEC __declspec(selectany)
#else
#define OLEDBDECLSPEC 
#endif //_MSC_VER


extern RPC_IF_HANDLE __MIDL_itf_msdadc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdadc_0000_0000_v0_0_s_ifspec;

#ifndef __IDataConvert_INTERFACE_DEFINED__
#define __IDataConvert_INTERFACE_DEFINED__

/* interface IDataConvert */
/* [unique][helpstring][uuid][object] */ 

typedef DWORD DBDATACONVERT;


enum DBDATACONVERTENUM
    {
        DBDATACONVERT_DEFAULT	= 0,
        DBDATACONVERT_SETDATABEHAVIOR	= 0x1,
        DBDATACONVERT_LENGTHFROMNTS	= 0x2,
        DBDATACONVERT_DSTISFIXEDLENGTH	= 0x4,
        DBDATACONVERT_DECIMALSCALE	= 0x8
    } ;

EXTERN_C const IID IID_IDataConvert;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a8d-2a1c-11ce-ade5-00aa0044773d")
    IDataConvert : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE DataConvert( 
            /* [in] */ DBTYPE wSrcType,
            /* [in] */ DBTYPE wDstType,
            /* [in] */ DBLENGTH cbSrcLength,
            /* [annotation][out][in] */ 
            _Out_opt_  DBLENGTH *pcbDstLength,
            /* [annotation][in] */ 
            _In_reads_bytes_(cbSrcLength)  void *pSrc,
            /* [annotation][out] */ 
            _Out_writes_bytes_(_Inexpressible_(cbDstMaxLength))  void *pDst,
            /* [in] */ DBLENGTH cbDstMaxLength,
            /* [in] */ DBSTATUS dbsSrcStatus,
            /* [annotation][out] */ 
            _Out_opt_  DBSTATUS *pdbsStatus,
            /* [in] */ BYTE bPrecision,
            /* [in] */ BYTE bScale,
            /* [in] */ DBDATACONVERT dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CanConvert( 
            /* [in] */ DBTYPE wSrcType,
            /* [in] */ DBTYPE wDstType) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetConversionSize( 
            /* [in] */ DBTYPE wSrcType,
            /* [in] */ DBTYPE wDstType,
            /* [annotation][in] */ 
            _In_opt_  DBLENGTH *pcbSrcLength,
            /* [annotation][out] */ 
            _Out_opt_  DBLENGTH *pcbDstLength,
            /* [annotation][size_is][in] */ 
            _In_reads_bytes_opt_(*pcbSrcLength)  void *pSrc) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDataConvertVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDataConvert * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDataConvert * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDataConvert * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *DataConvert )( 
            IDataConvert * This,
            /* [in] */ DBTYPE wSrcType,
            /* [in] */ DBTYPE wDstType,
            /* [in] */ DBLENGTH cbSrcLength,
            /* [annotation][out][in] */ 
            _Out_opt_  DBLENGTH *pcbDstLength,
            /* [annotation][in] */ 
            _In_reads_bytes_(cbSrcLength)  void *pSrc,
            /* [annotation][out] */ 
            _Out_writes_bytes_(_Inexpressible_(cbDstMaxLength))  void *pDst,
            /* [in] */ DBLENGTH cbDstMaxLength,
            /* [in] */ DBSTATUS dbsSrcStatus,
            /* [annotation][out] */ 
            _Out_opt_  DBSTATUS *pdbsStatus,
            /* [in] */ BYTE bPrecision,
            /* [in] */ BYTE bScale,
            /* [in] */ DBDATACONVERT dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *CanConvert )( 
            __RPC__in IDataConvert * This,
            /* [in] */ DBTYPE wSrcType,
            /* [in] */ DBTYPE wDstType);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetConversionSize )( 
            IDataConvert * This,
            /* [in] */ DBTYPE wSrcType,
            /* [in] */ DBTYPE wDstType,
            /* [annotation][in] */ 
            _In_opt_  DBLENGTH *pcbSrcLength,
            /* [annotation][out] */ 
            _Out_opt_  DBLENGTH *pcbDstLength,
            /* [annotation][size_is][in] */ 
            _In_reads_bytes_opt_(*pcbSrcLength)  void *pSrc);
        
        END_INTERFACE
    } IDataConvertVtbl;

    interface IDataConvert
    {
        CONST_VTBL struct IDataConvertVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDataConvert_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDataConvert_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDataConvert_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDataConvert_DataConvert(This,wSrcType,wDstType,cbSrcLength,pcbDstLength,pSrc,pDst,cbDstMaxLength,dbsSrcStatus,pdbsStatus,bPrecision,bScale,dwFlags)	\
    ( (This)->lpVtbl -> DataConvert(This,wSrcType,wDstType,cbSrcLength,pcbDstLength,pSrc,pDst,cbDstMaxLength,dbsSrcStatus,pdbsStatus,bPrecision,bScale,dwFlags) ) 

#define IDataConvert_CanConvert(This,wSrcType,wDstType)	\
    ( (This)->lpVtbl -> CanConvert(This,wSrcType,wDstType) ) 

#define IDataConvert_GetConversionSize(This,wSrcType,wDstType,pcbSrcLength,pcbDstLength,pSrc)	\
    ( (This)->lpVtbl -> GetConversionSize(This,wSrcType,wDstType,pcbSrcLength,pcbDstLength,pSrc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDataConvert_INTERFACE_DEFINED__ */


#ifndef __IDCInfo_INTERFACE_DEFINED__
#define __IDCInfo_INTERFACE_DEFINED__

/* interface IDCInfo */
/* [unique][helpstring][uuid][object] */ 

typedef DWORD DCINFOTYPE;


enum DCINFOTYPEENUM
    {
        DCINFOTYPE_VERSION	= 1
    } ;
typedef struct tagDCINFO
    {
    DCINFOTYPE eInfoType;
    VARIANT vData;
    } 	DCINFO;


EXTERN_C const IID IID_IDCInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a9c-2a1c-11ce-ade5-00aa0044773d")
    IDCInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInfo( 
            /* [in] */ ULONG cInfo,
            /* [size_is][in] */ __RPC__in_ecount_full(cInfo) DCINFOTYPE rgeInfoType[  ],
            /* [size_is][out] */ __RPC__out_ecount_full(cInfo) DCINFO **prgInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInfo( 
            /* [in] */ ULONG cInfo,
            /* [size_is][in] */ __RPC__in_ecount_full(cInfo) DCINFO rgInfo[  ]) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDCInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDCInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDCInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDCInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            __RPC__in IDCInfo * This,
            /* [in] */ ULONG cInfo,
            /* [size_is][in] */ __RPC__in_ecount_full(cInfo) DCINFOTYPE rgeInfoType[  ],
            /* [size_is][out] */ __RPC__out_ecount_full(cInfo) DCINFO **prgInfo);
        
        HRESULT ( STDMETHODCALLTYPE *SetInfo )( 
            __RPC__in IDCInfo * This,
            /* [in] */ ULONG cInfo,
            /* [size_is][in] */ __RPC__in_ecount_full(cInfo) DCINFO rgInfo[  ]);
        
        END_INTERFACE
    } IDCInfoVtbl;

    interface IDCInfo
    {
        CONST_VTBL struct IDCInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDCInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDCInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDCInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDCInfo_GetInfo(This,cInfo,rgeInfoType,prgInfo)	\
    ( (This)->lpVtbl -> GetInfo(This,cInfo,rgeInfoType,prgInfo) ) 

#define IDCInfo_SetInfo(This,cInfo,rgInfo)	\
    ( (This)->lpVtbl -> SetInfo(This,cInfo,rgInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDCInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdadc_0000_0002 */
/* [local] */ 

extern const GUID OLEDBDECLSPEC IID_IDataConvert = { 0x0c733a8dL,0x2a1c,0x11ce, { 0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d } };
extern const GUID OLEDBDECLSPEC IID_IDCInfo = { 0x0c733a9cL,0x2a1c,0x11ce, { 0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d } };
#include <poppack.h>     // restore original structure packing
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_msdadc_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdadc_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


