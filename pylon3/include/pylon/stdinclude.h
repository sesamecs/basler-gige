//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (C) 2006-2013 Basler
//  http://www.baslerweb.com
//  Author:  Hartmut Nebelung
//-----------------------------------------------------------------------------
/*!
\file
\brief    standard definitions
*/
#ifndef __STDINCLUDE_H__
#define __STDINCLUDE_H__

#include <assert.h>

#include <pylon/Platform.h>

#ifdef _MSC_VER
#   pragma pack(push, PYLON_PACKING)
#endif /* _MSC_VER */


#ifdef PYLON_WIN_BUILD
#   include <objbase.h>     // for definition of type 'interface'
#endif


///////////////////////////////////////////////////////////////////////////////
// Note:
///////////////////////////////////////////////////////////////////////////////
// The PY_ macros are only for backward compatibility
// please use the PYLON_ macros instead. Thank you!
///////////////////////////////////////////////////////////////////////////////

// mark a variable as unused. This prevents unused parameter / unused local variable warnings on warning level 4.
#define PYLON_UNUSED(unused_var)    ((void)(unused_var))
#define PY_UNUSED(unused_var)       PYLON_UNUSED(unused_var)

// returns the number of elements in an array
#define PYLON_COUNTOF(arr)          (sizeof(arr)/sizeof(*arr))
#define PY_COUNTOF(arr)             PYLON_COUNTOF(arr)

// PY_ASSERT works like normal assertion
#define PYLON_ASSERT(cond)          assert(cond)
#define PY_ASSERT(cond)             PYLON_ASSERT(cond)
// PY_ASSERT2 works like a normal assertion but can be passed a descriptive text string
#define PYLON_ASSERT2(cond, tx)     assert(cond && tx)
#define PY_ASSERT2(cond, tx)        PYLON_ASSERT2(cond, tx)

// verify macro
#ifndef NDEBUG
// assert in debug builds but do not remove in release builds
#   define PYLON_VERIFY(cond)       PYLON_ASSERT(cond)
#   define PY_VERIFY(cond)          PYLON_ASSERT(cond)
// assert in debug builds but do not remove in release builds but can be passed a descriptive text string
#   define PYLON_VERIFY2(cond, tx)  PYLON_ASSERT2(cond, tx)
#   define PY_VERIFY2(cond, tx)     PYLON_ASSERT2(cond, tx)
#else
#   define PYLON_VERIFY(cond)       ((void)(cond))
#   define PY_VERIFY(cond)          ((void)(cond))
#   define PYLON_VERIFY2(cond, tx)  PYLON_VERIFY(cond)
#   define PY_VERIFY2(cond, tx)     PYLON_VERIFY(cond)
#endif


// Attention in MSVC this is a string literal
// but under gnuc this is a local variable!
#if defined(_MSC_VER) && _MSC_VER >= 1300
    // Attention this does not behave like a string literal! Use it as a variable of type const char[]
#   define PYLON_FUNC  __FUNCTION__
#elif defined(__GNUC__)
    // Attention this does not behave like a string literal! Use it as a variable of type const char[]
#   define PYLON_FUNC  __func__
#else
    // Attention this does not behave like a string literal! Use it as a variable of type const char[]
#   define PYLON_FUNC  "sorry_funcname_na"
#endif

//  use defines instead of static member vars to support when delay loading of genicam dlls
#if !defined(GENAPI_DLL_MANAGER_INVALID_HANDLE)
#   define GENAPI_DLL_MANAGER_INVALID_HANDLE static_cast<GenApi::DllManager::Handle>(0)
#endif

#if !defined(GENAPI_DLL_MANAGER_INVALID_SYMBOL)
#   define GENAPI_DLL_MANAGER_INVALID_SYMBOL static_cast<GenApi::DllManager::Symbol>(0)
#endif

#include <Base/GCString.h>
#include <Base/GCStringVector.h>

namespace Pylon
{
    /// Pylon's string definition
    typedef GenICam::gcstring String_t;
    /// Pylon's string list definition
    typedef GenICam::gcstring_vector StringList_t;
}

#ifdef _MSC_VER
#   pragma pack(pop)
#endif /* _MSC_VER */

#endif //__STDINCLUDE_H__
