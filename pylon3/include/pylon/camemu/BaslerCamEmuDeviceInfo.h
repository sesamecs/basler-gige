//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (C) 2008-2013 Basler
//  http://www.baslerweb.com
//  Author:  Italo Anzioso
//-----------------------------------------------------------------------------
/*!
\file
\brief    Definition of CBaslerCamEmuDeviceInfo
*/

#ifndef BASLERCAMDEMUEVICEINFO_H__
#define BASLERCAMDEMUEVICEINFO_H__

#if _MSC_VER > 1000
#pragma once
#endif //_MSC_VER > 1000

#include <pylon/Platform.h>

#ifdef _MSC_VER
#   pragma pack(push, PYLON_PACKING)
#endif /* _MSC_VER */

#include <pylon/DeviceInfo.h>
#include "PylonCamEmuIncludes.h"

namespace Pylon
{
    /*!
    \brief PylonCamEmu specific Device Info object.
    */
    class PYLONCAMEMU_API CBaslerCamEmuDeviceInfo : public Pylon::CDeviceInfo
    {
    public:
        CBaslerCamEmuDeviceInfo();
        CBaslerCamEmuDeviceInfo(const CDeviceInfo& di);

    };
}

#ifdef _MSC_VER
#   pragma pack(pop)
#endif /* _MSC_VER */

#endif // BASLERCAMDEMUEVICEINFO_H__
