//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (C) 2010-2013 Basler
//  http://www.baslerweb.com
//  Author:  AH
//-----------------------------------------------------------------------------
/*!
\file 
\brief Includes specific for the the GigE transport layer
*/

#ifndef INCLUDED_PYLONGIGEINCLUDES_H_08834475
#define INCLUDED_PYLONGIGEINCLUDES_H_08834475

#if _MSC_VER > 1000
#pragma once
#endif //_MSC_VER > 1000

#include <pylon/Platform.h>
#include <pylon/gige/GigETransportLayer.h>
#include <pylon/gige/BaslerGigECamera.h>

#if defined(PYLON_WIN_BUILD)
// evo api not supported under linux
#include <pylon/gige/BaslerGigeInstantCameraArray.h> //includes also CBaslerGigEInstantCamera
#endif

#if defined (PYLON_WIN_BUILD) && !defined (PYLON_NO_AUTO_IMPLIB)
#   include <pylon/PylonLinkage.h>
#   pragma comment(lib, PYLON_TL_LIB_NAME( "PylonGigE" ))
#endif
//

#endif /* INCLUDED_PYLONGIGEINCLUDES_H_08834475 */
