//-----------------------------------------------------------------------------
//  (c) 2008 by Basler Vision Technologies
//  Section: Basler Components
//  Project: PYLON
//  Author:  Thomas Koeller
//  $Header:  $
//  This is a generated file - do not edit!
//-----------------------------------------------------------------------------

#if !defined (API_AUTOCONF_H)
#define API_AUTOCONF_H

#   ifdef PYLON_STATIC
#       define APIEXPORT
#       define APIIMPORT
#   else
#       define APIEXPORT    
#       define APIIMPORT
#endif

#define CDECL        __attribute__((cdecl))
#define PYLON_DEPRECATED(x) __attribute__((deprecated))

#define interface struct

#endif /* !defined(API_AUTOCONF_H) */
