//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (C) 2006-2013 Basler
//  http://www.baslerweb.com
//  Author:  Hartmut Nebelung
//-----------------------------------------------------------------------------
/*!
\file
\brief    Definition of Device Access Mode
*/

#ifndef INCLUDED_DEVICEACCESSMODE_H_6600916
#define INCLUDED_DEVICEACCESSMODE_H_6600916

#include <pylon/PylonBase.h>

#ifdef _MSC_VER
#   pragma pack(push, PYLON_PACKING)
#endif /* _MSC_VER */

#include <bitset>

namespace Pylon
{
    // --------------------------------------------------------------------------
    // enum EDeviceAccessMode
    // --------------------------------------------------------------------------
    /// The available access modes when opening a camera object
    /*!
        \ingroup Pylon_TransportLayer
    */
    enum EDeviceAccessMode
    {
        Control = 0x1,      ///< access the control and status registers
        Stream  = 0x3,      ///< access a streaming data channel
        Event   = 0x4,      ///< access the event data channel
        Exclusive = 0x5,    ///< exclusive access to the device
        _NumModes
    };

    // pylon 2.x compatibility.
    typedef EDeviceAccessMode AccessMode;

    // --------------------------------------------------------------------------
    // class AccessModeSet
    // --------------------------------------------------------------------------
    /// Collection of access mode bits
    /*!
        Used for defining how a device is accessed.

        \par Low Level API:
        This set is used when a device is opened. The combination of
        different access modes specifies how the device is opened.
        Not all combinations may be allowed because the
        device implementations have certain restrictions.

        \code
        AccessModeSet a = Exclusive | Stream;
        if (a.test( Exclusive ))
        {
            // Exclusive implies Control access, so set it also
            a |= Control;
        }
        \endcode
        \sa The method of IDevice::Open() uses it to define a default value.
        \sa The global operator |( EDeviceAccessMode lhs, EDeviceAccessMode rhs ) allows to combine
        two modes to a set.
        \ingroup Pylon_TransportLayer
    */
    class PYLONBASE_API AccessModeSet : public std::bitset< _NumModes >
    {
        public:
            /// Default constructor creates an empty set.
            AccessModeSet(void);
            /// Converts an access mode into a set.
            AccessModeSet(EDeviceAccessMode);
            /// Copy constructor
            AccessModeSet(const AccessModeSet& s)
                    : std::bitset<_NumModes>(s)
            {}
            ///
#if _MSC_VER < 1600
			explicit AccessModeSet(unsigned long l)
                    : std::bitset<_NumModes>(l)
            {}
#else
			explicit AccessModeSet(unsigned long l)
				: std::bitset<_NumModes>((unsigned long long) l)
			{}
#endif

    };

    // -------------------------------------------------------------------------
    // Access mode operators
    // -------------------------------------------------------------------------

    /*!
       \brief Creates a set containing lhs and rhs operands
       \param lhs left operand
       \param rhs right operand
       \return returns an AccessModeSet containing both operands
        \ingroup Pylon_TransportLayer
    */
    AccessModeSet PYLONBASE_API operator+(EDeviceAccessMode lhs, EDeviceAccessMode rhs);

    /*!
        \brief Creates a set containing lhs and rhs operands.
       \param lhs left operand
       \param rhs right operand
        \ingroup Pylon_TransportLayer
    */
    AccessModeSet PYLONBASE_API operator|(EDeviceAccessMode lhs, EDeviceAccessMode rhs);

    /*!
        \brief Adds the operand rhs to the set lhs
        \param lhs a set of bits.
        \param rhs the additional bit
        \ingroup Pylon_LowLevelApi
    */
    AccessModeSet PYLONBASE_API operator+(const AccessModeSet& lhs, EDeviceAccessMode rhs);

    /*!
        \brief Adds the operand rhs to the set lhs
        \param lhs a set of bits.
        \param rhs the additional bit
        \ingroup Pylon_TransportLayer
    */
    AccessModeSet PYLONBASE_API operator|(const AccessModeSet& lhs, EDeviceAccessMode rhs);

#ifdef _MSC_VER
#   pragma pack(pop)
#endif /* _MSC_VER */
}

#endif /* INCLUDED_DEVICEACCESSMODE_H_6600916 */
