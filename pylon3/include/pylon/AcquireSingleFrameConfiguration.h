//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (C) 2010-2013 Basler
//  http://www.baslerweb.com
//  Author:  Andreas Gau
//-----------------------------------------------------------------------------
/*!
\file
\brief An instant camera configuration for single frame acquisition, Use together with Pylon::CInstantCamera::GrabOne() only.
*/

#ifndef INCLUDED_ACQUIRESINGLEFRAMECONFIGURATION_H_6529309
#define INCLUDED_ACQUIRESINGLEFRAMECONFIGURATION_H_6529309

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
    \class  CAcquireSingleFrameConfiguration
    \brief  An instant camera configuration for single frame acquisition, Use together with CInstantCamera::GrabOne() only.

        \note Grabbing single images using Software Trigger (CSoftwareTriggerConfiguration) is recommended if you want to maximize frame rate.
        This is because the overhead per grabbed image is reduced compared to Single Frame Acquisition.
        The grabbing can be started using CInstantCamera::StartGrabbing().
        Images are grabbed using the CInstantCamera::WaitForFrameTriggerReady(), CInstantCamera::ExecuteSoftwareTrigger() and CInstantCamera::RetrieveResult() methods instead of using CInstantCamera::GrabOne().
        The grab can be stopped using CInstantCamera::StopGrabbing() when done.

    */
    class CAcquireSingleFrameConfiguration : public CConfigurationEventHandler
    {
    public:    
        //Set basic camera settings
        virtual void OnOpened( CInstantCamera& camera)
        {
            using namespace GenApi;

            try
            {
                // Get the camera control object
                INodeMap &Control = camera.GetNodeMap();

                //Disable all trigger types
                {
                    CEnumerationPtr triggerSelector(Control.GetNode("TriggerSelector"));

                    //Disable acquisition start trigger if available
                    {
                        GenApi::IEnumEntry* acquisitionStart = triggerSelector->GetEntryByName("AcquisitionStart");
                        if ( acquisitionStart && GenApi::IsAvailable( acquisitionStart))
                        {
                            triggerSelector->FromString("AcquisitionStart");
                            CEnumerationPtr(Control.GetNode("TriggerMode"))->FromString("Off");
                        }
                    }

                    //Disable frame start trigger if available
                    {
                        GenApi::IEnumEntry* frameStart = triggerSelector->GetEntryByName("FrameStart");
                        if ( frameStart && GenApi::IsAvailable( frameStart))
                        {
                            triggerSelector->FromString("FrameStart");
                            CEnumerationPtr(Control.GetNode("TriggerMode"))->FromString("Off");
                        }
                    }
                }

                //Set acquisition mode
                CEnumerationPtr(Control.GetNode("AcquisitionMode"))->FromString("SingleFrame");
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

#endif /* INCLUDED_ACQUIRESINGLEFRAMECONFIGURATION_H_6529309 */
