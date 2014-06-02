//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (C) 2010-2013 Basler
//  http://www.baslerweb.com
//  Author:  Andreas Gau
//-----------------------------------------------------------------------------
/*!
\file
\brief An instant camera configuration for free running continuous acquisition.
*/

#ifndef INCLUDED_ACQUIRECONTINUOUSCONFIGURATION_H_7346765
#define INCLUDED_ACQUIRECONTINUOUSCONFIGURATION_H_7346765

#include <pylon/Platform.h>

#ifdef _MSC_VER
#   pragma pack(push, PYLON_PACKING)
#endif /* _MSC_VER */

#include <pylon/InstantCamera.h>

namespace Pylon
{
    /** \addtogroup Pylon_InstantCameraApiGeneric
     * @{
     */

    /*!
    \class  CAcquireContinuousConfiguration
    \brief Changes the configuration of the camera to free-running continuous acquisition

        This is the default configuration of the Instant Camera class. It is registered when an Instant Camera object is created.
    */
    class CAcquireContinuousConfiguration : public CConfigurationEventHandler
    {
    public:    
        //Set basic camera settings.
        virtual void OnOpened( CInstantCamera& camera)
        {
            using namespace GenApi;
            try
            {
                // Get the camera control object.
                INodeMap &Control = camera.GetNodeMap();

                //Disable all trigger types.
                {
                    CEnumerationPtr triggerSelector(Control.GetNode("TriggerSelector"));

                    //Disable acquisition start trigger if available.
                    {
                        GenApi::IEnumEntry* acquisitionStart = triggerSelector->GetEntryByName("AcquisitionStart");
                        if ( acquisitionStart && GenApi::IsAvailable( acquisitionStart))
                        {
                            triggerSelector->FromString("AcquisitionStart");
                            CEnumerationPtr(Control.GetNode("TriggerMode"))->FromString("Off");
                        }
                    }

                    //Disable frame start trigger if available.
                    {
                        GenApi::IEnumEntry* frameStart = triggerSelector->GetEntryByName("FrameStart");
                        if ( frameStart && GenApi::IsAvailable( frameStart))
                        {
                            triggerSelector->FromString("FrameStart");
                            CEnumerationPtr(Control.GetNode("TriggerMode"))->FromString("Off");
                        }
                    }
                }

                //Set acquisition mode.
                CEnumerationPtr(Control.GetNode("AcquisitionMode"))->FromString("Continuous");
            }
            catch (GenICam::GenericException& e)
            {
                throw RUNTIME_EXCEPTION( "Could not apply configuration. GenICam::GenericException caught in OnOpened method msg=%hs", e.what());
            }
            catch (std::exception& e)
            {
                throw RUNTIME_EXCEPTION( "Could not apply configuration. std::exception caught in OnOpened method msg=%hs", e.what());
            }
            catch (...)
            {
                throw RUNTIME_EXCEPTION( "Could not apply configuration. Unknown exception caught in OnOpened method.");
            }
        }
    };

    /** 
     * @}
     */
}

#ifdef _MSC_VER
#   pragma pack(pop)
#endif /* _MSC_VER */

#endif /* INCLUDED_ACQUIRECONTINUOUSCONFIGURATION_H_7346765 */
