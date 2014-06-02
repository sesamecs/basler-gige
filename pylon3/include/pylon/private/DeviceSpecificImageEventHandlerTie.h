//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (C) 2010-2013 Basler
//  http://www.baslerweb.com
//  Author:  Andreas Gau
//-----------------------------------------------------------------------------
/*!
\file
\brief Contains an adapter class for device specific image event handlers.
*/

#ifndef INCLUDED_DEVICESPECIFICIMAGEEVENTHANDLERTIE_H_009136379
#define INCLUDED_DEVICESPECIFICIMAGEEVENTHANDLERTIE_H_009136379

#include <pylon/ImageEventHandler.h>
#include <pylon/stdinclude.h>

namespace Pylon
{
    /*!
    \class  CDeviceSpecificImageEventHandlerTie
    \brief  Implementation Detail: Adapter for device specific image event handlers.
    */
    template <typename DeviceSpecificCameraT, typename InterfaceT>
    class CDeviceSpecificImageEventHandlerTie : public CImageEventHandler
    {
    public:
        CDeviceSpecificImageEventHandlerTie( InterfaceT* ptr)
            : m_ptr( ptr)
        {
        }

        ~CDeviceSpecificImageEventHandlerTie()
        {
        }

        virtual void OnImagesSkipped( CInstantCamera& camera, size_t countOfSkippedImages)
        {   
            PYLON_ASSERT2( dynamic_cast<DeviceSpecificCameraT*>(&camera) != NULL, "Unexpected camera type passed." );
            m_ptr->OnImagesSkipped( static_cast<DeviceSpecificCameraT&>(camera), countOfSkippedImages);
        }

        virtual void OnImageGrabbed( CInstantCamera& camera, const CGrabResultPtr& grabResult)
        {   
            PYLON_ASSERT2( dynamic_cast<DeviceSpecificCameraT*>(&camera) != NULL, "Unexpected camera type passed." );
            typename DeviceSpecificCameraT::GrabResultPtr_t grabResultLocal = grabResult;
            PYLON_ASSERT2( grabResultLocal.IsValid(), "Unexpected condition that result is not convertible." );
            m_ptr->OnImageGrabbed( static_cast<DeviceSpecificCameraT&>(camera), grabResultLocal);
        }

        virtual void OnImageEventHandlerRegistered(  CInstantCamera& camera)
        {
            PYLON_ASSERT2( dynamic_cast<DeviceSpecificCameraT*>(&camera) != NULL, "Unexpected camera type passed." );
            m_ptr->OnImageEventHandlerRegistered( static_cast<DeviceSpecificCameraT&>(camera));
        }

        virtual void OnImageEventHandlerDeregistered(  CInstantCamera& camera)
        {
            PYLON_ASSERT2( dynamic_cast<DeviceSpecificCameraT*>(&camera) != NULL, "Unexpected camera type passed." );
            m_ptr->OnImageEventHandlerDeregistered( static_cast<DeviceSpecificCameraT&>(camera));
        }

        virtual void DestroyImageEventHandler()
        {
            try
            {
                m_ptr->DestroyImageEventHandler();
                m_ptr = NULL;
            }
            catch(...)
            {
                delete this;
                m_ptr = NULL;
                throw;
            }
            delete this;
        }

    private:
        InterfaceT* m_ptr;
    };
}

#endif /* INCLUDED_DEVICESPECIFICIMAGEEVENTHANDLERTIE_H_009136379 */
