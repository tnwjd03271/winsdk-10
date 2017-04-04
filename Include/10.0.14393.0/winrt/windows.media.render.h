

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


#ifndef __windows2Emedia2Erender_h__
#define __windows2Emedia2Erender_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Emedia2Erender_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory
    {
        AudioRenderCategory_Other	= 0,
        AudioRenderCategory_ForegroundOnlyMedia	= 1,
        AudioRenderCategory_BackgroundCapableMedia	= 2,
        AudioRenderCategory_Communications	= 3,
        AudioRenderCategory_Alerts	= 4,
        AudioRenderCategory_SoundEffects	= 5,
        AudioRenderCategory_GameEffects	= 6,
        AudioRenderCategory_GameMedia	= 7,
        AudioRenderCategory_GameChat	= 8,
        AudioRenderCategory_Speech	= 9,
        AudioRenderCategory_Movie	= 10,
        AudioRenderCategory_Media	= 11
    } ;
#endif /* end if !defined(__cplusplus) */

#endif


/* interface __MIDL_itf_windows2Emedia2Erender_0000_0000 */
/* [local] */ 

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Render {
                
                typedef enum AudioRenderCategory AudioRenderCategory;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Render {
                
                /* [v1_enum] */ 
                enum AudioRenderCategory
                    {
                        AudioRenderCategory_Other	= 0,
                        AudioRenderCategory_ForegroundOnlyMedia	= 1,
                        AudioRenderCategory_BackgroundCapableMedia	= 2,
                        AudioRenderCategory_Communications	= 3,
                        AudioRenderCategory_Alerts	= 4,
                        AudioRenderCategory_SoundEffects	= 5,
                        AudioRenderCategory_GameEffects	= 6,
                        AudioRenderCategory_GameMedia	= 7,
                        AudioRenderCategory_GameChat	= 8,
                        AudioRenderCategory_Speech	= 9,
                        AudioRenderCategory_Movie	= 10,
                        AudioRenderCategory_Media	= 11
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Erender_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Erender_0000_0000_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


