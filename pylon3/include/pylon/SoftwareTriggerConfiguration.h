//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (C) 2010-2013 Basler
//  http://www.baslerweb.com
//  Author:  Andreas Gau
//-----------------------------------------------------------------------------
/*!
\file
\brief An instant camera configuration for software trigger,
       Use togehter with Pylon::CInstantCamera::WaitForFrameTriggerReady() and Pylon::CInstantCamera::ExecuteSoftwareTrigger().
*/

#ifndef INCLUDED_SOFTWARETRIGGERCONFIGURATION_H_4655834
#define INCLUDED_SOFTWARETRIGGERCONFIGURATION_H_4655834

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
    \class  CSoftwareTriggerConfiguration
    \brief  Changes the configuration of the camera so that it is triggered by software trigger.
            Use togehter with CInstantCamera::WaitForFrameTriggerReady() and CInstantCamera::ExecuteSoftwareTrigger().
    */
    class CSoftwareTriggerConfiguration : public CConfigurationEventHandler
    {
    public:    
        //Set basic camera settings
        virtual void OnOpened( CInstantCamera& camera)
        {
            using namespace GenApi;

            try
            {
                // Get the camera control object.
                INodeMap &Control = camera.GetNodeMap();

                // Get the trigger selector node.
                CEnumerationPtr triggerSelector(Control.GetNode("TriggerSelector"));
                // Get the trigger mode node.
                CEnumerationPtr triggerMode(Control.GetNode("TriggerMode"));

                // Check the available camera trigger mode(s) to select the appropriate one: acquisition start trigger mode 
                // (used by previous cameras, i.e. for cameras supporting only the legacy image acquisition control mode;
                // do not confuse with acquisition start command) or frame start trigger mode
                // (used by newer cameras, i.e.for cameras using the standard image acquisition control mode;
                // equivalent to the acquisition start trigger mode in the leagcy image acquisition control mode).
                bool frameStartAvailable = false;
                bool acquisitionStartAvailable = false;
                {
                    // Frame start trigger mode available?
                    GenApi::IEnumEntry* frameStart = triggerSelector->GetEntryByName("FrameStart");
                    frameStartAvailable = frameStart && IsAvailable(frameStart);

                    // Acquisition start trigger mode available?
                    GenApi::IEnumEntry* acquisitionStart = triggerSelector->GetEntryByName("AcquisitionStart");
                    acquisitionStartAvailable = acquisitionStart && IsAvailable(acquisitionStart);
                }

                // Preselect the trigger mode for image acquisition.
                const char* triggerSelectorValue = "FrameStart";

                // Check to see if the camera implements the acquisition start trigger mode only.
                if ( acquisitionStartAvailable && !frameStartAvailable)
                {
                    // Camera uses the acquisition start trigger as the only trigger mode.
                    triggerSelector->FromString("AcquisitionStart");
                    triggerMode->FromString("On");
                    triggerSelectorValue = "AcquisitionStart";
                }
                else  
                {   
                    // Camera may have the acquisition start trigger mode and the frame start trigger mode implemented.
                    // In this case, the acquisition trigger mode must be switched off.
                    if ( acquisitionStartAvailable )
                    {
                        triggerSelector->FromString("AcquisitionStart");
                        triggerMode->FromString("Off");
                    }
                    // To trigger each single frame by software or external hardware trigger: Enable the frame start trigger mode.
                    assert( frameStartAvailable); //Frame start trigger mode must be available here.
                    triggerSelector->FromString("FrameStart");
                    triggerMode->FromString("On");
                }

                // Note: The trigger selector must be set to the appropriate trigger mode 
                // before setting the trigger source or issuing software triggers.
                // Frame start trigger mode for newer cameras (i.e. for cameras supporting the standard image acquisition control mode).
                triggerSelector->FromString( triggerSelectorValue);

                // The trigger source must be set to 'Software'.
                CEnumerationPtr(Control.GetNode("TriggerSource"))->FromString("Software");

                //// Alternative hardware trigger configuration:
                //// This configuration can be copied and modified to create a hardware trigger configuration.
                //// Remove setting the 'TriggerSource' to 'Software' (see above) and 
                //// use the commented lines as a starting point.
                //// The camera user's manual contains more information about available configurations.
                //// The pylon Viewer tool can be used to test the selected settings first.

                //// The trigger source must be set to the trigger input, e.g. 'Line1'.
                //CEnumerationPtr(Control.GetNode("TriggerSource"))->FromString("Line1");

                ////The trigger activation must be set to e.g. 'RisingEdge'.
                //CEnumerationPtr(Control.GetNode("TriggerActivation"))->FromString("RisingEdge");

                // Enable the continuous acquisition mode.
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

#endif /* INCLUDED_SOFTWARETRIGGERCONFIGURATION_H_4655834 */
