//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (C) 2009-2013 Basler
//  http://www.baslerweb.com
//  Author:  JS
//-----------------------------------------------------------------------------
/*!
\file
\brief  Containts the class VersionInfo which is a utility for comparing version numbers.
*/

#ifndef PYLON_VERSION_H_INCLUDED_
#define PYLON_VERSION_H_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

#include <pylon/Platform.h>

#ifdef _MSC_VER
#   pragma pack(push, PYLON_PACKING)
#endif /* _MSC_VER */

#include <pylon/PylonBase.h>

namespace Pylon
{

//==============================================================================
//==============================================================================
/**
\class  VersionInfo
\brief  Holds a four part version number consisting of major.minor.subminor.build
 
This class stores a four part versionnumber and provides comparison operators.
If you use the constructor with one parameter the version info object will be
initiliazed with pylon base version numbers.

You can also call the static getversionNumber() function to retrieve
a string containing the complete version seperated by dots.
*/
//==============================================================================
//==============================================================================
class PYLONBASE_API VersionInfo
{
public:
    ///////////////////////////////////////////////////////////////////////////
    // set checkBuild to true to use the buildno in comparison
    // other wise it will be ignored
    
    /// constructs a version info object using pylon base version numbers
    /// If checkBuild is set to false the build number will not be used in comparison operators
    explicit VersionInfo(bool checkBuild = false);

    /// constructs a version info object using the version number parts passed
    VersionInfo(unsigned int major,
                unsigned int minor,
                unsigned int subminor);

    /// constructs a version info object using the version number parts passed
    VersionInfo(unsigned int major,
                unsigned int minor,
                unsigned int subminor,
                unsigned int build);
    ///////////////////////////////////////////////////////////////////////////
    ~VersionInfo(void);

public:
    ///////////////////////////////////////////////////////////////////////////
    /// returns the complete version number as string
    static const char* getVersionString();

    
    ///////////////////////////////////////////////////////////////////////////
    /// Returns the major version number.
    /// For version 2.1.3.1234 the value 2 would be returned
    unsigned int getMajor() const
    {
        return m_major;
    }
    
    
    ///////////////////////////////////////////////////////////////////////////
    /// Returns the minor version number.
    /// For version 2.1.3.1234 the value 1 would be returned
    unsigned int getMinor() const
    {
        return m_minor;
    }
    
    
    ///////////////////////////////////////////////////////////////////////////
    /// Returns the subminor version number.
    /// For version 2.1.3.1234 the value 3 would be returned
    unsigned int getSubminor() const
    {
        return m_subminor;
    }
    
    
    ///////////////////////////////////////////////////////////////////////////
    /// Returns the build number.
    /// For version 2.1.3.1234 the value 1234 would be returned
    unsigned int getBuild() const
    {
        return m_build;
    }

public:
    ///////////////////////////////////////////////////////////////////////////
    /// compares two version info objects
    bool operator > (const VersionInfo& rhs) const
    {
        bool res =     (m_major > rhs.m_major)
                    || (m_major == rhs.m_major && m_minor > rhs.m_minor)
                    || (m_major == rhs.m_major && m_minor == rhs.m_minor && m_subminor > rhs.m_subminor)
                    || (m_major == rhs.m_major && m_minor == rhs.m_minor && m_subminor == rhs.m_subminor && m_checkBuild && m_build > rhs.m_build);

        return res;
    }


    ///////////////////////////////////////////////////////////////////////////
    /// compares two version info objects
    bool operator == (const VersionInfo& rhs) const
    {
        // use the reverse order to save some executiontime ;-)
        bool res (   (m_checkBuild?(m_build == rhs.m_build):true)
                  && (m_subminor == rhs.m_subminor)
                  && (m_minor == rhs.m_minor)
                  && (m_major == rhs.m_major));
        return res;
    }


    ///////////////////////////////////////////////////////////////////////////
    /// compares two version info objects
    bool operator >= (const VersionInfo& rhs) const
    {
        bool res = (*this > rhs) || (*this == rhs);
        return res;
    }


    ///////////////////////////////////////////////////////////////////////////
    /// compares two version info objects
    bool operator < (const VersionInfo& rhs) const
    {
        bool res = !(*this >= rhs);
        return res;
    }


    ///////////////////////////////////////////////////////////////////////////
    /// compares two version info objects
    bool operator != (const VersionInfo& rhs) const
    {
        bool res = !(*this == rhs);
        return res;
    }


    ///////////////////////////////////////////////////////////////////////////
    /// compares two version info objects
    bool operator <= (const VersionInfo& rhs) const
    {
        bool res = !(*this > rhs);
        return res;
    }

protected:
    unsigned int    m_major;
    unsigned int    m_minor;
    unsigned int    m_subminor;
    unsigned int    m_build;
    bool            m_checkBuild;
};


}

#ifdef _MSC_VER
#   pragma pack(pop)
#endif /* _MSC_VER */

#endif // PYLON_VERSION_H_INCLUDED_
