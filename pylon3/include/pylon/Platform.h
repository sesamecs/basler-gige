//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (C) 2008-2013 Basler
//  http://www.baslerweb.com
//  Author:  Thomas Koeller
//-----------------------------------------------------------------------------
/** \file 
\brief Provides platform specific defines
*/


#if !defined(PYLON_PLATFORM_H)
#define PYLON_PLATFORM_H

#if defined (_MSC_VER) && defined (_WIN32)
// Platform Microsoft windows, Microsoft tool chain



/** \brief Is defined, when using the pylon for Windows API */
#   define PYLON_WIN_BUILD  // we are building for windows

// define PYLON_XX_BUILD to distinguish between 32 & 64 bit builds
#   if defined(_WIN32) && !defined(_WIN64)
#       define PYLON_32_BUILD
#   elif defined(_WIN32) && defined(_WIN64)
#       define PYLON_64_BUILD
#   else
#       error unsupported wordsize (32/64 platform)
#   endif



#   if defined(PYLON_STATIC)
#       define APIEXPORT
#       define APIIMPORT
#       define PUBLIC_INTERFACE
#   else
#       define APIEXPORT __declspec(dllexport)
#       define APIIMPORT __declspec(dllimport)
#       define PUBLIC_INTERFACE
#   endif

#   if !defined(CDECL)
#       define CDECL
#   endif

#   if defined PYLON_NO_DEPRECATE
#       define PYLON_DEPRECATED(x)
#   else
#       if _MSC_VER >= 1400
#           define PYLON_DEPRECATED(x) __declspec(deprecated(x))
#       else
#           define PYLON_DEPRECATED(x) __declspec(deprecated)
#       endif
#   endif

// packing used for pylon structs/classes
#   define PYLON_PACKING 8

// mark char8_t and uchar8_t as deprecated
// We'll typedef them here again, so can use declspec(deprecated) instead of #deprecated
PYLON_DEPRECATED("The type 'char8_t' is deprecated. Please use 'int8_t' instead.")           typedef char            char8_t;
PYLON_DEPRECATED("The type 'uchar8_t' is deprecated. Please use 'uint8_t' instead.")         typedef unsigned char   uchar8_t;
PYLON_DEPRECATED("The type 'pcchar8_t' is deprecated. Please use 'const char *' instead.")   typedef const char *    pcchar8_t;
PYLON_DEPRECATED("The type 'pchar8_t' is deprecated. Please use 'char *' instead.")          typedef char *          pchar8_t;

#elif defined(__GNUC__) && defined(__linux__)
// Platform Linux, gcc toolchain


/** \brief Is defined when using the pylon for Linux API */
#   define PYLON_LINUX_BUILD  // we are building for linux

#   include <pylon/api_autoconf.h>
#   include <stdint.h>

// gnu compiler needs explicit visibility of interfaces, so dynamic_cast works
#   define PUBLIC_INTERFACE APIEXPORT

// define PYLON_XX_BUILD to distinguish between 32 & 64 bit builds
#   if __WORDSIZE == 32
#       define PYLON_32_BUILD
#   elif __WORDSIZE == 64
#       define PYLON_64_BUILD
#   else
#       error unsupported wordsize (32/64 platform)
#   endif

// packing used for pylon structs/classes
#   define PYLON_PACKING 8

#else

#   error Unsupported platform

#endif

// check whether genicam headers (GCLinkage.h) has been included before this one.
// This leads to wrong DLL suffixes as we're currently using debug libs in debug builds
#if defined(LINKAGE_H) && !defined(GENICAM_BUILD)
// genicam linkage included before including this platform.h
//#error You must include pylon/platform.h (or at least define GENICAM_BUILD) before including any genicam headers. Note: If you include pylon/pylonIncludes.h this will be done automatically.
#endif


#endif /* !defined(PYLON_PLATFORM_H) */
