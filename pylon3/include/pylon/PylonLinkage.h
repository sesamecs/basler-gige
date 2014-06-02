//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (C) 2008-2013 Basler
//  http://www.baslerweb.com
//  Author:  JS
//-----------------------------------------------------------------------------
/*!
\file     PylonLinkage.h
\brief    Adds the pylon (and GenICam) libs to the linker comment record in the object file
*/

#ifndef PYLON_LINKAGE_H_INCLUDED_
#define PYLON_LINKAGE_H_INCLUDED_

#pragma once

// needed for COMPILER/COMPILER_STR
#include <pylon/Platform.h>


/* 
#ifndef GENICAM_COMPILER
// old pre-GenApi 2.1 behavior, i.e., GenICam header want to link
// GenApi libraries built with the same compiler version as used 
// here for building the pylon application.
// But pylon will be only shipped with VC80 GenICam libraries, so tweak
// GenApi's behavior by manually setting the COMPILER macro
#   ifdef COMPILER
#       undef COMPILER
#   endif
#   define COMPILER "VC100"
#   define GENICAM_COMPILER VC100
#endif
 */

#define PYLON_COMPILER_STR "VC100"
 
#if defined(PYLON_BUILD_DEBUG) && !defined(GENICAM_BUILD)
#   define GENICAM_BUILD
#endif

// should be already included (needed for CONFIGURATION, GENICAM_COMPILER_STR)
#include <GenICamVersion.h>
#include <Base/GCLinkage.h>

// genicam headers before 2.3 do not set GENICAM_COMPILER_STR, so do it now
#if !defined(GENICAM_COMPILER_STR)
#   define GENICAM_COMPILER_STR TOSTRING(GENICAM_COMPILER)
#endif

//////////////////////////////////////////////////////////////////////////////
// create the Pylon suffix

// The name consits of the following parts
//    PylonBase_MDd_VC80.lib
//    [   1   ] [2] [ 3] [4]
//    [module ][  suffix   ]
//    [     lib name       ]
//    1 = module name
//    2 = configuration
//    3 = compiler version
//    4 = extension
#define PYLON_SUFFIX( config, compiler, extension ) "_" config "_" compiler "." extension

#if (defined(_DEBUG) || defined(DEBUG)) && defined(PYLON_BUILD_DEBUG)
#   define PYLON_CONFIGURATION "MDd"
#else
#   define PYLON_CONFIGURATION "MD"
#endif

// generic
#define PYLON_LIB_SUFFIX        PYLON_SUFFIX( PYLON_CONFIGURATION, PYLON_COMPILER_STR, "lib" )
#define PYLON_DLL_SUFFIX        PYLON_SUFFIX( PYLON_CONFIGURATION, PYLON_COMPILER_STR, "dll" )

// names for Trasport Layer
#define PYLON_TL_LIB_SUFFIX     PYLON_SUFFIX( PYLON_CONFIGURATION, PYLON_COMPILER_STR "_TL", "lib" )
#define PYLON_TL_DLL_SUFFIX     PYLON_SUFFIX( PYLON_CONFIGURATION, PYLON_COMPILER_STR "_TL", "dll" )


//////////////////////////////////////////////////////////////////////////////
//
#define PYLON_LIB_NAME( module )  module ## PYLON_SUFFIX( PYLON_CONFIGURATION, PYLON_COMPILER_STR, "lib" )
#define PYLON_DLL_NAME( module )  module ## PYLON_SUFFIX( PYLON_CONFIGURATION, PYLON_COMPILER_STR, "dll" )

#define PYLON_TL_LIB_NAME( module )  module ## PYLON_TL_LIB_SUFFIX
#define PYLON_TL_DLL_NAME( module )  module ## PYLON_TL_DLL_SUFFIX

#endif
