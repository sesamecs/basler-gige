//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (C) 2008-2013 Basler
//  http://www.baslerweb.com
//  Author:  Italo Anzioso
//-----------------------------------------------------------------------------
/*!
\file
\brief    Defines for CamEmu.

*/
#include <pylon/camemu/BaslerCamEmuDeviceInfo.h>
#include <pylon/DeviceClass.h>
#include <pylon/Platform.h>


#ifndef PYLONCAMEMU_DEFS_H_INCLUDED
#define PYLONCAMEMU_DEFS_H_INCLUDED

// PYLONCAMEMU_API
#ifdef PYLONCAMEMU_EXPORTS
#   define PYLONCAMEMU_API  APIEXPORT
#else
#   define PYLONCAMEMU_API  APIIMPORT
#endif


#endif // PYLONCAMEMU_DEFS_H_INCLUDED
