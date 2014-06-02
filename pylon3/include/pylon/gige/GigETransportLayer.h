//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (C) 2008-2013 Basler
//  http://www.baslerweb.com
//  Author:  Thomas Koeller
//-----------------------------------------------------------------------------
/*!
\file
\brief Definiton of the GigE-specific Transportlayer interface extension
*/

#ifndef TRANSPORTLAYER_GIGE_H
#define TRANSPORTLAYER_GIGE_H

#if _MSC_VER>1000
#pragma once
#endif // _MSC_VER>1000

#include <pylon/TransportLayer.h>
#include "PylonGigE.h"

namespace Pylon
{
    /*!
    \ingroup Pylon_TransportLayer
    \interface IGigETransportLayer
    \brief Extends the ITransportLayer interface by GigE Vision specific
           functionality.
    */
    interface PYLONGIGE_API IGigETransportLayer : public ITransportLayer
    {
        //! brief Enumerates all available GigE Vision devices
        /*!
            In contrast to the ITransportLayer::EnumerateDevices method,
            devices having a subnet configured that is different from the subnet of the
            application will be listed.
        */
        virtual int EnumerateAllDevices(DeviceInfoList_t&, bool addToList = false) = 0;

        //! \brief "Force" a static IP address configuration in a device identified by its MAC Addrss
        /**
        \note When calling this function, there must be no opened camera object for
               the device to reconfigure!

        \param MacAddress MAC address as a string, no delimiters are used. e.g., 003053061a58
        \param IpAddress Temporary IP address, "dot notation", e.g., 192.168.1.2
        \param SubnetMask Temporary SubnetMask, "dot notation", eg. 255.255.255.0
        \param DefaultGateway Temporary DefaultGateway, "dot notation", e.g., 192.168.1.1
        */
        virtual void ForceIp(const String_t& MacAddress,
                             const String_t& IpAddress,
                             const String_t& SubnetMask,
                             const String_t& DefaultGateway) = 0;

        //! \brief Let a device restart the IP configuration cycle
        /**
        \note This function fails when the device is open, i.e., a control channel is established
        \param MacAddress MAC address as a string, no delimeters are used, e.g., 003053061a58
        */
        virtual void RestartIpConfiguration(const String_t& MacAddress) = 0;

        //! \brief Announce that a remote device is going to be used
        /*!
            \note This device must be reachable, a route is configured.
            \param IpAddress address of device in "dot notation"
            \param pInfo This optional parameter  holds the full device info iff found
        */
        virtual bool AnnounceRemoteDevice( const String_t& IpAddress, CDeviceInfo* pInfo=NULL ) = 0;
        //! \brief Stop using remote device.
        /*! \param IpAddress address of device in "dot notation" */
        virtual bool RenounceRemoteDevice( const String_t& IpAddress ) = 0;

        //! \brief Broadcast a new IP configuration
        /**
        \param MacAddress MAC address as a string, no delimiters are used. e.g., 003053061a58
        \param EnablePersistentIp If true, a persistent Ip address will be set
        \param EnableDhcp If true, DHCP is enabled
        \param IpAddress Device's new IP address, "dot notation", e.g., 192.168.1.2
        \param SubnetMask Device's new SubnetMask, "dot notation", e.g. 255.255.255.0
        \param DefaultGateway Device's new DefaultGateway, "dot notation", e.g., 192.168.1.1
        \param UserdefinedName Device's new UserdefinedName, maximal 16 character
        \return true if configuration was successfully written
        */
        virtual bool BroadcastIpConfiguration(const String_t& MacAddress,
                                              bool EnablePersistentIp,
                                              bool EnableDhcp,
                                              const String_t& IpAddress,
                                              const String_t& SubnetMask,
                                              const String_t& DefaultGateway,
                                              const String_t& UserdefinedName) = 0;
    };
} // namespace Pylon

#endif // TRANSPORTLAYER_GIGE_H
