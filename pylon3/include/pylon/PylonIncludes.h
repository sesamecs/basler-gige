//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (C) 2008-2013 Basler
//  http://www.baslerweb.com
//  Author:  JS
//-----------------------------------------------------------------------------
/*!
\file
\brief  Master include for Pylon
*/

#ifndef PYLONINCLUDES_H_INCLUDED__
#define PYLONINCLUDES_H_INCLUDED__


// PylonPlatform.h must be included before including any GenICam/GenApi header files,
// to ensure that the GENICAM_COMPILER_STR macro used by GenICam/GenApi is set properly
#include <pylon/Platform.h>

#include <pylon/PylonLinkage.h>

// basic types (from GenICam)
#include <Base/GCTypes.h>
#include <Base/GCString.h>
#include <Base/GCStringVector.h>

// GenICam stuff

#if defined( PYLON_NO_AUTO_IMPLIB )
#   define GENICAM_NO_AUTO_IMPLIB
#   define HAS_DEFINED_GENICAM_NO_AUTO_IMPLIB
#endif

#include <GenApi/GenApi.h>

#if defined( HAS_DEFINED_GENICAM_NO_AUTO_IMPLIB )
#   undef GENICAM_NO_AUTO_IMPLIB
#   undef HAS_DEFINED_GENICAM_NO_AUTO_IMPLIB
#endif



// basic macros
#include <pylon/stdinclude.h>


// init functions
#include <pylon/PylonBase.h>
#include <pylon/PylonVersionInfo.h>


#include <pylon/Info.h>             // IProperties interface and CInfoBase class
#include <pylon/TlInfo.h>           // CTlInfo
#include <pylon/DeviceClass.h>      // DeviceClass definitions
#include <pylon/DeviceInfo.h>       // CDeviceInfo
#include <pylon/Container.h>        // DeviceInfoList, TlInfoList
#include <pylon/DeviceFactory.h>    // IDeviceFactory
#include <pylon/TransportLayer.h>   // ITransportLayer, CTransportLayerBase
#include <pylon/TlFactory.h>        // TlFactory

#include <pylon/EventAdapter.h>     // IEventAdapter
#include <pylon/Callback.h>         // Base_Callback1Body, Callback1, Function_CallbackBody, Member_CallbackBody, make_MemberFunctionCallback
#include <pylon/Device.h>           // EDeviceAccessMode, AccessModeSet, IDevice, IPylonDevice, RegisterRemovalCallback

#include <pylon/StreamGrabber.h>    // IStreamGrabber

#include <pylon/PixelType.h>        // EPixelType, EPixelColorFilter, several helper function for EPixelType
#include <pylon/Pixel.h>            // Structs that describe the memory layout of pixel.
#include <pylon/PixelTypeMapper.h>  // CPixelTypeMapper, CCameraPixelTypeMapperT template maps device specific pixel formats to pylon pixel types.
#include <pylon/Result.h>           // EGrabStatus, EPayloadType, GrabResult, EventResult


#include <pylon/ChunkParser.h>      // IChunkParser, CChunkParser

#include <pylon/EventGrabber.h>     // IEventGrabber
#include <pylon/EventGrabberProxy.h>// CEventGrabberProxy

#include <pylon/NodeMapProxy.h>     // CNodeMapProxy

#include <pylon/WaitObject.h>
#include <pylon/WaitObjects.h>

#include <pylon/AcquireSingleFrameConfiguration.h>      // CAcquireSingleFrameConfiguration
#include <pylon/InstantCameraArray.h>                   // CInstantCameraArray, includes CInstantCamera
#include <pylon/AcquireContinuousConfiguration.h>       // CAcquireContinuousConfiguration
#include <pylon/SoftwareTriggerConfiguration.h>         // CSoftwareTriggerConfiguration

#if defined(PYLON_WIN_BUILD)
//#include <pylon/InstantCamera.h>                      // CInstantCamera, ConfigurationEventHandler, CImageEventHandler, CCameraEventHandler
                                                        // and additional required includes
#endif

//////////////////////////////////////////////////////////////////////////////
// add the PylonUntility headers
#ifndef PYLON_NO_UTILITY_INCLUDES
#   include <pylon/PylonUtilityIncludes.h>
#endif



//////////////////////////////////////////////////////////////////////////////
// add the pylon libs
#if defined(PYLON_WIN_BUILD)
#   ifndef PYLON_NO_AUTO_IMPLIB
#       pragma comment(lib, PYLON_LIB_NAME( "PylonBase" ))
#       ifndef PYLON_NO_BOOTSTRAPPER
#           include "PylonBootstrapper.h"
#       endif
#   endif

#endif

#endif //PYLONINCLUDES_H_INCLUDED__
