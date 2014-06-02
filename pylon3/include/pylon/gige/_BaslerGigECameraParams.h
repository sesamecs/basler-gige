
    




//-----------------------------------------------------------------------------
//  (c) 2004-2008 by Basler Vision Technologies
//  Section: Vision Components
//  Project: GenApi
//-----------------------------------------------------------------------------
/*!
\file
\brief Basler generic GigEVision camera interface
*/

//-----------------------------------------------------------------------------
//  This file is generated automatically
//  Do not modify!
//-----------------------------------------------------------------------------



#ifndef Basler_GigECamera_PARAMS_H
#define Basler_GigECamera_PARAMS_H

#include <GenApi/IEnumerationT.h>
#include <GenApi/NodeMapRef.h>
#include <GenApi/DLLLoad.h>

//! The namespace containing the device's control interface and related enumeration types
namespace Basler_GigECamera
{

    //**************************************************************************************************
    // Enumerations
    //**************************************************************************************************
    
    //! Valid values for SequenceAdvanceMode
    enum SequenceAdvanceModeEnums
    {
        SequenceAdvanceMode_Auto,  //!<Automatic sequence set advance
		SequenceAdvanceMode_Controlled,  //!<Sequence set advance controlled by settable source
		SequenceAdvanceMode_FreeSelection   //!<The sequence sets are selected according to the states of the input lines
		
    };

    //! Valid values for SequenceControlSelector
    enum SequenceControlSelectorEnums
    {
        SequenceControlSelector_Restart,  //!<Selects controls for sequence restart
		SequenceControlSelector_Advance   //!<Selects controls for sequence set advance
		
    };

    //! Valid values for SequenceControlSource
    enum SequenceControlSourceEnums
    {
        SequenceControlSource_Disabled,  //!<Advance via asynchronous advance only
		SequenceControlSource_AlwaysActive,  //!<Automatic sequence set advance. The sequence repeat starts with sequence set index number 1
		SequenceControlSource_Line1,  //!<The source for sequence restart or sequence set advance is line 1
		SequenceControlSource_Line2,  //!<The source for sequence restart or sequence set advance is line 2
		SequenceControlSource_Line3,  //!<The source for sequence restart or sequence set advance is line 3
		SequenceControlSource_Line4,  //!<The source for sequence restart or sequence set advance is line 4
		SequenceControlSource_Line5,  //!<The source for sequence restart or sequence set advance is line 5
		SequenceControlSource_Line6,  //!<The source for sequence restart or sequence set advance is line 6
		SequenceControlSource_Line7,  //!<The source for sequence restart or sequence set advance is line 7
		SequenceControlSource_Line8,  //!<The source for sequence restart or sequence set advance is line 8
		SequenceControlSource_CC1,  //!<The source for sequence restart or sequence set advance is CC1
		SequenceControlSource_CC2,  //!<The source for sequence restart or sequence set advance is CC2
		SequenceControlSource_CC3,  //!<The source for sequence restart or sequence set advance is CC3
		SequenceControlSource_CC4   //!<The source for sequence restart or sequence set advance is CC4
		
    };

    //! Valid values for SequenceAddressBitSelector
    enum SequenceAddressBitSelectorEnums
    {
        SequenceAddressBitSelector_Bit0,  //!<Selects bit 0 of the sequence set address
		SequenceAddressBitSelector_Bit1,  //!<Selects bit 1 of the sequence set address
		SequenceAddressBitSelector_Bit2,  //!<Selects bit 2 of the sequence set address
		SequenceAddressBitSelector_Bit3   //!<Selects bit 3 of the sequence set address
		
    };

    //! Valid values for SequenceAddressBitSource
    enum SequenceAddressBitSourceEnums
    {
        SequenceAddressBitSource_Line1,  //!<Selects line 1 as the source for the selected bit of the sequence set address
		SequenceAddressBitSource_Line2,  //!<Selects line 2 as the source for the selected bit of the sequence set address
		SequenceAddressBitSource_Line3,  //!<Selects line 3 as the source for the selected bit of the sequence set address
		SequenceAddressBitSource_Line4,  //!<Selects line 4 as the source for the selected bit of the sequence set address
		SequenceAddressBitSource_Line5,  //!<Selects line 5 as the source for the selected bit of the sequence set address
		SequenceAddressBitSource_Line6,  //!<Selects line 6 as the source for the selected bit of the sequence set address
		SequenceAddressBitSource_Line7,  //!<Selects line 7 as the source for the selected bit of the sequence set address.
		SequenceAddressBitSource_Line8,  //!<Selects line 8 as the source for the selected bit of the sequence set address.
		SequenceAddressBitSource_CC1,  //!<Selects CC1 as the source for the selected bit of the sequence set address
		SequenceAddressBitSource_CC2,  //!<Selects CC2 as the source for the selected bit of the sequence set address
		SequenceAddressBitSource_CC3,  //!<Selects CC3 as the source for the selected bit of the sequence set address
		SequenceAddressBitSource_CC4   //!<Selects CC4 as the source for the selected bit of the sequence set address.
		
    };

    //! Valid values for GainAuto
    enum GainAutoEnums
    {
        GainAuto_Off,  //!<Disables the Gain Auto function.
		GainAuto_Once,  //!<Sets operation mode to 'once'.
		GainAuto_Continuous   //!<Sets operation mode to 'continuous'.
		
    };

    //! Valid values for GainSelector
    enum GainSelectorEnums
    {
        GainSelector_All,  //!<Selects all gain controls for adjustment
		GainSelector_AnalogAll,  //!<Selects all analog gain controls for adjustment
		GainSelector_DigitalAll,  //!<Selects all digital gain controls for adjustment
		GainSelector_Tap1,  //!<Selects the tap 1 gain control for adjustment
		GainSelector_Tap2,  //!<Selects the tap 2 gain control for adjustment
		GainSelector_Tap3,  //!<Selects the tap 3 gain control for adjustment
		GainSelector_Tap4,  //!<Selects the tap 4 gain control for adjustment
		GainSelector_Red,  //!<Selects the red gain control for adjustment
		GainSelector_Green,  //!<Selects the green gain control for adjustment
		GainSelector_Blue   //!<Selects the blue gain control for adjustment
		
    };

    //! Valid values for BlackLevelSelector
    enum BlackLevelSelectorEnums
    {
        BlackLevelSelector_All,  //!<Selects all black level controls for adjustment
		BlackLevelSelector_AnalogAll,  //!<Selects all analog black level controls for adjustment
		BlackLevelSelector_DigitalAll,  //!<Selects all digital black level controls for adjustment
		BlackLevelSelector_Tap1,  //!<Selects the tap 1 black level control for adjustment
		BlackLevelSelector_Tap2,  //!<Selects the tap 2 black level control for adjustment
		BlackLevelSelector_Tap3,  //!<Selects the tap 3 black level control for adjustment
		BlackLevelSelector_Tap4,  //!<Selects the tap 4 black level control for adjustment
		BlackLevelSelector_Red,  //!<Selects the red black level control for adjustment
		BlackLevelSelector_Green,  //!<Selects the green black level control for adjustment
		BlackLevelSelector_Blue   //!<Selects the blue black level control for adjustment
		
    };

    //! Valid values for GammaSelector
    enum GammaSelectorEnums
    {
        GammaSelector_User,  //!<Sets gamma to user defined curve
		GammaSelector_sRGB   //!<Sets gamma to fixed sRGB curve.
		
    };

    //! Valid values for PixelFormat
    enum PixelFormatEnums
    {
        PixelFormat_Mono8,  //!<Sets the pixel format to Mono 8
		PixelFormat_Mono10,  //!<Sets the pixel format to Mono 10
		PixelFormat_Mono10Packed,  //!<Sets the pixel format to Mono 10 Packed
		PixelFormat_Mono12,  //!<Sets the pixel format to Mono 12
		PixelFormat_Mono12Packed,  //!<Sets the pixel format to Mono 12 Packed
		PixelFormat_Mono16,  //!<Sets the pixel format to Mono 16
		PixelFormat_BayerGR8,  //!<Sets the pixel format to Bayer GR 8
		PixelFormat_BayerRG8,  //!<Sets the pixel format to Bayer RG 8
		PixelFormat_BayerGB8,  //!<Sets the pixel format to Bayer GB 8
		PixelFormat_BayerBG8,  //!<Sets the pixel format to Bayer BG 8
		PixelFormat_BayerGR10,  //!<Sets the pixel format to Bayer GR 10
		PixelFormat_BayerRG10,  //!<Sets the pixel format to Bayer RG 10
		PixelFormat_BayerGB10,  //!<Sets the pixel format to Bayer GB 10
		PixelFormat_BayerBG10,  //!<Sets the pixel format to Bayer BG 10
		PixelFormat_BayerGR12,  //!<Sets the pixel format to Bayer GR 12
		PixelFormat_BayerRG12,  //!<Sets the pixel format to Bayer RG 12
		PixelFormat_BayerGB12,  //!<Sets the pixel format to Bayer GB 12
		PixelFormat_BayerBG12,  //!<Sets the pixel format to Bayer BG 12
		PixelFormat_RGB8Packed,  //!<Sets the pixel format to RGB 8 Packed
		PixelFormat_BGR8Packed,  //!<Sets the pixel format to BGR 8 Packed
		PixelFormat_RGBA8Packed,  //!<Sets the pixel format to RGBA 8 Packed
		PixelFormat_BGRA8Packed,  //!<Sets the pixel format to BGRA 8 Packed
		PixelFormat_RGB10Packed,  //!<Sets the pixel format to RGB 10 Packed
		PixelFormat_BGR10Packed,  //!<Sets the pixel format to BGR 10 Packed
		PixelFormat_RGB12Packed,  //!<Sets the pixel format to RGB 12 Packed
		PixelFormat_BGR12Packed,  //!<Sets the pixel format to BGR 12 Packed
		PixelFormat_RGB10V1Packed,  //!<Sets the pixel format to RGB 10V1 Packed
		PixelFormat_RGB10V2Packed,  //!<Sets the pixel format to RGB 10V2 Packed
		PixelFormat_YUV411Packed,  //!<Sets the pixel format to YUV 411 Packed
		PixelFormat_YUV422Packed,  //!<Sets the pixel format to YUV 422 Packed
		PixelFormat_YUV444Packed,  //!<Sets the pixel format to YUV 444 Packed
		PixelFormat_RGB8Planar,  //!<Sets the pixel format to RGB 8 Planar
		PixelFormat_RGB10Planar,  //!<Sets the pixel format to RGB 10 Planar
		PixelFormat_RGB12Planar,  //!<Sets the pixel format to RGB 12 Planar
		PixelFormat_RGB16Planar,  //!<Sets the pixel format to RGB 16 Planar
		PixelFormat_YUV422_YUYV_Packed,  //!<Sets the pixel format to YUV 422 (YUYV) Packed
		PixelFormat_BayerGB12Packed,  //!<Sets the pixel format to Bayer GB 12 Packed
		PixelFormat_BayerGR12Packed,  //!<Sets the pixel format to Bayer GR 12 Packed
		PixelFormat_BayerRG12Packed,  //!<Sets the pixel format to Bayer RG 12 Packed
		PixelFormat_BayerBG12Packed,  //!<Sets the pixel format to Bayer BG 12 Packed
		PixelFormat_BayerGR16,  //!<Sets the pixel format to Bayer GR 16
		PixelFormat_BayerRG16,  //!<Sets the pixel format to Bayer RG 16
		PixelFormat_BayerGB16,  //!<Sets the pixel format to Bayer GB 16
		PixelFormat_BayerBG16,  //!<Sets the pixel format to Bayer BG 16
		PixelFormat_RGB12V1Packed,  //!<Sets the pixel format to RGB 12 Packed 
		PixelFormat_Mono8Signed   //!<Sets the pixel format to Mono 8 Signed
		
    };

    //! Valid values for PixelCoding
    enum PixelCodingEnums
    {
        PixelCoding_Mono8,  //!<
		PixelCoding_Mono8Signed,  //!<
		PixelCoding_Mono16,  //!<
		PixelCoding_Mono10Packed,  //!<
		PixelCoding_Mono12Packed,  //!<
		PixelCoding_Raw8,  //!<
		PixelCoding_Raw16,  //!<
		PixelCoding_RGB8,  //!<
		PixelCoding_BGR8,  //!<
		PixelCoding_RGBA8,  //!<
		PixelCoding_BGRA8,  //!<
		PixelCoding_RGB16,  //!<
		PixelCoding_BGR16,  //!<
		PixelCoding_RGB10V1Packed,  //!<
		PixelCoding_RGB10V2Packed,  //!<
		PixelCoding_YUV411,  //!<
		PixelCoding_YUV422,  //!<
		PixelCoding_YUV444,  //!<
		PixelCoding_RGB8Planar,  //!<
		PixelCoding_RGB16Planar   //!<
		
    };

    //! Valid values for PixelSize
    enum PixelSizeEnums
    {
        PixelSize_Bpp1,  //!<Indicates that the depth of the pixel values in the acquired images is 1 bits per pixel
		PixelSize_Bpp2,  //!<Indicates that the depth of the pixel values in the acquired images is 2 bits per pixel
		PixelSize_Bpp4,  //!<Indicates that the depth of the pixel values in the acquired images is 4 bits per pixel
		PixelSize_Bpp8,  //!<Indicates that the depth of the pixel values in the acquired images is 8 bits per pixel
		PixelSize_Bpp10,  //!<Indicates that the depth of the pixel values in the acquired images is 10 bits per pixel
		PixelSize_Bpp12,  //!<Indicates that the depth of the pixel values in the acquired images is 12 bits per pixel
		PixelSize_Bpp14,  //!<Indicates that the depth of the pixel values in the acquired images is 12 bits per pixel
		PixelSize_Bpp16,  //!<Indicates that the depth of the pixel values in the acquired images is 16 bits per pixel
		PixelSize_Bpp24,  //!<Indicates that the depth of the pixel values in the acquired images is 24 bits per pixel
		PixelSize_Bpp32,  //!<Indicates that the depth of the pixel values in the acquired images is 32 bits per pixel
		PixelSize_Bpp36,  //!<Indicates that the depth of the pixel values in the acquired images is 36 bits per pixel
		PixelSize_Bpp48,  //!<Indicates that the depth of the pixel values in the acquired images is 48 bits per pixel
		PixelSize_Bpp64   //!<Indicates that the depth of the pixel values in the acquired images is 64 bits per pixel
		
    };

    //! Valid values for PixelColorFilter
    enum PixelColorFilterEnums
    {
        PixelColorFilter_Bayer_RG,  //!<Indicates that the Bayer filter has an RG/GB alignment to the pixels in the acquired images
		PixelColorFilter_Bayer_GB,  //!<Indicates that the Bayer filter has a GB/RG alignment to the pixels in the acquired images
		PixelColorFilter_Bayer_GR,  //!<Indicates that the Bayer filter has a GR/BG alignment to the pixels in the acquired images
		PixelColorFilter_Bayer_BG,  //!<Indicates that the Bayer filter has a BG/GR alignment to the pixels in the acquired images
		PixelColorFilter_None   //!<Indicates that no Bayer filter is present on the camera
		
    };

    //! Valid values for SpatialCorrectionStartingLine
    enum SpatialCorrectionStartingLineEnums
    {
        SpatialCorrectionStartingLine_LineRed,  //!<
		SpatialCorrectionStartingLine_LineGreen,  //!<
		SpatialCorrectionStartingLine_LineBlue   //!<
		
    };

    //! Valid values for SensorBitDepth
    enum SensorBitDepthEnums
    {
        SensorBitDepth_BitDepth8,  //!<
		SensorBitDepth_BitDepth10,  //!<
		SensorBitDepth_BitDepth12,  //!<
		SensorBitDepth_BitDepth14,  //!<
		SensorBitDepth_BitDepth16   //!<
		
    };

    //! Valid values for FieldOutputMode
    enum FieldOutputModeEnums
    {
        FieldOutputMode_Field0,  //!<Sets the mode to only output field 0.
		FieldOutputMode_Field1,  //!<Sets the mode to only output field 1.
		FieldOutputMode_Field0First,  //!<Sets the mode to only output field 0 and field 1 in single frames. Starting with field 0.
		FieldOutputMode_ConcatenatedNewFields,  //!<Sets the mode to output a frame consisting of field 0 in the upper half and field 1 in the lower half of the frame.
		FieldOutputMode_DeinterlacedNewFields   //!<Sets the mode to output a frame generated by deinterlacing field 0 and field 1 using the deinterlacer selected by feature Deinterlacer. 
		
    };

    //! Valid values for Deinterlacer
    enum DeinterlacerEnums
    {
        Deinterlacer_Weave   //!<Sets the deinterlacing algorithm to weave the lines from field 0 and field 1.
		
    };

    //! Valid values for TestImageSelector
    enum TestImageSelectorEnums
    {
        TestImageSelector_Off,  //!<Sets the camera's test image generation capability to disabled
		TestImageSelector_Black,  //!<Sets the camera to generate and transmit black test images
		TestImageSelector_White,  //!<Sets the camera to generate and transmit white test images
		TestImageSelector_GreyHorizontalRamp,  //!<Sets the camera to generate and transmit test images with a fixed horizontal gray gradient pattern
		TestImageSelector_GreyVerticalRamp,  //!<Sets the camera to generate and transmit test images with a fixed vertical gray gradient pattern
		TestImageSelector_GreyHorizontalRampMoving,  //!<Sets the camera to generate and transmit test images with a moving horizontal gray gradient pattern
		TestImageSelector_GreyVerticalRampMoving,  //!<Sets the camera to generate and transmit test images with a moving vertical gray gradient pattern
		TestImageSelector_HorzontalLineMoving,  //!<Sets the camera to generate and transmit test images with a moving horizontal line pattern
		TestImageSelector_VerticalLineMoving,  //!<Sets the camera to generate and transmit test images with a moving vertical line pattern
		TestImageSelector_ColorBar,  //!<Sets the camera to generate and transmit test images with a color bar pattern
		TestImageSelector_FrameCounter,  //!<Sets the camera to generate and transmit test images with a frame counter pattern
		TestImageSelector_DeviceSpecific,  //!<Sets the camera to generate and transmit test images with a camera specific pattern
		TestImageSelector_FixedDiagonalGrayGradient_8Bit,  //!<Sets the camera to generate and transmit test images with an 8 bit fixed diagonal gray gradient pattern
		TestImageSelector_MovingDiagonalGrayGradient_8Bit,  //!<Sets the camera to generate and transmit test images with an 8 bit moving diagonal gray gradient pattern
		TestImageSelector_MovingDiagonalGrayGradient_12Bit,  //!<Sets the camera to generate and transmit test images with a 12 bit moving diagonal gray gradient pattern
		TestImageSelector_MovingDiagonalGrayGradientFeatureTest_8Bit,  //!<Sets the camera to generate and transmit test images with an 8 bit moving diagonal gray gradient feature test pattern
		TestImageSelector_MovingDiagonalGrayGradientFeatureTest_12Bit,  //!<Sets the camera to generate and transmit test images with a 12 bit moving diagonal gray gradient feature test pattern
		TestImageSelector_MovingDiagonalColorGradient,  //!<Sets the camera to generate and transmit test images with a moving diagonal color gradient pattern
		TestImageSelector_Testimage1,  //!<Sets the camera to generate and transmit test images with a test image 1 pattern
		TestImageSelector_Testimage2,  //!<Sets the camera to generate and transmit test images with a test image 2 pattern
		TestImageSelector_Testimage3,  //!<Sets the camera to generate and transmit test images with a test image 3 pattern
		TestImageSelector_Testimage4,  //!<Sets the camera to generate and transmit test images with a test image 4 pattern
		TestImageSelector_Testimage5,  //!<Sets the camera to generate and transmit test images with a test image 5 pattern
		TestImageSelector_Testimage6,  //!<Sets the camera to generate and transmit test images with a test image 6 pattern
		TestImageSelector_Testimage7   //!<Sets the camera to generate and transmit test images with a test image 7 pattern
		
    };

    //! Valid values for SensorDigitizationTaps
    enum SensorDigitizationTapsEnums
    {
        SensorDigitizationTaps_One,  //!<
		SensorDigitizationTaps_Two,  //!<
		SensorDigitizationTaps_Three,  //!<
		SensorDigitizationTaps_Four   //!<
		
    };

    //! Valid values for ColorTransformationSelector
    enum ColorTransformationSelectorEnums
    {
        ColorTransformationSelector_RGBtoRGB,  //!<Matrix color transformation from RGB to RGB.
		ColorTransformationSelector_RGBtoYUV,  //!<Matrix color transformation from YUV to RGB.
		ColorTransformationSelector_YUVtoRGB   //!<Matrix color transformation from RGB to YUV.
		
    };

    //! Valid values for ColorTransformationMode
    enum ColorTransformationModeEnums
    {
        ColorTransformationMode_Off,  //!<
		ColorTransformationMode_Custom,  //!<
		ColorTransformationMode_Daylight,  //!<
		ColorTransformationMode_Tungsten,  //!<
		ColorTransformationMode_Daylight_6500K,  //!<
		ColorTransformationMode_Daylight6500K   //!<
		
    };

    //! Valid values for LightSourceSelector
    enum LightSourceSelectorEnums
    {
        LightSourceSelector_Off,  //!<No matrix color transformation for specific light source is performed.
		LightSourceSelector_Custom,  //!<Allows using a custom defined color transformation matrix.
		LightSourceSelector_Daylight,  //!<The matrix is optimized for image acquisition with daylight of 5000 K.
		LightSourceSelector_Tungsten,  //!<The matrix is optimized for image acquisition with tungsten incandescent light (3100 K).
		LightSourceSelector_Daylight6500K   //!<The matrix is optimized for image acquisition with daylight of 6500 K.
		
    };

    //! Valid values for ColorTransformationValueSelector
    enum ColorTransformationValueSelectorEnums
    {
        ColorTransformationValueSelector_Gain00,  //!<Element in row 0 and column 0 of the color transformation matrix.
		ColorTransformationValueSelector_Gain01,  //!<Element in row 0 and column 1 of the color transformation matrix.
		ColorTransformationValueSelector_Gain02,  //!<Element in row 0 and column 2 of the color transformation matrix.
		ColorTransformationValueSelector_Gain10,  //!<Element in row 1 and column 0 of the color transformation matrix.
		ColorTransformationValueSelector_Gain11,  //!<Element in row 1 and column 1 of the color transformation matrix
		ColorTransformationValueSelector_Gain12,  //!<Element in row 1 and column 2 of the color transformation matrix.
		ColorTransformationValueSelector_Gain20,  //!<Element in row 2 and column 0 of the color transformation matrix.
		ColorTransformationValueSelector_Gain21,  //!<Element in row 2 and column 1 of the color transformation matrix.
		ColorTransformationValueSelector_Gain22   //!<Element in row 2 and column 2 of the color transformation matrix.
		
    };

    //! Valid values for ColorAdjustmentSelector
    enum ColorAdjustmentSelectorEnums
    {
        ColorAdjustmentSelector_Red,  //!<Selects red for the adjustment of colors with predominant red.
		ColorAdjustmentSelector_Yellow,  //!<Selects yellow for the adjustment of colors with predominant yellow.
		ColorAdjustmentSelector_Green,  //!<Selects green the adjustment of colors with predominant green.
		ColorAdjustmentSelector_Cyan,  //!<Selects cyan for the adjustment of colors with predominant cyan.
		ColorAdjustmentSelector_Blue,  //!<Selects blue for the adjustment of colors with predominant blue.
		ColorAdjustmentSelector_Magenta   //!<Selects magenta for the adjustment of colors with predominant magenta.
		
    };

    //! Valid values for BalanceWhiteAuto
    enum BalanceWhiteAutoEnums
    {
        BalanceWhiteAuto_Off,  //!<Disables the Balance White Auto function.
		BalanceWhiteAuto_Once,  //!<Sets operation mode to 'once'.
		BalanceWhiteAuto_Continuous   //!<Sets operation mode to 'continuous'.
		
    };

    //! Valid values for BalanceRatioSelector
    enum BalanceRatioSelectorEnums
    {
        BalanceRatioSelector_Red,  //!<Selects the red balance ratio control for adjustment
		BalanceRatioSelector_Green,  //!<Selects the green balance ratio control for adjustment
		BalanceRatioSelector_Blue   //!<Selects the blue balance ratio control for adjustment
		
    };

    //! Valid values for LegacyBinningVertical
    enum LegacyBinningVerticalEnums
    {
        LegacyBinningVertical_Off,  //!<Sets vertical binning to disabled
		LegacyBinningVertical_Two_Rows   //!<Sets vertical binning to 2 rows
		
    };

    //! Valid values for AcquisitionMode
    enum AcquisitionModeEnums
    {
        AcquisitionMode_SingleFrame,  //!<Sets the acquisition mode to single frame
		AcquisitionMode_MultiFrame,  //!<Sets the acquisition mode to multi frame
		AcquisitionMode_Continuous   //!<Sets the acquisition mode to continuous
		
    };

    //! Valid values for TriggerControlImplementation
    enum TriggerControlImplementationEnums
    {
        TriggerControlImplementation_Legacy,  //!<
		TriggerControlImplementation_Standard   //!<
		
    };

    //! Valid values for TriggerSelector
    enum TriggerSelectorEnums
    {
        TriggerSelector_AcquisitionStart,  //!<Selects the acquisition start trigger for configuration
		TriggerSelector_AcquisitionEnd,  //!<Selects the acquisition end trigger for configuration
		TriggerSelector_AcquisitionActive,  //!<Selects the acquisition active trigger for configuration
		TriggerSelector_FrameStart,  //!<Selects the frame start trigger for configuration
		TriggerSelector_FrameEnd,  //!<Selects the frame end trigger for configuration
		TriggerSelector_FrameActive,  //!<Selects the frame active trigger for configuration
		TriggerSelector_LineStart,  //!<Selects the line start trigger for configuration
		TriggerSelector_ExposureStart,  //!<Selects the exposure start trigger for configuration
		TriggerSelector_ExposureEnd,  //!<Selects the exposure end trigger for configuration
		TriggerSelector_ExposureActive   //!<Selects the exposure active trigger for configuration
		
    };

    //! Valid values for TriggerMode
    enum TriggerModeEnums
    {
        TriggerMode_Off,  //!<Sets the mode for the selected trigger to off
		TriggerMode_On   //!<Sets the mode for the selected trigger to on
		
    };

    //! Valid values for TriggerSource
    enum TriggerSourceEnums
    {
        TriggerSource_Software,  //!<Sets the software trigger as the signal source for the selected trigger
		TriggerSource_Line1,  //!<Sets the signal source for the selected trigger to line 1
		TriggerSource_Line2,  //!<Sets the signal source for the selected trigger to line 2
		TriggerSource_Line3,  //!<Sets the signal source for the selected trigger to line 3
		TriggerSource_Line4,  //!<Sets the signal source for the selected trigger to line 4
		TriggerSource_Line5,  //!<Sets the signal source for the selected trigger to line 5
		TriggerSource_Line6,  //!<Sets the signal source for the selected trigger to line 6
		TriggerSource_Line7,  //!<Sets the signal source for the selected trigger to line 7
		TriggerSource_Line8,  //!<Sets the signal source for the selected trigger to line 8
		TriggerSource_CC1,  //!<Sets the signal source for the selected trigger to CC1
		TriggerSource_CC2,  //!<Sets the signal source for the selected trigger to CC2
		TriggerSource_CC3,  //!<Sets the signal source for the selected trigger to CC3
		TriggerSource_CC4,  //!<Sets the signal source for the selected trigger to CC4
		TriggerSource_ShaftEncoderModuleOut,  //!<Sets the signal source for the selected trigger to the shaft encoder module.
		TriggerSource_FrequencyConverter,  //!<Sets the signal source for the selected trigger to the frequency converter module.
		TriggerSource_Timer1Start,  //!<Sets the signal source for the selected trigger to timer 1 start
		TriggerSource_Timer1End,  //!<Sets the signal source for the selected trigger to timer 1 end
		TriggerSource_Counter1Start,  //!<Sets the signal source for the selected trigger to counter 1 start
		TriggerSource_Counter1End,  //!<Sets the signal source for the selected trigger to counter 1 end
		TriggerSource_UserOutput1,  //!<Sets the signal source for the selected trigger to user output 1
		TriggerSource_UserOutput2   //!<Sets the signal source for the selected trigger to user output 2
		
    };

    //! Valid values for TriggerActivation
    enum TriggerActivationEnums
    {
        TriggerActivation_RisingEdge,  //!<Sets the selected trigger to become active on the rising edge of the source signal
		TriggerActivation_FallingEdge,  //!<Sets the selected trigger to become active on the falling edge of the source signal
		TriggerActivation_AnyEdge,  //!<Sets the selected trigger to become active on the falling or rising edge of the source signal
		TriggerActivation_LevelHigh,  //!<Sets the selected trigger to become active when  the source signal is high
		TriggerActivation_LevelLow   //!<Sets the selected trigger to become active when  the source signal is low
		
    };

    //! Valid values for TriggerDelaySource
    enum TriggerDelaySourceEnums
    {
        TriggerDelaySource_Time_us,  //!<Selects the trigger delay to be expressed as a time interval (in microseconds).
		TriggerDelaySource_LineTrigger   //!<Selects the trigger delay to be expressed as a number of line triggers.
		
    };

    //! Valid values for ExposureAuto
    enum ExposureAutoEnums
    {
        ExposureAuto_Off,  //!<Disables the Exposure Auto function.
		ExposureAuto_Once,  //!<Sets operation mode to 'once'.
		ExposureAuto_Continuous   //!<Sets operation mode to 'continuous'.
		
    };

    //! Valid values for ExposureMode
    enum ExposureModeEnums
    {
        ExposureMode_Off,  //!<Sets the exposure mode to off
		ExposureMode_Timed,  //!<Sets the exposure mode to timed
		ExposureMode_TriggerWidth,  //!<Sets the exposure mode to trigger width
		ExposureMode_TriggerControlled   //!<Sets the exposure mode to trigger controlled
		
    };

    //! Valid values for InterlacedIntegrationMode
    enum InterlacedIntegrationModeEnums
    {
        InterlacedIntegrationMode_FieldIntegration,  //!<Sets the integration mode to field integration
		InterlacedIntegrationMode_FrameIntegration   //!<Sets the integration mode to frame integration
		
    };

    //! Valid values for AcquisitionStatusSelector
    enum AcquisitionStatusSelectorEnums
    {
        AcquisitionStatusSelector_AcquisitionTriggerWait,  //!<Device is currently waiting for a trigger for the capture of one or many frames.
		AcquisitionStatusSelector_AcquisitionActive,  //!<Device is currently doing an acquisition of one or many frames.
		AcquisitionStatusSelector_AcquisitionTransfer,  //!<Device is currently transferring an acquisition of one or many frames.
		AcquisitionStatusSelector_FrameTriggerWait,  //!<Device is currently waiting for a Frame trigger.
		AcquisitionStatusSelector_FrameActive,  //!<Device is currently doing the capture of a frame.
		AcquisitionStatusSelector_FrameTransfer,  //!<Device is currently transferring a frame.
		AcquisitionStatusSelector_ExposureActive   //!<Device is doing the exposure of a frame.
		
    };

    //! Valid values for LineSelector
    enum LineSelectorEnums
    {
        LineSelector_Line1,  //!<Selects line 1 for configuration
		LineSelector_Line2,  //!<Selects line 2 for configuration
		LineSelector_Line3,  //!<Selects line 3 for configuration
		LineSelector_Line4,  //!<Selects line 4 for configuration
		LineSelector_Out1,  //!<Selects output line 1 for configuration
		LineSelector_Out2,  //!<Selects output line 2 for configuration
		LineSelector_Out3,  //!<Selects output line 3 for configuration
		LineSelector_Out4   //!<Selects output line 4 for configuration
		
    };

    //! Valid values for LineMode
    enum LineModeEnums
    {
        LineMode_Input,  //!<Sets the mode for the selected line to input
		LineMode_Output   //!<Sets the mode for the selected line to output
		
    };

    //! Valid values for LineSource
    enum LineSourceEnums
    {
        LineSource_Off,  //!<Sets the source signal for the selected output line to off
		LineSource_ExposureActive,  //!<Sets the source signal for the selected output line to exposure active
		LineSource_FrameTriggerWait,  //!<Associates the Frame Trigger Wait status with the selected output line.
		LineSource_LineTriggerWait,  //!<Associates the Line Trigger Wait status with the selected output line.
		LineSource_Timer1Active,  //!<Sets the source signal for the selected output line to timer 1 active
		LineSource_Timer2Active,  //!<Sets the source signal for the selected output line to timer 2 active
		LineSource_Timer3Active,  //!<Sets the source signal for the selected output line to timer 3 active
		LineSource_Timer4Active,  //!<Sets the source signal for the selected output line to timer 4 active
		LineSource_TimerActive,  //!<
		LineSource_UserOutput1,  //!<Sets the source signal for the selected output line to user settable output signal 1
		LineSource_UserOutput2,  //!<Sets the source signal for the selected output line to user settable output signal 2
		LineSource_UserOutput3,  //!<Sets the source signal for the selected output line to user settable output signal 3
		LineSource_UserOutput4,  //!<Sets the source signal for the selected output line to user settable output signal 4
		LineSource_UserOutput,  //!<
		LineSource_TriggerReady,  //!<
		LineSource_SerialTx,  //!<
		LineSource_AcquisitionTriggerWait,  //!<Associates the Acquisition Trigger Wait status with the selected output line.
		LineSource_ShaftEncoderModuleOut,  //!<Associates the output of the shaft encoder module with the selected output line.
		LineSource_FrequencyConverter,  //!<Associates the output of the frequency converter module with the selected output line.
		LineSource_PatternGenerator1,  //!<
		LineSource_PatternGenerator2,  //!<
		LineSource_PatternGenerator3,  //!<
		LineSource_PatternGenerator4,  //!<
		LineSource_AcquisitionTriggerReady,  //!<
		LineSource_FlashWindow,  //!<
		LineSource_FrameCycle,  //!<This signal is rising with frame trigger wait and falling with exposure active
		LineSource_SyncUserOutput   //!<
		
    };

    //! Valid values for LineLogic
    enum LineLogicEnums
    {
        LineLogic_Positive,  //!<
		LineLogic_Negative   //!<
		
    };

    //! Valid values for LineFormat
    enum LineFormatEnums
    {
        LineFormat_NoConnect,  //!<Sets the electrical configuration of the selected line to not connected
		LineFormat_TriState,  //!<Sets the electrical configuration of the selected line to tri-state
		LineFormat_TTL,  //!<Sets the electrical configuration of the selected line to TTL
		LineFormat_LVDS,  //!<Sets the electrical configuration of the selected line to LVDS
		LineFormat_RS422,  //!<Sets the electrical configuration of the selected line to RS-422
		LineFormat_OptoCoupled   //!<Sets the electrical configuration of the selected line to opto-coupled
		
    };

    //! Valid values for UserOutputSelector
    enum UserOutputSelectorEnums
    {
        UserOutputSelector_UserOutput1,  //!<Selects user settable output signal 1 for configuration
		UserOutputSelector_UserOutput2,  //!<Selects user settable output signal 2 for configuration
		UserOutputSelector_UserOutput3,  //!<Selects user settable output signal 3 for configuration
		UserOutputSelector_UserOutput4,  //!<Selects user settable output signal 4 for configuration
		UserOutputSelector_UserOutput5,  //!<Selects user settable output signal 5 for configuration
		UserOutputSelector_UserOutput6,  //!<Selects user settable output signal 6 for configuration
		UserOutputSelector_UserOutput7,  //!<Selects user settable output signal 7 for configuration
		UserOutputSelector_UserOutput8   //!<Selects user settable output signal 8 for configuration
		
    };

    //! Valid values for SyncUserOutputSelector
    enum SyncUserOutputSelectorEnums
    {
        SyncUserOutputSelector_SyncUserOutput1,  //!<Selects user settable synchronous output signal 1 for configuration
		SyncUserOutputSelector_SyncUserOutput2,  //!<Selects user settable synchronous output signal 2 for configuration
		SyncUserOutputSelector_SyncUserOutput3,  //!<Selects user settable synchronous output signal 3 for configuration
		SyncUserOutputSelector_SyncUserOutput4,  //!<Selects user settable synchronous output signal 4 for configuration
		SyncUserOutputSelector_SyncUserOutput5,  //!<Selects user settable synchronous output signal 5 for configuration
		SyncUserOutputSelector_SyncUserOutput6,  //!<Selects user settable synchronous output signal 6 for configuration
		SyncUserOutputSelector_SyncUserOutput7,  //!<Selects user settable synchronous output signal 7 for configuration
		SyncUserOutputSelector_SyncUserOutput8   //!<Selects user settable synchronous output signal 8 for configuration
		
    };

    //! Valid values for ShaftEncoderModuleLineSelector
    enum ShaftEncoderModuleLineSelectorEnums
    {
        ShaftEncoderModuleLineSelector_PhaseA,  //!<Selects phase A of the shaft encoder.
		ShaftEncoderModuleLineSelector_PhaseB   //!<Selects phase B of the shaft encoder.
		
    };

    //! Valid values for ShaftEncoderModuleLineSource
    enum ShaftEncoderModuleLineSourceEnums
    {
        ShaftEncoderModuleLineSource_Line1,  //!<Selects input line 1 as signal source for the shaft encoder module.
		ShaftEncoderModuleLineSource_Line2,  //!<Selects input line 2 as signal source for the shaft encoder module.
		ShaftEncoderModuleLineSource_Line3,  //!<Selects input line 3 as signal source for the shaft encoder module.
		ShaftEncoderModuleLineSource_Line4,  //!<Selects input line 4 as signal source for the shaft encoder module.
		ShaftEncoderModuleLineSource_Line5,  //!<Selects input line 5 as signal source for the shaft encoder module.
		ShaftEncoderModuleLineSource_Line6,  //!<Selects input line 6 as signal source for the shaft encoder module.
		ShaftEncoderModuleLineSource_Line7,  //!<Selects input line 7 as signal source for the shaft encoder module.
		ShaftEncoderModuleLineSource_Line8,  //!<Selects input line 8 as signal source for the shaft encoder module.
		ShaftEncoderModuleLineSource_CC1,  //!<Selects CC1 as signal source for the shaft encoder module.
		ShaftEncoderModuleLineSource_CC2,  //!<Selects CC2 as signal source for the shaft encoder module.
		ShaftEncoderModuleLineSource_CC3,  //!<Selects CC3 as signal source for the shaft encoder module.
		ShaftEncoderModuleLineSource_CC4   //!<Selects CC4 as signal source for the shaft encoder module.
		
    };

    //! Valid values for ShaftEncoderModuleMode
    enum ShaftEncoderModuleModeEnums
    {
        ShaftEncoderModuleMode_AnyDirection,  //!<Output of trigger signals for forward and reverse ticks provided the reverse counter is not counting.
		ShaftEncoderModuleMode_ForwardOnly   //!<Output of trigger signals for forward ticks only provided the reverse counter is not decrementing.
		
    };

    //! Valid values for ShaftEncoderModuleCounterMode
    enum ShaftEncoderModuleCounterModeEnums
    {
        ShaftEncoderModuleCounterMode_FollowDirection,  //!<Tick counter increments for forward ticks and decrements for reverse ticks.
		ShaftEncoderModuleCounterMode_IgnoreDirection   //!<Tick counter increments for forward ticks and for reverse ticks.
		
    };

    //! Valid values for FrequencyConverterInputSource
    enum FrequencyConverterInputSourceEnums
    {
        FrequencyConverterInputSource_Line1,  //!<Selects line 1 as the input source.
		FrequencyConverterInputSource_Line2,  //!<Selects line 2 as the input source.
		FrequencyConverterInputSource_Line3,  //!<Selects line 3 as the input source.
		FrequencyConverterInputSource_Line4,  //!<Selects line 4 as the input source.
		FrequencyConverterInputSource_Line5,  //!<Selects line 5 as the input source.
		FrequencyConverterInputSource_Line6,  //!<Selects line 6 as the input source. 
		FrequencyConverterInputSource_Line7,  //!<Selects line 7 as the input source.
		FrequencyConverterInputSource_Line8,  //!<Selects line 8 as the input source.
		FrequencyConverterInputSource_CC1,  //!<Selects CC1 as the input source.
		FrequencyConverterInputSource_CC2,  //!<Selects CC2 as the input source.
		FrequencyConverterInputSource_CC3,  //!<Selects CC3 as the input source.
		FrequencyConverterInputSource_CC4,  //!<Selects CC4 as the input source.
		FrequencyConverterInputSource_ShaftEncoderModuleOut   //!<Selects the output of the shaft encoder module as the input source.
		
    };

    //! Valid values for FrequencyConverterSignalAlignment
    enum FrequencyConverterSignalAlignmentEnums
    {
        FrequencyConverterSignalAlignment_RisingEdge,  //!<For the rising edge of each received signal a rising edge of a generated signal is provided.
		FrequencyConverterSignalAlignment_FallingEdge   //!<For the falling edge of each received signal a falling edge of a generated signal is provided.
		
    };

    //! Valid values for TimerSelector
    enum TimerSelectorEnums
    {
        TimerSelector_Timer1,  //!<Selects timer 1 for configuration
		TimerSelector_Timer2,  //!<Selects timer 2 for configuration
		TimerSelector_Timer3,  //!<Selects timer 3 for configuration
		TimerSelector_Timer4   //!<Selects timer 4 for configuration
		
    };

    //! Valid values for TimerTriggerSource
    enum TimerTriggerSourceEnums
    {
        TimerTriggerSource_Off,  //!<Sets the source signal for the selected timer to off
		TimerTriggerSource_ExposureStart   //!<Sets the source signal for the selected timer to exposure active
		
    };

    //! Valid values for TimerTriggerActivation
    enum TimerTriggerActivationEnums
    {
        TimerTriggerActivation_RisingEdge,  //!<Sets the type of signal change that will start the timer to rising edge
		TimerTriggerActivation_FallingEdge,  //!<Sets the type of signal change that will start the timer to falling edge
		TimerTriggerActivation_LevelHigh,  //!<
		TimerTriggerActivation_LevelLow   //!<
		
    };

    //! Valid values for TimerSequenceEntrySelector
    enum TimerSequenceEntrySelectorEnums
    {
        TimerSequenceEntrySelector_Entry1,  //!<
		TimerSequenceEntrySelector_Entry2,  //!<
		TimerSequenceEntrySelector_Entry3,  //!<
		TimerSequenceEntrySelector_Entry4,  //!<
		TimerSequenceEntrySelector_Entry5,  //!<
		TimerSequenceEntrySelector_Entry6,  //!<
		TimerSequenceEntrySelector_Entry7,  //!<
		TimerSequenceEntrySelector_Entry8,  //!<
		TimerSequenceEntrySelector_Entry9,  //!<
		TimerSequenceEntrySelector_Entry10,  //!<
		TimerSequenceEntrySelector_Entry11,  //!<
		TimerSequenceEntrySelector_Entry12,  //!<
		TimerSequenceEntrySelector_Entry13,  //!<
		TimerSequenceEntrySelector_Entry14,  //!<
		TimerSequenceEntrySelector_Entry15,  //!<
		TimerSequenceEntrySelector_Entry16   //!<
		
    };

    //! Valid values for TimerSequenceTimerSelector
    enum TimerSequenceTimerSelectorEnums
    {
        TimerSequenceTimerSelector_Timer1,  //!<
		TimerSequenceTimerSelector_Timer2,  //!<
		TimerSequenceTimerSelector_Timer3,  //!<
		TimerSequenceTimerSelector_Timer4   //!<
		
    };

    //! Valid values for CounterSelector
    enum CounterSelectorEnums
    {
        CounterSelector_Counter1,  //!<Selects counter 1 for configuration
		CounterSelector_Counter2,  //!<Selects counter 2 for configuration
		CounterSelector_Counter3,  //!<Selects counter 3 for configuration
		CounterSelector_Counter4   //!<Selects counter 4 for configuration
		
    };

    //! Valid values for CounterEventSource
    enum CounterEventSourceEnums
    {
        CounterEventSource_Off,  //!<Counter is stopped
		CounterEventSource_AcquisitionTrigger,  //!<Counts the number of Acquisition Trigger
		CounterEventSource_AcquisitionStart,  //!<Counts the number of Acquisition Start
		CounterEventSource_AcquisitionEnd,  //!<Counts the number of Acquisition End
		CounterEventSource_FrameTrigger,  //!<Counts the number of Frame Trigger
		CounterEventSource_FrameStart,  //!<Counts the number of Frame Start
		CounterEventSource_FrameEnd,  //!<Counts the number of Frame End
		CounterEventSource_LineTrigger,  //!<Counts the number of Line Trigger
		CounterEventSource_LineStart,  //!<Counts the number of Line Start
		CounterEventSource_LineEnd,  //!<Counts the number of Line End
		CounterEventSource_ExposureStart,  //!<Counts the number of Exposure Start
		CounterEventSource_ExposureEnd   //!<Counts the number of Exposure End
		
    };

    //! Valid values for CounterResetSource
    enum CounterResetSourceEnums
    {
        CounterResetSource_Off,  //!<Disables counter reset
		CounterResetSource_Software,  //!<Selects software command as the source for counter reset
		CounterResetSource_Line1,  //!<Selects line 1 as the source for counter reset
		CounterResetSource_Line2,  //!<Selects line 2 as the source for counter reset
		CounterResetSource_Line3,  //!<Selects line 3 as the source for counter reset
		CounterResetSource_Line4,  //!<Selects line 4 as the source for counter reset
		CounterResetSource_Line5,  //!<Selects line 5 as the source for counter reset
		CounterResetSource_Line6,  //!<Selects line 6 as the source for counter reset
		CounterResetSource_Line7,  //!<Selects line 7 as the source for counter reset
		CounterResetSource_Line8,  //!<Selects line 8 as the source for counter reset
		CounterResetSource_CC1,  //!<Selects CC1 as the source for counter reset
		CounterResetSource_CC2,  //!<Selects CC2 as the source for counter reset
		CounterResetSource_CC3,  //!<Selects CC3 as the source for counter reset
		CounterResetSource_CC4   //!<Selects CC4 as the source for counter reset
		
    };

    //! Valid values for LUTSelector
    enum LUTSelectorEnums
    {
        LUTSelector_Luminance   //!<Selects the luminance LUT for configuration
		
    };

    //! Valid values for GevInterfaceSelector
    enum GevInterfaceSelectorEnums
    {
        GevInterfaceSelector_NetworkInterface0   //!<Selects network interface 0 for configuration
		
    };

    //! Valid values for GevCCP
    enum GevCCPEnums
    {
        GevCCP_Exclusive,  //!<Sets the control channel privilege feature to exclusive
		GevCCP_Control,  //!<Sets the control channel privilege feature to control
		GevCCP_ExclusiveControl   //!<Sets the control channel privilege feature to exclusive control
		
    };

    //! Valid values for GevStreamChannelSelector
    enum GevStreamChannelSelectorEnums
    {
        GevStreamChannelSelector_StreamChannel0   //!<Selects stream channel 0 for configuration
		
    };

    //! Valid values for UserSetSelector
    enum UserSetSelectorEnums
    {
        UserSetSelector_Default,  //!<Selects the default configuration set
		UserSetSelector_UserSet1,  //!<Selects user set 1
		UserSetSelector_UserSet2,  //!<Selects user set 2
		UserSetSelector_UserSet3   //!<Selects user set 3
		
    };

    //! Valid values for UserSetDefaultSelector
    enum UserSetDefaultSelectorEnums
    {
        UserSetDefaultSelector_Default,  //!<Selects the default user set as the default startup set
		UserSetDefaultSelector_UserSet1,  //!<Selects user set 1 as the default startup set
		UserSetDefaultSelector_UserSet2,  //!<Selects user set 2 as the default startup set
		UserSetDefaultSelector_UserSet3   //!<Selects user set 3 as the default startup set
		
    };

    //! Valid values for DefaultSetSelector
    enum DefaultSetSelectorEnums
    {
        DefaultSetSelector_Standard,  //!<Standard factory set
		DefaultSetSelector_HighGain,  //!<High gain factory set
		DefaultSetSelector_AutoFunctions,  //!<Factory set using auto functions
		DefaultSetSelector_Color   //!<Factory set enabling color adjustments
		
    };

    //! Valid values for AutoFunctionProfile
    enum AutoFunctionProfileEnums
    {
        AutoFunctionProfile_GainMinimum,  //!<Keep gain at minimum
		AutoFunctionProfile_ExposureMinimum   //!<Exposure Time at minimum
		
    };

    //! Valid values for AutoFunctionAOISelector
    enum AutoFunctionAOISelectorEnums
    {
        AutoFunctionAOISelector_AOI1,  //!<Selects Auto Function AOI 1
		AutoFunctionAOISelector_AOI2,  //!<Selects Auto Function AOI 2
		AutoFunctionAOISelector_AOI3,  //!<
		AutoFunctionAOISelector_AOI4,  //!<
		AutoFunctionAOISelector_AOI5,  //!<
		AutoFunctionAOISelector_AOI6,  //!<
		AutoFunctionAOISelector_AOI7,  //!<
		AutoFunctionAOISelector_AOI8   //!<
		
    };

    //! Valid values for ColorOverexposureCompensationAOISelector
    enum ColorOverexposureCompensationAOISelectorEnums
    {
        ColorOverexposureCompensationAOISelector_AOI1   //!<Selects Color Overexposure Compensation AOI 1
		
    };

    //! Valid values for ShadingSelector
    enum ShadingSelectorEnums
    {
        ShadingSelector_OffsetShading,  //!<Selects offset shading correction.
		ShadingSelector_GainShading   //!<Selects gain shading correction.
		
    };

    //! Valid values for ShadingStatus
    enum ShadingStatusEnums
    {
        ShadingStatus_NoError,  //!<Indicates that the latest operation related to shading correction was successful.
		ShadingStatus_StartupSetError,  //!<Indicates that a problem related to the startup shading set occurred.
		ShadingStatus_ActivateError,  //!<Indicates that the selected shading set could not be loaded.
		ShadingStatus_CreateError   //!<Indicates that a problem related to creating a shading set occurred.
		
    };

    //! Valid values for ShadingSetDefaultSelector
    enum ShadingSetDefaultSelectorEnums
    {
        ShadingSetDefaultSelector_DefaultShadingSet,  //!<Selects the default shading set as the bootup shading set.
		ShadingSetDefaultSelector_UserShadingSet1,  //!<Selects the User Shading Set 1 as the bootup shading set.
		ShadingSetDefaultSelector_UserShadingSet2   //!<Selects the User Shading Set 2 as the bootup shading set.
		
    };

    //! Valid values for ShadingSetSelector
    enum ShadingSetSelectorEnums
    {
        ShadingSetSelector_DefaultShadingSet,  //!<Selects the default shading set for activation by the activate command.
		ShadingSetSelector_UserShadingSet1,  //!<Selects the User shading Set 1 for activation by the activate command.
		ShadingSetSelector_UserShadingSet2   //!<Selects the User shading Set 2 for activation by the activate command.
		
    };

    //! Valid values for UserDefinedValueSelector
    enum UserDefinedValueSelectorEnums
    {
        UserDefinedValueSelector_Value1,  //!<
		UserDefinedValueSelector_Value2,  //!<
		UserDefinedValueSelector_Value3,  //!<
		UserDefinedValueSelector_Value4,  //!<
		UserDefinedValueSelector_Value5   //!<
		
    };

    //! Valid values for DeviceScanType
    enum DeviceScanTypeEnums
    {
        DeviceScanType_Areascan,  //!<Indicates that the device has an area scan type of sensor
		DeviceScanType_Linescan   //!<Indicates that the device has an Line scan type of sensor
		
    };

    //! Valid values for LastError
    enum LastErrorEnums
    {
        LastError_NoError,  //!<Indicates that no error was detected
		LastError_Overtrigger,  //!<Indicates that the camera was overtriggered
		LastError_Userset,  //!<Indicates an error was detected while loading a userset
		LastError_InvalidParameter   //!<Indicates that a parameter was set to an invalid value
		
    };

    //! Valid values for TemperatureSelector
    enum TemperatureSelectorEnums
    {
        TemperatureSelector_Sensorboard,  //!<Temperature on sensor board
		TemperatureSelector_Coreboard,  //!<Temperature on core board
		TemperatureSelector_Framegrabberboard,  //!<Temperature on framegrabber board
		TemperatureSelector_Case   //!<Temperature on the camera case
		
    };

    //! Valid values for TemperatureState
    enum TemperatureStateEnums
    {
        TemperatureState_Ok,  //!<Ok
		TemperatureState_Critical,  //!<Critical
		TemperatureState_Error   //!<Error
		
    };

    //! Valid values for ParameterSelector
    enum ParameterSelectorEnums
    {
        ParameterSelector_Gain,  //!<Selects the gain limits for configuration
		ParameterSelector_Brightness,  //!<Selects the brightness limits for configuration
		ParameterSelector_BlackLevel,  //!<Selects the blacklevel limits for configuration
		ParameterSelector_ExposureTime,  //!<Selects the exposure time limits for configuration
		ParameterSelector_Framerate   //!<Selects the framerate limits for configuration
		
    };

    //! Valid values for ExpertFeatureAccessSelector
    enum ExpertFeatureAccessSelectorEnums
    {
        ExpertFeatureAccessSelector_ExpertFeature1_Legacy,  //!<Selects the Expert Feature 1 for configuration
		ExpertFeatureAccessSelector_ExpertFeature1,  //!<Selects the Expert Feature 1 for configuration
		ExpertFeatureAccessSelector_ExpertFeature2,  //!<Selects the Expert Feature 2 for configuration
		ExpertFeatureAccessSelector_ExpertFeature3,  //!<Selects the Expert Feature 3 for configuration
		ExpertFeatureAccessSelector_ExpertFeature4,  //!<Selects the Expert Feature 4 for configuration
		ExpertFeatureAccessSelector_ExpertFeature5   //!<Selects the Expert Feature 5 for configuration
		
    };

    //! Valid values for PixelStepCorrectionSelector
    enum PixelStepCorrectionSelectorEnums
    {
        PixelStepCorrectionSelector_Tap1,  //!<
		PixelStepCorrectionSelector_Tap2,  //!<
		PixelStepCorrectionSelector_Tap3,  //!<
		PixelStepCorrectionSelector_Tap4   //!<
		
    };

    //! Valid values for ChunkSelector
    enum ChunkSelectorEnums
    {
        ChunkSelector_Image,  //!<Selects the image chunk for enabling.
		ChunkSelector_OffsetX,  //!<Selects the X offset chunk for enabling.
		ChunkSelector_OffsetY,  //!<Selects the Y offset chunk for enabling.
		ChunkSelector_Width,  //!<Selects the width chunk for enabling.
		ChunkSelector_Height,  //!<Selects the height chunk for enabling.
		ChunkSelector_PixelFormat,  //!<Selects the pixel format chunk for enabling.
		ChunkSelector_DynamicRangeMax,  //!<Selects the dynamic range max chunk for enabling.
		ChunkSelector_DynamicRangeMin,  //!<Selects the dynamic range min chunk for enabling.
		ChunkSelector_Timestamp,  //!<Selects the timestamp chunk for enabling.
		ChunkSelector_LineStatusAll,  //!<Selects the line status all chunk for enabling.
		ChunkSelector_Framecounter,  //!<Selects the frame counter chunk for enabling.
		ChunkSelector_Triggerinputcounter,  //!<Selects the trigger input counter chunk for enabling.
		ChunkSelector_LineTriggerIgnoredCounter,  //!<Selects the line trigger ingnored counter chunk for enabling.
		ChunkSelector_FrameTriggerIgnoredCounter,  //!<Selects the frame trigger ingnored counter chunk for enabling.
		ChunkSelector_LineTriggerEndToEndCounter,  //!<Selects the line trigger end to end counter chunk for enabling.
		ChunkSelector_FrameTriggerCounter,  //!<Selects the frame trigger counter chunk for enabling.
		ChunkSelector_FramesPerTriggerCounter,  //!<Selects the frame per trigger counter chunk for enabling.
		ChunkSelector_InputStatusAtLineTrigger,  //!<Selects the input status at line trigger chunk for enabling.
		ChunkSelector_ShaftEncoderCounter,  //!<Selects the shaft encoder counter chunk for enabling.
		ChunkSelector_PayloadCRC16,  //!<Selects the CRC checksum chunk for configuration
		ChunkSelector_Stride,  //!<Selects the stride chunk for enabling.
		ChunkSelector_SequenceSetIndex,  //!<Selects the sequence set index chunk for enabling
		ChunkSelector_ExposureTime   //!<
		
    };

    //! Valid values for ChunkPixelFormat
    enum ChunkPixelFormatEnums
    {
        ChunkPixelFormat_Mono8,  //!<Indicates that the pixel data in the acquired image is in the Mono 8 format
		ChunkPixelFormat_Mono8Signed,  //!<Indicates that the pixel data in the acquired image is in the Mono 8 signed format
		ChunkPixelFormat_Mono10,  //!<Indicates that the pixel data in the acquired image is in the Mono 10 format
		ChunkPixelFormat_Mono10Packed,  //!<Indicates that the pixel data in the acquired image is in the Mono 10 Packed format
		ChunkPixelFormat_Mono12,  //!<Indicates that the pixel data in the acquired image is in the Mono 12 format
		ChunkPixelFormat_Mono12Packed,  //!<Indicates that the pixel data in the acquired image is in the Mono 12 Packed format
		ChunkPixelFormat_Mono16,  //!<Indicates that the pixel data in the acquired image is in the Mono 16 format
		ChunkPixelFormat_BayerGR8,  //!<Indicates that the pixel data in the acquired image is in the Bayer GR 8 format
		ChunkPixelFormat_BayerRG8,  //!<Indicates that the pixel data in the acquired image is in the Bayer RG 8 format
		ChunkPixelFormat_BayerGB8,  //!<Indicates that the pixel data in the acquired image is in the Bayer GB 8 format
		ChunkPixelFormat_BayerBG8,  //!<Indicates that the pixel data in the acquired image is in the Bayer BG 8 format
		ChunkPixelFormat_BayerGR10,  //!<Indicates that the pixel data in the acquired image is in the Bayer GR 10 format
		ChunkPixelFormat_BayerRG10,  //!<Indicates that the pixel data in the acquired image is in the Bayer RG 10 format
		ChunkPixelFormat_BayerGB10,  //!<Indicates that the pixel data in the acquired image is in the Bayer GB 10 format
		ChunkPixelFormat_BayerBG10,  //!<Indicates that the pixel data in the acquired image is in the Bayer BG 10 format
		ChunkPixelFormat_BayerGR12,  //!<Indicates that the pixel data in the acquired image is in the Bayer GR 12 format
		ChunkPixelFormat_BayerRG12,  //!<Indicates that the pixel data in the acquired image is in the Bayer RG 12 format
		ChunkPixelFormat_BayerGB12,  //!<Indicates that the pixel data in the acquired image is in the Bayer GB 12 format
		ChunkPixelFormat_BayerBG12,  //!<Indicates that the pixel data in the acquired image is in the Bayer BG 12 format
		ChunkPixelFormat_BayerGR16,  //!<Indicates that the pixel data in the acquired image is in the Bayer GR 16 format
		ChunkPixelFormat_BayerRG16,  //!<Indicates that the pixel data in the acquired image is in the Bayer RG 16 format
		ChunkPixelFormat_BayerGB16,  //!<Indicates that the pixel data in the acquired image is in the Bayer GB 16 format
		ChunkPixelFormat_BayerBG16,  //!<Indicates that the pixel data in the acquired image is in the Bayer BG 16 format
		ChunkPixelFormat_RGB8Packed,  //!<Indicates that the pixel data in the acquired image is in the RGB 8 Packed format
		ChunkPixelFormat_BGR8Packed,  //!<Indicates that the pixel data in the acquired image is in the BGR 8 Packed format
		ChunkPixelFormat_RGBA8Packed,  //!<Indicates that the pixel data in the acquired image is in the RGBA 8 Packed format
		ChunkPixelFormat_BGRA8Packed,  //!<Indicates that the pixel data in the acquired image is in the BGRA 8 Packed format
		ChunkPixelFormat_RGB10Packed,  //!<Indicates that the pixel data in the acquired image is in the RGB 10 Packed format
		ChunkPixelFormat_BGR10Packed,  //!<Indicates that the pixel data in the acquired image is in the BGR 10 Packed format
		ChunkPixelFormat_RGB12Packed,  //!<Indicates that the pixel data in the acquired image is in the RGB 12 Packed format
		ChunkPixelFormat_BGR12Packed,  //!<Indicates that the pixel data in the acquired image is in the BGR 12 Packed format
		ChunkPixelFormat_RGB10V1Packed,  //!<Indicates that the pixel data in the acquired image is in the RGB 10V1 Packed format
		ChunkPixelFormat_RGB10V2Packed,  //!<Indicates that the pixel data in the acquired image is in the RGB 10V2 Packed format
		ChunkPixelFormat_YUV411Packed,  //!<Indicates that the pixel data in the acquired image is in the YUV 411 Packed format
		ChunkPixelFormat_YUV422Packed,  //!<Indicates that the pixel data in the acquired image is in the YUV 422 Packed format
		ChunkPixelFormat_YUV444Packed,  //!<Indicates that the pixel data in the acquired image is in the YUV 444 Packed format
		ChunkPixelFormat_RGB8Planar,  //!<Indicates that the pixel data in the acquired image is in the RGB 8 Planar format
		ChunkPixelFormat_RGB10Planar,  //!<Indicates that the pixel data in the acquired image is in the RGB 10 Planar format
		ChunkPixelFormat_RGB12Planar,  //!<Indicates that the pixel data in the acquired image is in the RGB 12 Planar format
		ChunkPixelFormat_RGB16Planar,  //!<Indicates that the pixel data in the acquired image is in the RGB 16 Planar format
		ChunkPixelFormat_YUV422_YUYV_Packed,  //!<Indicates that the pixel data in the acquired image is in the YUV 422 (YUYV) Packed format
		ChunkPixelFormat_BayerGB12Packed,  //!<Indicates that the pixel data in the acquired image is in the Bayer GB 12 Packed format
		ChunkPixelFormat_BayerGR12Packed,  //!<Indicates that the pixel data in the acquired image is in the Bayer GR 12 Packed format
		ChunkPixelFormat_BayerRG12Packed,  //!<Indicates that the pixel data in the acquired image is in the Bayer RG 12 Packed format
		ChunkPixelFormat_BayerBG12Packed,  //!<Indicates that the pixel data in the acquired image is in the Bayer BG 12 Packed format
		ChunkPixelFormat_RGB12V1Packed   //!<Indicates that the pixel data in the acquired image is in RGB 12 Packed 
		
    };

    //! Valid values for EventSelector
    enum EventSelectorEnums
    {
        EventSelector_ExposureEnd,  //!<Selects the end of exposure event for enabling.
		EventSelector_LineStartOvertrigger,  //!<Selects the line start overtrigger event for enabling.
		EventSelector_FrameStartOvertrigger,  //!<Selects the frame start overtrigger event for enabling.
		EventSelector_AcquisitionStartOvertrigger,  //!<Selects the acquisition start overtrigger event for enabling.
		EventSelector_FrameTimeout,  //!<Selects the frame timeout event for enabling.
		EventSelector_FrameStart,  //!<Selects the frame start trigger event for enabling.
		EventSelector_AcquisitionStart,  //!<Selects the acquisition start trigger event for enabling.
		EventSelector_CriticalTemperature,  //!<Selects the critical temperature event for enabling.
		EventSelector_OverTemperature,  //!<Selects the over temperature event for enabling.
		EventSelector_EventOverrun   //!<Selects the event overrun event for enabling.
		
    };

    //! Valid values for EventNotification
    enum EventNotificationEnums
    {
        EventNotification_Off,  //!<Sets event notification to off
		EventNotification_GenICamEvent,  //!<Sets the event notification type to GenICam event
		EventNotification_On   //!<Sets the enables the event notification.
		
    };

    //! Valid values for FileSelector
    enum FileSelectorEnums
    {
        FileSelector_UserSet1,  //!<Selects the file 'User Set 1'
		FileSelector_UserSet2,  //!<Selects the file 'User Set 2'
		FileSelector_UserSet3,  //!<Selects the file 'User Set 3'
		FileSelector_UserGainShading1,  //!<Selects the file 'User Gain Shading 1'
		FileSelector_UserGainShading2   //!<Selects the file 'User Gain Shading 2'
		
    };

    //! Valid values for FileOperationSelector
    enum FileOperationSelectorEnums
    {
        FileOperationSelector_Open,  //!<Opens the file selected by FileSelector
		FileOperationSelector_Close,  //!<Closes the file selected by FileSelector
		FileOperationSelector_Read,  //!<Reads data from the selected file
		FileOperationSelector_Write   //!<Writes data to the selected file
		
    };

    //! Valid values for FileOpenMode
    enum FileOpenModeEnums
    {
        FileOpenMode_Read,  //!<Selects read-only open mode
		FileOpenMode_Write   //!<Selects write-only open mode
		
    };

    //! Valid values for FileOperationStatus
    enum FileOperationStatusEnums
    {
        FileOperationStatus_Success,  //!<Successful file operation
		FileOperationStatus_Failure   //!<Failing file operation
		
    };

    //! Valid values for ServiceBoardIdSelector
    enum ServiceBoardIdSelectorEnums
    {
        ServiceBoardIdSelector_Coreboard,  //!<
		ServiceBoardIdSelector_Sensorboard,  //!<
		ServiceBoardIdSelector_Framegrabberboard,  //!<
		ServiceBoardIdSelector_Global   //!<
		
    };


    //**************************************************************************************************
    // Parameter class
    //**************************************************************************************************
    

    //! Basler generic GigEVision camera interface
    class CGigECamera_Params
    {
    //----------------------------------------------------------------------------------------------------------------
    // Implementation
    //----------------------------------------------------------------------------------------------------------------
    protected:
		// If you want to show the following methods in the help file
		// add the string HIDE_CLASS_METHODS to the ENABLED_SECTIONS tag in the doxygen file
        //! \cond HIDE_CLASS_METHODS
        
            //! Constructor
            CGigECamera_Params(void);

            //! Destructor
            ~CGigECamera_Params(void);

            //! Initializes the references
            void _Initialize(GenApi::INodeMap*);

            //! Return the vendor of the camera
            const char* _GetVendorName(void);

            //! Returns the camera model name
            const char* _GetModelName(void);
        
        //! \endcond

    //----------------------------------------------------------------------------------------------------------------
    // References to features
    //----------------------------------------------------------------------------------------------------------------
    public:
        
	//! \name SequenceControl - This category includes items that control the sequencer feature
    //@{
	/*!	
		\brief Enables the sequencer

	Enables the existing sequence sets for image acquisition.
	
		\b Visibility = Expert
	
    */
    GenApi::IBoolean &SequenceEnable;
    
    //@}
    

	//! \name SequenceControl - This category includes items that control the sequencer feature
    //@{
	/*!	
		\brief Allows asynchronous restart of the sequence of sequence sets 

	Allows to restart the sequence of sequence sets to image acquisition, starting with the sequence set of lowest index number. The restart is asynchronous to the cameras's frame trigger. Only available in Auto and Controlled sequence advance mode.
	
		\b Visibility = Expert
	
    */
    GenApi::ICommand &SequenceAsyncRestart;
    
    //@}
    

	//! \name SequenceControl - This category includes items that control the sequencer feature
    //@{
	/*!	
		\brief Allows asynchronous advance from one sequence set to the next

	Allows to advance from the current sequence set to the next one. The advance is asynchronous to the cameras's frame trigger. Only available in Controlled sequence advance mode.
	
		\b Visibility = Guru
	
    */
    GenApi::ICommand &SequenceAsyncAdvance;
    
    //@}
    

	//! \name SequenceControl - This category includes items that control the sequencer feature
    //@{
	/*!	
		\brief Current sequence set

	Indicates the current sequence set.
	
		\b Visibility = Expert
	
    */
    GenApi::IInteger &SequenceCurrentSet;
    
    //@}
    

	//! \name SequenceControl - This category includes items that control the sequencer feature
    //@{
	/*!	
		\brief Total number of sequence sets

	Sets the total number of sequence sets in the sequence.
	
		\b Visibility = Expert
	
    */
    GenApi::IInteger &SequenceSetTotalNumber;
    
    //@}
    

	//! \name SequenceControl - This category includes items that control the sequencer feature
    //@{
	/*!	
		\brief Selects the index number of a sequence set

	Selects the index number of a sequence set.
	
		\b Visibility = Expert
	
    */
    GenApi::IInteger &SequenceSetIndex;
    
    //@}
    

	//! \name SequenceControl - This category includes items that control the sequencer feature
    //@{
	/*!	
		\brief Loads a sequence set

	Loads an existing sequence set to make it the current sequence set.
	
		\b Visibility = Expert
	
    */
    GenApi::ICommand &SequenceSetLoad;
    
    //@}
    

	//! \name SequenceControl - This category includes items that control the sequencer feature
    //@{
	/*!	
		\brief Stores the current sequence set

	Stores the current sequence set as one of the sequence sets of the sequence. Note: Storing the current sequence set will overwrite any already existing sequence set bearing the same index number. Note: The sequence set is stored in the volatile memory and will therefore be lost if the camera is reset or if power is switched off.
	
		\b Visibility = Expert
	
    */
    GenApi::ICommand &SequenceSetStore;
    
    //@}
    

	//! \name SequenceControl - This category includes items that control the sequencer feature
    //@{
	/*!	
		\brief Sets the number of sequence set executions

	Sets the number of consecutive executions per sequence cycle for the selected sequence set. Only available in Auto sequence advance mode.
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &SequenceSetExecutions;
    
    //@}
    

	//! \name SequenceControlConfiguration - This category includes items that control the sequence set advance
    //@{
	/*!	
		\brief Selects the sequence set advance mode

	Selects the sequence set advance mode. Possible values: Auto - automatic sequence set advance as images are acquired. Controlled - sequence set advance controlled by settable source. Free selection - the sequence sets are selected according to the states of the input lines.
	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<SequenceAdvanceModeEnums > &SequenceAdvanceMode;
    
    //@}
    

	//! \name SequenceControlConfiguration - This category includes items that control the sequence set advance
    //@{
	/*!	
		\brief Selects between sequence restart or sequence set advance

	Selects between controls for sequence restart or sequence set advance.
	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<SequenceControlSelectorEnums > &SequenceControlSelector;
    
    //@}
    

	//! \name SequenceControlConfiguration - This category includes items that control the sequence set advance
    //@{
	/*!	
		\brief Selects the source for sequence control

	Selects the source for sequence control. Possible values: Disabled - advance via asynchronous advance. Always Active - automatic sequence set advance. The sequence repeat starts with sequence set index number 1. Line N - the source for sequence restart or sequence set advance is line N. CCN - the source for sequence restart or sequence set advance is CCN.
	
		\b Visibility = Guru
	
		\b Selected by : SequenceControlSelector
	
    */
    GenApi::IEnumerationT<SequenceControlSourceEnums > &SequenceControlSource;
    
    //@}
    

	//! \name SequenceControlConfiguration - This category includes items that control the sequence set advance
    //@{
	/*!	
		\brief Selects a bit of the sequence set address

	Selects a bit of the sequence set address.
	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<SequenceAddressBitSelectorEnums > &SequenceAddressBitSelector;
    
    //@}
    

	//! \name SequenceControlConfiguration - This category includes items that control the sequence set advance
    //@{
	/*!	
		\brief Selects the source for the selected bit of the sequence set address

	Selects the source for setting the selected bit of the sequence set address.
	
		\b Visibility = Guru
	
		\b Selected by : SequenceAddressBitSelector
	
    */
    GenApi::IEnumerationT<SequenceAddressBitSourceEnums > &SequenceAddressBitSource;
    
    //@}
    

	//! \name AnalogControls - This category includes items that control the analog characteristics of the video signal
    //@{
	/*!	
		\brief Gain Auto is the 'automatic' counterpart of the manual gain feature.

	The gain auto function automatically adjusts the Auto Gain Raw parameter value within set limits, until a target average gray value for the pixel data from Auto Function AOI1 is reached.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<GainAutoEnums > &GainAuto;
    
    //@}
    

	//! \name AnalogControls - This category includes items that control the analog characteristics of the video signal
    //@{
	/*!	
		\brief This is an integer value that sets the selected gain control in device specific units

	Sets the 'raw' value of the selected gain control. The 'raw' value is an integer value that sets the selected gain control in units specific to the camera.
	
		\b Visibility = Beginner
        
	
		\b Selected by : GainSelector
	
    */
    GenApi::IInteger &GainRaw;
    
    //@}
    

	//! \name AnalogControls - This category includes items that control the analog characteristics of the video signal
    //@{
	/*!	
		\brief This is a float value that sets the selected gain control in dB

	Sets the 'absolute' value of the selected gain control. The 'absolute' value is a float value that sets the selected gain control in dB.
	
		\b Visibility = Beginner
        
	
		\b Selected by : GainSelector
	
    */
    GenApi::IFloat &GainAbs;
    
    //@}
    

	//! \name AnalogControls - This category includes items that control the analog characteristics of the video signal
    //@{
	/*!	
		\brief Selects the gain control to configure. Once a gain control has been selected, all changes to the gain settings will be applied to the selected control.

	This enumeration selects the gain control to configure. Once a gain control has been selected, all changes to the gain settings will be applied to the selected control.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<GainSelectorEnums > &GainSelector;
    
    //@}
    

	//! \name AnalogControls - This category includes items that control the analog characteristics of the video signal
    //@{
	/*!	
		\brief Sets the value of the selected black level control as an integer

	This value sets the selected black level control as an integer.
	
		\b Visibility = Beginner
        
	
		\b Selected by : BlackLevelSelector
	
    */
    GenApi::IInteger &BlackLevelRaw;
    
    //@}
    

	//! \name AnalogControls - This category includes items that control the analog characteristics of the video signal
    //@{
	/*!	
		\brief Sets the value of the selected black level control as a float

	This value sets the selected black level control as a float value.
	
		\b Visibility = Beginner
        
	
		\b Selected by : BlackLevelSelector
	
    */
    GenApi::IFloat &BlackLevelAbs;
    
    //@}
    

	//! \name AnalogControls - This category includes items that control the analog characteristics of the video signal
    //@{
	/*!	
		\brief Selcts a black level control to configure. Once a black level control has been selected, all changes to the black level settings will be applied to the selected control.

	This enumeration selects the black level control to configure. Once a black level control has been selected, all changes to the black level settings will be applied to the selected control.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<BlackLevelSelectorEnums > &BlackLevelSelector;
    
    //@}
    

	//! \name AnalogControls - This category includes items that control the analog characteristics of the video signal
    //@{
	/*!	
		\brief Enables the gamma correction

	This boolean value enables the gamma correction.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IBoolean &GammaEnable;
    
    //@}
    

	//! \name AnalogControls - This category includes items that control the analog characteristics of the video signal
    //@{
	/*!	
		\brief 

	This enumeration selects the type of gamma to apply.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<GammaSelectorEnums > &GammaSelector;
    
    //@}
    

	//! \name AnalogControls - This category includes items that control the analog characteristics of the video signal
    //@{
	/*!	
		\brief This feature is used to perform gamma correction of pixel intensity.

	This feature is used to perform gamma correction of pixel  intensity. This is typically used to compensate for non-linearity of the display system (such as CRT).
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IFloat &Gamma;
    
    //@}
    

	//! \name AnalogControls - This category includes items that control the analog characteristics of the video signal
    //@{
	/*!	
		\brief Sets the value of the selected digital shift control

	This value sets the selected digital shift control
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &DigitalShift;
    
    //@}
    

	//! \name AnalogControls - This category includes items that control the analog characteristics of the video signal
    //@{
	/*!	
		\brief Sets the substrate voltage

	This value sets the substrate voltage
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &SubstrateVoltage;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief Sets the format of the pixel data transmitted for acquired images

	This enumeration sets the format of the pixel data transmitted for acquired images. 
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<PixelFormatEnums > &PixelFormat;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief Sets the color coding of the pixels in the acquired images

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<PixelCodingEnums > &PixelCoding;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief Indicates the depth of the pixel values in the image in bits per pixel

	This is a read only feature. This enumeration provides a list of values that indicate the depth of the pixel values in the acquired images in bits per pixel. This value will always be coherent with the pixel format setting.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<PixelSizeEnums > &PixelSize;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief Indicates the alignment of the camera's Bayer filter to the pixels in the acquired images

	 This is a read only feature. This enumeration provides a list of values that indicate the alignment of the camera's Bayer filter to the pixels in the acquired images.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<PixelColorFilterEnums > &PixelColorFilter;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief Enables color improved RGB raw output

	Enables color improvement of RGB data and provides for their output as RGB raw data. Only available for cameras with an RGB Bayer filter.
Note: Make sure to also select a suitable raw pixel data output format.
	
		\b Visibility = Expert
	
    */
    GenApi::IBoolean &ProcessedRawEnable;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief Specifies the direction of imaging and the separation (consecutive numbers) of related line captures.

	Specifies the direction of imaging and the separation (consecutive numbers) of related line captures. Related line captures will be combined.

Positive integer: The object will pass the top sensor line first.

Negative integer: The object will pass the bottom sensor line first.

In color cameras, the top sensor line is the green line, and the bottom sensor line is the blue line.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &SpatialCorrection;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Invisible
	
    */
    GenApi::IInteger &SpatialCorrectionAmount;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Invisible
	
    */
    GenApi::IEnumerationT<SpatialCorrectionStartingLineEnums > &SpatialCorrectionStartingLine;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief This feature selects the amount of data bits the sensor produces for one sample.

	This feature selects the amount of data bits the sensor produces for one sample.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<SensorBitDepthEnums > &SensorBitDepth;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief Enables the horizontal flipping of the image.

	This feature is used to flip horizontally the image sent by the device. The AOI is applied after the flipping.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IBoolean &ReverseX;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief Enables the vertical flipping of the image.

	This feature is used to flip vertically the image sent by the device. The AOI is applied after the flipping.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IBoolean &ReverseY;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief Indicates the minimum possible pixel value that could be transferred from the camera

	This a read only feature. It indicates the minimum possible pixel value that could be transferred from the camera.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &PixelDynamicRangeMin;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief Indicates the maximum possible pixel value that could be transferred from the camera

	This a read only feature. It indicates the maximum possible pixel value that could be transferred from the camera.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &PixelDynamicRangeMax;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief Selects the mode to output the fields.

	Selects the mode to output the fields.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<FieldOutputModeEnums > &FieldOutputMode;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief Selects the deinterlacing algorithm to use in DeinterlacedNewFields Field Output Mode

	Selects the deinterlacing algorithm to use in DeinterlacedNewFields Field Output Mode
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<DeinterlacerEnums > &Deinterlacer;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief Selecting a test image from the list will enable the test image

	This enumeration provides a list of the available test images. Selecting a test image from the list will enable the test image.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<TestImageSelectorEnums > &TestImageSelector;
    
    //@}
    

	//! \name ImageFormat - This category includes items that control the size of the acquired image and the format of the transferred pixel data
    //@{
	/*!	
		\brief This feature represents the number of digitized samples outputted simultaneously by the camera A/D conversion stage.

	This feature represents the number of digitized samples output simultaneously by the camera A/D conversion stage.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<SensorDigitizationTapsEnums > &SensorDigitizationTaps;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Indicates the width of the camera's sensor in pixels

	This is a read only element. It is an integer that indicates the actual width of the camera's sensor in pixels.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &SensorWidth;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Indicates the height of the camera's sensor in pixels.

	This is a read only element. It is an integer that indicates the actual height of the camera's sensor in pixels.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &SensorHeight;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Indicates the maximum allowed width of the image in pixels

	This is a read only element. It is an integer that indicates maximum allowed width of the image in pixels taking into account any function that may limit the allowed width.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &WidthMax;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Indicates the maximum allowed height of the image in pixels

	This is a read only element. It is an integer that indicates maximum allowed height of the image in pixels taking into account any function that may limit the allowed height.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &HeightMax;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Selects the matrix color transformation between color spaces

	Selects the matrix color transformation between color spaces.
Generally, the related color spaces are used for internal processing: The color signals provided by the sensor are transformed to the RGB color space to allow further transformations (to account for the type of light source, for color adjustment, for white balance, etc.).
The color transformation selected here does not refer to the color space selected for the transmission of image data out of the camera.

	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<ColorTransformationSelectorEnums > &ColorTransformationSelector;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Selects the type of light source to be considered for matrix color transformation

	Selects the color transformation mode to select the type of light source to be considered for matrix color transformation.
	
		\b Visibility = Expert
	
		\b Selected by : ColorTransformationSelector
	
    */
    GenApi::IEnumerationT<LightSourceSelectorEnums > &LightSourceSelector;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Defines the extent to which the selected light source will be considered (float)

	Sets a floating point value to define the extent to which the selected light source will be considered in color matrix transformation.
If the value is set to 1 the selected light source will be fully considered. If the value is set to 0 the selected light source will not be considered.
	
		\b Visibility = Guru
	
    */
    GenApi::IFloat &ColorTransformationMatrixFactor;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Defines the extent to which the selected light source will be considered (integer)

	Sets an integer value to define the extent to which the selected light source will be considered in color matrix transformation. If the value is set to 65536 the selected light source will be fully considered. If the value is set to 0 the selected light source will not be considered.
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &ColorTransformationMatrixFactorRaw;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Selects the element to be entered in the color transformation matrix.

	Selects the element to be entered in the 3 x 3 color transformation matrix for custom matrix color transformation.
Note: Depending on the camera model, some elements in the color transformation matrix may be preset and can not be changed.

	
		\b Visibility = Guru
	
		\b Selected by : ColorTransformationSelector
	
    */
    GenApi::IEnumerationT<ColorTransformationValueSelectorEnums > &ColorTransformationValueSelector;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Sets a floating point value for the selected element in the color transformation matrix

	Sets a floating point value for the selected element in the color transformation matrix.
	
		\b Visibility = Guru
	
		\b Selected by : ColorTransformationSelector, ColorTransformationValueSelector
	
    */
    GenApi::IFloat &ColorTransformationValue;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Sets an integer value for the selected element in the color transformation matrix

	Sets an integer value for the selected element in the color transformation matrix.
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &ColorTransformationValueRaw;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Enables color adjustment

	Enables color adjustment.
	
		\b Visibility = Expert
	
    */
    GenApi::IBoolean &ColorAdjustmentEnable;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Allows returning to previous settings

	Allows returning to the color adjustment settings extant before the latest changes of the settings.
This allows you undoing the latest unwanted changes of the color adjustment settings and returning to the preceding settings.
	
		\b Visibility = Expert
	
    */
    GenApi::ICommand &ColorAdjustmentReset;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Selects the color for color adjustment

	Selects the color for color adjustment.
Those colors in the image will be adjusted where the selected color predominates.
	
		\b Visibility = Expert
	
    */
    GenApi::IEnumerationT<ColorAdjustmentSelectorEnums > &ColorAdjustmentSelector;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Adjustment of hue of the selected color (float)

	Sets a floating point value for the adjustment of hue of the selected color.
	
		\b Visibility = Expert
	
		\b Selected by : ColorAdjustmentSelector
	
    */
    GenApi::IFloat &ColorAdjustmentHue;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Adjustment of hue of the selected color (integer)

	Sets an integer value for the adjustment of hue of the selected color.
	
		\b Visibility = Expert
	
    */
    GenApi::IInteger &ColorAdjustmentHueRaw;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Adjustment of saturation of the selected color (float)

	Sets a floating point value for the adjustment of saturation of the selected color.
	
		\b Visibility = Expert
	
		\b Selected by : ColorAdjustmentSelector
	
    */
    GenApi::IFloat &ColorAdjustmentSaturation;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Adjustment of saturation of the selected color (integer)

	Sets an integer value for the adjustment of saturation of the selected color.
	
		\b Visibility = Expert
	
    */
    GenApi::IInteger &ColorAdjustmentSaturationRaw;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Allows returning to previous settings

	Allows returning to the color adjustment settings extant before the latest changes of the settings.
This allows you undoing the latest unwanted changes of the color adjustment settings and returning to the preceding settings.
	
		\b Visibility = Expert
	
    */
    GenApi::ICommand &BalanceWhiteReset;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Balance White Auto is the 'automatic' counterpart of the manual white balance feature.

	The automatic white balance is a two-step process: First, the Balance Ratio Abs parameter values for red, green, and blue are each set to 1.5. Then, assuming a 'grey world' model, the Balance Ratio Abs parameter values are adjusted such that the average gray values for the 'red' and 'blue' pixels match the average gray value for the 'green' pixels.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<BalanceWhiteAutoEnums > &BalanceWhiteAuto;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Selects a balance ratio to configure. Once a balance ratio control has been selected, all changes to the balance ratio settings will be applied to the selected control.

	This enumeration selects a balance ratio control to configuration. Once a balance ratio control has been selected, all changes to the balance ratio settings will be applied to the selected control.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<BalanceRatioSelectorEnums > &BalanceRatioSelector;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Sets the value of the selected balance ratio control as a float

	This value sets the selected balance ratio control as a float value.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IFloat &BalanceRatioAbs;
    
    //@}
    

	//! \name ColorImprovementsControl - This category includes items that control color improvement
    //@{
	/*!	
		\brief Sets the value of the selected balance ratio control as an integer

	This value sets the selected balance ratio control as an integer.
	
		\b Visibility = Beginner
        
	
		\b Selected by : BalanceRatioSelector
	
    */
    GenApi::IInteger &BalanceRatioRaw;
    
    //@}
    

	//! \name AOI - This category includes items used to set the size and position of the area of interest
    //@{
	/*!	
		\brief Sets the width of the area of interest in pixels

	This value sets the width of the area of interest in pixels.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &Width;
    
    //@}
    

	//! \name AOI - This category includes items used to set the size and position of the area of interest
    //@{
	/*!	
		\brief Sets the height of the area of interest in pixels

	This value sets the height of the area of interest in pixels.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &Height;
    
    //@}
    

	//! \name AOI - This category includes items used to set the size and position of the area of interest
    //@{
	/*!	
		\brief Sets the X offset (left offset) of the area of interest in pixels

	This value sets the X offset (left offset) for the area of interest in pixels, i.e., the distance in pixels between the left side of the sensor and the left side of the image area.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &OffsetX;
    
    //@}
    

	//! \name AOI - This category includes items used to set the size and position of the area of interest
    //@{
	/*!	
		\brief Sets the Y offset (top offset) for the area of interest in pixels

	This value sets the Y offset (top offset) for the area of interest, i.e., the distance in pixels between the top of the sensor and the top of the image area.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &OffsetY;
    
    //@}
    

	//! \name AOI - This category includes items used to set the size and position of the area of interest
    //@{
	/*!	
		\brief Enables the horizontal centering of the image.

	This feature is used to center the image horizontally.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IBoolean &CenterX;
    
    //@}
    

	//! \name AOI - This category includes items used to set the size and position of the area of interest
    //@{
	/*!	
		\brief Enables the vertical centering of the image.

	This feature is used to center the image vertically.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IBoolean &CenterY;
    
    //@}
    

	//! \name AOI - This category includes items used to set the size and position of the area of interest
    //@{
	/*!	
		\brief Sets the number of adjacent vertical pixes to be summed

	Sets the number of binned adjacent vertical pixels. Their charges will be summed and reported out of the camera as a single pixel.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &BinningVertical;
    
    //@}
    

	//! \name AOI - This category includes items used to set the size and position of the area of interest
    //@{
	/*!	
		\brief Sets the number of adjacent horizontal pixes to be summed

	Sets the number of binned adjacent horizontal pixels. Their charges will be summed and reported out of the camera as a single pixel.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &BinningHorizontal;
    
    //@}
    

	//! \name AOI - This category includes items used to set the size and position of the area of interest
    //@{
	/*!	
		\brief Sets the vertical binning feature

	This enumeration sets the vertical binning feature.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<LegacyBinningVerticalEnums > &LegacyBinningVertical;
    
    //@}
    

	//! \name AOI - This category includes items used to set the size and position of the area of interest
    //@{
	/*!	
		\brief Sets vertical sub-sampling

	Vertical sub-sampling of the image. This has the net effect of reducing the vertical resolution (height) of the image by the specified vertical decimation factor. A value of 1 indicates that the camera performs no vertical decimation.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &DecimationVertical;
    
    //@}
    

	//! \name AOI - This category includes items used to set the size and position of the area of interest
    //@{
	/*!	
		\brief Sets horizontal sub-sampling

	Horizontal sub-sampling of the image. This has the net effect of reducing the horizontal resolution (width) of the image by the specified horizontal decimation factor. A value of 1 indicates that the camera performs no horizontal decimation.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &DecimationHorizontal;
    
    //@}
    

	//! \name StackedZoneImaging - 
    //@{
	/*!	
		\brief Enables the stacked zone imaging feature.

	Enables the stacked zone imaging feature.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IBoolean &StackedZoneImagingEnable;
    
    //@}
    

	//! \name StackedZoneImaging - 
    //@{
	/*!	
		\brief This value sets the zone to access.

	This value sets the zone to access.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &StackedZoneImagingIndex;
    
    //@}
    

	//! \name StackedZoneImaging - 
    //@{
	/*!	
		\brief Enables the selected zone.

	Enables the selected zone.
	
		\b Visibility = Beginner
        
	
		\b Selected by : StackedZoneImagingIndex
	
    */
    GenApi::IBoolean &StackedZoneImagingZoneEnable;
    
    //@}
    

	//! \name StackedZoneImaging - 
    //@{
	/*!	
		\brief Sets the Y offset (top offset) for the selected zone.

	Sets the Y offset (top offset) for the selected zone.
	
		\b Visibility = Beginner
        
	
		\b Selected by : StackedZoneImagingIndex
	
    */
    GenApi::IInteger &StackedZoneImagingZoneOffsetY;
    
    //@}
    

	//! \name StackedZoneImaging - 
    //@{
	/*!	
		\brief Sets the height for the selected zone.

	Sets the height for the selected zone.
	
		\b Visibility = Beginner
        
	
		\b Selected by : StackedZoneImagingIndex
	
    */
    GenApi::IInteger &StackedZoneImagingZoneHeight;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief When enabled, the maximum frame rate does not depend on the image transfer rate out of the camera.

	When enabled, the maximum frame rate onyl depends on sensor timing and timing of the trigger sequence, and not on the image transfer rate out of the camera.

Note: The maximum number of triggers within a burst sequence is limited. If the maximum number is exceeded, images may be damaged or lost.
	
		\b Visibility = Guru
	
    */
    GenApi::IBoolean &EnableBurstAcquisition;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Sets the image acquisition mode

	This enumeration sets the image acquisition mode. 
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<AcquisitionModeEnums > &AcquisitionMode;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Starts the acquisition of images

	This command starts the acquisition of images. If the camera is set for single frame acquisition, it will start acquisition of one frame. If the camera is set for continuous frame acquisition, it will start continuous acquisition of frames.
	
		\b Visibility = Beginner
        
	
		\b Selected by : AcquisitionMode
	
    */
    GenApi::ICommand &AcquisitionStart;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Stops the acquisition of images

	If the camera is set for continuous image acquisition and acquisition has been started, this command stops the acquisition of images.
	
		\b Visibility = Beginner
        
	
		\b Selected by : AcquisitionMode
	
    */
    GenApi::ICommand &AcquisitionStop;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Immediately aborts the acquisition of images

	This command will immediately abort any image acquisition process that is currently in progress.
	
		\b Visibility = Beginner
        
	
		\b Selected by : AcquisitionMode
	
    */
    GenApi::ICommand &AcquisitionAbort;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Sets the number of frames acquired in the multiframe acquisition mode

	This value sets the number of frames acquired in the multiframe acquisition mode
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &AcquisitionFrameCount;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Expert
	
    */
    GenApi::IEnumerationT<TriggerControlImplementationEnums > &TriggerControlImplementation;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Selects the trigger type to configure. Once a trigger type has been selected, all changes to the trigger settings will be applied to the selected trigger.

	This enumeration selects the trigger type to configure. Once a trigger type has been selected, all changes to the trigger settings will be applied to the selected trigger.
	
		\b Visibility = Beginner
        
	
		\b Selected by : TriggerControlImplementation
	
    */
    GenApi::IEnumerationT<TriggerSelectorEnums > &TriggerSelector;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Sets the mode for the selected trigger

	This enumeration sets the trigger mode for the selected trigger.
	
		\b Visibility = Beginner
        
	
		\b Selected by : TriggerSelector
	
    */
    GenApi::IEnumerationT<TriggerModeEnums > &TriggerMode;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Generates a software trigger signal that is used when the trigger source is set to 'software'

	This command generates a software trigger signal. The software trigger signal will be used if the trigger source is set to 'software'.
	
		\b Visibility = Beginner
        
	
		\b Selected by : TriggerSelector
	
    */
    GenApi::ICommand &TriggerSoftware;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Sets the signal source for the selected trigger

	This enumeration sets the signal source for the selected trigger.
	
		\b Visibility = Beginner
        
	
		\b Selected by : TriggerSelector
	
    */
    GenApi::IEnumerationT<TriggerSourceEnums > &TriggerSource;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Sets the signal transition needed to activate the selected trigger

	This enumeration sets the signal transition needed to activate the selected trigger.
	
		\b Visibility = Beginner
        
	
		\b Selected by : TriggerSelector
	
    */
    GenApi::IEnumerationT<TriggerActivationEnums > &TriggerActivation;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Determines whether a partial or complete frame is transmitted when the frame start trigger prematurely transitions.

	This feature determines whether a partial or a complete frame is transmitted when the frame start trigger is used with Level High or Level Low and when the frame start trigger signal transitions while the frame is still being acquired.
	
		\b Visibility = Expert
	
		\b Selected by : TriggerSelector
	
    */
    GenApi::IBoolean &TriggerPartialClosingFrame;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Sets the trigger delay time in microseconds.

	This float value sets the absolute trigger delay in microseconds to apply after the trigger reception before effectively activating it.
	
		\b Visibility = Expert
	
		\b Selected by : TriggerSelector
	
    */
    GenApi::IFloat &TriggerDelayAbs;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Selects the kind of trigger delay.

	Selects wheter trigger delay is defined as a time interval or as a number of consecutive line triggers.
	
		\b Visibility = Expert
	
		\b Selected by : TriggerSelector
	
    */
    GenApi::IEnumerationT<TriggerDelaySourceEnums > &TriggerDelaySource;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Sets the trigger delay expressed as number of line triggers.

	This integer value sets the trigger delay expressed as a number of consecutive line triggers to apply after the trigger reception before effectively activating it.
	
		\b Visibility = Expert
	
		\b Selected by : TriggerSelector
	
    */
    GenApi::IInteger &TriggerDelayLineTriggerCount;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ExposureStartDelayRaw;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IFloat &ExposureStartDelayAbs;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Exposure Auto is the 'automatic' counterpart to manually setting an 'absolute' exposure time.

	The exposure auto function automatically adjusts the Auto Exposure Time Abs parameter value within set limits, until a target average gray value for the pixel data of the related Auto Function AOI is reached.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<ExposureAutoEnums > &ExposureAuto;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Sets the 'raw' exposure time.  Actual exposure time = raw exposure setting  x  exposure time base abs setting

	This value sets an integer that will be used as a multiplier for the exposure timebase. The actual exposure time equals the current exposure time raw setting times the current exposure time base abs setting.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ExposureTimeRaw;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Directly sets the camera's exposure time in microseconds

	This float value sets the camera's exposure time in microseconds.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IFloat &ExposureTimeAbs;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Sets the time base (in microseconds) that is used when the exposure time is set with the 'exposure time raw' setting

	This float value sets the time base (in microseconds) that is used when the exposure time is set with the 'raw' setting.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IFloat &ExposureTimeBaseAbs;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Enables the use of the exposure time base

	This value enables the use of the exposure time base.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IBoolean &ExposureTimeBaseAbsEnable;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Sets the camera's acquisition line rate in lines per second

	Sets the 'absolute' value of the acquisition line rate. The 'absolute' value is a float value that sets the acquisition line rate in lines per second.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IFloat &AcquisitionLineRateAbs;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Indicates the maximum allowed line acquisition rate (in lines per second) given the current settings for the area of interest, exposure time, and bandwidth

	Indicates the 'absolute' value of the maximum allowed acquisition line rate. The 'absolute' value is a float value that indicates the maximum allowed acquisition line rate in lines per second given the current settings for the area of interest, exposure time, and bandwidth.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IFloat &ResultingLineRateAbs;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief If the acquisition frame rate feature is enabled, this value sets the camera's acquisition frame rate in frames per second

	Sets the 'absolute' value of the acquisition frame rate. The 'absolute' value is a float value that sets the acquisition frame rate in frames per second.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IFloat &AcquisitionFrameRateAbs;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Enables setting the camera's acquisition frame rate to a specified value

	This boolean value enables setting  the camera's acquisition frame rate to a specified value.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IBoolean &AcquisitionFrameRateEnable;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Indicates the maximum allowed frame acquisition rate (in frames per second) given the current settings for the area of interest, exposure time, and bandwidth

	Indicates the 'absolute' value of the maximum allowed acquisition frame rate. The 'absolute' value is a float value that indicates the maximum allowed acquisition frame rate in frames per second given the current settings for the area of interest, exposure time, and bandwidth.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IFloat &ResultingFrameRateAbs;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Sets the exposure mode

	This enumeration sets the exposure mode.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<ExposureModeEnums > &ExposureMode;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Enable the Global Reset Release Mode

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IBoolean &GlobalResetReleaseModeEnable;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Sets the maximum overlap of the sensor exposure with the sensor readout in TriggerWidth exposure mode in raw units.

	This integer value sets the maximum overlap time (in raw units) of the sensor exposure with sensor readout in TriggerWidth exposure mode.
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &ExposureOverlapTimeMaxRaw;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Selects the Interlaced Integration Mode.

	Selects the Interlaced Integration Mode.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<InterlacedIntegrationModeEnums > &InterlacedIntegrationMode;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Sets the maximum overlap of the sensor exposure with sensor readout in TriggerWidth exposure mode in microseconds

	This float value sets the maximum overlap time (in microseconds) of the sensor exposure with sensor readout in TriggerWidth exposure mode.
	
		\b Visibility = Guru
	
    */
    GenApi::IFloat &ExposureOverlapTimeMaxAbs;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Indicates the sensor readout time given the current settings.

	Indicates the sensor readout time given the current settings.
	
		\b Visibility = Expert
	
    */
    GenApi::IFloat &ReadoutTimeAbs;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief This enumeration is used to select which internal acquisition signal to read using AcquisitionStatus.

	This enumeration is used to select which internal acquisition signal to read using AcquisitionStatus.
	
		\b Visibility = Expert
	
    */
    GenApi::IEnumerationT<AcquisitionStatusSelectorEnums > &AcquisitionStatusSelector;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Reads the selected acquisition status

	This feature is used to read the state (True or False) of the internal acquisition signal selected using AcquisitionStatusSelector.
	
		\b Visibility = Expert
	
		\b Selected by : AcquisitionStatusSelector
	
    */
    GenApi::IBoolean &AcquisitionStatus;
    
    //@}
    

	//! \name Averaging - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Expert
	
    */
    GenApi::IInteger &AveragingNumberOfFrames;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Enables the frame timeout

	This boolean value enables the frame timeout. 
	
		\b Visibility = Expert
	
    */
    GenApi::IBoolean &FrameTimeoutEnable;
    
    //@}
    

	//! \name AcquisitionTrigger - This category includes items used to set the image acquisition parameters and to start and stop acquisition
    //@{
	/*!	
		\brief Sets the frame timeout in microseconds.

	Sets the frame timeout in microseconds. When the timeout expires before a frame acquisition is complete, a partial frame will be delivered.
	
		\b Visibility = Expert
	
    */
    GenApi::IFloat &FrameTimeoutAbs;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief Selects the I/O line to configure. Once a line has been selected, all changes to the line settings will be applied to the selected line.

	This enumeration selects the I/O line to configure. Once a line has been selected, all changes to the line settings will be applied to the selected line.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<LineSelectorEnums > &LineSelector;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief Enables the signal inverter function for the selected input or output line.

	This boolean value enables the signal inverter function for the selected input or output line.
	
		\b Visibility = Beginner
        
	
		\b Selected by : LineSelector
	
    */
    GenApi::IBoolean &LineInverter;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief Enables the termination resistor for the selected input line.

	This boolean value enables the termination resistor for the selected input line.
	
		\b Visibility = Beginner
        
	
		\b Selected by : LineSelector
	
    */
    GenApi::IBoolean &LineTermination;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief Sets the raw value of the selected line debouncer time

	Sets the raw value of the selected line debouncer time
	
		\b Visibility = Invisible
	
		\b Selected by : LineSelector
	
    */
    GenApi::IInteger &LineDebouncerTimeRaw;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief Sets the absolute value of the selected line debouncer time in microseconds

	Sets the absolute value of the selected line debouncer time in microseconds
	
		\b Visibility = Beginner
        
	
		\b Selected by : LineSelector
	
    */
    GenApi::IFloat &LineDebouncerTimeAbs;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief Sets the raw value for the minimum signal width of an output signal.

	This integer value sets the raw value  for the minimum signal width of a signal that is received from the frequency converter or from the shaft encoder module and that is associated with a digital output line.
	
		\b Visibility = Invisible
	
		\b Selected by : LineSelector
	
    */
    GenApi::IInteger &MinOutPulseWidthRaw;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief Sets the absolute value (in microseconds) for the minimum signal width of an output signal.

	This float value sets the absolute value (in microseconds) for the minimum signal width of a signal that is received from the frequency converter or from the shaft encoder module and that is associated with a digital output line.
	
		\b Visibility = Beginner
        
	
		\b Selected by : LineSelector
	
    */
    GenApi::IFloat &MinOutPulseWidthAbs;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief Indicates the current logical state for the selected line

	This boolean value indicates the current logical state for the selected line at the time of polling.
	
		\b Visibility = Beginner
        
	
		\b Selected by : LineSelector
	
    */
    GenApi::IBoolean &LineStatus;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief A single bitfield indicating the current logical state of all available line signals at time of polling

	This integer value is a single bitfield that indicates the current logical state of all available lines at time of polling.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &LineStatusAll;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief Sets the state of the selected user settable output signal

	This boolean value sets the state of the selected user settable output signal.
	
		\b Visibility = Beginner
        
	
		\b Selected by : UserOutputSelector
	
    */
    GenApi::IBoolean &UserOutputValue;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief A single bitfield that sets the state of all user settable output signals in one access

	This integer value is a single bitfield that sets the state of all user settable output signals in one access.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &UserOutputValueAll;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief Defines a mask that is used when the User Output Value All setting is used to set all of the user settable output signals in one access

	This integer value defines a mask that is used when the User Output Value All setting is used to set all of the user settable output signals in one access.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &UserOutputValueAllMask;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief Sets the state of the selected user settable synchronous output signal

	This boolean value sets the state of the selected user settable synchronous output signal.
	
		\b Visibility = Beginner
        
	
		\b Selected by : SyncUserOutputSelector
	
    */
    GenApi::IBoolean &SyncUserOutputValue;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief A single bitfield that sets the state of all user settable synchronous output signals in one access

	This integer value is a single bitfield that sets the state of all user settable synchronous output signals in one access.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &SyncUserOutputValueAll;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief Sets the mode for the selected line

	This feature controls whether the physical Line is used to Input or Output a signal. When a Line supports input and output mode, the default state is Input to avoid possible electrical contention. Line Mode can take any of the following values: Input: The selected physical line is used to input an electrical signal. Output: The selected physical line is used to output an electrical signal.
	
		\b Visibility = Beginner
        
	
		\b Selected by : LineSelector
	
    */
    GenApi::IEnumerationT<LineModeEnums > &LineMode;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief Sets the source signal for the selected line (if the selected line is an output)

	This enumeration selects the internally generated camera signal (source signal) for the selected line when the selected line is an output. 
	
		\b Visibility = Beginner
        
	
		\b Selected by : LineSelector
	
    */
    GenApi::IEnumerationT<LineSourceEnums > &LineSource;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<LineLogicEnums > &LineLogic;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief Sets the electrical configuration of the selected line

	This feature controls the current electrical format of the selected physical input or output Line. Line Format can take any of the following values: No Connect: The Line is not connected. Tri-state: The Line is currently in Tri-state mode (Not driven). TTL: The Line is currently accepting or sending TTL level signals. LVDS: The Line is currently accepting or sending LVDS level signals. RS-422: The Line is currently accepting or sending RS-422 level signals. Opto-coupled: The Line is Opto-coupled. 
	
		\b Visibility = Beginner
        
	
		\b Selected by : LineSelector
	
    */
    GenApi::IEnumerationT<LineFormatEnums > &LineFormat;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief Selects the user settable output signal to configure. Once a user settable output signal has been selected, all changes to the user settable output signal settings will be applied to the selected user settable output signal.

	This enumeration selects the user settable output signal to configure. Once a user settable output signal has been selected, all changes to the user settable output signal settings will be applied to the selected user settable output signal.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<UserOutputSelectorEnums > &UserOutputSelector;
    
    //@}
    

	//! \name DigitalIO - This category includes items used to control the operation of the camera's digital I/O lines
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<SyncUserOutputSelectorEnums > &SyncUserOutputSelector;
    
    //@}
    

	//! \name ShaftEncoderModule - This category provides controls for operating the camera's shaft encoder module.
    //@{
	/*!	
		\brief Selects the phase of the shaft encoder.

	Selects the phase of the shaft encoder as input for the shaft encoder module.
	
		\b Visibility = Expert
	
    */
    GenApi::IEnumerationT<ShaftEncoderModuleLineSelectorEnums > &ShaftEncoderModuleLineSelector;
    
    //@}
    

	//! \name ShaftEncoderModule - This category provides controls for operating the camera's shaft encoder module.
    //@{
	/*!	
		\brief Selects the input line as signal source for the shaft encoder module.

	Selects the input line as signal source for the shaft encoder module.
	
		\b Visibility = Expert
	
		\b Selected by : ShaftEncoderModuleLineSelector
	
    */
    GenApi::IEnumerationT<ShaftEncoderModuleLineSourceEnums > &ShaftEncoderModuleLineSource;
    
    //@}
    

	//! \name ShaftEncoderModule - This category provides controls for operating the camera's shaft encoder module.
    //@{
	/*!	
		\brief Selects the circumstances for the shaft encoder module to output trigger signals.

	This enumeration value selects the circumstances for the shaft encoder module to output trigger signals.
	
		\b Visibility = Expert
	
    */
    GenApi::IEnumerationT<ShaftEncoderModuleModeEnums > &ShaftEncoderModuleMode;
    
    //@}
    

	//! \name ShaftEncoderModule - This category provides controls for operating the camera's shaft encoder module.
    //@{
	/*!	
		\brief Selects the counting mode of the tick counter.

	Selects the counting mode of the tick counter of the shaft encoder module.
	
		\b Visibility = Expert
	
    */
    GenApi::IEnumerationT<ShaftEncoderModuleCounterModeEnums > &ShaftEncoderModuleCounterMode;
    
    //@}
    

	//! \name ShaftEncoderModule - This category provides controls for operating the camera's shaft encoder module.
    //@{
	/*!	
		\brief Indicates the current value of the tick counter.

	This integer value (read only) indicates the current value of the tick counter of the shaft encoder module.
	
		\b Visibility = Expert
	
    */
    GenApi::IInteger &ShaftEncoderModuleCounter;
    
    //@}
    

	//! \name ShaftEncoderModule - This category provides controls for operating the camera's shaft encoder module.
    //@{
	/*!	
		\brief Sets the maximum value for the tick counter.

	This integer value sets the maximum value for the tick counter of the shaft encoder module (range: 0 to 32767). If the tick counter is incrementing and it reaches the set maximum, it willl roll over to 0. If the tick counter is decrementing and it reaches 0, it willl roll back to the set maximum.
	
		\b Visibility = Expert
	
    */
    GenApi::IInteger &ShaftEncoderModuleCounterMax;
    
    //@}
    

	//! \name ShaftEncoderModule - This category provides controls for operating the camera's shaft encoder module.
    //@{
	/*!	
		\brief Resets the tick counter to 0.

	This command resets the tick counter count of the shaft encoder module to 0.
	
		\b Visibility = Expert
	
    */
    GenApi::ICommand &ShaftEncoderModuleCounterReset;
    
    //@}
    

	//! \name ShaftEncoderModule - This category provides controls for operating the camera's shaft encoder module.
    //@{
	/*!	
		\brief Sets the maximum value for the reverse counter.

	This integer value sets the maximum value for the reverse counter of the shaft encoder module (range: 0 to 32767).
	
		\b Visibility = Expert
	
    */
    GenApi::IInteger &ShaftEncoderModuleReverseCounterMax;
    
    //@}
    

	//! \name ShaftEncoderModule - This category provides controls for operating the camera's shaft encoder module.
    //@{
	/*!	
		\brief Resets the reverse counter to 0.

	This command resets the reverse counter of the shaft encoder module to 0 and informs the module that the current direction of conveyor movement is forward. Reset must be carried out before the first conveyor movement in the forward direction.
	
		\b Visibility = Expert
	
    */
    GenApi::ICommand &ShaftEncoderModuleReverseCounterReset;
    
    //@}
    

	//! \name FrequencyConverter - This category includes items used to control the operation of the camera's frequency converter module
    //@{
	/*!	
		\brief Selects the input source.

	Selects the input source for the frequency converter module.
	
		\b Visibility = Expert
	
    */
    GenApi::IEnumerationT<FrequencyConverterInputSourceEnums > &FrequencyConverterInputSource;
    
    //@}
    

	//! \name FrequencyConverter - This category includes items used to control the operation of the camera's frequency converter module
    //@{
	/*!	
		\brief Selects the signal transition relationships between received and generated signals.

	Selects the signal transition relationships between the signals received from the pre-divider sub-module and the signals generated by the multiplier sub-module.
	
		\b Visibility = Expert
	
    */
    GenApi::IEnumerationT<FrequencyConverterSignalAlignmentEnums > &FrequencyConverterSignalAlignment;
    
    //@}
    

	//! \name FrequencyConverter - This category includes items used to control the operation of the camera's frequency converter module
    //@{
	/*!	
		\brief Sets the pre-divider value for the pre-divider sub-module.

	Sets an integer value as the pre-divider for the pre-divider sub-module.
	
		\b Visibility = Expert
	
    */
    GenApi::IInteger &FrequencyConverterPreDivider;
    
    //@}
    

	//! \name FrequencyConverter - This category includes items used to control the operation of the camera's frequency converter module
    //@{
	/*!	
		\brief Sets the multiplier value for the multiplier sub-module.

	Sets an integer value as the multiplier for the multiplier sub-module.
	
		\b Visibility = Expert
	
    */
    GenApi::IInteger &FrequencyConverterMultiplier;
    
    //@}
    

	//! \name FrequencyConverter - This category includes items used to control the operation of the camera's frequency converter module
    //@{
	/*!	
		\brief Sets the post-divider value for the post-divider sub-module.

	Sets an integer value as the post-divider for the post-divider sub-module.
	
		\b Visibility = Expert
	
    */
    GenApi::IInteger &FrequencyConverterPostDivider;
    
    //@}
    

	//! \name FrequencyConverter - This category includes items used to control the operation of the camera's frequency converter module
    //@{
	/*!	
		\brief Enables overtriggering protection.

	This feature ensures that the multiplier sub-module does not provide a generated signal at a too high frequency that would cause camera overtriggering.
	
		\b Visibility = Guru
	
    */
    GenApi::IBoolean &FrequencyConverterPreventOvertrigger;
    
    //@}
    

	//! \name TimerControls - This category includes items used to control the operation of the camera's timers
    //@{
	/*!	
		\brief Sets the time base (in microseconds) that is used when a timer duration is set with the 'timer duration raw' setting

	This float value sets the time base (in microseconds) that is used when a timer duration is set with the 'raw' setting.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IFloat &TimerDurationTimebaseAbs;
    
    //@}
    

	//! \name TimerControls - This category includes items used to control the operation of the camera's timers
    //@{
	/*!	
		\brief Sets the time base (in microseconds) that is used when a timer delay is set with the 'timer delay raw' setting

	This float value sets the time base (in microseconds) that is used when a timer delay is set with the 'raw' setting.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IFloat &TimerDelayTimebaseAbs;
    
    //@}
    

	//! \name TimerControls - This category includes items used to control the operation of the camera's timers
    //@{
	/*!	
		\brief Selects the timer to configure.  Once a timer has been selected, all changes to the timer settings will be applied to the selected timer.

	This enumeration selects the timer to configure. . Once a timer has been selected, all changes to the timer settings will be applied to the selected timer.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<TimerSelectorEnums > &TimerSelector;
    
    //@}
    

	//! \name TimerControls - This category includes items used to control the operation of the camera's timers
    //@{
	/*!	
		\brief Directly sets the duration for the selected timer in microseconds

	This float value sets the duration for the selected timer in microseconds.
	
		\b Visibility = Beginner
        
	
		\b Selected by : TimerSelector
	
    */
    GenApi::IFloat &TimerDurationAbs;
    
    //@}
    

	//! \name TimerControls - This category includes items used to control the operation of the camera's timers
    //@{
	/*!	
		\brief Sets the 'raw' duration for the selected timer.  Actual duration = raw timer duration setting  x  timer duration time base abs setting

	This value sets an integer that will be used as a multiplier for the timer duration timebase. The actual duration time equals the current timer duration raw setting times the current timer duration time base abs setting.
	
		\b Visibility = Beginner
        
	
		\b Selected by : TimerSelector
	
    */
    GenApi::IInteger &TimerDurationRaw;
    
    //@}
    

	//! \name TimerControls - This category includes items used to control the operation of the camera's timers
    //@{
	/*!	
		\brief Directly sets the delay for the selected timer in microseconds

	This float value sets the delay for the selected timer in microseconds.
	
		\b Visibility = Beginner
        
	
		\b Selected by : TimerSelector
	
    */
    GenApi::IFloat &TimerDelayAbs;
    
    //@}
    

	//! \name TimerControls - This category includes items used to control the operation of the camera's timers
    //@{
	/*!	
		\brief Sets the 'raw' delay for the selected timer.  Actual delay = raw timer delay setting  x  timer delay time base abs setting

	This value sets an integer that will be used as a multiplier for the timer delay timebase. The actual delay time equals the current timer delay raw setting times the current timer delay time base abs setting.
	
		\b Visibility = Beginner
        
	
		\b Selected by : TimerSelector
	
    */
    GenApi::IInteger &TimerDelayRaw;
    
    //@}
    

	//! \name TimerControls - This category includes items used to control the operation of the camera's timers
    //@{
	/*!	
		\brief Sets the internal camera signal used to trigger the selected timer

	This enumeration sets the internal camera signal used to trigger the selected timer.
	
		\b Visibility = Beginner
        
	
		\b Selected by : TimerSelector
	
    */
    GenApi::IEnumerationT<TimerTriggerSourceEnums > &TimerTriggerSource;
    
    //@}
    

	//! \name TimerControls - This category includes items used to control the operation of the camera's timers
    //@{
	/*!	
		\brief Sets the type of signal transistion that will start the timer

	This enumeration sets the type of signal transistion that will start the timer.
	
		\b Visibility = Beginner
        
	
		\b Selected by : TimerSelector
	
    */
    GenApi::IEnumerationT<TimerTriggerActivationEnums > &TimerTriggerActivation;
    
    //@}
    

	//! \name TimerSequence - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
    */
    GenApi::IBoolean &TimerSequenceEnable;
    
    //@}
    

	//! \name TimerSequence - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &TimerSequenceLastEntryIndex;
    
    //@}
    

	//! \name TimerSequence - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &TimerSequenceCurrentEntryIndex;
    
    //@}
    

	//! \name TimerSequence - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<TimerSequenceEntrySelectorEnums > &TimerSequenceEntrySelector;
    
    //@}
    

	//! \name TimerSequence - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
		\b Selected by : TimerSequenceEntrySelector
	
    */
    GenApi::IEnumerationT<TimerSequenceTimerSelectorEnums > &TimerSequenceTimerSelector;
    
    //@}
    

	//! \name TimerSequence - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
		\b Selected by : TimerSequenceTimerSelector
	
    */
    GenApi::IBoolean &TimerSequenceTimerEnable;
    
    //@}
    

	//! \name TimerSequence - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
		\b Selected by : TimerSequenceTimerSelector
	
    */
    GenApi::IBoolean &TimerSequenceTimerInverter;
    
    //@}
    

	//! \name TimerSequence - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
		\b Selected by : TimerSequenceTimerSelector
	
    */
    GenApi::IInteger &TimerSequenceTimerDelayRaw;
    
    //@}
    

	//! \name TimerSequence - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
		\b Selected by : TimerSequenceTimerSelector
	
    */
    GenApi::IInteger &TimerSequenceTimerDurationRaw;
    
    //@}
    

	//! \name TimerControls - This category includes items used to control the operation of the camera's timers
    //@{
	/*!	
		\brief Selects the counter to configure.  Once a counter has been selected, all changes to the counter settings will be applied to the selected counter.

	This enumeration selects the counter to configure. Once a counter has been selected, all changes to the counter settings will be applied to the selected counter.
	
		\b Visibility = Expert
	
    */
    GenApi::IEnumerationT<CounterSelectorEnums > &CounterSelector;
    
    //@}
    

	//! \name TimerControls - This category includes items used to control the operation of the camera's timers
    //@{
	/*!	
		\brief Selects the event that will be the source to increment the counter

	This enumeration selects the event that will be the source to increment the counter.
	
		\b Visibility = Expert
	
		\b Selected by : CounterSelector
	
    */
    GenApi::IEnumerationT<CounterEventSourceEnums > &CounterEventSource;
    
    //@}
    

	//! \name TimerControls - This category includes items used to control the operation of the camera's timers
    //@{
	/*!	
		\brief Selects the source of the reset for the selected counter.

	This enumeration selects the source of the reset for the selected counter.
	
		\b Visibility = Expert
	
		\b Selected by : CounterSelector
	
    */
    GenApi::IEnumerationT<CounterResetSourceEnums > &CounterResetSource;
    
    //@}
    

	//! \name TimerControls - This category includes items used to control the operation of the camera's timers
    //@{
	/*!	
		\brief Immediately resets the selected counter

	This command will immediately reset the selected counter. Note that the counter starts counting immediately after the reset.
	
		\b Visibility = Expert
	
		\b Selected by : CounterSelector
	
    */
    GenApi::ICommand &CounterReset;
    
    //@}
    

	//! \name LUTControls - This category includes items used to control the operation of the camera's lookup table (LUT)
    //@{
	/*!	
		\brief Enables the selected LUT

	This boolean value enables the selected LUT.
	
		\b Visibility = Beginner
        
	
		\b Selected by : LUTSelector
	
    */
    GenApi::IBoolean &LUTEnable;
    
    //@}
    

	//! \name LUTControls - This category includes items used to control the operation of the camera's lookup table (LUT)
    //@{
	/*!	
		\brief Sets the LUT element to access 

	This value sets the LUT element to access. This value is used to index into a LUT array.
	
		\b Visibility = Beginner
        
	
		\b Selected by : LUTSelector
	
    */
    GenApi::IInteger &LUTIndex;
    
    //@}
    

	//! \name LUTControls - This category includes items used to control the operation of the camera's lookup table (LUT)
    //@{
	/*!	
		\brief Sets the value of the LUT element at the LUT index

	This value sets the value of the LUT element at the LUT index.
	
		\b Visibility = Beginner
        
	
		\b Selected by : LUTIndex, LUTSelector
	
    */
    GenApi::IInteger &LUTValue;
    
    //@}
    

	//! \name LUTControls - This category includes items used to control the operation of the camera's lookup table (LUT)
    //@{
	/*!	
		\brief Accesses the entire content of the selected LUT in one chunk access

	
	
		\b Visibility = Beginner
        
	
		\b Selected by : LUTSelector
	
    */
    GenApi::IRegister &LUTValueAll;
    
    //@}
    

	//! \name LUTControls - This category includes items used to control the operation of the camera's lookup table (LUT)
    //@{
	/*!	
		\brief Selects the lookup table (LUT) to configure. Once a LUT has been selected, all changes to the LUT settings will be applied to the selected LUT.

	This enumeration the lookup table (LUT) to configure. Once a LUT has been selected, all changes to the LUT settings will be applied to the selected LUT.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<LUTSelectorEnums > &LUTSelector;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Select legacy pixel format encoding

	This switch selects a legacy GVSP pixel format encoding, for compatibility with older camera models.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IBoolean &PixelFormatLegacy;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Size of the payload in bytes

	Size of the payload in bytes. This is the total number of bytes sent in the payload. Image data + chunk data if present. No packet headers.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &PayloadSize;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Selects the physical network interface to configure. Once a network interface has been selected, all changes to the network interface settings will be applied to the selected interface.

	This selects the physical network interface to configure. Once a network interface has been selected, all changes to the network interface settings will be applied to the selected interface.
	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<GevInterfaceSelectorEnums > &GevInterfaceSelector;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the major version number of the GigE Vision specification supported by this device.

	This is a read only element. It indicates the major version number of the GigE Vision specification supported by this device.
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &GevVersionMajor;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the minor version number of the GigE Vision specification supported by this device.

	This is a read only element. It indicates the minor version number of the GigE Vision specification supported by this device.
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &GevVersionMinor;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the endianess of the bootstrap registers.

	This is a read only element. It indicates the endianess of the bootstrap registers. True = big endian.
	
		\b Visibility = Guru
	
    */
    GenApi::IBoolean &GevDeviceModeIsBigEndian;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indictes the character set.

	This is a read only element. Its value indicates the character set. 1 = UTF8
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &GevDeviceModeCharacterSet;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the MAC address for the selected network interface

	This is a read only element. It indicates the MAC address for the selected network interface.
	
		\b Visibility = Guru
	
		\b Selected by : GevInterfaceSelector
	
    */
    GenApi::IInteger &GevMACAddress;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates whether the selected network interface supports auto IP addressing (also known as LLA)

	This is a read only element. It indicates whether the selected network interface supports auto IP addressing (also known as LLA).
	
		\b Visibility = Guru
	
		\b Selected by : GevInterfaceSelector
	
    */
    GenApi::IBoolean &GevSupportedIPConfigurationLLA;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates whether the selected network interface supports DHCP IP addressing

	This is a read only element. It indicates whether the selected network interface supports DHCP IP addressing.
	
		\b Visibility = Guru
	
		\b Selected by : GevInterfaceSelector
	
    */
    GenApi::IBoolean &GevSupportedIPConfigurationDHCP;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates whether the selected network interface supports fixed IP addressing (also known as persistent IP addressing)

	This is a read only element. It indicates whether the selected network interface supports fixed IP addressing (also known as persistent IP addressing).
	
		\b Visibility = Guru
	
		\b Selected by : GevInterfaceSelector
	
    */
    GenApi::IBoolean &GevSupportedIPConfigurationPersistentIP;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Sets the current IP configuration of the selected network interface

	This value sets the IP configuration of the selected network interface, i.e., fixed IP, DHCP, auto IP. 
	
		\b Visibility = Guru
	
		\b Selected by : GevInterfaceSelector
	
    */
    GenApi::IInteger &GevCurrentIPConfiguration;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the current IP address for the selected network interface

	This is a read only element. It indicates the current IP address for the selected network interface.
	
		\b Visibility = Guru
	
		\b Selected by : GevInterfaceSelector
	
    */
    GenApi::IInteger &GevCurrentIPAddress;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the current subnet mask for the selected network interface

	This is a read only element. It indicates the current subnet mask for the selected network interface.
	
		\b Visibility = Guru
	
		\b Selected by : GevInterfaceSelector
	
    */
    GenApi::IInteger &GevCurrentSubnetMask;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the current default gateway for the selected network interface

	This is a read only element. It indicates the current default gateway for the selected network interface.
	
		\b Visibility = Guru
	
		\b Selected by : GevInterfaceSelector
	
    */
    GenApi::IInteger &GevCurrentDefaultGateway;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief If fixed (persistent) IP addressing is supported by the device and enabled, sets the fixed IP address for the selected network interface 

	This value sets the fixed IP address for the selected network interface (if fixed IP addressing is supported by the device and enabled).
	
		\b Visibility = Guru
	
		\b Selected by : GevInterfaceSelector
	
    */
    GenApi::IInteger &GevPersistentIPAddress;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief If fixed (persistent) IP addressing is supported by the device and enabled, sets the fixed subnet mask for the selected network interface 

	This value sets the fixed subnet mask for the selected network interface (if fixed IP addressing is supported by the device and enabled).
	
		\b Visibility = Guru
	
		\b Selected by : GevInterfaceSelector
	
    */
    GenApi::IInteger &GevPersistentSubnetMask;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief If fixed (persistent) IP addressing is supported by the device and enabled, sets the fixed default gateway for the selected network interface 

	This value sets the fixed default gateway for the selected network interface (if fixed IP addressing is supported by the device and enabled).
	
		\b Visibility = Guru
	
		\b Selected by : GevInterfaceSelector
	
    */
    GenApi::IInteger &GevPersistentDefaultGateway;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the connection speed in Mbps for the selected network interface

	This is a read only element. It indicates the connection speed in Mbps for the selected network interface.
	
		\b Visibility = Guru
	
		\b Selected by : GevInterfaceSelector
	
    */
    GenApi::IInteger &GevLinkSpeed;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates whether the selected network interface is the clock master.

	This is a read only element. It indicates whether the selected network interface is the clock master.
	
		\b Visibility = Guru
	
		\b Selected by : GevInterfaceSelector
	
    */
    GenApi::IBoolean &GevLinkMaster;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates whether the selected network interface operates in full-duplex mode.

	This is a read only element. It indicates whether the selected network interface operates in full-duplex mode.
	
		\b Visibility = Guru
	
		\b Selected by : GevInterfaceSelector
	
    */
    GenApi::IBoolean &GevLinkFullDuplex;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the state of medium-dependent interface crossover (MDIX) for the selected network interface.

	This is a read only element. It indicates the state of medium-dependent interface crossover (MDIX) for the selected network interface.
	
		\b Visibility = Guru
	
		\b Selected by : GevInterfaceSelector
	
    */
    GenApi::IBoolean &GevLinkCrossover;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the first URL to the XML device description file

	This is a read only element. It indicates the first URL to the XML device description file.
	
		\b Visibility = Guru
	
    */
    GenApi::IString &GevFirstURL;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the second URL to the XML device description file

	This is a read only element. It indicates the second URL to the XML device description file.
	
		\b Visibility = Guru
	
    */
    GenApi::IString &GevSecondURL;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the number of network interfaces on the device

	This is a read only element. It indicates the number of network interfaces on the device.
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &GevNumberOfInterfaces;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the number of message channels supported by the device

	This is a read only element. It indicates the number of message channels supported by the device.
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &GevMessageChannelCount;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the number of stream channels supported by the device

	This is a read only element. It indicates the number of stream channels supported by the device.
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &GevStreamChannelCount;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates whether EVENTDATA_CMD and EVENTDATA_ACK are supported

	This is a read only element. It indicates whether EVENTDATA_CMD and EVENTDATA_ACK are supported.
	
		\b Visibility = Guru
	
    */
    GenApi::IBoolean &GevSupportedOptionalCommandsEVENTDATA;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates whether EVENT_CMD and EVENT_ACK are supported

	This is a read only element. It indicates whether EVENT_CMD and EVENT_ACK are supported.
	
		\b Visibility = Guru
	
    */
    GenApi::IBoolean &GevSupportedOptionalCommandsEVENT;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates whether PACKETRESEND_CMD is supported

	This is a read only element. It indicates whether PACKETRESEND_CMD is supported.
	
		\b Visibility = Guru
	
    */
    GenApi::IBoolean &GevSupportedOptionalCommandsPACKETRESEND;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates whether WRITEMEM_CMD and WRITEMEM_ACK are supported

	This is a read only element. It indicates whether WRITEMEM_CMD and WRITEMEM_ACK are supported
	
		\b Visibility = Guru
	
    */
    GenApi::IBoolean &GevSupportedOptionalCommandsWRITEMEM;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates whether multiple operations in a single message are supported

	This is a read only element. It indicates whether multiple operations in a single message are supported.
	
		\b Visibility = Guru
	
    */
    GenApi::IBoolean &GevSupportedOptionalCommandsConcatenation;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Sets the heartbeat timeout in milliseconds

	This value sets the heartbeat timeout in milliseconds.
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &GevHeartbeatTimeout;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the number of timestamp clock ticks in 1 second

	This is a read only element. It indicates the number of timestamp clock ticks in 1 second.
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &GevTimestampTickFrequency;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Resets the timestamp value for the device

	This command resets the timestamp value for the device
	
		\b Visibility = Guru
	
    */
    GenApi::ICommand &GevTimestampControlReset;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Latches the current timestamp value of the device

	This command latches the current timestamp value of the device.
	
		\b Visibility = Guru
	
    */
    GenApi::ICommand &GevTimestampControlLatch;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Resets the timestamp control latch

	This command resets the timestamp control latch.
	
		\b Visibility = Guru
	
    */
    GenApi::ICommand &GevTimestampControlLatchReset;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the latched value of the timestamp.  (The timestamp must first be latched using the Timestamp Control Latch command.)

	This is a read only element. It indicates the latched value of the timestamp.  (The timestamp must first be latched using the Timestamp Control Latch command.)
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &GevTimestampValue;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Sets the control channel privilege feature

	This enumeration sets the control channel privilege feature.
	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<GevCCPEnums > &GevCCP;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Selects the stream channel to configure. Once a stream channel has been selected, all changes to the stream channel settings will be applied to the selected stream channel.

	This enumeration selects the stream channels to configure. Once a stream channel has been selected, all changes to the stream channel settings will be applied to the selected stream channel.
	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<GevStreamChannelSelectorEnums > &GevStreamChannelSelector;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Sets the index of the network interface to use

	This value sets the index of the network interface to use.
	
		\b Visibility = Guru
	
		\b Selected by : GevStreamChannelSelector
	
    */
    GenApi::IInteger &GevSCPInterfaceIndex;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Sets the port to which the device must send data streams

	This value sets the port to which the device must send data streams.
	
		\b Visibility = Guru
	
		\b Selected by : GevStreamChannelSelector
	
    */
    GenApi::IInteger &GevSCPHostPort;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
		\b Selected by : GevStreamChannelSelector
	
    */
    GenApi::ICommand &GevSCPSFireTestPacket;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
		\b Selected by : GevStreamChannelSelector
	
    */
    GenApi::IBoolean &GevSCPSDoNotFragment;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
		\b Selected by : GevStreamChannelSelector
	
    */
    GenApi::IBoolean &GevSCPSBigEndian;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Sets the packet size in bytes for the selected stream channel

	This value sets the packet size in bytes for the selected stream channel. Excludes data leader and data trailer. (The last packet may be smaller because the packet size is not necessarily a multiple of the block size for the stream channel.)
	
		\b Visibility = Beginner
	
		\b Selected by : GevStreamChannelSelector
	
    */
    GenApi::IInteger &GevSCPSPacketSize;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Sets the stream channel destination IPv4 address for the selected stream channel

	This value sets the stream channel destination IPv4 address for the selected stream channel. The destination can be a unicast or a multicast.
	
		\b Visibility = Guru
	
		\b Selected by : GevStreamChannelSelector
	
    */
    GenApi::IInteger &GevSCDA;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Sets the inter-packet delay (in ticks) for the selected stream channel

	This value sets a delay between the transmission of each packet for the selected stream channel. The delay is measured in ticks.
	
		\b Visibility = Expert
	
		\b Selected by : GevStreamChannelSelector
	
    */
    GenApi::IInteger &GevSCPD;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Sets the frame transfer start delay (in ticks) for the selected stream channel

	This value sets the frame transfer delay for the selected stream channel. This value sets a delay betweem when the camera would normally begin transmitted an acquired image (frame) and when it actually begins transmitting the acquired image.
	
		\b Visibility = Expert
	
		\b Selected by : GevStreamChannelSelector
	
    */
    GenApi::IInteger &GevSCFTD;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Sets a percentage of the Ethernet bandwidth assigned to the camera to be held in reserve. The reserve is used for packet resends and control data transmissions. 

	This value reserves a portion of Ethernet bandwidth assigned to the camera for packet resends and for the transmission of control data between the camera and the host PC. The setting is expressed as a percentage of the bandwidth assigned parameter. For example, if the Bandwidth Assigned parameter indicates that 30 MBytes/s have been assigned to the camera and the Bandwidth Reserve parameter is set to 5%, then the bandwidth reserve will be 1.5 MBytes/s.
	
		\b Visibility = Expert
	
		\b Selected by : GevStreamChannelSelector
	
    */
    GenApi::IInteger &GevSCBWR;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Sets a multiplier for the Bandwidth Reserve parameter. The multiplier is used to establish an extra pool of reserved bandwidth that can be used if an unusually large burst of packet resends is needed.

	This value sets a multiplier for the Bandwidth Reserve parameter. The multiplier is used to establish an extra pool of reserved bandwidth that can be used if an unusually large burst of packet resends is needed.
	
		\b Visibility = Expert
	
		\b Selected by : GevStreamChannelSelector
	
    */
    GenApi::IInteger &GevSCBWRA;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the bandwidth (in bytes per second) that will be used by the camera to transmit image and chunk feature data and to handle resends and control data transmissions.

	This value indicates the base bandwidth in bytes per second that will be used by the camera to transmit image and chunk feature data and to handle resends and control data transmissions. This parameter represents a combination of the packet size and the inter-packet delay.
	
		\b Visibility = Expert
	
		\b Selected by : GevStreamChannelSelector
	
    */
    GenApi::IInteger &GevSCBWA;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the maximum amount of data (in bytes per second) that the camera could generate given its current settings and ideal conditions, i.e., unlimited bandwidth and no packet resends

	This value indicates the maximum amount of data (in bytes per second) that the camera could generate given its current settings and ideal conditions, i.e., unlimited bandwidth and no packet resends.
	
		\b Visibility = Expert
	
		\b Selected by : GevStreamChannelSelector
	
    */
    GenApi::IInteger &GevSCDMT;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the actual bandwidth (in bytes per second) that the camera will use to transmit image data and chunk data given the current AOI settings, chunk feature settings, and the pixel format setting

	This value indicates the actual bandwidth (in bytes per second) that the camera will use to transmit image data and chunk data given the current AOI settings, chunk feature settings, and the pixel format setting.
	
		\b Visibility = Expert
	
		\b Selected by : GevStreamChannelSelector
	
    */
    GenApi::IInteger &GevSCDCT;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief Indicates the maximum time (in ticks) that the next frame transmission could be delayed due to a burst of resends

	If the Bandwidth Reserve Accumulation parameter is set to a high value, the camera can experience periods where there is a large burst of data resends. This burst of resends will delay the start of transmission of the next acquired image. The Frame Max Jitter parameter indicates the maximum time in ticks that the next frame transmission could be delayed due to a burst of resends.
	
		\b Visibility = Expert
	
		\b Selected by : GevStreamChannelSelector
	
    */
    GenApi::IInteger &GevSCFJM;
    
    //@}
    

	//! \name UserSets - This category includes items that control the configuration sets feature that is used to save sets of parameters in the camera
    //@{
	/*!	
		\brief Loads the selected configuration into the camera's volatile memory and makes it the active configuration set. Once the selected set is loaded, the parameters in the selected set will control the camera.

	This command loads the selected configuration set from the non-volatile memory in the camera to the volatile memory and makes the selected set the active configuration set. Once the selected set is loaded, the parameters in the selected set will control the camera.
	
		\b Visibility = Beginner
        
	
		\b Selected by : UserSetSelector
	
    */
    GenApi::ICommand &UserSetLoad;
    
    //@}
    

	//! \name UserSets - This category includes items that control the configuration sets feature that is used to save sets of parameters in the camera
    //@{
	/*!	
		\brief Saves the current active configuration set into the selected user set. 

	This command copies the parameters in the current active configuration set into the selected user set in the camera's non-volatile memory.
	
		\b Visibility = Beginner
        
	
		\b Selected by : UserSetSelector
	
    */
    GenApi::ICommand &UserSetSave;
    
    //@}
    

	//! \name UserSets - This category includes items that control the configuration sets feature that is used to save sets of parameters in the camera
    //@{
	/*!	
		\brief Selects the configuration set to load, save, or configure. Once a configuration set has been selected, all changes to the configuration set settings will be applied to the selected configuration set.

	This enumeration selects the configuration set to load, save or configure. Possible values for the User Set Selector are: Default: Selects a configuration set that contains factory settings. User Set 1: Selects the first user set. When the Default configuration set is selected and loaded using User Set Load, the device must be in default factory settings state and must make sure the mandatory continuous acquisition use case works directly. Default User Set is read-only and cannot be modified.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<UserSetSelectorEnums > &UserSetSelector;
    
    //@}
    

	//! \name UserSets - This category includes items that control the configuration sets feature that is used to save sets of parameters in the camera
    //@{
	/*!	
		\brief Sets the configuration set to be used as the default startup set. The configuration set that has been selected as the default startup set will be loaded as the active set whenever the camera is powered on or reset.

	This enumeration sets the configuration set to be used as the default startup set. The configuration set that has been selected as the default startup set will be loaded as the active set whenever the camera is powered on or reset.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<UserSetDefaultSelectorEnums > &UserSetDefaultSelector;
    
    //@}
    

	//! \name UserSets - This category includes items that control the configuration sets feature that is used to save sets of parameters in the camera
    //@{
	/*!	
		\brief Selects the which factory setting will be used as default set.

	Selects the which factory setting will be used as default set.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<DefaultSetSelectorEnums > &DefaultSetSelector;
    
    //@}
    

	//! \name AutoFunctions - This category includes items that parameterize the Auto Functions
    //@{
	/*!	
		\brief Target average gray value for Gain Auto and Exposure Auto

	The target average gray value may range from nearly black to nearly white. Note that this range of gray values applies to 8 bit and to 16 bit (12 bit effective) output modes. Accordingly, also for 16 bit output modes, black is represented by 0 and white by 255.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &AutoTargetValue;
    
    //@}
    

	//! \name AutoFunctions - This category includes items that parameterize the Auto Functions
    //@{
	/*!	
		\brief Gray value adjustment damping for Gain Auto and Exposure Auto

	The gray value adjustment damping parameter controls the rate by which pixel gray values are changed when Exposure Auto and/or Gain Auto are enabled.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IFloat &GrayValueAdjustmentDampingAbs;
    
    //@}
    

	//! \name AutoFunctions - This category includes items that parameterize the Auto Functions
    //@{
	/*!	
		\brief Gray value adjustment damping for Gain Auto and Exposure Auto

	The gray value adjustment damping parameter controls the rate by which pixel gray values are changed when Exposure Auto and/or Gain Auto are enabled.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &GrayValueAdjustmentDampingRaw;
    
    //@}
    

	//! \name AutoFunctions - This category includes items that parameterize the Auto Functions
    //@{
	/*!	
		\brief Lower limit of the Auto Gain (Raw) parameter

	Lower limit of the Auto Gain (Raw) parameter
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &AutoGainRawLowerLimit;
    
    //@}
    

	//! \name AutoFunctions - This category includes items that parameterize the Auto Functions
    //@{
	/*!	
		\brief Upper limit of the Auto Gain (Raw) parameter

	Upper limit of the Auto Gain (Raw) parameter
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &AutoGainRawUpperLimit;
    
    //@}
    

	//! \name AutoFunctions - This category includes items that parameterize the Auto Functions
    //@{
	/*!	
		\brief Lower limit of the Auto Exposure Time (Abs) parameter

	Lower limit of the Auto Exposure Time (Abs) parameter
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IFloat &AutoExposureTimeAbsLowerLimit;
    
    //@}
    

	//! \name AutoFunctions - This category includes items that parameterize the Auto Functions
    //@{
	/*!	
		\brief Upper limit of the Auto Exposure Time (Abs) parameter

	Upper limit of the Auto Exposure Time (Abs) parameter
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IFloat &AutoExposureTimeAbsUpperLimit;
    
    //@}
    

	//! \name AutoFunctions - This category includes items that parameterize the Auto Functions
    //@{
	/*!	
		\brief Selects the strategy for controlling gain and shutter simultaneously.

	Selects the profile for controlling gain and shutter simultaneously.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<AutoFunctionProfileEnums > &AutoFunctionProfile;
    
    //@}
    

	//! \name AutoFunctionAOIs - Portion of the sensor array used for auto function control
    //@{
	/*!	
		\brief Sets the width of the auto function area of interest in pixels

	This value sets the width of the auto function area of interest in pixels.
	
		\b Visibility = Beginner
        
	
		\b Selected by : AutoFunctionAOISelector
	
    */
    GenApi::IInteger &AutoFunctionAOIWidth;
    
    //@}
    

	//! \name AutoFunctionAOIs - Portion of the sensor array used for auto function control
    //@{
	/*!	
		\brief Sets the height of the auto function area of interest in pixels

	This value sets the height of the auto function area of interest in pixels.
	
		\b Visibility = Beginner
        
	
		\b Selected by : AutoFunctionAOISelector
	
    */
    GenApi::IInteger &AutoFunctionAOIHeight;
    
    //@}
    

	//! \name AutoFunctionAOIs - Portion of the sensor array used for auto function control
    //@{
	/*!	
		\brief Sets the starting column of the auto function area of interest in pixels

	This value sets the starting column of the auto function area of interest in pixels.
	
		\b Visibility = Beginner
        
	
		\b Selected by : AutoFunctionAOISelector
	
    */
    GenApi::IInteger &AutoFunctionAOIOffsetX;
    
    //@}
    

	//! \name AutoFunctionAOIs - Portion of the sensor array used for auto function control
    //@{
	/*!	
		\brief Sets the starting line of the auto function area of interest in pixels

	This value sets the starting line of the auto function area of interest in pixels.
	
		\b Visibility = Beginner
        
	
		\b Selected by : AutoFunctionAOISelector
	
    */
    GenApi::IInteger &AutoFunctionAOIOffsetY;
    
    //@}
    

	//! \name AutoFunctionAOIs - Portion of the sensor array used for auto function control
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Beginner
        
	
		\b Selected by : AutoFunctionAOISelector
	
    */
    GenApi::IBoolean &AutoFunctionAOIUsageIntensity;
    
    //@}
    

	//! \name AutoFunctionAOIs - Portion of the sensor array used for auto function control
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Beginner
        
	
		\b Selected by : AutoFunctionAOISelector
	
    */
    GenApi::IBoolean &AutoFunctionAOIUsageWhiteBalance;
    
    //@}
    

	//! \name AutoFunctionAOIs - Portion of the sensor array used for auto function control
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Beginner
        
	
		\b Selected by : AutoFunctionAOISelector
	
    */
    GenApi::IBoolean &AutoFunctionAOIUsageRedLightCorrection;
    
    //@}
    

	//! \name AutoFunctionAOIs - Portion of the sensor array used for auto function control
    //@{
	/*!	
		\brief Selects the Auto Function AOI.

	Selects the Auto Function AOI.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<AutoFunctionAOISelectorEnums > &AutoFunctionAOISelector;
    
    //@}
    

	//! \name ColorOverexposureCompensation - Compensates for deviations of hue resulting from overexposure
    //@{
	/*!	
		\brief Selcts the AOI for color overexposure compensation

	Selcts the area of interest where color overexposure compensation will be performed. 
	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<ColorOverexposureCompensationAOISelectorEnums > &ColorOverexposureCompensationAOISelector;
    
    //@}
    

	//! \name ColorOverexposureCompensation - Compensates for deviations of hue resulting from overexposure
    //@{
	/*!	
		\brief Enables color overexposure compensation

	Enables color overexposure compensation.
	
		\b Visibility = Beginner
        
	
		\b Selected by : ColorOverexposureCompensationAOISelector
	
    */
    GenApi::IBoolean &ColorOverexposureCompensationAOIEnable;
    
    //@}
    

	//! \name ColorOverexposureCompensation - Compensates for deviations of hue resulting from overexposure
    //@{
	/*!	
		\brief Sets the color overexposure compensation factor for the selected C.O.C. AOI

	Sets the color overexposure compensation factor controlling the extent of compensation for the selected C.O.C. AOI.
	
		\b Visibility = Guru
	
		\b Selected by : ColorOverexposureCompensationAOISelector
	
    */
    GenApi::IFloat &ColorOverexposureCompensationAOIFactor;
    
    //@}
    

	//! \name ColorOverexposureCompensation - Compensates for deviations of hue resulting from overexposure
    //@{
	/*!	
		\brief Sets the raw value for the color overexposure compensation factor

	Sets the raw value for the color overexposure compensation factor.
	
		\b Visibility = Guru
	
		\b Selected by : ColorOverexposureCompensationAOISelector
	
    */
    GenApi::IInteger &ColorOverexposureCompensationAOIFactorRaw;
    
    //@}
    

	//! \name ColorOverexposureCompensation - Compensates for deviations of hue resulting from overexposure
    //@{
	/*!	
		\brief Sets the width for the selected C.O.C. AOI

	Sets the width for the selected Color Overexposure Compensation AOI.
	
		\b Visibility = Guru
	
		\b Selected by : ColorOverexposureCompensationAOISelector
	
    */
    GenApi::IInteger &ColorOverexposureCompensationAOIWidth;
    
    //@}
    

	//! \name ColorOverexposureCompensation - Compensates for deviations of hue resulting from overexposure
    //@{
	/*!	
		\brief Sets the height for the selected C.O.C. AOI

	Sets the height for the selected Color Overexposure Compensation AOI.
	
		\b Visibility = Guru
	
		\b Selected by : ColorOverexposureCompensationAOISelector
	
    */
    GenApi::IInteger &ColorOverexposureCompensationAOIHeight;
    
    //@}
    

	//! \name ColorOverexposureCompensation - Compensates for deviations of hue resulting from overexposure
    //@{
	/*!	
		\brief Sets the X offset for the selected C.O.C. AOI

	Sets the horizontal offset for the selected Color Overexposure Compensation AOI.
	
		\b Visibility = Guru
	
		\b Selected by : ColorOverexposureCompensationAOISelector
	
    */
    GenApi::IInteger &ColorOverexposureCompensationAOIOffsetX;
    
    //@}
    

	//! \name ColorOverexposureCompensation - Compensates for deviations of hue resulting from overexposure
    //@{
	/*!	
		\brief Sets the Y offset for the selected C.O.C. AOI

	Sets the vertical offset for the selected Color Overexposure Compensation AOI.
	
		\b Visibility = Guru
	
		\b Selected by : ColorOverexposureCompensationAOISelector
	
    */
    GenApi::IInteger &ColorOverexposureCompensationAOIOffsetY;
    
    //@}
    

	//! \name Shading - Includes items used to control the operation of the camera's shading correction.
    //@{
	/*!	
		\brief Selects the kind of shading correction.

	This enumeration selects the kind of shading correction.
	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<ShadingSelectorEnums > &ShadingSelector;
    
    //@}
    

	//! \name Shading - Includes items used to control the operation of the camera's shading correction.
    //@{
	/*!	
		\brief Enables the selected kind of shading correction.

	This boolean value enables the selected kind of shading correction.
	
		\b Visibility = Beginner
        
	
		\b Selected by : ShadingSelector
	
    */
    GenApi::IBoolean &ShadingEnable;
    
    //@}
    

	//! \name Shading - Includes items used to control the operation of the camera's shading correction.
    //@{
	/*!	
		\brief Indicates error statuses related to shading correction.

	This enumeratuion indicates error statuses related to shading correction.
	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<ShadingStatusEnums > &ShadingStatus;
    
    //@}
    

	//! \name Shading - Includes items used to control the operation of the camera's shading correction.
    //@{
	/*!	
		\brief Selects the bootup shading set.

	This enumeration selects the shading set that will be loaded into the volatile memory during camera bootup.
	
		\b Visibility = Guru
	
		\b Selected by : ShadingSelector
	
    */
    GenApi::IEnumerationT<ShadingSetDefaultSelectorEnums > &ShadingSetDefaultSelector;
    
    //@}
    

	//! \name Shading - Includes items used to control the operation of the camera's shading correction.
    //@{
	/*!	
		\brief Selects the shading set to which the activate command will be applied.

	This enumeration selects the shading set to which the activate command will be applied.
	
		\b Visibility = Guru
	
		\b Selected by : ShadingSelector
	
    */
    GenApi::IEnumerationT<ShadingSetSelectorEnums > &ShadingSetSelector;
    
    //@}
    

	//! \name Shading - Includes items used to control the operation of the camera's shading correction.
    //@{
	/*!	
		\brief Activates the selected shading set.

	This command copies the selected shading set from the camera's non-volatile memory into the volatile memory. Shading correction is performed using the shading set in the volatile memory.
	
		\b Visibility = Beginner
        
	
		\b Selected by : ShadingSetSelector
	
    */
    GenApi::ICommand &ShadingSetActivate;
    
    //@}
    

	//! \name Shading - Includes items used to control the operation of the camera's shading correction.
    //@{
	/*!	
		\brief Creates a shading set.

	This command creates a shading set for the preselected kind of shading correction and saves it using the preselected file name.
	
		\b Visibility = Beginner
        
	
		\b Selected by : ShadingSetSelector
	
    */
    GenApi::ICommand &ShadingSetCreate;
    
    //@}
    

	//! \name UserDefinedValues - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<UserDefinedValueSelectorEnums > &UserDefinedValueSelector;
    
    //@}
    

	//! \name UserDefinedValues - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
		\b Selected by : UserDefinedValueSelector
	
    */
    GenApi::IInteger &UserDefinedValue;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Indicates the name of the device's vendor

	This is a read only element. It is a text description that indicates the name of the device's vendor.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IString &DeviceVendorName;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Indicates the model name of the device

	This is a read only element. It is a text description that indicates the model name of the device.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IString &DeviceModelName;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Provides additional information from the vendor about the device

	This is a read only element. It is a string that provides additional information from the vendor about the camera.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IString &DeviceManufacturerInfo;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Indicates the version of the device

	This is a read only element. It is a string that indicates the version of the device.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IString &DeviceVersion;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Indicates the version of the device's firmware and software

	This is a read only element. It is a string that indicates the version of the device's firmware and software.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IString &DeviceFirmwareVersion;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief A unique identifier for the device such as a serial number or a GUID

	This is a read only element. It is a string that provides a unique identifier for the device such as a serial number or a GUID.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IString &DeviceID;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief A device ID that is user programmable

	This is a read/write element. It is a user programmable string.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IString &DeviceUserID;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Immediately resets and reboots the device

	This is a command that immediately resets and reboots the device.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::ICommand &DeviceReset;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Indicates the scan type of the device's sensor

	This enumeration lists the possible scan types for the sensor in the device.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<DeviceScanTypeEnums > &DeviceScanType;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Indicates the error that was detected last

	Indicates the error that was detected last.
	
		\b Visibility = Expert
	
    */
    GenApi::IEnumerationT<LastErrorEnums > &LastError;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Erases the last error and possibly reveals a previous error

	Erases the last error and possibly reveals a previous error.
	
		\b Visibility = Expert
	
    */
    GenApi::ICommand &ClearLastError;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Lists the temperature sources available for readout

	Lists the temperature sources available for readout
	
		\b Visibility = Expert
	
    */
    GenApi::IEnumerationT<TemperatureSelectorEnums > &TemperatureSelector;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Shows the current temperature of the selected target in degrees celcius

	Shows the current temperature of the selected target in degrees celcius
	
		\b Visibility = Expert
	
		\b Selected by : TemperatureSelector
	
    */
    GenApi::IFloat &TemperatureAbs;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Temperature State

	Temperature State
	
		\b Visibility = Expert
	
    */
    GenApi::IEnumerationT<TemperatureStateEnums > &TemperatureState;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Shows the over temperature state of the selected target

	Shows the over temperature state of the selected target
	
		\b Visibility = Expert
	
    */
    GenApi::IBoolean &CriticalTemperature;
    
    //@}
    

	//! \name DeviceInformation - This category includes items that describe the device and its sensor
    //@{
	/*!	
		\brief Shows the over temperature state of the selected target

	Shows the over temperature state of the selected target
	
		\b Visibility = Expert
	
    */
    GenApi::IBoolean &OverTemperature;
    
    //@}
    

	//! \name RemoveParamLimits - This category includes items that allow removing the limits of camera parameters
    //@{
	/*!	
		\brief Removes the factory-set limits of the selected parameter.

	Removes the factory-set limits of the selected parameter. Having removed the factory-set limits you may set the parameter within extended limits. These are only defined by technical restrictions. Note:  Inferior image quality may result.
	
		\b Visibility = Guru
	
		\b Selected by : ParameterSelector
	
    */
    GenApi::IBoolean &RemoveLimits;
    
    //@}
    

	//! \name RemoveParamLimits - This category includes items that allow removing the limits of camera parameters
    //@{
	/*!	
		\brief Selects the parameter to configure. Once a parameter has been selected, all changes made using the Remove Limits feature will be applied to the selected parameter

	This enumeration selects the parameter to configure. Selects the parameter to configure. Once a parameter has been selected, all changes made using the Remove Limits feature will be applied to the selected parameter
	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<ParameterSelectorEnums > &ParameterSelector;
    
    //@}
    

	//! \name RemoveParamLimits - This category includes items that allow removing the limits of camera parameters
    //@{
	/*!	
		\brief Sets the number of prelines

	This value sets the number of prelines.
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &Prelines;
    
    //@}
    

	//! \name ExpertFeatureAccess - 
    //@{
	/*!	
		\brief Selects the feature to configure. Once a feature has been selected, all changes made using the feature enable feature will be applied to the selected feature

	Selects the feature to configure. Once a feature has been selected, all changes made using the feature enable feature will be applied to the selected feature
	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<ExpertFeatureAccessSelectorEnums > &ExpertFeatureAccessSelector;
    
    //@}
    

	//! \name ExpertFeatureAccess - 
    //@{
	/*!	
		\brief Sets the key to access the selected feature

	Sets the key to access the selected feature
	
		\b Visibility = Guru
	
		\b Selected by : ExpertFeatureAccessSelector
	
    */
    GenApi::IInteger &ExpertFeatureAccessKey;
    
    //@}
    

	//! \name ExpertFeatureAccess - 
    //@{
	/*!	
		\brief Enable the selected Feature

	Enable the selected Feature
	
		\b Visibility = Guru
	
		\b Selected by : ExpertFeatureAccessSelector
	
    */
    GenApi::IBoolean &ExpertFeatureEnable;
    
    //@}
    

	//! \name PixelStepCorrection - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
    */
    GenApi::IBoolean &PixelStepCorrectionEnable;
    
    //@}
    

	//! \name PixelStepCorrection - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<PixelStepCorrectionSelectorEnums > &PixelStepCorrectionSelector;
    
    //@}
    

	//! \name PixelStepCorrection - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
		\b Selected by : PixelStepCorrectionSelector
	
    */
    GenApi::IInteger &PixelStepCorrectionValueRaw;
    
    //@}
    

	//! \name PixelStepCorrection - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
		\b Selected by : PixelStepCorrectionSelector
	
    */
    GenApi::IFloat &PixelStepCorrectionValueAbs;
    
    //@}
    

	//! \name PixelStepCorrection - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::ICommand &SavePixelStepCorrection;
    
    //@}
    

	//! \name PixelStepCorrection - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::ICommand &CreatePixelStepCorrection;
    
    //@}
    

	//! \name PixelStepCorrection - 
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &PixelStepCorrectionBusy;
    
    //@}
    

	//! \name ChunkDataStreams - This category includes items that control the chunk features available on the camera.
    //@{
	/*!	
		\brief Enables the chunk mode

	This boolean value enables the camera's chunk mode.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IBoolean &ChunkModeActive;
    
    //@}
    

	//! \name ChunkDataStreams - This category includes items that control the chunk features available on the camera.
    //@{
	/*!	
		\brief Enables the inclusion of the selected chunk in the payload data

	This boolean value enables the inclusion of the selected chunk in the payload data.
	
		\b Visibility = Beginner
        
	
		\b Selected by : ChunkSelector
	
    */
    GenApi::IBoolean &ChunkEnable;
    
    //@}
    

	//! \name ChunkDataStreams - This category includes items that control the chunk features available on the camera.
    //@{
	/*!	
		\brief Selects chunks for enabling.

	This enumeration selects chunks for enabling.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<ChunkSelectorEnums > &ChunkSelector;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Indicates the number of bytes of data between the beginning of one line in the acquired image and the beginning of the next line in the acquired image

	This value indicates the number of bytes of data between the beginning of one line in the acquired image and the beginning of the next line in the acquired image.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkStride;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Indicates the sequence set index number related to the acquired image

	This value indicates the sequence set index number related to the acquired image.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkSequenceSetIndex;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Indicates the X offset of the area of interest represented in the acquired image

	This value Indicates the X offset of the area of interest represented in the acquired image.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkOffsetX;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Indicates the Y offset of the area of interest represented in the acquired image

	This value Indicates the Y offset of the area of interest represented in the acquired image.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkOffsetY;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Indicates the widtth of the area of interest represented in the acquired image.

	This value Indicates the width of the area of interest represented in the acquired image.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkWidth;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Indicates the height of the area of interest represented in the acquired image.

	This value Indicates the height of the area of interest represented in the acquired image.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkHeight;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Indicates the minimum possible pixel value in the acquired image

	This value indicates the minimum possible pixel value in the acquired image.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkDynamicRangeMin;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Indicates the maximum possible pixel value in the acquired image

	This value indicates indicates the maximum possible pixel value acquired in the image
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkDynamicRangeMax;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Indicates the format of the pixel data in the acquired image

	This enumeration lists the pixel formats that can be indicated by the pixel format chunk.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<ChunkPixelFormatEnums > &ChunkPixelFormat;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Indicates the value of the timestamp when the image was acquired

	This integer indicates the value of the timestamp when the image was acquired.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkTimestamp;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Indicates the value of the frame counter when the image was acquired

	This integer indicates the value of the frame counter when the image was acquired.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkFramecounter;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief A bit field that indicates the status of all of the camera's input and output lines when the image was acquired

	This value is a bit field that indicates the status of all of the camera's input and output lines when the image was acquired.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkLineStatusAll;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Indicates the value of the trigger input counter when the image was acquired

	This integer indicates the value of the trigger input counter when the image was acquired.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkTriggerinputcounter;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkLineTriggerIgnoredCounter;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkFrameTriggerIgnoredCounter;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkLineTriggerEndToEndCounter;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkFrameTriggerCounter;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkFramesPerTriggerCounter;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Number of bits per status

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkInputStatusAtLineTriggerBitsPerLine;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Used to select a certain status

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkInputStatusAtLineTriggerIndex;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Value of the status selected by 'Index'

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkInputStatusAtLineTriggerValue;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Shaft encoder counter at frame trigger

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkShaftEncoderCounter;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief Indicates the value of CRC checksum

	This integer indicates the value of CRC checksum.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkPayloadCRC16;
    
    //@}
    

	//! \name ChunkData - This category includes items related to the chunk data that can be appended to the image data
    //@{
	/*!	
		\brief 

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IFloat &ChunkExposureTime;
    
    //@}
    

	//! \name EventsGeneration - This category includes items that control event generation by the camera.
    //@{
	/*!	
		\brief Selects the type of event for enabling.

	This enumeration selects the type of event for enabling.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IEnumerationT<EventSelectorEnums > &EventSelector;
    
    //@}
    

	//! \name EventsGeneration - This category includes items that control event generation by the camera.
    //@{
	/*!	
		\brief Sets the notification type that will be sent to the host application for the selected event 

	This enumeration sets the notification type that will be sent to the host application for the selected event.
	
		\b Visibility = Beginner
        
	
		\b Selected by : EventSelector
	
    */
    GenApi::IEnumerationT<EventNotificationEnums > &EventNotification;
    
    //@}
    

	//! \name ExposureEndEventData - This category includes items available for an exposure end event
    //@{
	/*!	
		\brief Indicates the stream channel index for an exposure end event

	This enumeration value indicates the stream channel index for an exposure end event.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ExposureEndEventStreamChannelIndex;
    
    //@}
    

	//! \name ExposureEndEventData - This category includes items available for an exposure end event
    //@{
	/*!	
		\brief Indicates the frame ID for an exposure end event

	This enumeration value indicates the frame ID for an exposure end event.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ExposureEndEventFrameID;
    
    //@}
    

	//! \name ExposureEndEventData - This category includes items available for an exposure end event
    //@{
	/*!	
		\brief Indicates the time stamp for an exposure end event

	This enumeration value indicates the time stamp for an exposure end event.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ExposureEndEventTimestamp;
    
    //@}
    

	//! \name LineStartOvertriggerEventData - This category includes items available for an line start overtrigger event
    //@{
	/*!	
		\brief Indicates the stream channel index for an line start overtrigger event

	This enumeration Indicates the stream channel index for an line start overtrigger event
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &LineStartOvertriggerEventStreamChannelIndex;
    
    //@}
    

	//! \name LineStartOvertriggerEventData - This category includes items available for an line start overtrigger event
    //@{
	/*!	
		\brief Indicates the time stamp for an line start overtrigger event

	This enumeration value indicates the time stamp for an line start overtrigger event.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &LineStartOvertriggerEventTimestamp;
    
    //@}
    

	//! \name FrameStartOvertriggerEventData - This category includes items available for an frame start overtrigger event
    //@{
	/*!	
		\brief Indicates the stream channel index for an frame start overtrigger event

	This enumeration Indicates the stream channel index for an frame start overtrigger event
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &FrameStartOvertriggerEventStreamChannelIndex;
    
    //@}
    

	//! \name FrameStartOvertriggerEventData - This category includes items available for an frame start overtrigger event
    //@{
	/*!	
		\brief Indicates the time stamp for an frame start overtrigger event

	This enumeration value indicates the time stamp for an frame start overtrigger event.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &FrameStartOvertriggerEventTimestamp;
    
    //@}
    

	//! \name FrameStartEventData - This category includes items available for an frame start  event
    //@{
	/*!	
		\brief Indicates the stream channel index for an frame start  event

	This enumeration Indicates the stream channel index for an frame start  event
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &FrameStartEventStreamChannelIndex;
    
    //@}
    

	//! \name FrameStartEventData - This category includes items available for an frame start  event
    //@{
	/*!	
		\brief Indicates the time stamp for an frame start  event

	This enumeration value indicates the time stamp for an frame start  event.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &FrameStartEventTimestamp;
    
    //@}
    

	//! \name AcquisitionStartEventData - This category includes items available for an acquisition start  event
    //@{
	/*!	
		\brief Indicates the stream channel index for an acquisition start  event

	This enumeration Indicates the stream channel index for an acquisition start  event
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &AcquisitionStartEventStreamChannelIndex;
    
    //@}
    

	//! \name AcquisitionStartEventData - This category includes items available for an acquisition start  event
    //@{
	/*!	
		\brief Indicates the time stamp for an acquisition start  event

	This enumeration value indicates the time stamp for an acquisition start  event.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &AcquisitionStartEventTimestamp;
    
    //@}
    

	//! \name AcquisitionStartOvertriggerEventData - This category includes items available for an acquisition start overtrigger event
    //@{
	/*!	
		\brief Indicates the stream channel index for an acquisition start overtrigger event

	This enumeration Indicates the stream channel index for an acquisition start overtrigger event
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &AcquisitionStartOvertriggerEventStreamChannelIndex;
    
    //@}
    

	//! \name AcquisitionStartOvertriggerEventData - This category includes items available for an acquisition start overtrigger event
    //@{
	/*!	
		\brief Indicates the time stamp for an Acquisition start overtrigger event

	This enumeration value indicates the time stamp for an Acquisition start overtrigger event.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &AcquisitionStartOvertriggerEventTimestamp;
    
    //@}
    

	//! \name FrameTimeoutEventData - This category includes items available for an frame timeout event
    //@{
	/*!	
		\brief Indicates the stream channel index for an frame timeout event

	This enumeration Indicates the stream channel index for an frame timeout event
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &FrameTimeoutEventStreamChannelIndex;
    
    //@}
    

	//! \name FrameTimeoutEventData - This category includes items available for an frame timeout event
    //@{
	/*!	
		\brief Indicates the time stamp for an frame timeout event

	This enumeration value indicates the time stamp for an frame timeout event.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &FrameTimeoutEventTimestamp;
    
    //@}
    

	//! \name EventOverrunEventData - This category includes items available for an event overrun event
    //@{
	/*!	
		\brief Indicates the stream channel index for an event overrun event

	This enumeration value indicates the stream channel index for an event overrun event
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &EventOverrunEventStreamChannelIndex;
    
    //@}
    

	//! \name EventOverrunEventData - This category includes items available for an event overrun event
    //@{
	/*!	
		\brief Indicates the frame ID for an event overrun event

	This enumeration value indicates the frame ID for an event overrun event
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &EventOverrunEventFrameID;
    
    //@}
    

	//! \name EventOverrunEventData - This category includes items available for an event overrun event
    //@{
	/*!	
		\brief Indicates the time stamp for an event overrun event

	This enumeration value indicates the time stamp for an event overrun event
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &EventOverrunEventTimestamp;
    
    //@}
    

	//! \name CriticalTemperatureEventData - This category includes items available for a critical temperature event
    //@{
	/*!	
		\brief Indicates the stream channel index for a critical temperature event

	This enumeration Indicates the stream channel index for a critical temperature event.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &CriticalTemperatureEventStreamChannelIndex;
    
    //@}
    

	//! \name CriticalTemperatureEventData - This category includes items available for a critical temperature event
    //@{
	/*!	
		\brief Indicates the time stamp for a critical temperature event

	This enumeration value indicates the time stamp for a critical temperature event.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &CriticalTemperatureEventTimestamp;
    
    //@}
    

	//! \name OverTemperatureEventData - This category includes items available for an over temperature event
    //@{
	/*!	
		\brief Indicates the stream channel index for an over temperature event

	This enumeration Indicates the stream channel index for an over temperature event.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &OverTemperatureEventStreamChannelIndex;
    
    //@}
    

	//! \name OverTemperatureEventData - This category includes items available for an over temperature event
    //@{
	/*!	
		\brief Indicates the time stamp for an over temperature event

	This enumeration value indicates the time stamp for an over temperature event.
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &OverTemperatureEventTimestamp;
    
    //@}
    

	//! \name TransportLayer - This category includes items related to the GigE Vision transport layer
    //@{
	/*!	
		\brief  Indicates whether a live grab is under way

	
	
		\b Visibility = Invisible
	
    */
    GenApi::IInteger &TLParamsLocked;
    
    //@}
    

	//! \name FileAccessControl - This category includes items used to conduct file operations
    //@{
	/*!	
		\brief This feature selects the target file in the device

	The File Selector feature selects the target file in the device.
	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<FileSelectorEnums > &FileSelector;
    
    //@}
    

	//! \name FileAccessControl - This category includes items used to conduct file operations
    //@{
	/*!	
		\brief Selects the target operation for the selected file

	The File Operation Selector feature selects the target operation for the selected file in the device. This Operation is executed when the FileOperationExecute feature is called.
	
		\b Visibility = Guru
	
		\b Selected by : FileSelector
	
    */
    GenApi::IEnumerationT<FileOperationSelectorEnums > &FileOperationSelector;
    
    //@}
    

	//! \name FileAccessControl - This category includes items used to conduct file operations
    //@{
	/*!	
		\brief Selects the access mode in which a file is opened

	The File Open Mode feature selects the access mode in which a file is opened in the device.
	
		\b Visibility = Guru
	
		\b Selected by : FileSelector
	
    */
    GenApi::IEnumerationT<FileOpenModeEnums > &FileOpenMode;
    
    //@}
    

	//! \name FileAccessControl - This category includes items used to conduct file operations
    //@{
	/*!	
		\brief Defines the intermediate access buffer

	The File Access Buffer feature defines the intermediate access buffer that allows the exchange of data between the device file storage and the application.
	
		\b Visibility = Guru
	
		\b Selected by : FileSelector
	
    */
    GenApi::IRegister &FileAccessBuffer;
    
    //@}
    

	//! \name FileAccessControl - This category includes items used to conduct file operations
    //@{
	/*!	
		\brief Controls the mapping between the device file storage and the FileAccessBuffer

	This feature controls the mapping between the device file storage and the FileAccessBuffer.
	
		\b Visibility = Guru
	
		\b Selected by : FileSelector, FileOperationSelector
	
    */
    GenApi::IInteger &FileAccessOffset;
    
    //@}
    

	//! \name FileAccessControl - This category includes items used to conduct file operations
    //@{
	/*!	
		\brief Controls the mapping between the device file storage and the FileAccessBuffer

	This feature controls the mapping between the device file storage and the FileAccessBuffer.
	
		\b Visibility = Guru
	
		\b Selected by : FileSelector, FileOperationSelector
	
    */
    GenApi::IInteger &FileAccessLength;
    
    //@}
    

	//! \name FileAccessControl - This category includes items used to conduct file operations
    //@{
	/*!	
		\brief Represents the file operation execution status

	The File Operation Status feature represents the file operation execution status.
	
		\b Visibility = Guru
	
		\b Selected by : FileSelector, FileOperationSelector
	
    */
    GenApi::IEnumerationT<FileOperationStatusEnums > &FileOperationStatus;
    
    //@}
    

	//! \name FileAccessControl - This category includes items used to conduct file operations
    //@{
	/*!	
		\brief Represents the file operation result

	The File Operation Result feature represents the file operation result. For Read or Write operations, the number of successfully read/written bytes is returned.
	
		\b Visibility = Guru
	
		\b Selected by : FileSelector, FileOperationSelector
	
    */
    GenApi::IInteger &FileOperationResult;
    
    //@}
    

	//! \name FileAccessControl - This category includes items used to conduct file operations
    //@{
	/*!	
		\brief Represents the size of the selected file

	The File Size feature represents the size of the selected file in bytes.
	
		\b Visibility = Guru
	
		\b Selected by : FileSelector
	
    */
    GenApi::IInteger &FileSize;
    
    //@}
    

	//! \name FileAccessControl - This category includes items used to conduct file operations
    //@{
	/*!	
		\brief Executes the selected operation

	The File Operation Execute feature is the command that executes the operation selected by FileOperationSelector on the selected file.
	
		\b Visibility = Guru
	
		\b Selected by : FileSelector, FileOperationSelector
	
    */
    GenApi::ICommand &FileOperationExecute;
    
    //@}
    


    private:
        //! \cond HIDE_CLASS_METHODS

            //! not implemented copy constructor
            CGigECamera_Params(CGigECamera_Params&);

            //! not implemented assignment operator
            CGigECamera_Params& operator=(CGigECamera_Params&);

        //! \endcond
    };


    //**************************************************************************************************
    // Parameter class implementation
    //**************************************************************************************************

    //! \cond HIDE_CLASS_METHODS

    inline CGigECamera_Params::CGigECamera_Params(void)
        : SequenceEnable( *new GenApi::CBooleanRef() )
        , SequenceAsyncRestart( *new GenApi::CCommandRef() )
        , SequenceAsyncAdvance( *new GenApi::CCommandRef() )
        , SequenceCurrentSet( *new GenApi::CIntegerRef() )
        , SequenceSetTotalNumber( *new GenApi::CIntegerRef() )
        , SequenceSetIndex( *new GenApi::CIntegerRef() )
        , SequenceSetLoad( *new GenApi::CCommandRef() )
        , SequenceSetStore( *new GenApi::CCommandRef() )
        , SequenceSetExecutions( *new GenApi::CIntegerRef() )
        , SequenceAdvanceMode( *new GenApi::CEnumerationTRef<SequenceAdvanceModeEnums>() )
        , SequenceControlSelector( *new GenApi::CEnumerationTRef<SequenceControlSelectorEnums>() )
        , SequenceControlSource( *new GenApi::CEnumerationTRef<SequenceControlSourceEnums>() )
        , SequenceAddressBitSelector( *new GenApi::CEnumerationTRef<SequenceAddressBitSelectorEnums>() )
        , SequenceAddressBitSource( *new GenApi::CEnumerationTRef<SequenceAddressBitSourceEnums>() )
        , GainAuto( *new GenApi::CEnumerationTRef<GainAutoEnums>() )
        , GainRaw( *new GenApi::CIntegerRef() )
        , GainAbs( *new GenApi::CFloatRef() )
        , GainSelector( *new GenApi::CEnumerationTRef<GainSelectorEnums>() )
        , BlackLevelRaw( *new GenApi::CIntegerRef() )
        , BlackLevelAbs( *new GenApi::CFloatRef() )
        , BlackLevelSelector( *new GenApi::CEnumerationTRef<BlackLevelSelectorEnums>() )
        , GammaEnable( *new GenApi::CBooleanRef() )
        , GammaSelector( *new GenApi::CEnumerationTRef<GammaSelectorEnums>() )
        , Gamma( *new GenApi::CFloatRef() )
        , DigitalShift( *new GenApi::CIntegerRef() )
        , SubstrateVoltage( *new GenApi::CIntegerRef() )
        , PixelFormat( *new GenApi::CEnumerationTRef<PixelFormatEnums>() )
        , PixelCoding( *new GenApi::CEnumerationTRef<PixelCodingEnums>() )
        , PixelSize( *new GenApi::CEnumerationTRef<PixelSizeEnums>() )
        , PixelColorFilter( *new GenApi::CEnumerationTRef<PixelColorFilterEnums>() )
        , ProcessedRawEnable( *new GenApi::CBooleanRef() )
        , SpatialCorrection( *new GenApi::CIntegerRef() )
        , SpatialCorrectionAmount( *new GenApi::CIntegerRef() )
        , SpatialCorrectionStartingLine( *new GenApi::CEnumerationTRef<SpatialCorrectionStartingLineEnums>() )
        , SensorBitDepth( *new GenApi::CEnumerationTRef<SensorBitDepthEnums>() )
        , ReverseX( *new GenApi::CBooleanRef() )
        , ReverseY( *new GenApi::CBooleanRef() )
        , PixelDynamicRangeMin( *new GenApi::CIntegerRef() )
        , PixelDynamicRangeMax( *new GenApi::CIntegerRef() )
        , FieldOutputMode( *new GenApi::CEnumerationTRef<FieldOutputModeEnums>() )
        , Deinterlacer( *new GenApi::CEnumerationTRef<DeinterlacerEnums>() )
        , TestImageSelector( *new GenApi::CEnumerationTRef<TestImageSelectorEnums>() )
        , SensorDigitizationTaps( *new GenApi::CEnumerationTRef<SensorDigitizationTapsEnums>() )
        , SensorWidth( *new GenApi::CIntegerRef() )
        , SensorHeight( *new GenApi::CIntegerRef() )
        , WidthMax( *new GenApi::CIntegerRef() )
        , HeightMax( *new GenApi::CIntegerRef() )
        , ColorTransformationSelector( *new GenApi::CEnumerationTRef<ColorTransformationSelectorEnums>() )
        , LightSourceSelector( *new GenApi::CEnumerationTRef<LightSourceSelectorEnums>() )
        , ColorTransformationMatrixFactor( *new GenApi::CFloatRef() )
        , ColorTransformationMatrixFactorRaw( *new GenApi::CIntegerRef() )
        , ColorTransformationValueSelector( *new GenApi::CEnumerationTRef<ColorTransformationValueSelectorEnums>() )
        , ColorTransformationValue( *new GenApi::CFloatRef() )
        , ColorTransformationValueRaw( *new GenApi::CIntegerRef() )
        , ColorAdjustmentEnable( *new GenApi::CBooleanRef() )
        , ColorAdjustmentReset( *new GenApi::CCommandRef() )
        , ColorAdjustmentSelector( *new GenApi::CEnumerationTRef<ColorAdjustmentSelectorEnums>() )
        , ColorAdjustmentHue( *new GenApi::CFloatRef() )
        , ColorAdjustmentHueRaw( *new GenApi::CIntegerRef() )
        , ColorAdjustmentSaturation( *new GenApi::CFloatRef() )
        , ColorAdjustmentSaturationRaw( *new GenApi::CIntegerRef() )
        , BalanceWhiteReset( *new GenApi::CCommandRef() )
        , BalanceWhiteAuto( *new GenApi::CEnumerationTRef<BalanceWhiteAutoEnums>() )
        , BalanceRatioSelector( *new GenApi::CEnumerationTRef<BalanceRatioSelectorEnums>() )
        , BalanceRatioAbs( *new GenApi::CFloatRef() )
        , BalanceRatioRaw( *new GenApi::CIntegerRef() )
        , Width( *new GenApi::CIntegerRef() )
        , Height( *new GenApi::CIntegerRef() )
        , OffsetX( *new GenApi::CIntegerRef() )
        , OffsetY( *new GenApi::CIntegerRef() )
        , CenterX( *new GenApi::CBooleanRef() )
        , CenterY( *new GenApi::CBooleanRef() )
        , BinningVertical( *new GenApi::CIntegerRef() )
        , BinningHorizontal( *new GenApi::CIntegerRef() )
        , LegacyBinningVertical( *new GenApi::CEnumerationTRef<LegacyBinningVerticalEnums>() )
        , DecimationVertical( *new GenApi::CIntegerRef() )
        , DecimationHorizontal( *new GenApi::CIntegerRef() )
        , StackedZoneImagingEnable( *new GenApi::CBooleanRef() )
        , StackedZoneImagingIndex( *new GenApi::CIntegerRef() )
        , StackedZoneImagingZoneEnable( *new GenApi::CBooleanRef() )
        , StackedZoneImagingZoneOffsetY( *new GenApi::CIntegerRef() )
        , StackedZoneImagingZoneHeight( *new GenApi::CIntegerRef() )
        , EnableBurstAcquisition( *new GenApi::CBooleanRef() )
        , AcquisitionMode( *new GenApi::CEnumerationTRef<AcquisitionModeEnums>() )
        , AcquisitionStart( *new GenApi::CCommandRef() )
        , AcquisitionStop( *new GenApi::CCommandRef() )
        , AcquisitionAbort( *new GenApi::CCommandRef() )
        , AcquisitionFrameCount( *new GenApi::CIntegerRef() )
        , TriggerControlImplementation( *new GenApi::CEnumerationTRef<TriggerControlImplementationEnums>() )
        , TriggerSelector( *new GenApi::CEnumerationTRef<TriggerSelectorEnums>() )
        , TriggerMode( *new GenApi::CEnumerationTRef<TriggerModeEnums>() )
        , TriggerSoftware( *new GenApi::CCommandRef() )
        , TriggerSource( *new GenApi::CEnumerationTRef<TriggerSourceEnums>() )
        , TriggerActivation( *new GenApi::CEnumerationTRef<TriggerActivationEnums>() )
        , TriggerPartialClosingFrame( *new GenApi::CBooleanRef() )
        , TriggerDelayAbs( *new GenApi::CFloatRef() )
        , TriggerDelaySource( *new GenApi::CEnumerationTRef<TriggerDelaySourceEnums>() )
        , TriggerDelayLineTriggerCount( *new GenApi::CIntegerRef() )
        , ExposureStartDelayRaw( *new GenApi::CIntegerRef() )
        , ExposureStartDelayAbs( *new GenApi::CFloatRef() )
        , ExposureAuto( *new GenApi::CEnumerationTRef<ExposureAutoEnums>() )
        , ExposureTimeRaw( *new GenApi::CIntegerRef() )
        , ExposureTimeAbs( *new GenApi::CFloatRef() )
        , ExposureTimeBaseAbs( *new GenApi::CFloatRef() )
        , ExposureTimeBaseAbsEnable( *new GenApi::CBooleanRef() )
        , AcquisitionLineRateAbs( *new GenApi::CFloatRef() )
        , ResultingLineRateAbs( *new GenApi::CFloatRef() )
        , AcquisitionFrameRateAbs( *new GenApi::CFloatRef() )
        , AcquisitionFrameRateEnable( *new GenApi::CBooleanRef() )
        , ResultingFrameRateAbs( *new GenApi::CFloatRef() )
        , ExposureMode( *new GenApi::CEnumerationTRef<ExposureModeEnums>() )
        , GlobalResetReleaseModeEnable( *new GenApi::CBooleanRef() )
        , ExposureOverlapTimeMaxRaw( *new GenApi::CIntegerRef() )
        , InterlacedIntegrationMode( *new GenApi::CEnumerationTRef<InterlacedIntegrationModeEnums>() )
        , ExposureOverlapTimeMaxAbs( *new GenApi::CFloatRef() )
        , ReadoutTimeAbs( *new GenApi::CFloatRef() )
        , AcquisitionStatusSelector( *new GenApi::CEnumerationTRef<AcquisitionStatusSelectorEnums>() )
        , AcquisitionStatus( *new GenApi::CBooleanRef() )
        , AveragingNumberOfFrames( *new GenApi::CIntegerRef() )
        , FrameTimeoutEnable( *new GenApi::CBooleanRef() )
        , FrameTimeoutAbs( *new GenApi::CFloatRef() )
        , LineSelector( *new GenApi::CEnumerationTRef<LineSelectorEnums>() )
        , LineInverter( *new GenApi::CBooleanRef() )
        , LineTermination( *new GenApi::CBooleanRef() )
        , LineDebouncerTimeRaw( *new GenApi::CIntegerRef() )
        , LineDebouncerTimeAbs( *new GenApi::CFloatRef() )
        , MinOutPulseWidthRaw( *new GenApi::CIntegerRef() )
        , MinOutPulseWidthAbs( *new GenApi::CFloatRef() )
        , LineStatus( *new GenApi::CBooleanRef() )
        , LineStatusAll( *new GenApi::CIntegerRef() )
        , UserOutputValue( *new GenApi::CBooleanRef() )
        , UserOutputValueAll( *new GenApi::CIntegerRef() )
        , UserOutputValueAllMask( *new GenApi::CIntegerRef() )
        , SyncUserOutputValue( *new GenApi::CBooleanRef() )
        , SyncUserOutputValueAll( *new GenApi::CIntegerRef() )
        , LineMode( *new GenApi::CEnumerationTRef<LineModeEnums>() )
        , LineSource( *new GenApi::CEnumerationTRef<LineSourceEnums>() )
        , LineLogic( *new GenApi::CEnumerationTRef<LineLogicEnums>() )
        , LineFormat( *new GenApi::CEnumerationTRef<LineFormatEnums>() )
        , UserOutputSelector( *new GenApi::CEnumerationTRef<UserOutputSelectorEnums>() )
        , SyncUserOutputSelector( *new GenApi::CEnumerationTRef<SyncUserOutputSelectorEnums>() )
        , ShaftEncoderModuleLineSelector( *new GenApi::CEnumerationTRef<ShaftEncoderModuleLineSelectorEnums>() )
        , ShaftEncoderModuleLineSource( *new GenApi::CEnumerationTRef<ShaftEncoderModuleLineSourceEnums>() )
        , ShaftEncoderModuleMode( *new GenApi::CEnumerationTRef<ShaftEncoderModuleModeEnums>() )
        , ShaftEncoderModuleCounterMode( *new GenApi::CEnumerationTRef<ShaftEncoderModuleCounterModeEnums>() )
        , ShaftEncoderModuleCounter( *new GenApi::CIntegerRef() )
        , ShaftEncoderModuleCounterMax( *new GenApi::CIntegerRef() )
        , ShaftEncoderModuleCounterReset( *new GenApi::CCommandRef() )
        , ShaftEncoderModuleReverseCounterMax( *new GenApi::CIntegerRef() )
        , ShaftEncoderModuleReverseCounterReset( *new GenApi::CCommandRef() )
        , FrequencyConverterInputSource( *new GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums>() )
        , FrequencyConverterSignalAlignment( *new GenApi::CEnumerationTRef<FrequencyConverterSignalAlignmentEnums>() )
        , FrequencyConverterPreDivider( *new GenApi::CIntegerRef() )
        , FrequencyConverterMultiplier( *new GenApi::CIntegerRef() )
        , FrequencyConverterPostDivider( *new GenApi::CIntegerRef() )
        , FrequencyConverterPreventOvertrigger( *new GenApi::CBooleanRef() )
        , TimerDurationTimebaseAbs( *new GenApi::CFloatRef() )
        , TimerDelayTimebaseAbs( *new GenApi::CFloatRef() )
        , TimerSelector( *new GenApi::CEnumerationTRef<TimerSelectorEnums>() )
        , TimerDurationAbs( *new GenApi::CFloatRef() )
        , TimerDurationRaw( *new GenApi::CIntegerRef() )
        , TimerDelayAbs( *new GenApi::CFloatRef() )
        , TimerDelayRaw( *new GenApi::CIntegerRef() )
        , TimerTriggerSource( *new GenApi::CEnumerationTRef<TimerTriggerSourceEnums>() )
        , TimerTriggerActivation( *new GenApi::CEnumerationTRef<TimerTriggerActivationEnums>() )
        , TimerSequenceEnable( *new GenApi::CBooleanRef() )
        , TimerSequenceLastEntryIndex( *new GenApi::CIntegerRef() )
        , TimerSequenceCurrentEntryIndex( *new GenApi::CIntegerRef() )
        , TimerSequenceEntrySelector( *new GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums>() )
        , TimerSequenceTimerSelector( *new GenApi::CEnumerationTRef<TimerSequenceTimerSelectorEnums>() )
        , TimerSequenceTimerEnable( *new GenApi::CBooleanRef() )
        , TimerSequenceTimerInverter( *new GenApi::CBooleanRef() )
        , TimerSequenceTimerDelayRaw( *new GenApi::CIntegerRef() )
        , TimerSequenceTimerDurationRaw( *new GenApi::CIntegerRef() )
        , CounterSelector( *new GenApi::CEnumerationTRef<CounterSelectorEnums>() )
        , CounterEventSource( *new GenApi::CEnumerationTRef<CounterEventSourceEnums>() )
        , CounterResetSource( *new GenApi::CEnumerationTRef<CounterResetSourceEnums>() )
        , CounterReset( *new GenApi::CCommandRef() )
        , LUTEnable( *new GenApi::CBooleanRef() )
        , LUTIndex( *new GenApi::CIntegerRef() )
        , LUTValue( *new GenApi::CIntegerRef() )
        , LUTValueAll( *new GenApi::CRegisterRef() )
        , LUTSelector( *new GenApi::CEnumerationTRef<LUTSelectorEnums>() )
        , PixelFormatLegacy( *new GenApi::CBooleanRef() )
        , PayloadSize( *new GenApi::CIntegerRef() )
        , GevInterfaceSelector( *new GenApi::CEnumerationTRef<GevInterfaceSelectorEnums>() )
        , GevVersionMajor( *new GenApi::CIntegerRef() )
        , GevVersionMinor( *new GenApi::CIntegerRef() )
        , GevDeviceModeIsBigEndian( *new GenApi::CBooleanRef() )
        , GevDeviceModeCharacterSet( *new GenApi::CIntegerRef() )
        , GevMACAddress( *new GenApi::CIntegerRef() )
        , GevSupportedIPConfigurationLLA( *new GenApi::CBooleanRef() )
        , GevSupportedIPConfigurationDHCP( *new GenApi::CBooleanRef() )
        , GevSupportedIPConfigurationPersistentIP( *new GenApi::CBooleanRef() )
        , GevCurrentIPConfiguration( *new GenApi::CIntegerRef() )
        , GevCurrentIPAddress( *new GenApi::CIntegerRef() )
        , GevCurrentSubnetMask( *new GenApi::CIntegerRef() )
        , GevCurrentDefaultGateway( *new GenApi::CIntegerRef() )
        , GevPersistentIPAddress( *new GenApi::CIntegerRef() )
        , GevPersistentSubnetMask( *new GenApi::CIntegerRef() )
        , GevPersistentDefaultGateway( *new GenApi::CIntegerRef() )
        , GevLinkSpeed( *new GenApi::CIntegerRef() )
        , GevLinkMaster( *new GenApi::CBooleanRef() )
        , GevLinkFullDuplex( *new GenApi::CBooleanRef() )
        , GevLinkCrossover( *new GenApi::CBooleanRef() )
        , GevFirstURL( *new GenApi::CStringRef() )
        , GevSecondURL( *new GenApi::CStringRef() )
        , GevNumberOfInterfaces( *new GenApi::CIntegerRef() )
        , GevMessageChannelCount( *new GenApi::CIntegerRef() )
        , GevStreamChannelCount( *new GenApi::CIntegerRef() )
        , GevSupportedOptionalCommandsEVENTDATA( *new GenApi::CBooleanRef() )
        , GevSupportedOptionalCommandsEVENT( *new GenApi::CBooleanRef() )
        , GevSupportedOptionalCommandsPACKETRESEND( *new GenApi::CBooleanRef() )
        , GevSupportedOptionalCommandsWRITEMEM( *new GenApi::CBooleanRef() )
        , GevSupportedOptionalCommandsConcatenation( *new GenApi::CBooleanRef() )
        , GevHeartbeatTimeout( *new GenApi::CIntegerRef() )
        , GevTimestampTickFrequency( *new GenApi::CIntegerRef() )
        , GevTimestampControlReset( *new GenApi::CCommandRef() )
        , GevTimestampControlLatch( *new GenApi::CCommandRef() )
        , GevTimestampControlLatchReset( *new GenApi::CCommandRef() )
        , GevTimestampValue( *new GenApi::CIntegerRef() )
        , GevCCP( *new GenApi::CEnumerationTRef<GevCCPEnums>() )
        , GevStreamChannelSelector( *new GenApi::CEnumerationTRef<GevStreamChannelSelectorEnums>() )
        , GevSCPInterfaceIndex( *new GenApi::CIntegerRef() )
        , GevSCPHostPort( *new GenApi::CIntegerRef() )
        , GevSCPSFireTestPacket( *new GenApi::CCommandRef() )
        , GevSCPSDoNotFragment( *new GenApi::CBooleanRef() )
        , GevSCPSBigEndian( *new GenApi::CBooleanRef() )
        , GevSCPSPacketSize( *new GenApi::CIntegerRef() )
        , GevSCDA( *new GenApi::CIntegerRef() )
        , GevSCPD( *new GenApi::CIntegerRef() )
        , GevSCFTD( *new GenApi::CIntegerRef() )
        , GevSCBWR( *new GenApi::CIntegerRef() )
        , GevSCBWRA( *new GenApi::CIntegerRef() )
        , GevSCBWA( *new GenApi::CIntegerRef() )
        , GevSCDMT( *new GenApi::CIntegerRef() )
        , GevSCDCT( *new GenApi::CIntegerRef() )
        , GevSCFJM( *new GenApi::CIntegerRef() )
        , UserSetLoad( *new GenApi::CCommandRef() )
        , UserSetSave( *new GenApi::CCommandRef() )
        , UserSetSelector( *new GenApi::CEnumerationTRef<UserSetSelectorEnums>() )
        , UserSetDefaultSelector( *new GenApi::CEnumerationTRef<UserSetDefaultSelectorEnums>() )
        , DefaultSetSelector( *new GenApi::CEnumerationTRef<DefaultSetSelectorEnums>() )
        , AutoTargetValue( *new GenApi::CIntegerRef() )
        , GrayValueAdjustmentDampingAbs( *new GenApi::CFloatRef() )
        , GrayValueAdjustmentDampingRaw( *new GenApi::CIntegerRef() )
        , AutoGainRawLowerLimit( *new GenApi::CIntegerRef() )
        , AutoGainRawUpperLimit( *new GenApi::CIntegerRef() )
        , AutoExposureTimeAbsLowerLimit( *new GenApi::CFloatRef() )
        , AutoExposureTimeAbsUpperLimit( *new GenApi::CFloatRef() )
        , AutoFunctionProfile( *new GenApi::CEnumerationTRef<AutoFunctionProfileEnums>() )
        , AutoFunctionAOIWidth( *new GenApi::CIntegerRef() )
        , AutoFunctionAOIHeight( *new GenApi::CIntegerRef() )
        , AutoFunctionAOIOffsetX( *new GenApi::CIntegerRef() )
        , AutoFunctionAOIOffsetY( *new GenApi::CIntegerRef() )
        , AutoFunctionAOIUsageIntensity( *new GenApi::CBooleanRef() )
        , AutoFunctionAOIUsageWhiteBalance( *new GenApi::CBooleanRef() )
        , AutoFunctionAOIUsageRedLightCorrection( *new GenApi::CBooleanRef() )
        , AutoFunctionAOISelector( *new GenApi::CEnumerationTRef<AutoFunctionAOISelectorEnums>() )
        , ColorOverexposureCompensationAOISelector( *new GenApi::CEnumerationTRef<ColorOverexposureCompensationAOISelectorEnums>() )
        , ColorOverexposureCompensationAOIEnable( *new GenApi::CBooleanRef() )
        , ColorOverexposureCompensationAOIFactor( *new GenApi::CFloatRef() )
        , ColorOverexposureCompensationAOIFactorRaw( *new GenApi::CIntegerRef() )
        , ColorOverexposureCompensationAOIWidth( *new GenApi::CIntegerRef() )
        , ColorOverexposureCompensationAOIHeight( *new GenApi::CIntegerRef() )
        , ColorOverexposureCompensationAOIOffsetX( *new GenApi::CIntegerRef() )
        , ColorOverexposureCompensationAOIOffsetY( *new GenApi::CIntegerRef() )
        , ShadingSelector( *new GenApi::CEnumerationTRef<ShadingSelectorEnums>() )
        , ShadingEnable( *new GenApi::CBooleanRef() )
        , ShadingStatus( *new GenApi::CEnumerationTRef<ShadingStatusEnums>() )
        , ShadingSetDefaultSelector( *new GenApi::CEnumerationTRef<ShadingSetDefaultSelectorEnums>() )
        , ShadingSetSelector( *new GenApi::CEnumerationTRef<ShadingSetSelectorEnums>() )
        , ShadingSetActivate( *new GenApi::CCommandRef() )
        , ShadingSetCreate( *new GenApi::CCommandRef() )
        , UserDefinedValueSelector( *new GenApi::CEnumerationTRef<UserDefinedValueSelectorEnums>() )
        , UserDefinedValue( *new GenApi::CIntegerRef() )
        , DeviceVendorName( *new GenApi::CStringRef() )
        , DeviceModelName( *new GenApi::CStringRef() )
        , DeviceManufacturerInfo( *new GenApi::CStringRef() )
        , DeviceVersion( *new GenApi::CStringRef() )
        , DeviceFirmwareVersion( *new GenApi::CStringRef() )
        , DeviceID( *new GenApi::CStringRef() )
        , DeviceUserID( *new GenApi::CStringRef() )
        , DeviceReset( *new GenApi::CCommandRef() )
        , DeviceScanType( *new GenApi::CEnumerationTRef<DeviceScanTypeEnums>() )
        , LastError( *new GenApi::CEnumerationTRef<LastErrorEnums>() )
        , ClearLastError( *new GenApi::CCommandRef() )
        , TemperatureSelector( *new GenApi::CEnumerationTRef<TemperatureSelectorEnums>() )
        , TemperatureAbs( *new GenApi::CFloatRef() )
        , TemperatureState( *new GenApi::CEnumerationTRef<TemperatureStateEnums>() )
        , CriticalTemperature( *new GenApi::CBooleanRef() )
        , OverTemperature( *new GenApi::CBooleanRef() )
        , RemoveLimits( *new GenApi::CBooleanRef() )
        , ParameterSelector( *new GenApi::CEnumerationTRef<ParameterSelectorEnums>() )
        , Prelines( *new GenApi::CIntegerRef() )
        , ExpertFeatureAccessSelector( *new GenApi::CEnumerationTRef<ExpertFeatureAccessSelectorEnums>() )
        , ExpertFeatureAccessKey( *new GenApi::CIntegerRef() )
        , ExpertFeatureEnable( *new GenApi::CBooleanRef() )
        , PixelStepCorrectionEnable( *new GenApi::CBooleanRef() )
        , PixelStepCorrectionSelector( *new GenApi::CEnumerationTRef<PixelStepCorrectionSelectorEnums>() )
        , PixelStepCorrectionValueRaw( *new GenApi::CIntegerRef() )
        , PixelStepCorrectionValueAbs( *new GenApi::CFloatRef() )
        , SavePixelStepCorrection( *new GenApi::CCommandRef() )
        , CreatePixelStepCorrection( *new GenApi::CCommandRef() )
        , PixelStepCorrectionBusy( *new GenApi::CIntegerRef() )
        , ChunkModeActive( *new GenApi::CBooleanRef() )
        , ChunkEnable( *new GenApi::CBooleanRef() )
        , ChunkSelector( *new GenApi::CEnumerationTRef<ChunkSelectorEnums>() )
        , ChunkStride( *new GenApi::CIntegerRef() )
        , ChunkSequenceSetIndex( *new GenApi::CIntegerRef() )
        , ChunkOffsetX( *new GenApi::CIntegerRef() )
        , ChunkOffsetY( *new GenApi::CIntegerRef() )
        , ChunkWidth( *new GenApi::CIntegerRef() )
        , ChunkHeight( *new GenApi::CIntegerRef() )
        , ChunkDynamicRangeMin( *new GenApi::CIntegerRef() )
        , ChunkDynamicRangeMax( *new GenApi::CIntegerRef() )
        , ChunkPixelFormat( *new GenApi::CEnumerationTRef<ChunkPixelFormatEnums>() )
        , ChunkTimestamp( *new GenApi::CIntegerRef() )
        , ChunkFramecounter( *new GenApi::CIntegerRef() )
        , ChunkLineStatusAll( *new GenApi::CIntegerRef() )
        , ChunkTriggerinputcounter( *new GenApi::CIntegerRef() )
        , ChunkLineTriggerIgnoredCounter( *new GenApi::CIntegerRef() )
        , ChunkFrameTriggerIgnoredCounter( *new GenApi::CIntegerRef() )
        , ChunkLineTriggerEndToEndCounter( *new GenApi::CIntegerRef() )
        , ChunkFrameTriggerCounter( *new GenApi::CIntegerRef() )
        , ChunkFramesPerTriggerCounter( *new GenApi::CIntegerRef() )
        , ChunkInputStatusAtLineTriggerBitsPerLine( *new GenApi::CIntegerRef() )
        , ChunkInputStatusAtLineTriggerIndex( *new GenApi::CIntegerRef() )
        , ChunkInputStatusAtLineTriggerValue( *new GenApi::CIntegerRef() )
        , ChunkShaftEncoderCounter( *new GenApi::CIntegerRef() )
        , ChunkPayloadCRC16( *new GenApi::CIntegerRef() )
        , ChunkExposureTime( *new GenApi::CFloatRef() )
        , EventSelector( *new GenApi::CEnumerationTRef<EventSelectorEnums>() )
        , EventNotification( *new GenApi::CEnumerationTRef<EventNotificationEnums>() )
        , ExposureEndEventStreamChannelIndex( *new GenApi::CIntegerRef() )
        , ExposureEndEventFrameID( *new GenApi::CIntegerRef() )
        , ExposureEndEventTimestamp( *new GenApi::CIntegerRef() )
        , LineStartOvertriggerEventStreamChannelIndex( *new GenApi::CIntegerRef() )
        , LineStartOvertriggerEventTimestamp( *new GenApi::CIntegerRef() )
        , FrameStartOvertriggerEventStreamChannelIndex( *new GenApi::CIntegerRef() )
        , FrameStartOvertriggerEventTimestamp( *new GenApi::CIntegerRef() )
        , FrameStartEventStreamChannelIndex( *new GenApi::CIntegerRef() )
        , FrameStartEventTimestamp( *new GenApi::CIntegerRef() )
        , AcquisitionStartEventStreamChannelIndex( *new GenApi::CIntegerRef() )
        , AcquisitionStartEventTimestamp( *new GenApi::CIntegerRef() )
        , AcquisitionStartOvertriggerEventStreamChannelIndex( *new GenApi::CIntegerRef() )
        , AcquisitionStartOvertriggerEventTimestamp( *new GenApi::CIntegerRef() )
        , FrameTimeoutEventStreamChannelIndex( *new GenApi::CIntegerRef() )
        , FrameTimeoutEventTimestamp( *new GenApi::CIntegerRef() )
        , EventOverrunEventStreamChannelIndex( *new GenApi::CIntegerRef() )
        , EventOverrunEventFrameID( *new GenApi::CIntegerRef() )
        , EventOverrunEventTimestamp( *new GenApi::CIntegerRef() )
        , CriticalTemperatureEventStreamChannelIndex( *new GenApi::CIntegerRef() )
        , CriticalTemperatureEventTimestamp( *new GenApi::CIntegerRef() )
        , OverTemperatureEventStreamChannelIndex( *new GenApi::CIntegerRef() )
        , OverTemperatureEventTimestamp( *new GenApi::CIntegerRef() )
        , TLParamsLocked( *new GenApi::CIntegerRef() )
        , FileSelector( *new GenApi::CEnumerationTRef<FileSelectorEnums>() )
        , FileOperationSelector( *new GenApi::CEnumerationTRef<FileOperationSelectorEnums>() )
        , FileOpenMode( *new GenApi::CEnumerationTRef<FileOpenModeEnums>() )
        , FileAccessBuffer( *new GenApi::CRegisterRef() )
        , FileAccessOffset( *new GenApi::CIntegerRef() )
        , FileAccessLength( *new GenApi::CIntegerRef() )
        , FileOperationStatus( *new GenApi::CEnumerationTRef<FileOperationStatusEnums>() )
        , FileOperationResult( *new GenApi::CIntegerRef() )
        , FileSize( *new GenApi::CIntegerRef() )
        , FileOperationExecute( *new GenApi::CCommandRef() )
        
    {
    }

    inline CGigECamera_Params::~CGigECamera_Params(void)
    {
        delete static_cast < GenApi::CBooleanRef*> (&SequenceEnable );
        delete static_cast < GenApi::CCommandRef*> (&SequenceAsyncRestart );
        delete static_cast < GenApi::CCommandRef*> (&SequenceAsyncAdvance );
        delete static_cast < GenApi::CIntegerRef*> (&SequenceCurrentSet );
        delete static_cast < GenApi::CIntegerRef*> (&SequenceSetTotalNumber );
        delete static_cast < GenApi::CIntegerRef*> (&SequenceSetIndex );
        delete static_cast < GenApi::CCommandRef*> (&SequenceSetLoad );
        delete static_cast < GenApi::CCommandRef*> (&SequenceSetStore );
        delete static_cast < GenApi::CIntegerRef*> (&SequenceSetExecutions );
        delete static_cast < GenApi::CEnumerationTRef<SequenceAdvanceModeEnums> *> (&SequenceAdvanceMode );
        delete static_cast < GenApi::CEnumerationTRef<SequenceControlSelectorEnums> *> (&SequenceControlSelector );
        delete static_cast < GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource );
        delete static_cast < GenApi::CEnumerationTRef<SequenceAddressBitSelectorEnums> *> (&SequenceAddressBitSelector );
        delete static_cast < GenApi::CEnumerationTRef<SequenceAddressBitSourceEnums> *> (&SequenceAddressBitSource );
        delete static_cast < GenApi::CEnumerationTRef<GainAutoEnums> *> (&GainAuto );
        delete static_cast < GenApi::CIntegerRef*> (&GainRaw );
        delete static_cast < GenApi::CFloatRef*> (&GainAbs );
        delete static_cast < GenApi::CEnumerationTRef<GainSelectorEnums> *> (&GainSelector );
        delete static_cast < GenApi::CIntegerRef*> (&BlackLevelRaw );
        delete static_cast < GenApi::CFloatRef*> (&BlackLevelAbs );
        delete static_cast < GenApi::CEnumerationTRef<BlackLevelSelectorEnums> *> (&BlackLevelSelector );
        delete static_cast < GenApi::CBooleanRef*> (&GammaEnable );
        delete static_cast < GenApi::CEnumerationTRef<GammaSelectorEnums> *> (&GammaSelector );
        delete static_cast < GenApi::CFloatRef*> (&Gamma );
        delete static_cast < GenApi::CIntegerRef*> (&DigitalShift );
        delete static_cast < GenApi::CIntegerRef*> (&SubstrateVoltage );
        delete static_cast < GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat );
        delete static_cast < GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding );
        delete static_cast < GenApi::CEnumerationTRef<PixelSizeEnums> *> (&PixelSize );
        delete static_cast < GenApi::CEnumerationTRef<PixelColorFilterEnums> *> (&PixelColorFilter );
        delete static_cast < GenApi::CBooleanRef*> (&ProcessedRawEnable );
        delete static_cast < GenApi::CIntegerRef*> (&SpatialCorrection );
        delete static_cast < GenApi::CIntegerRef*> (&SpatialCorrectionAmount );
        delete static_cast < GenApi::CEnumerationTRef<SpatialCorrectionStartingLineEnums> *> (&SpatialCorrectionStartingLine );
        delete static_cast < GenApi::CEnumerationTRef<SensorBitDepthEnums> *> (&SensorBitDepth );
        delete static_cast < GenApi::CBooleanRef*> (&ReverseX );
        delete static_cast < GenApi::CBooleanRef*> (&ReverseY );
        delete static_cast < GenApi::CIntegerRef*> (&PixelDynamicRangeMin );
        delete static_cast < GenApi::CIntegerRef*> (&PixelDynamicRangeMax );
        delete static_cast < GenApi::CEnumerationTRef<FieldOutputModeEnums> *> (&FieldOutputMode );
        delete static_cast < GenApi::CEnumerationTRef<DeinterlacerEnums> *> (&Deinterlacer );
        delete static_cast < GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector );
        delete static_cast < GenApi::CEnumerationTRef<SensorDigitizationTapsEnums> *> (&SensorDigitizationTaps );
        delete static_cast < GenApi::CIntegerRef*> (&SensorWidth );
        delete static_cast < GenApi::CIntegerRef*> (&SensorHeight );
        delete static_cast < GenApi::CIntegerRef*> (&WidthMax );
        delete static_cast < GenApi::CIntegerRef*> (&HeightMax );
        delete static_cast < GenApi::CEnumerationTRef<ColorTransformationSelectorEnums> *> (&ColorTransformationSelector );
        delete static_cast < GenApi::CEnumerationTRef<LightSourceSelectorEnums> *> (&LightSourceSelector );
        delete static_cast < GenApi::CFloatRef*> (&ColorTransformationMatrixFactor );
        delete static_cast < GenApi::CIntegerRef*> (&ColorTransformationMatrixFactorRaw );
        delete static_cast < GenApi::CEnumerationTRef<ColorTransformationValueSelectorEnums> *> (&ColorTransformationValueSelector );
        delete static_cast < GenApi::CFloatRef*> (&ColorTransformationValue );
        delete static_cast < GenApi::CIntegerRef*> (&ColorTransformationValueRaw );
        delete static_cast < GenApi::CBooleanRef*> (&ColorAdjustmentEnable );
        delete static_cast < GenApi::CCommandRef*> (&ColorAdjustmentReset );
        delete static_cast < GenApi::CEnumerationTRef<ColorAdjustmentSelectorEnums> *> (&ColorAdjustmentSelector );
        delete static_cast < GenApi::CFloatRef*> (&ColorAdjustmentHue );
        delete static_cast < GenApi::CIntegerRef*> (&ColorAdjustmentHueRaw );
        delete static_cast < GenApi::CFloatRef*> (&ColorAdjustmentSaturation );
        delete static_cast < GenApi::CIntegerRef*> (&ColorAdjustmentSaturationRaw );
        delete static_cast < GenApi::CCommandRef*> (&BalanceWhiteReset );
        delete static_cast < GenApi::CEnumerationTRef<BalanceWhiteAutoEnums> *> (&BalanceWhiteAuto );
        delete static_cast < GenApi::CEnumerationTRef<BalanceRatioSelectorEnums> *> (&BalanceRatioSelector );
        delete static_cast < GenApi::CFloatRef*> (&BalanceRatioAbs );
        delete static_cast < GenApi::CIntegerRef*> (&BalanceRatioRaw );
        delete static_cast < GenApi::CIntegerRef*> (&Width );
        delete static_cast < GenApi::CIntegerRef*> (&Height );
        delete static_cast < GenApi::CIntegerRef*> (&OffsetX );
        delete static_cast < GenApi::CIntegerRef*> (&OffsetY );
        delete static_cast < GenApi::CBooleanRef*> (&CenterX );
        delete static_cast < GenApi::CBooleanRef*> (&CenterY );
        delete static_cast < GenApi::CIntegerRef*> (&BinningVertical );
        delete static_cast < GenApi::CIntegerRef*> (&BinningHorizontal );
        delete static_cast < GenApi::CEnumerationTRef<LegacyBinningVerticalEnums> *> (&LegacyBinningVertical );
        delete static_cast < GenApi::CIntegerRef*> (&DecimationVertical );
        delete static_cast < GenApi::CIntegerRef*> (&DecimationHorizontal );
        delete static_cast < GenApi::CBooleanRef*> (&StackedZoneImagingEnable );
        delete static_cast < GenApi::CIntegerRef*> (&StackedZoneImagingIndex );
        delete static_cast < GenApi::CBooleanRef*> (&StackedZoneImagingZoneEnable );
        delete static_cast < GenApi::CIntegerRef*> (&StackedZoneImagingZoneOffsetY );
        delete static_cast < GenApi::CIntegerRef*> (&StackedZoneImagingZoneHeight );
        delete static_cast < GenApi::CBooleanRef*> (&EnableBurstAcquisition );
        delete static_cast < GenApi::CEnumerationTRef<AcquisitionModeEnums> *> (&AcquisitionMode );
        delete static_cast < GenApi::CCommandRef*> (&AcquisitionStart );
        delete static_cast < GenApi::CCommandRef*> (&AcquisitionStop );
        delete static_cast < GenApi::CCommandRef*> (&AcquisitionAbort );
        delete static_cast < GenApi::CIntegerRef*> (&AcquisitionFrameCount );
        delete static_cast < GenApi::CEnumerationTRef<TriggerControlImplementationEnums> *> (&TriggerControlImplementation );
        delete static_cast < GenApi::CEnumerationTRef<TriggerSelectorEnums> *> (&TriggerSelector );
        delete static_cast < GenApi::CEnumerationTRef<TriggerModeEnums> *> (&TriggerMode );
        delete static_cast < GenApi::CCommandRef*> (&TriggerSoftware );
        delete static_cast < GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource );
        delete static_cast < GenApi::CEnumerationTRef<TriggerActivationEnums> *> (&TriggerActivation );
        delete static_cast < GenApi::CBooleanRef*> (&TriggerPartialClosingFrame );
        delete static_cast < GenApi::CFloatRef*> (&TriggerDelayAbs );
        delete static_cast < GenApi::CEnumerationTRef<TriggerDelaySourceEnums> *> (&TriggerDelaySource );
        delete static_cast < GenApi::CIntegerRef*> (&TriggerDelayLineTriggerCount );
        delete static_cast < GenApi::CIntegerRef*> (&ExposureStartDelayRaw );
        delete static_cast < GenApi::CFloatRef*> (&ExposureStartDelayAbs );
        delete static_cast < GenApi::CEnumerationTRef<ExposureAutoEnums> *> (&ExposureAuto );
        delete static_cast < GenApi::CIntegerRef*> (&ExposureTimeRaw );
        delete static_cast < GenApi::CFloatRef*> (&ExposureTimeAbs );
        delete static_cast < GenApi::CFloatRef*> (&ExposureTimeBaseAbs );
        delete static_cast < GenApi::CBooleanRef*> (&ExposureTimeBaseAbsEnable );
        delete static_cast < GenApi::CFloatRef*> (&AcquisitionLineRateAbs );
        delete static_cast < GenApi::CFloatRef*> (&ResultingLineRateAbs );
        delete static_cast < GenApi::CFloatRef*> (&AcquisitionFrameRateAbs );
        delete static_cast < GenApi::CBooleanRef*> (&AcquisitionFrameRateEnable );
        delete static_cast < GenApi::CFloatRef*> (&ResultingFrameRateAbs );
        delete static_cast < GenApi::CEnumerationTRef<ExposureModeEnums> *> (&ExposureMode );
        delete static_cast < GenApi::CBooleanRef*> (&GlobalResetReleaseModeEnable );
        delete static_cast < GenApi::CIntegerRef*> (&ExposureOverlapTimeMaxRaw );
        delete static_cast < GenApi::CEnumerationTRef<InterlacedIntegrationModeEnums> *> (&InterlacedIntegrationMode );
        delete static_cast < GenApi::CFloatRef*> (&ExposureOverlapTimeMaxAbs );
        delete static_cast < GenApi::CFloatRef*> (&ReadoutTimeAbs );
        delete static_cast < GenApi::CEnumerationTRef<AcquisitionStatusSelectorEnums> *> (&AcquisitionStatusSelector );
        delete static_cast < GenApi::CBooleanRef*> (&AcquisitionStatus );
        delete static_cast < GenApi::CIntegerRef*> (&AveragingNumberOfFrames );
        delete static_cast < GenApi::CBooleanRef*> (&FrameTimeoutEnable );
        delete static_cast < GenApi::CFloatRef*> (&FrameTimeoutAbs );
        delete static_cast < GenApi::CEnumerationTRef<LineSelectorEnums> *> (&LineSelector );
        delete static_cast < GenApi::CBooleanRef*> (&LineInverter );
        delete static_cast < GenApi::CBooleanRef*> (&LineTermination );
        delete static_cast < GenApi::CIntegerRef*> (&LineDebouncerTimeRaw );
        delete static_cast < GenApi::CFloatRef*> (&LineDebouncerTimeAbs );
        delete static_cast < GenApi::CIntegerRef*> (&MinOutPulseWidthRaw );
        delete static_cast < GenApi::CFloatRef*> (&MinOutPulseWidthAbs );
        delete static_cast < GenApi::CBooleanRef*> (&LineStatus );
        delete static_cast < GenApi::CIntegerRef*> (&LineStatusAll );
        delete static_cast < GenApi::CBooleanRef*> (&UserOutputValue );
        delete static_cast < GenApi::CIntegerRef*> (&UserOutputValueAll );
        delete static_cast < GenApi::CIntegerRef*> (&UserOutputValueAllMask );
        delete static_cast < GenApi::CBooleanRef*> (&SyncUserOutputValue );
        delete static_cast < GenApi::CIntegerRef*> (&SyncUserOutputValueAll );
        delete static_cast < GenApi::CEnumerationTRef<LineModeEnums> *> (&LineMode );
        delete static_cast < GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource );
        delete static_cast < GenApi::CEnumerationTRef<LineLogicEnums> *> (&LineLogic );
        delete static_cast < GenApi::CEnumerationTRef<LineFormatEnums> *> (&LineFormat );
        delete static_cast < GenApi::CEnumerationTRef<UserOutputSelectorEnums> *> (&UserOutputSelector );
        delete static_cast < GenApi::CEnumerationTRef<SyncUserOutputSelectorEnums> *> (&SyncUserOutputSelector );
        delete static_cast < GenApi::CEnumerationTRef<ShaftEncoderModuleLineSelectorEnums> *> (&ShaftEncoderModuleLineSelector );
        delete static_cast < GenApi::CEnumerationTRef<ShaftEncoderModuleLineSourceEnums> *> (&ShaftEncoderModuleLineSource );
        delete static_cast < GenApi::CEnumerationTRef<ShaftEncoderModuleModeEnums> *> (&ShaftEncoderModuleMode );
        delete static_cast < GenApi::CEnumerationTRef<ShaftEncoderModuleCounterModeEnums> *> (&ShaftEncoderModuleCounterMode );
        delete static_cast < GenApi::CIntegerRef*> (&ShaftEncoderModuleCounter );
        delete static_cast < GenApi::CIntegerRef*> (&ShaftEncoderModuleCounterMax );
        delete static_cast < GenApi::CCommandRef*> (&ShaftEncoderModuleCounterReset );
        delete static_cast < GenApi::CIntegerRef*> (&ShaftEncoderModuleReverseCounterMax );
        delete static_cast < GenApi::CCommandRef*> (&ShaftEncoderModuleReverseCounterReset );
        delete static_cast < GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums> *> (&FrequencyConverterInputSource );
        delete static_cast < GenApi::CEnumerationTRef<FrequencyConverterSignalAlignmentEnums> *> (&FrequencyConverterSignalAlignment );
        delete static_cast < GenApi::CIntegerRef*> (&FrequencyConverterPreDivider );
        delete static_cast < GenApi::CIntegerRef*> (&FrequencyConverterMultiplier );
        delete static_cast < GenApi::CIntegerRef*> (&FrequencyConverterPostDivider );
        delete static_cast < GenApi::CBooleanRef*> (&FrequencyConverterPreventOvertrigger );
        delete static_cast < GenApi::CFloatRef*> (&TimerDurationTimebaseAbs );
        delete static_cast < GenApi::CFloatRef*> (&TimerDelayTimebaseAbs );
        delete static_cast < GenApi::CEnumerationTRef<TimerSelectorEnums> *> (&TimerSelector );
        delete static_cast < GenApi::CFloatRef*> (&TimerDurationAbs );
        delete static_cast < GenApi::CIntegerRef*> (&TimerDurationRaw );
        delete static_cast < GenApi::CFloatRef*> (&TimerDelayAbs );
        delete static_cast < GenApi::CIntegerRef*> (&TimerDelayRaw );
        delete static_cast < GenApi::CEnumerationTRef<TimerTriggerSourceEnums> *> (&TimerTriggerSource );
        delete static_cast < GenApi::CEnumerationTRef<TimerTriggerActivationEnums> *> (&TimerTriggerActivation );
        delete static_cast < GenApi::CBooleanRef*> (&TimerSequenceEnable );
        delete static_cast < GenApi::CIntegerRef*> (&TimerSequenceLastEntryIndex );
        delete static_cast < GenApi::CIntegerRef*> (&TimerSequenceCurrentEntryIndex );
        delete static_cast < GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector );
        delete static_cast < GenApi::CEnumerationTRef<TimerSequenceTimerSelectorEnums> *> (&TimerSequenceTimerSelector );
        delete static_cast < GenApi::CBooleanRef*> (&TimerSequenceTimerEnable );
        delete static_cast < GenApi::CBooleanRef*> (&TimerSequenceTimerInverter );
        delete static_cast < GenApi::CIntegerRef*> (&TimerSequenceTimerDelayRaw );
        delete static_cast < GenApi::CIntegerRef*> (&TimerSequenceTimerDurationRaw );
        delete static_cast < GenApi::CEnumerationTRef<CounterSelectorEnums> *> (&CounterSelector );
        delete static_cast < GenApi::CEnumerationTRef<CounterEventSourceEnums> *> (&CounterEventSource );
        delete static_cast < GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource );
        delete static_cast < GenApi::CCommandRef*> (&CounterReset );
        delete static_cast < GenApi::CBooleanRef*> (&LUTEnable );
        delete static_cast < GenApi::CIntegerRef*> (&LUTIndex );
        delete static_cast < GenApi::CIntegerRef*> (&LUTValue );
        delete static_cast < GenApi::CRegisterRef*> (&LUTValueAll );
        delete static_cast < GenApi::CEnumerationTRef<LUTSelectorEnums> *> (&LUTSelector );
        delete static_cast < GenApi::CBooleanRef*> (&PixelFormatLegacy );
        delete static_cast < GenApi::CIntegerRef*> (&PayloadSize );
        delete static_cast < GenApi::CEnumerationTRef<GevInterfaceSelectorEnums> *> (&GevInterfaceSelector );
        delete static_cast < GenApi::CIntegerRef*> (&GevVersionMajor );
        delete static_cast < GenApi::CIntegerRef*> (&GevVersionMinor );
        delete static_cast < GenApi::CBooleanRef*> (&GevDeviceModeIsBigEndian );
        delete static_cast < GenApi::CIntegerRef*> (&GevDeviceModeCharacterSet );
        delete static_cast < GenApi::CIntegerRef*> (&GevMACAddress );
        delete static_cast < GenApi::CBooleanRef*> (&GevSupportedIPConfigurationLLA );
        delete static_cast < GenApi::CBooleanRef*> (&GevSupportedIPConfigurationDHCP );
        delete static_cast < GenApi::CBooleanRef*> (&GevSupportedIPConfigurationPersistentIP );
        delete static_cast < GenApi::CIntegerRef*> (&GevCurrentIPConfiguration );
        delete static_cast < GenApi::CIntegerRef*> (&GevCurrentIPAddress );
        delete static_cast < GenApi::CIntegerRef*> (&GevCurrentSubnetMask );
        delete static_cast < GenApi::CIntegerRef*> (&GevCurrentDefaultGateway );
        delete static_cast < GenApi::CIntegerRef*> (&GevPersistentIPAddress );
        delete static_cast < GenApi::CIntegerRef*> (&GevPersistentSubnetMask );
        delete static_cast < GenApi::CIntegerRef*> (&GevPersistentDefaultGateway );
        delete static_cast < GenApi::CIntegerRef*> (&GevLinkSpeed );
        delete static_cast < GenApi::CBooleanRef*> (&GevLinkMaster );
        delete static_cast < GenApi::CBooleanRef*> (&GevLinkFullDuplex );
        delete static_cast < GenApi::CBooleanRef*> (&GevLinkCrossover );
        delete static_cast < GenApi::CStringRef*> (&GevFirstURL );
        delete static_cast < GenApi::CStringRef*> (&GevSecondURL );
        delete static_cast < GenApi::CIntegerRef*> (&GevNumberOfInterfaces );
        delete static_cast < GenApi::CIntegerRef*> (&GevMessageChannelCount );
        delete static_cast < GenApi::CIntegerRef*> (&GevStreamChannelCount );
        delete static_cast < GenApi::CBooleanRef*> (&GevSupportedOptionalCommandsEVENTDATA );
        delete static_cast < GenApi::CBooleanRef*> (&GevSupportedOptionalCommandsEVENT );
        delete static_cast < GenApi::CBooleanRef*> (&GevSupportedOptionalCommandsPACKETRESEND );
        delete static_cast < GenApi::CBooleanRef*> (&GevSupportedOptionalCommandsWRITEMEM );
        delete static_cast < GenApi::CBooleanRef*> (&GevSupportedOptionalCommandsConcatenation );
        delete static_cast < GenApi::CIntegerRef*> (&GevHeartbeatTimeout );
        delete static_cast < GenApi::CIntegerRef*> (&GevTimestampTickFrequency );
        delete static_cast < GenApi::CCommandRef*> (&GevTimestampControlReset );
        delete static_cast < GenApi::CCommandRef*> (&GevTimestampControlLatch );
        delete static_cast < GenApi::CCommandRef*> (&GevTimestampControlLatchReset );
        delete static_cast < GenApi::CIntegerRef*> (&GevTimestampValue );
        delete static_cast < GenApi::CEnumerationTRef<GevCCPEnums> *> (&GevCCP );
        delete static_cast < GenApi::CEnumerationTRef<GevStreamChannelSelectorEnums> *> (&GevStreamChannelSelector );
        delete static_cast < GenApi::CIntegerRef*> (&GevSCPInterfaceIndex );
        delete static_cast < GenApi::CIntegerRef*> (&GevSCPHostPort );
        delete static_cast < GenApi::CCommandRef*> (&GevSCPSFireTestPacket );
        delete static_cast < GenApi::CBooleanRef*> (&GevSCPSDoNotFragment );
        delete static_cast < GenApi::CBooleanRef*> (&GevSCPSBigEndian );
        delete static_cast < GenApi::CIntegerRef*> (&GevSCPSPacketSize );
        delete static_cast < GenApi::CIntegerRef*> (&GevSCDA );
        delete static_cast < GenApi::CIntegerRef*> (&GevSCPD );
        delete static_cast < GenApi::CIntegerRef*> (&GevSCFTD );
        delete static_cast < GenApi::CIntegerRef*> (&GevSCBWR );
        delete static_cast < GenApi::CIntegerRef*> (&GevSCBWRA );
        delete static_cast < GenApi::CIntegerRef*> (&GevSCBWA );
        delete static_cast < GenApi::CIntegerRef*> (&GevSCDMT );
        delete static_cast < GenApi::CIntegerRef*> (&GevSCDCT );
        delete static_cast < GenApi::CIntegerRef*> (&GevSCFJM );
        delete static_cast < GenApi::CCommandRef*> (&UserSetLoad );
        delete static_cast < GenApi::CCommandRef*> (&UserSetSave );
        delete static_cast < GenApi::CEnumerationTRef<UserSetSelectorEnums> *> (&UserSetSelector );
        delete static_cast < GenApi::CEnumerationTRef<UserSetDefaultSelectorEnums> *> (&UserSetDefaultSelector );
        delete static_cast < GenApi::CEnumerationTRef<DefaultSetSelectorEnums> *> (&DefaultSetSelector );
        delete static_cast < GenApi::CIntegerRef*> (&AutoTargetValue );
        delete static_cast < GenApi::CFloatRef*> (&GrayValueAdjustmentDampingAbs );
        delete static_cast < GenApi::CIntegerRef*> (&GrayValueAdjustmentDampingRaw );
        delete static_cast < GenApi::CIntegerRef*> (&AutoGainRawLowerLimit );
        delete static_cast < GenApi::CIntegerRef*> (&AutoGainRawUpperLimit );
        delete static_cast < GenApi::CFloatRef*> (&AutoExposureTimeAbsLowerLimit );
        delete static_cast < GenApi::CFloatRef*> (&AutoExposureTimeAbsUpperLimit );
        delete static_cast < GenApi::CEnumerationTRef<AutoFunctionProfileEnums> *> (&AutoFunctionProfile );
        delete static_cast < GenApi::CIntegerRef*> (&AutoFunctionAOIWidth );
        delete static_cast < GenApi::CIntegerRef*> (&AutoFunctionAOIHeight );
        delete static_cast < GenApi::CIntegerRef*> (&AutoFunctionAOIOffsetX );
        delete static_cast < GenApi::CIntegerRef*> (&AutoFunctionAOIOffsetY );
        delete static_cast < GenApi::CBooleanRef*> (&AutoFunctionAOIUsageIntensity );
        delete static_cast < GenApi::CBooleanRef*> (&AutoFunctionAOIUsageWhiteBalance );
        delete static_cast < GenApi::CBooleanRef*> (&AutoFunctionAOIUsageRedLightCorrection );
        delete static_cast < GenApi::CEnumerationTRef<AutoFunctionAOISelectorEnums> *> (&AutoFunctionAOISelector );
        delete static_cast < GenApi::CEnumerationTRef<ColorOverexposureCompensationAOISelectorEnums> *> (&ColorOverexposureCompensationAOISelector );
        delete static_cast < GenApi::CBooleanRef*> (&ColorOverexposureCompensationAOIEnable );
        delete static_cast < GenApi::CFloatRef*> (&ColorOverexposureCompensationAOIFactor );
        delete static_cast < GenApi::CIntegerRef*> (&ColorOverexposureCompensationAOIFactorRaw );
        delete static_cast < GenApi::CIntegerRef*> (&ColorOverexposureCompensationAOIWidth );
        delete static_cast < GenApi::CIntegerRef*> (&ColorOverexposureCompensationAOIHeight );
        delete static_cast < GenApi::CIntegerRef*> (&ColorOverexposureCompensationAOIOffsetX );
        delete static_cast < GenApi::CIntegerRef*> (&ColorOverexposureCompensationAOIOffsetY );
        delete static_cast < GenApi::CEnumerationTRef<ShadingSelectorEnums> *> (&ShadingSelector );
        delete static_cast < GenApi::CBooleanRef*> (&ShadingEnable );
        delete static_cast < GenApi::CEnumerationTRef<ShadingStatusEnums> *> (&ShadingStatus );
        delete static_cast < GenApi::CEnumerationTRef<ShadingSetDefaultSelectorEnums> *> (&ShadingSetDefaultSelector );
        delete static_cast < GenApi::CEnumerationTRef<ShadingSetSelectorEnums> *> (&ShadingSetSelector );
        delete static_cast < GenApi::CCommandRef*> (&ShadingSetActivate );
        delete static_cast < GenApi::CCommandRef*> (&ShadingSetCreate );
        delete static_cast < GenApi::CEnumerationTRef<UserDefinedValueSelectorEnums> *> (&UserDefinedValueSelector );
        delete static_cast < GenApi::CIntegerRef*> (&UserDefinedValue );
        delete static_cast < GenApi::CStringRef*> (&DeviceVendorName );
        delete static_cast < GenApi::CStringRef*> (&DeviceModelName );
        delete static_cast < GenApi::CStringRef*> (&DeviceManufacturerInfo );
        delete static_cast < GenApi::CStringRef*> (&DeviceVersion );
        delete static_cast < GenApi::CStringRef*> (&DeviceFirmwareVersion );
        delete static_cast < GenApi::CStringRef*> (&DeviceID );
        delete static_cast < GenApi::CStringRef*> (&DeviceUserID );
        delete static_cast < GenApi::CCommandRef*> (&DeviceReset );
        delete static_cast < GenApi::CEnumerationTRef<DeviceScanTypeEnums> *> (&DeviceScanType );
        delete static_cast < GenApi::CEnumerationTRef<LastErrorEnums> *> (&LastError );
        delete static_cast < GenApi::CCommandRef*> (&ClearLastError );
        delete static_cast < GenApi::CEnumerationTRef<TemperatureSelectorEnums> *> (&TemperatureSelector );
        delete static_cast < GenApi::CFloatRef*> (&TemperatureAbs );
        delete static_cast < GenApi::CEnumerationTRef<TemperatureStateEnums> *> (&TemperatureState );
        delete static_cast < GenApi::CBooleanRef*> (&CriticalTemperature );
        delete static_cast < GenApi::CBooleanRef*> (&OverTemperature );
        delete static_cast < GenApi::CBooleanRef*> (&RemoveLimits );
        delete static_cast < GenApi::CEnumerationTRef<ParameterSelectorEnums> *> (&ParameterSelector );
        delete static_cast < GenApi::CIntegerRef*> (&Prelines );
        delete static_cast < GenApi::CEnumerationTRef<ExpertFeatureAccessSelectorEnums> *> (&ExpertFeatureAccessSelector );
        delete static_cast < GenApi::CIntegerRef*> (&ExpertFeatureAccessKey );
        delete static_cast < GenApi::CBooleanRef*> (&ExpertFeatureEnable );
        delete static_cast < GenApi::CBooleanRef*> (&PixelStepCorrectionEnable );
        delete static_cast < GenApi::CEnumerationTRef<PixelStepCorrectionSelectorEnums> *> (&PixelStepCorrectionSelector );
        delete static_cast < GenApi::CIntegerRef*> (&PixelStepCorrectionValueRaw );
        delete static_cast < GenApi::CFloatRef*> (&PixelStepCorrectionValueAbs );
        delete static_cast < GenApi::CCommandRef*> (&SavePixelStepCorrection );
        delete static_cast < GenApi::CCommandRef*> (&CreatePixelStepCorrection );
        delete static_cast < GenApi::CIntegerRef*> (&PixelStepCorrectionBusy );
        delete static_cast < GenApi::CBooleanRef*> (&ChunkModeActive );
        delete static_cast < GenApi::CBooleanRef*> (&ChunkEnable );
        delete static_cast < GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkStride );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkSequenceSetIndex );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkOffsetX );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkOffsetY );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkWidth );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkHeight );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkDynamicRangeMin );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkDynamicRangeMax );
        delete static_cast < GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkTimestamp );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkFramecounter );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkLineStatusAll );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkTriggerinputcounter );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkLineTriggerIgnoredCounter );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkFrameTriggerIgnoredCounter );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkLineTriggerEndToEndCounter );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkFrameTriggerCounter );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkFramesPerTriggerCounter );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkInputStatusAtLineTriggerBitsPerLine );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkInputStatusAtLineTriggerIndex );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkInputStatusAtLineTriggerValue );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkShaftEncoderCounter );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkPayloadCRC16 );
        delete static_cast < GenApi::CFloatRef*> (&ChunkExposureTime );
        delete static_cast < GenApi::CEnumerationTRef<EventSelectorEnums> *> (&EventSelector );
        delete static_cast < GenApi::CEnumerationTRef<EventNotificationEnums> *> (&EventNotification );
        delete static_cast < GenApi::CIntegerRef*> (&ExposureEndEventStreamChannelIndex );
        delete static_cast < GenApi::CIntegerRef*> (&ExposureEndEventFrameID );
        delete static_cast < GenApi::CIntegerRef*> (&ExposureEndEventTimestamp );
        delete static_cast < GenApi::CIntegerRef*> (&LineStartOvertriggerEventStreamChannelIndex );
        delete static_cast < GenApi::CIntegerRef*> (&LineStartOvertriggerEventTimestamp );
        delete static_cast < GenApi::CIntegerRef*> (&FrameStartOvertriggerEventStreamChannelIndex );
        delete static_cast < GenApi::CIntegerRef*> (&FrameStartOvertriggerEventTimestamp );
        delete static_cast < GenApi::CIntegerRef*> (&FrameStartEventStreamChannelIndex );
        delete static_cast < GenApi::CIntegerRef*> (&FrameStartEventTimestamp );
        delete static_cast < GenApi::CIntegerRef*> (&AcquisitionStartEventStreamChannelIndex );
        delete static_cast < GenApi::CIntegerRef*> (&AcquisitionStartEventTimestamp );
        delete static_cast < GenApi::CIntegerRef*> (&AcquisitionStartOvertriggerEventStreamChannelIndex );
        delete static_cast < GenApi::CIntegerRef*> (&AcquisitionStartOvertriggerEventTimestamp );
        delete static_cast < GenApi::CIntegerRef*> (&FrameTimeoutEventStreamChannelIndex );
        delete static_cast < GenApi::CIntegerRef*> (&FrameTimeoutEventTimestamp );
        delete static_cast < GenApi::CIntegerRef*> (&EventOverrunEventStreamChannelIndex );
        delete static_cast < GenApi::CIntegerRef*> (&EventOverrunEventFrameID );
        delete static_cast < GenApi::CIntegerRef*> (&EventOverrunEventTimestamp );
        delete static_cast < GenApi::CIntegerRef*> (&CriticalTemperatureEventStreamChannelIndex );
        delete static_cast < GenApi::CIntegerRef*> (&CriticalTemperatureEventTimestamp );
        delete static_cast < GenApi::CIntegerRef*> (&OverTemperatureEventStreamChannelIndex );
        delete static_cast < GenApi::CIntegerRef*> (&OverTemperatureEventTimestamp );
        delete static_cast < GenApi::CIntegerRef*> (&TLParamsLocked );
        delete static_cast < GenApi::CEnumerationTRef<FileSelectorEnums> *> (&FileSelector );
        delete static_cast < GenApi::CEnumerationTRef<FileOperationSelectorEnums> *> (&FileOperationSelector );
        delete static_cast < GenApi::CEnumerationTRef<FileOpenModeEnums> *> (&FileOpenMode );
        delete static_cast < GenApi::CRegisterRef*> (&FileAccessBuffer );
        delete static_cast < GenApi::CIntegerRef*> (&FileAccessOffset );
        delete static_cast < GenApi::CIntegerRef*> (&FileAccessLength );
        delete static_cast < GenApi::CEnumerationTRef<FileOperationStatusEnums> *> (&FileOperationStatus );
        delete static_cast < GenApi::CIntegerRef*> (&FileOperationResult );
        delete static_cast < GenApi::CIntegerRef*> (&FileSize );
        delete static_cast < GenApi::CCommandRef*> (&FileOperationExecute );
        
    }

    inline void CGigECamera_Params::_Initialize(GenApi::INodeMap* _Ptr)
    {
        static_cast<GenApi::CBooleanRef*> (&SequenceEnable )->SetReference(_Ptr->GetNode("SequenceEnable"));
    static_cast<GenApi::CCommandRef*> (&SequenceAsyncRestart )->SetReference(_Ptr->GetNode("SequenceAsyncRestart"));
    static_cast<GenApi::CCommandRef*> (&SequenceAsyncAdvance )->SetReference(_Ptr->GetNode("SequenceAsyncAdvance"));
    static_cast<GenApi::CIntegerRef*> (&SequenceCurrentSet )->SetReference(_Ptr->GetNode("SequenceCurrentSet"));
    static_cast<GenApi::CIntegerRef*> (&SequenceSetTotalNumber )->SetReference(_Ptr->GetNode("SequenceSetTotalNumber"));
    static_cast<GenApi::CIntegerRef*> (&SequenceSetIndex )->SetReference(_Ptr->GetNode("SequenceSetIndex"));
    static_cast<GenApi::CCommandRef*> (&SequenceSetLoad )->SetReference(_Ptr->GetNode("SequenceSetLoad"));
    static_cast<GenApi::CCommandRef*> (&SequenceSetStore )->SetReference(_Ptr->GetNode("SequenceSetStore"));
    static_cast<GenApi::CIntegerRef*> (&SequenceSetExecutions )->SetReference(_Ptr->GetNode("SequenceSetExecutions"));
    static_cast<GenApi::CEnumerationTRef<SequenceAdvanceModeEnums> *> (&SequenceAdvanceMode )->SetReference(_Ptr->GetNode("SequenceAdvanceMode"));
    static_cast<GenApi::CEnumerationTRef<SequenceAdvanceModeEnums> *> (&SequenceAdvanceMode )->SetNumEnums(3);
	static_cast<GenApi::CEnumerationTRef<SequenceAdvanceModeEnums> *> (&SequenceAdvanceMode )->SetEnumReference( SequenceAdvanceMode_Auto, "Auto" );		static_cast<GenApi::CEnumerationTRef<SequenceAdvanceModeEnums> *> (&SequenceAdvanceMode )->SetEnumReference( SequenceAdvanceMode_Controlled, "Controlled" );		static_cast<GenApi::CEnumerationTRef<SequenceAdvanceModeEnums> *> (&SequenceAdvanceMode )->SetEnumReference( SequenceAdvanceMode_FreeSelection, "FreeSelection" );		static_cast<GenApi::CEnumerationTRef<SequenceControlSelectorEnums> *> (&SequenceControlSelector )->SetReference(_Ptr->GetNode("SequenceControlSelector"));
    static_cast<GenApi::CEnumerationTRef<SequenceControlSelectorEnums> *> (&SequenceControlSelector )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<SequenceControlSelectorEnums> *> (&SequenceControlSelector )->SetEnumReference( SequenceControlSelector_Restart, "Restart" );		static_cast<GenApi::CEnumerationTRef<SequenceControlSelectorEnums> *> (&SequenceControlSelector )->SetEnumReference( SequenceControlSelector_Advance, "Advance" );		static_cast<GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource )->SetReference(_Ptr->GetNode("SequenceControlSource"));
    static_cast<GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource )->SetNumEnums(14);
	static_cast<GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource )->SetEnumReference( SequenceControlSource_Disabled, "Disabled" );		static_cast<GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource )->SetEnumReference( SequenceControlSource_AlwaysActive, "AlwaysActive" );		static_cast<GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource )->SetEnumReference( SequenceControlSource_Line1, "Line1" );		static_cast<GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource )->SetEnumReference( SequenceControlSource_Line2, "Line2" );		static_cast<GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource )->SetEnumReference( SequenceControlSource_Line3, "Line3" );		static_cast<GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource )->SetEnumReference( SequenceControlSource_Line4, "Line4" );		static_cast<GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource )->SetEnumReference( SequenceControlSource_Line5, "Line5" );		static_cast<GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource )->SetEnumReference( SequenceControlSource_Line6, "Line6" );		static_cast<GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource )->SetEnumReference( SequenceControlSource_Line7, "Line7" );		static_cast<GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource )->SetEnumReference( SequenceControlSource_Line8, "Line8" );		static_cast<GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource )->SetEnumReference( SequenceControlSource_CC1, "CC1" );		static_cast<GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource )->SetEnumReference( SequenceControlSource_CC2, "CC2" );		static_cast<GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource )->SetEnumReference( SequenceControlSource_CC3, "CC3" );		static_cast<GenApi::CEnumerationTRef<SequenceControlSourceEnums> *> (&SequenceControlSource )->SetEnumReference( SequenceControlSource_CC4, "CC4" );		static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSelectorEnums> *> (&SequenceAddressBitSelector )->SetReference(_Ptr->GetNode("SequenceAddressBitSelector"));
    static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSelectorEnums> *> (&SequenceAddressBitSelector )->SetNumEnums(4);
	static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSelectorEnums> *> (&SequenceAddressBitSelector )->SetEnumReference( SequenceAddressBitSelector_Bit0, "Bit0" );		static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSelectorEnums> *> (&SequenceAddressBitSelector )->SetEnumReference( SequenceAddressBitSelector_Bit1, "Bit1" );		static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSelectorEnums> *> (&SequenceAddressBitSelector )->SetEnumReference( SequenceAddressBitSelector_Bit2, "Bit2" );		static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSelectorEnums> *> (&SequenceAddressBitSelector )->SetEnumReference( SequenceAddressBitSelector_Bit3, "Bit3" );		static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSourceEnums> *> (&SequenceAddressBitSource )->SetReference(_Ptr->GetNode("SequenceAddressBitSource"));
    static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSourceEnums> *> (&SequenceAddressBitSource )->SetNumEnums(12);
	static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSourceEnums> *> (&SequenceAddressBitSource )->SetEnumReference( SequenceAddressBitSource_Line1, "Line1" );		static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSourceEnums> *> (&SequenceAddressBitSource )->SetEnumReference( SequenceAddressBitSource_Line2, "Line2" );		static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSourceEnums> *> (&SequenceAddressBitSource )->SetEnumReference( SequenceAddressBitSource_Line3, "Line3" );		static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSourceEnums> *> (&SequenceAddressBitSource )->SetEnumReference( SequenceAddressBitSource_Line4, "Line4" );		static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSourceEnums> *> (&SequenceAddressBitSource )->SetEnumReference( SequenceAddressBitSource_Line5, "Line5" );		static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSourceEnums> *> (&SequenceAddressBitSource )->SetEnumReference( SequenceAddressBitSource_Line6, "Line6" );		static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSourceEnums> *> (&SequenceAddressBitSource )->SetEnumReference( SequenceAddressBitSource_Line7, "Line7" );		static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSourceEnums> *> (&SequenceAddressBitSource )->SetEnumReference( SequenceAddressBitSource_Line8, "Line8" );		static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSourceEnums> *> (&SequenceAddressBitSource )->SetEnumReference( SequenceAddressBitSource_CC1, "CC1" );		static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSourceEnums> *> (&SequenceAddressBitSource )->SetEnumReference( SequenceAddressBitSource_CC2, "CC2" );		static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSourceEnums> *> (&SequenceAddressBitSource )->SetEnumReference( SequenceAddressBitSource_CC3, "CC3" );		static_cast<GenApi::CEnumerationTRef<SequenceAddressBitSourceEnums> *> (&SequenceAddressBitSource )->SetEnumReference( SequenceAddressBitSource_CC4, "CC4" );		static_cast<GenApi::CEnumerationTRef<GainAutoEnums> *> (&GainAuto )->SetReference(_Ptr->GetNode("GainAuto"));
    static_cast<GenApi::CEnumerationTRef<GainAutoEnums> *> (&GainAuto )->SetNumEnums(3);
	static_cast<GenApi::CEnumerationTRef<GainAutoEnums> *> (&GainAuto )->SetEnumReference( GainAuto_Off, "Off" );		static_cast<GenApi::CEnumerationTRef<GainAutoEnums> *> (&GainAuto )->SetEnumReference( GainAuto_Once, "Once" );		static_cast<GenApi::CEnumerationTRef<GainAutoEnums> *> (&GainAuto )->SetEnumReference( GainAuto_Continuous, "Continuous" );		static_cast<GenApi::CIntegerRef*> (&GainRaw )->SetReference(_Ptr->GetNode("GainRaw"));
    static_cast<GenApi::CFloatRef*> (&GainAbs )->SetReference(_Ptr->GetNode("GainAbs"));
    static_cast<GenApi::CEnumerationTRef<GainSelectorEnums> *> (&GainSelector )->SetReference(_Ptr->GetNode("GainSelector"));
    static_cast<GenApi::CEnumerationTRef<GainSelectorEnums> *> (&GainSelector )->SetNumEnums(10);
	static_cast<GenApi::CEnumerationTRef<GainSelectorEnums> *> (&GainSelector )->SetEnumReference( GainSelector_All, "All" );		static_cast<GenApi::CEnumerationTRef<GainSelectorEnums> *> (&GainSelector )->SetEnumReference( GainSelector_AnalogAll, "AnalogAll" );		static_cast<GenApi::CEnumerationTRef<GainSelectorEnums> *> (&GainSelector )->SetEnumReference( GainSelector_DigitalAll, "DigitalAll" );		static_cast<GenApi::CEnumerationTRef<GainSelectorEnums> *> (&GainSelector )->SetEnumReference( GainSelector_Tap1, "Tap1" );		static_cast<GenApi::CEnumerationTRef<GainSelectorEnums> *> (&GainSelector )->SetEnumReference( GainSelector_Tap2, "Tap2" );		static_cast<GenApi::CEnumerationTRef<GainSelectorEnums> *> (&GainSelector )->SetEnumReference( GainSelector_Tap3, "Tap3" );		static_cast<GenApi::CEnumerationTRef<GainSelectorEnums> *> (&GainSelector )->SetEnumReference( GainSelector_Tap4, "Tap4" );		static_cast<GenApi::CEnumerationTRef<GainSelectorEnums> *> (&GainSelector )->SetEnumReference( GainSelector_Red, "Red" );		static_cast<GenApi::CEnumerationTRef<GainSelectorEnums> *> (&GainSelector )->SetEnumReference( GainSelector_Green, "Green" );		static_cast<GenApi::CEnumerationTRef<GainSelectorEnums> *> (&GainSelector )->SetEnumReference( GainSelector_Blue, "Blue" );		static_cast<GenApi::CIntegerRef*> (&BlackLevelRaw )->SetReference(_Ptr->GetNode("BlackLevelRaw"));
    static_cast<GenApi::CFloatRef*> (&BlackLevelAbs )->SetReference(_Ptr->GetNode("BlackLevelAbs"));
    static_cast<GenApi::CEnumerationTRef<BlackLevelSelectorEnums> *> (&BlackLevelSelector )->SetReference(_Ptr->GetNode("BlackLevelSelector"));
    static_cast<GenApi::CEnumerationTRef<BlackLevelSelectorEnums> *> (&BlackLevelSelector )->SetNumEnums(10);
	static_cast<GenApi::CEnumerationTRef<BlackLevelSelectorEnums> *> (&BlackLevelSelector )->SetEnumReference( BlackLevelSelector_All, "All" );		static_cast<GenApi::CEnumerationTRef<BlackLevelSelectorEnums> *> (&BlackLevelSelector )->SetEnumReference( BlackLevelSelector_AnalogAll, "AnalogAll" );		static_cast<GenApi::CEnumerationTRef<BlackLevelSelectorEnums> *> (&BlackLevelSelector )->SetEnumReference( BlackLevelSelector_DigitalAll, "DigitalAll" );		static_cast<GenApi::CEnumerationTRef<BlackLevelSelectorEnums> *> (&BlackLevelSelector )->SetEnumReference( BlackLevelSelector_Tap1, "Tap1" );		static_cast<GenApi::CEnumerationTRef<BlackLevelSelectorEnums> *> (&BlackLevelSelector )->SetEnumReference( BlackLevelSelector_Tap2, "Tap2" );		static_cast<GenApi::CEnumerationTRef<BlackLevelSelectorEnums> *> (&BlackLevelSelector )->SetEnumReference( BlackLevelSelector_Tap3, "Tap3" );		static_cast<GenApi::CEnumerationTRef<BlackLevelSelectorEnums> *> (&BlackLevelSelector )->SetEnumReference( BlackLevelSelector_Tap4, "Tap4" );		static_cast<GenApi::CEnumerationTRef<BlackLevelSelectorEnums> *> (&BlackLevelSelector )->SetEnumReference( BlackLevelSelector_Red, "Red" );		static_cast<GenApi::CEnumerationTRef<BlackLevelSelectorEnums> *> (&BlackLevelSelector )->SetEnumReference( BlackLevelSelector_Green, "Green" );		static_cast<GenApi::CEnumerationTRef<BlackLevelSelectorEnums> *> (&BlackLevelSelector )->SetEnumReference( BlackLevelSelector_Blue, "Blue" );		static_cast<GenApi::CBooleanRef*> (&GammaEnable )->SetReference(_Ptr->GetNode("GammaEnable"));
    static_cast<GenApi::CEnumerationTRef<GammaSelectorEnums> *> (&GammaSelector )->SetReference(_Ptr->GetNode("GammaSelector"));
    static_cast<GenApi::CEnumerationTRef<GammaSelectorEnums> *> (&GammaSelector )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<GammaSelectorEnums> *> (&GammaSelector )->SetEnumReference( GammaSelector_User, "User" );		static_cast<GenApi::CEnumerationTRef<GammaSelectorEnums> *> (&GammaSelector )->SetEnumReference( GammaSelector_sRGB, "sRGB" );		static_cast<GenApi::CFloatRef*> (&Gamma )->SetReference(_Ptr->GetNode("Gamma"));
    static_cast<GenApi::CIntegerRef*> (&DigitalShift )->SetReference(_Ptr->GetNode("DigitalShift"));
    static_cast<GenApi::CIntegerRef*> (&SubstrateVoltage )->SetReference(_Ptr->GetNode("SubstrateVoltage"));
    static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetReference(_Ptr->GetNode("PixelFormat"));
    static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetNumEnums(46);
	static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_Mono8, "Mono8" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_Mono10, "Mono10" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_Mono10Packed, "Mono10Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_Mono12, "Mono12" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_Mono12Packed, "Mono12Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_Mono16, "Mono16" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerGR8, "BayerGR8" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerRG8, "BayerRG8" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerGB8, "BayerGB8" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerBG8, "BayerBG8" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerGR10, "BayerGR10" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerRG10, "BayerRG10" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerGB10, "BayerGB10" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerBG10, "BayerBG10" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerGR12, "BayerGR12" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerRG12, "BayerRG12" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerGB12, "BayerGB12" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerBG12, "BayerBG12" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_RGB8Packed, "RGB8Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BGR8Packed, "BGR8Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_RGBA8Packed, "RGBA8Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BGRA8Packed, "BGRA8Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_RGB10Packed, "RGB10Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BGR10Packed, "BGR10Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_RGB12Packed, "RGB12Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BGR12Packed, "BGR12Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_RGB10V1Packed, "RGB10V1Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_RGB10V2Packed, "RGB10V2Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_YUV411Packed, "YUV411Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_YUV422Packed, "YUV422Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_YUV444Packed, "YUV444Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_RGB8Planar, "RGB8Planar" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_RGB10Planar, "RGB10Planar" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_RGB12Planar, "RGB12Planar" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_RGB16Planar, "RGB16Planar" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_YUV422_YUYV_Packed, "YUV422_YUYV_Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerGB12Packed, "BayerGB12Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerGR12Packed, "BayerGR12Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerRG12Packed, "BayerRG12Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerBG12Packed, "BayerBG12Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerGR16, "BayerGR16" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerRG16, "BayerRG16" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerGB16, "BayerGB16" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_BayerBG16, "BayerBG16" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_RGB12V1Packed, "RGB12V1Packed" );		static_cast<GenApi::CEnumerationTRef<PixelFormatEnums> *> (&PixelFormat )->SetEnumReference( PixelFormat_Mono8Signed, "Mono8Signed" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetReference(_Ptr->GetNode("PixelCoding"));
    static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetNumEnums(20);
	static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_Mono8, "Mono8" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_Mono8Signed, "Mono8Signed" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_Mono16, "Mono16" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_Mono10Packed, "Mono10Packed" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_Mono12Packed, "Mono12Packed" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_Raw8, "Raw8" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_Raw16, "Raw16" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_RGB8, "RGB8" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_BGR8, "BGR8" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_RGBA8, "RGBA8" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_BGRA8, "BGRA8" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_RGB16, "RGB16" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_BGR16, "BGR16" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_RGB10V1Packed, "RGB10V1Packed" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_RGB10V2Packed, "RGB10V2Packed" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_YUV411, "YUV411" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_YUV422, "YUV422" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_YUV444, "YUV444" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_RGB8Planar, "RGB8Planar" );		static_cast<GenApi::CEnumerationTRef<PixelCodingEnums> *> (&PixelCoding )->SetEnumReference( PixelCoding_RGB16Planar, "RGB16Planar" );		static_cast<GenApi::CEnumerationTRef<PixelSizeEnums> *> (&PixelSize )->SetReference(_Ptr->GetNode("PixelSize"));
    static_cast<GenApi::CEnumerationTRef<PixelSizeEnums> *> (&PixelSize )->SetNumEnums(13);
	static_cast<GenApi::CEnumerationTRef<PixelSizeEnums> *> (&PixelSize )->SetEnumReference( PixelSize_Bpp1, "Bpp1" );		static_cast<GenApi::CEnumerationTRef<PixelSizeEnums> *> (&PixelSize )->SetEnumReference( PixelSize_Bpp2, "Bpp2" );		static_cast<GenApi::CEnumerationTRef<PixelSizeEnums> *> (&PixelSize )->SetEnumReference( PixelSize_Bpp4, "Bpp4" );		static_cast<GenApi::CEnumerationTRef<PixelSizeEnums> *> (&PixelSize )->SetEnumReference( PixelSize_Bpp8, "Bpp8" );		static_cast<GenApi::CEnumerationTRef<PixelSizeEnums> *> (&PixelSize )->SetEnumReference( PixelSize_Bpp10, "Bpp10" );		static_cast<GenApi::CEnumerationTRef<PixelSizeEnums> *> (&PixelSize )->SetEnumReference( PixelSize_Bpp12, "Bpp12" );		static_cast<GenApi::CEnumerationTRef<PixelSizeEnums> *> (&PixelSize )->SetEnumReference( PixelSize_Bpp14, "Bpp14" );		static_cast<GenApi::CEnumerationTRef<PixelSizeEnums> *> (&PixelSize )->SetEnumReference( PixelSize_Bpp16, "Bpp16" );		static_cast<GenApi::CEnumerationTRef<PixelSizeEnums> *> (&PixelSize )->SetEnumReference( PixelSize_Bpp24, "Bpp24" );		static_cast<GenApi::CEnumerationTRef<PixelSizeEnums> *> (&PixelSize )->SetEnumReference( PixelSize_Bpp32, "Bpp32" );		static_cast<GenApi::CEnumerationTRef<PixelSizeEnums> *> (&PixelSize )->SetEnumReference( PixelSize_Bpp36, "Bpp36" );		static_cast<GenApi::CEnumerationTRef<PixelSizeEnums> *> (&PixelSize )->SetEnumReference( PixelSize_Bpp48, "Bpp48" );		static_cast<GenApi::CEnumerationTRef<PixelSizeEnums> *> (&PixelSize )->SetEnumReference( PixelSize_Bpp64, "Bpp64" );		static_cast<GenApi::CEnumerationTRef<PixelColorFilterEnums> *> (&PixelColorFilter )->SetReference(_Ptr->GetNode("PixelColorFilter"));
    static_cast<GenApi::CEnumerationTRef<PixelColorFilterEnums> *> (&PixelColorFilter )->SetNumEnums(5);
	static_cast<GenApi::CEnumerationTRef<PixelColorFilterEnums> *> (&PixelColorFilter )->SetEnumReference( PixelColorFilter_Bayer_RG, "Bayer_RG" );		static_cast<GenApi::CEnumerationTRef<PixelColorFilterEnums> *> (&PixelColorFilter )->SetEnumReference( PixelColorFilter_Bayer_GB, "Bayer_GB" );		static_cast<GenApi::CEnumerationTRef<PixelColorFilterEnums> *> (&PixelColorFilter )->SetEnumReference( PixelColorFilter_Bayer_GR, "Bayer_GR" );		static_cast<GenApi::CEnumerationTRef<PixelColorFilterEnums> *> (&PixelColorFilter )->SetEnumReference( PixelColorFilter_Bayer_BG, "Bayer_BG" );		static_cast<GenApi::CEnumerationTRef<PixelColorFilterEnums> *> (&PixelColorFilter )->SetEnumReference( PixelColorFilter_None, "None" );		static_cast<GenApi::CBooleanRef*> (&ProcessedRawEnable )->SetReference(_Ptr->GetNode("ProcessedRawEnable"));
    static_cast<GenApi::CIntegerRef*> (&SpatialCorrection )->SetReference(_Ptr->GetNode("SpatialCorrection"));
    static_cast<GenApi::CIntegerRef*> (&SpatialCorrectionAmount )->SetReference(_Ptr->GetNode("SpatialCorrectionAmount"));
    static_cast<GenApi::CEnumerationTRef<SpatialCorrectionStartingLineEnums> *> (&SpatialCorrectionStartingLine )->SetReference(_Ptr->GetNode("SpatialCorrectionStartingLine"));
    static_cast<GenApi::CEnumerationTRef<SpatialCorrectionStartingLineEnums> *> (&SpatialCorrectionStartingLine )->SetNumEnums(3);
	static_cast<GenApi::CEnumerationTRef<SpatialCorrectionStartingLineEnums> *> (&SpatialCorrectionStartingLine )->SetEnumReference( SpatialCorrectionStartingLine_LineRed, "LineRed" );		static_cast<GenApi::CEnumerationTRef<SpatialCorrectionStartingLineEnums> *> (&SpatialCorrectionStartingLine )->SetEnumReference( SpatialCorrectionStartingLine_LineGreen, "LineGreen" );		static_cast<GenApi::CEnumerationTRef<SpatialCorrectionStartingLineEnums> *> (&SpatialCorrectionStartingLine )->SetEnumReference( SpatialCorrectionStartingLine_LineBlue, "LineBlue" );		static_cast<GenApi::CEnumerationTRef<SensorBitDepthEnums> *> (&SensorBitDepth )->SetReference(_Ptr->GetNode("SensorBitDepth"));
    static_cast<GenApi::CEnumerationTRef<SensorBitDepthEnums> *> (&SensorBitDepth )->SetNumEnums(5);
	static_cast<GenApi::CEnumerationTRef<SensorBitDepthEnums> *> (&SensorBitDepth )->SetEnumReference( SensorBitDepth_BitDepth8, "BitDepth8" );		static_cast<GenApi::CEnumerationTRef<SensorBitDepthEnums> *> (&SensorBitDepth )->SetEnumReference( SensorBitDepth_BitDepth10, "BitDepth10" );		static_cast<GenApi::CEnumerationTRef<SensorBitDepthEnums> *> (&SensorBitDepth )->SetEnumReference( SensorBitDepth_BitDepth12, "BitDepth12" );		static_cast<GenApi::CEnumerationTRef<SensorBitDepthEnums> *> (&SensorBitDepth )->SetEnumReference( SensorBitDepth_BitDepth14, "BitDepth14" );		static_cast<GenApi::CEnumerationTRef<SensorBitDepthEnums> *> (&SensorBitDepth )->SetEnumReference( SensorBitDepth_BitDepth16, "BitDepth16" );		static_cast<GenApi::CBooleanRef*> (&ReverseX )->SetReference(_Ptr->GetNode("ReverseX"));
    static_cast<GenApi::CBooleanRef*> (&ReverseY )->SetReference(_Ptr->GetNode("ReverseY"));
    static_cast<GenApi::CIntegerRef*> (&PixelDynamicRangeMin )->SetReference(_Ptr->GetNode("PixelDynamicRangeMin"));
    static_cast<GenApi::CIntegerRef*> (&PixelDynamicRangeMax )->SetReference(_Ptr->GetNode("PixelDynamicRangeMax"));
    static_cast<GenApi::CEnumerationTRef<FieldOutputModeEnums> *> (&FieldOutputMode )->SetReference(_Ptr->GetNode("FieldOutputMode"));
    static_cast<GenApi::CEnumerationTRef<FieldOutputModeEnums> *> (&FieldOutputMode )->SetNumEnums(5);
	static_cast<GenApi::CEnumerationTRef<FieldOutputModeEnums> *> (&FieldOutputMode )->SetEnumReference( FieldOutputMode_Field0, "Field0" );		static_cast<GenApi::CEnumerationTRef<FieldOutputModeEnums> *> (&FieldOutputMode )->SetEnumReference( FieldOutputMode_Field1, "Field1" );		static_cast<GenApi::CEnumerationTRef<FieldOutputModeEnums> *> (&FieldOutputMode )->SetEnumReference( FieldOutputMode_Field0First, "Field0First" );		static_cast<GenApi::CEnumerationTRef<FieldOutputModeEnums> *> (&FieldOutputMode )->SetEnumReference( FieldOutputMode_ConcatenatedNewFields, "ConcatenatedNewFields" );		static_cast<GenApi::CEnumerationTRef<FieldOutputModeEnums> *> (&FieldOutputMode )->SetEnumReference( FieldOutputMode_DeinterlacedNewFields, "DeinterlacedNewFields" );		static_cast<GenApi::CEnumerationTRef<DeinterlacerEnums> *> (&Deinterlacer )->SetReference(_Ptr->GetNode("Deinterlacer"));
    static_cast<GenApi::CEnumerationTRef<DeinterlacerEnums> *> (&Deinterlacer )->SetNumEnums(1);
	static_cast<GenApi::CEnumerationTRef<DeinterlacerEnums> *> (&Deinterlacer )->SetEnumReference( Deinterlacer_Weave, "Weave" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetReference(_Ptr->GetNode("TestImageSelector"));
    static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetNumEnums(25);
	static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_Off, "Off" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_Black, "Black" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_White, "White" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_GreyHorizontalRamp, "GreyHorizontalRamp" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_GreyVerticalRamp, "GreyVerticalRamp" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_GreyHorizontalRampMoving, "GreyHorizontalRampMoving" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_GreyVerticalRampMoving, "GreyVerticalRampMoving" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_HorzontalLineMoving, "HorzontalLineMoving" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_VerticalLineMoving, "VerticalLineMoving" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_ColorBar, "ColorBar" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_FrameCounter, "FrameCounter" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_DeviceSpecific, "DeviceSpecific" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_FixedDiagonalGrayGradient_8Bit, "FixedDiagonalGrayGradient_8Bit" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_MovingDiagonalGrayGradient_8Bit, "MovingDiagonalGrayGradient_8Bit" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_MovingDiagonalGrayGradient_12Bit, "MovingDiagonalGrayGradient_12Bit" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_MovingDiagonalGrayGradientFeatureTest_8Bit, "MovingDiagonalGrayGradientFeatureTest_8Bit" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_MovingDiagonalGrayGradientFeatureTest_12Bit, "MovingDiagonalGrayGradientFeatureTest_12Bit" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_MovingDiagonalColorGradient, "MovingDiagonalColorGradient" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_Testimage1, "Testimage1" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_Testimage2, "Testimage2" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_Testimage3, "Testimage3" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_Testimage4, "Testimage4" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_Testimage5, "Testimage5" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_Testimage6, "Testimage6" );		static_cast<GenApi::CEnumerationTRef<TestImageSelectorEnums> *> (&TestImageSelector )->SetEnumReference( TestImageSelector_Testimage7, "Testimage7" );		static_cast<GenApi::CEnumerationTRef<SensorDigitizationTapsEnums> *> (&SensorDigitizationTaps )->SetReference(_Ptr->GetNode("SensorDigitizationTaps"));
    static_cast<GenApi::CEnumerationTRef<SensorDigitizationTapsEnums> *> (&SensorDigitizationTaps )->SetNumEnums(4);
	static_cast<GenApi::CEnumerationTRef<SensorDigitizationTapsEnums> *> (&SensorDigitizationTaps )->SetEnumReference( SensorDigitizationTaps_One, "One" );		static_cast<GenApi::CEnumerationTRef<SensorDigitizationTapsEnums> *> (&SensorDigitizationTaps )->SetEnumReference( SensorDigitizationTaps_Two, "Two" );		static_cast<GenApi::CEnumerationTRef<SensorDigitizationTapsEnums> *> (&SensorDigitizationTaps )->SetEnumReference( SensorDigitizationTaps_Three, "Three" );		static_cast<GenApi::CEnumerationTRef<SensorDigitizationTapsEnums> *> (&SensorDigitizationTaps )->SetEnumReference( SensorDigitizationTaps_Four, "Four" );		static_cast<GenApi::CIntegerRef*> (&SensorWidth )->SetReference(_Ptr->GetNode("SensorWidth"));
    static_cast<GenApi::CIntegerRef*> (&SensorHeight )->SetReference(_Ptr->GetNode("SensorHeight"));
    static_cast<GenApi::CIntegerRef*> (&WidthMax )->SetReference(_Ptr->GetNode("WidthMax"));
    static_cast<GenApi::CIntegerRef*> (&HeightMax )->SetReference(_Ptr->GetNode("HeightMax"));
    static_cast<GenApi::CEnumerationTRef<ColorTransformationSelectorEnums> *> (&ColorTransformationSelector )->SetReference(_Ptr->GetNode("ColorTransformationSelector"));
    static_cast<GenApi::CEnumerationTRef<ColorTransformationSelectorEnums> *> (&ColorTransformationSelector )->SetNumEnums(3);
	static_cast<GenApi::CEnumerationTRef<ColorTransformationSelectorEnums> *> (&ColorTransformationSelector )->SetEnumReference( ColorTransformationSelector_RGBtoRGB, "RGBtoRGB" );		static_cast<GenApi::CEnumerationTRef<ColorTransformationSelectorEnums> *> (&ColorTransformationSelector )->SetEnumReference( ColorTransformationSelector_RGBtoYUV, "RGBtoYUV" );		static_cast<GenApi::CEnumerationTRef<ColorTransformationSelectorEnums> *> (&ColorTransformationSelector )->SetEnumReference( ColorTransformationSelector_YUVtoRGB, "YUVtoRGB" );		static_cast<GenApi::CEnumerationTRef<LightSourceSelectorEnums> *> (&LightSourceSelector )->SetReference(_Ptr->GetNode("LightSourceSelector"));
    static_cast<GenApi::CEnumerationTRef<LightSourceSelectorEnums> *> (&LightSourceSelector )->SetNumEnums(5);
	static_cast<GenApi::CEnumerationTRef<LightSourceSelectorEnums> *> (&LightSourceSelector )->SetEnumReference( LightSourceSelector_Off, "Off" );		static_cast<GenApi::CEnumerationTRef<LightSourceSelectorEnums> *> (&LightSourceSelector )->SetEnumReference( LightSourceSelector_Custom, "Custom" );		static_cast<GenApi::CEnumerationTRef<LightSourceSelectorEnums> *> (&LightSourceSelector )->SetEnumReference( LightSourceSelector_Daylight, "Daylight" );		static_cast<GenApi::CEnumerationTRef<LightSourceSelectorEnums> *> (&LightSourceSelector )->SetEnumReference( LightSourceSelector_Tungsten, "Tungsten" );		static_cast<GenApi::CEnumerationTRef<LightSourceSelectorEnums> *> (&LightSourceSelector )->SetEnumReference( LightSourceSelector_Daylight6500K, "Daylight6500K" );		static_cast<GenApi::CFloatRef*> (&ColorTransformationMatrixFactor )->SetReference(_Ptr->GetNode("ColorTransformationMatrixFactor"));
    static_cast<GenApi::CIntegerRef*> (&ColorTransformationMatrixFactorRaw )->SetReference(_Ptr->GetNode("ColorTransformationMatrixFactorRaw"));
    static_cast<GenApi::CEnumerationTRef<ColorTransformationValueSelectorEnums> *> (&ColorTransformationValueSelector )->SetReference(_Ptr->GetNode("ColorTransformationValueSelector"));
    static_cast<GenApi::CEnumerationTRef<ColorTransformationValueSelectorEnums> *> (&ColorTransformationValueSelector )->SetNumEnums(9);
	static_cast<GenApi::CEnumerationTRef<ColorTransformationValueSelectorEnums> *> (&ColorTransformationValueSelector )->SetEnumReference( ColorTransformationValueSelector_Gain00, "Gain00" );		static_cast<GenApi::CEnumerationTRef<ColorTransformationValueSelectorEnums> *> (&ColorTransformationValueSelector )->SetEnumReference( ColorTransformationValueSelector_Gain01, "Gain01" );		static_cast<GenApi::CEnumerationTRef<ColorTransformationValueSelectorEnums> *> (&ColorTransformationValueSelector )->SetEnumReference( ColorTransformationValueSelector_Gain02, "Gain02" );		static_cast<GenApi::CEnumerationTRef<ColorTransformationValueSelectorEnums> *> (&ColorTransformationValueSelector )->SetEnumReference( ColorTransformationValueSelector_Gain10, "Gain10" );		static_cast<GenApi::CEnumerationTRef<ColorTransformationValueSelectorEnums> *> (&ColorTransformationValueSelector )->SetEnumReference( ColorTransformationValueSelector_Gain11, "Gain11" );		static_cast<GenApi::CEnumerationTRef<ColorTransformationValueSelectorEnums> *> (&ColorTransformationValueSelector )->SetEnumReference( ColorTransformationValueSelector_Gain12, "Gain12" );		static_cast<GenApi::CEnumerationTRef<ColorTransformationValueSelectorEnums> *> (&ColorTransformationValueSelector )->SetEnumReference( ColorTransformationValueSelector_Gain20, "Gain20" );		static_cast<GenApi::CEnumerationTRef<ColorTransformationValueSelectorEnums> *> (&ColorTransformationValueSelector )->SetEnumReference( ColorTransformationValueSelector_Gain21, "Gain21" );		static_cast<GenApi::CEnumerationTRef<ColorTransformationValueSelectorEnums> *> (&ColorTransformationValueSelector )->SetEnumReference( ColorTransformationValueSelector_Gain22, "Gain22" );		static_cast<GenApi::CFloatRef*> (&ColorTransformationValue )->SetReference(_Ptr->GetNode("ColorTransformationValue"));
    static_cast<GenApi::CIntegerRef*> (&ColorTransformationValueRaw )->SetReference(_Ptr->GetNode("ColorTransformationValueRaw"));
    static_cast<GenApi::CBooleanRef*> (&ColorAdjustmentEnable )->SetReference(_Ptr->GetNode("ColorAdjustmentEnable"));
    static_cast<GenApi::CCommandRef*> (&ColorAdjustmentReset )->SetReference(_Ptr->GetNode("ColorAdjustmentReset"));
    static_cast<GenApi::CEnumerationTRef<ColorAdjustmentSelectorEnums> *> (&ColorAdjustmentSelector )->SetReference(_Ptr->GetNode("ColorAdjustmentSelector"));
    static_cast<GenApi::CEnumerationTRef<ColorAdjustmentSelectorEnums> *> (&ColorAdjustmentSelector )->SetNumEnums(6);
	static_cast<GenApi::CEnumerationTRef<ColorAdjustmentSelectorEnums> *> (&ColorAdjustmentSelector )->SetEnumReference( ColorAdjustmentSelector_Red, "Red" );		static_cast<GenApi::CEnumerationTRef<ColorAdjustmentSelectorEnums> *> (&ColorAdjustmentSelector )->SetEnumReference( ColorAdjustmentSelector_Yellow, "Yellow" );		static_cast<GenApi::CEnumerationTRef<ColorAdjustmentSelectorEnums> *> (&ColorAdjustmentSelector )->SetEnumReference( ColorAdjustmentSelector_Green, "Green" );		static_cast<GenApi::CEnumerationTRef<ColorAdjustmentSelectorEnums> *> (&ColorAdjustmentSelector )->SetEnumReference( ColorAdjustmentSelector_Cyan, "Cyan" );		static_cast<GenApi::CEnumerationTRef<ColorAdjustmentSelectorEnums> *> (&ColorAdjustmentSelector )->SetEnumReference( ColorAdjustmentSelector_Blue, "Blue" );		static_cast<GenApi::CEnumerationTRef<ColorAdjustmentSelectorEnums> *> (&ColorAdjustmentSelector )->SetEnumReference( ColorAdjustmentSelector_Magenta, "Magenta" );		static_cast<GenApi::CFloatRef*> (&ColorAdjustmentHue )->SetReference(_Ptr->GetNode("ColorAdjustmentHue"));
    static_cast<GenApi::CIntegerRef*> (&ColorAdjustmentHueRaw )->SetReference(_Ptr->GetNode("ColorAdjustmentHueRaw"));
    static_cast<GenApi::CFloatRef*> (&ColorAdjustmentSaturation )->SetReference(_Ptr->GetNode("ColorAdjustmentSaturation"));
    static_cast<GenApi::CIntegerRef*> (&ColorAdjustmentSaturationRaw )->SetReference(_Ptr->GetNode("ColorAdjustmentSaturationRaw"));
    static_cast<GenApi::CCommandRef*> (&BalanceWhiteReset )->SetReference(_Ptr->GetNode("BalanceWhiteReset"));
    static_cast<GenApi::CEnumerationTRef<BalanceWhiteAutoEnums> *> (&BalanceWhiteAuto )->SetReference(_Ptr->GetNode("BalanceWhiteAuto"));
    static_cast<GenApi::CEnumerationTRef<BalanceWhiteAutoEnums> *> (&BalanceWhiteAuto )->SetNumEnums(3);
	static_cast<GenApi::CEnumerationTRef<BalanceWhiteAutoEnums> *> (&BalanceWhiteAuto )->SetEnumReference( BalanceWhiteAuto_Off, "Off" );		static_cast<GenApi::CEnumerationTRef<BalanceWhiteAutoEnums> *> (&BalanceWhiteAuto )->SetEnumReference( BalanceWhiteAuto_Once, "Once" );		static_cast<GenApi::CEnumerationTRef<BalanceWhiteAutoEnums> *> (&BalanceWhiteAuto )->SetEnumReference( BalanceWhiteAuto_Continuous, "Continuous" );		static_cast<GenApi::CEnumerationTRef<BalanceRatioSelectorEnums> *> (&BalanceRatioSelector )->SetReference(_Ptr->GetNode("BalanceRatioSelector"));
    static_cast<GenApi::CEnumerationTRef<BalanceRatioSelectorEnums> *> (&BalanceRatioSelector )->SetNumEnums(3);
	static_cast<GenApi::CEnumerationTRef<BalanceRatioSelectorEnums> *> (&BalanceRatioSelector )->SetEnumReference( BalanceRatioSelector_Red, "Red" );		static_cast<GenApi::CEnumerationTRef<BalanceRatioSelectorEnums> *> (&BalanceRatioSelector )->SetEnumReference( BalanceRatioSelector_Green, "Green" );		static_cast<GenApi::CEnumerationTRef<BalanceRatioSelectorEnums> *> (&BalanceRatioSelector )->SetEnumReference( BalanceRatioSelector_Blue, "Blue" );		static_cast<GenApi::CFloatRef*> (&BalanceRatioAbs )->SetReference(_Ptr->GetNode("BalanceRatioAbs"));
    static_cast<GenApi::CIntegerRef*> (&BalanceRatioRaw )->SetReference(_Ptr->GetNode("BalanceRatioRaw"));
    static_cast<GenApi::CIntegerRef*> (&Width )->SetReference(_Ptr->GetNode("Width"));
    static_cast<GenApi::CIntegerRef*> (&Height )->SetReference(_Ptr->GetNode("Height"));
    static_cast<GenApi::CIntegerRef*> (&OffsetX )->SetReference(_Ptr->GetNode("OffsetX"));
    static_cast<GenApi::CIntegerRef*> (&OffsetY )->SetReference(_Ptr->GetNode("OffsetY"));
    static_cast<GenApi::CBooleanRef*> (&CenterX )->SetReference(_Ptr->GetNode("CenterX"));
    static_cast<GenApi::CBooleanRef*> (&CenterY )->SetReference(_Ptr->GetNode("CenterY"));
    static_cast<GenApi::CIntegerRef*> (&BinningVertical )->SetReference(_Ptr->GetNode("BinningVertical"));
    static_cast<GenApi::CIntegerRef*> (&BinningHorizontal )->SetReference(_Ptr->GetNode("BinningHorizontal"));
    static_cast<GenApi::CEnumerationTRef<LegacyBinningVerticalEnums> *> (&LegacyBinningVertical )->SetReference(_Ptr->GetNode("LegacyBinningVertical"));
    static_cast<GenApi::CEnumerationTRef<LegacyBinningVerticalEnums> *> (&LegacyBinningVertical )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<LegacyBinningVerticalEnums> *> (&LegacyBinningVertical )->SetEnumReference( LegacyBinningVertical_Off, "Off" );		static_cast<GenApi::CEnumerationTRef<LegacyBinningVerticalEnums> *> (&LegacyBinningVertical )->SetEnumReference( LegacyBinningVertical_Two_Rows, "Two_Rows" );		static_cast<GenApi::CIntegerRef*> (&DecimationVertical )->SetReference(_Ptr->GetNode("DecimationVertical"));
    static_cast<GenApi::CIntegerRef*> (&DecimationHorizontal )->SetReference(_Ptr->GetNode("DecimationHorizontal"));
    static_cast<GenApi::CBooleanRef*> (&StackedZoneImagingEnable )->SetReference(_Ptr->GetNode("StackedZoneImagingEnable"));
    static_cast<GenApi::CIntegerRef*> (&StackedZoneImagingIndex )->SetReference(_Ptr->GetNode("StackedZoneImagingIndex"));
    static_cast<GenApi::CBooleanRef*> (&StackedZoneImagingZoneEnable )->SetReference(_Ptr->GetNode("StackedZoneImagingZoneEnable"));
    static_cast<GenApi::CIntegerRef*> (&StackedZoneImagingZoneOffsetY )->SetReference(_Ptr->GetNode("StackedZoneImagingZoneOffsetY"));
    static_cast<GenApi::CIntegerRef*> (&StackedZoneImagingZoneHeight )->SetReference(_Ptr->GetNode("StackedZoneImagingZoneHeight"));
    static_cast<GenApi::CBooleanRef*> (&EnableBurstAcquisition )->SetReference(_Ptr->GetNode("EnableBurstAcquisition"));
    static_cast<GenApi::CEnumerationTRef<AcquisitionModeEnums> *> (&AcquisitionMode )->SetReference(_Ptr->GetNode("AcquisitionMode"));
    static_cast<GenApi::CEnumerationTRef<AcquisitionModeEnums> *> (&AcquisitionMode )->SetNumEnums(3);
	static_cast<GenApi::CEnumerationTRef<AcquisitionModeEnums> *> (&AcquisitionMode )->SetEnumReference( AcquisitionMode_SingleFrame, "SingleFrame" );		static_cast<GenApi::CEnumerationTRef<AcquisitionModeEnums> *> (&AcquisitionMode )->SetEnumReference( AcquisitionMode_MultiFrame, "MultiFrame" );		static_cast<GenApi::CEnumerationTRef<AcquisitionModeEnums> *> (&AcquisitionMode )->SetEnumReference( AcquisitionMode_Continuous, "Continuous" );		static_cast<GenApi::CCommandRef*> (&AcquisitionStart )->SetReference(_Ptr->GetNode("AcquisitionStart"));
    static_cast<GenApi::CCommandRef*> (&AcquisitionStop )->SetReference(_Ptr->GetNode("AcquisitionStop"));
    static_cast<GenApi::CCommandRef*> (&AcquisitionAbort )->SetReference(_Ptr->GetNode("AcquisitionAbort"));
    static_cast<GenApi::CIntegerRef*> (&AcquisitionFrameCount )->SetReference(_Ptr->GetNode("AcquisitionFrameCount"));
    static_cast<GenApi::CEnumerationTRef<TriggerControlImplementationEnums> *> (&TriggerControlImplementation )->SetReference(_Ptr->GetNode("TriggerControlImplementation"));
    static_cast<GenApi::CEnumerationTRef<TriggerControlImplementationEnums> *> (&TriggerControlImplementation )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<TriggerControlImplementationEnums> *> (&TriggerControlImplementation )->SetEnumReference( TriggerControlImplementation_Legacy, "Legacy" );		static_cast<GenApi::CEnumerationTRef<TriggerControlImplementationEnums> *> (&TriggerControlImplementation )->SetEnumReference( TriggerControlImplementation_Standard, "Standard" );		static_cast<GenApi::CEnumerationTRef<TriggerSelectorEnums> *> (&TriggerSelector )->SetReference(_Ptr->GetNode("TriggerSelector"));
    static_cast<GenApi::CEnumerationTRef<TriggerSelectorEnums> *> (&TriggerSelector )->SetNumEnums(10);
	static_cast<GenApi::CEnumerationTRef<TriggerSelectorEnums> *> (&TriggerSelector )->SetEnumReference( TriggerSelector_AcquisitionStart, "AcquisitionStart" );		static_cast<GenApi::CEnumerationTRef<TriggerSelectorEnums> *> (&TriggerSelector )->SetEnumReference( TriggerSelector_AcquisitionEnd, "AcquisitionEnd" );		static_cast<GenApi::CEnumerationTRef<TriggerSelectorEnums> *> (&TriggerSelector )->SetEnumReference( TriggerSelector_AcquisitionActive, "AcquisitionActive" );		static_cast<GenApi::CEnumerationTRef<TriggerSelectorEnums> *> (&TriggerSelector )->SetEnumReference( TriggerSelector_FrameStart, "FrameStart" );		static_cast<GenApi::CEnumerationTRef<TriggerSelectorEnums> *> (&TriggerSelector )->SetEnumReference( TriggerSelector_FrameEnd, "FrameEnd" );		static_cast<GenApi::CEnumerationTRef<TriggerSelectorEnums> *> (&TriggerSelector )->SetEnumReference( TriggerSelector_FrameActive, "FrameActive" );		static_cast<GenApi::CEnumerationTRef<TriggerSelectorEnums> *> (&TriggerSelector )->SetEnumReference( TriggerSelector_LineStart, "LineStart" );		static_cast<GenApi::CEnumerationTRef<TriggerSelectorEnums> *> (&TriggerSelector )->SetEnumReference( TriggerSelector_ExposureStart, "ExposureStart" );		static_cast<GenApi::CEnumerationTRef<TriggerSelectorEnums> *> (&TriggerSelector )->SetEnumReference( TriggerSelector_ExposureEnd, "ExposureEnd" );		static_cast<GenApi::CEnumerationTRef<TriggerSelectorEnums> *> (&TriggerSelector )->SetEnumReference( TriggerSelector_ExposureActive, "ExposureActive" );		static_cast<GenApi::CEnumerationTRef<TriggerModeEnums> *> (&TriggerMode )->SetReference(_Ptr->GetNode("TriggerMode"));
    static_cast<GenApi::CEnumerationTRef<TriggerModeEnums> *> (&TriggerMode )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<TriggerModeEnums> *> (&TriggerMode )->SetEnumReference( TriggerMode_Off, "Off" );		static_cast<GenApi::CEnumerationTRef<TriggerModeEnums> *> (&TriggerMode )->SetEnumReference( TriggerMode_On, "On" );		static_cast<GenApi::CCommandRef*> (&TriggerSoftware )->SetReference(_Ptr->GetNode("TriggerSoftware"));
    static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetReference(_Ptr->GetNode("TriggerSource"));
    static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetNumEnums(21);
	static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_Software, "Software" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_Line1, "Line1" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_Line2, "Line2" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_Line3, "Line3" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_Line4, "Line4" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_Line5, "Line5" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_Line6, "Line6" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_Line7, "Line7" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_Line8, "Line8" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_CC1, "CC1" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_CC2, "CC2" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_CC3, "CC3" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_CC4, "CC4" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_ShaftEncoderModuleOut, "ShaftEncoderModuleOut" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_FrequencyConverter, "FrequencyConverter" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_Timer1Start, "Timer1Start" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_Timer1End, "Timer1End" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_Counter1Start, "Counter1Start" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_Counter1End, "Counter1End" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_UserOutput1, "UserOutput1" );		static_cast<GenApi::CEnumerationTRef<TriggerSourceEnums> *> (&TriggerSource )->SetEnumReference( TriggerSource_UserOutput2, "UserOutput2" );		static_cast<GenApi::CEnumerationTRef<TriggerActivationEnums> *> (&TriggerActivation )->SetReference(_Ptr->GetNode("TriggerActivation"));
    static_cast<GenApi::CEnumerationTRef<TriggerActivationEnums> *> (&TriggerActivation )->SetNumEnums(5);
	static_cast<GenApi::CEnumerationTRef<TriggerActivationEnums> *> (&TriggerActivation )->SetEnumReference( TriggerActivation_RisingEdge, "RisingEdge" );		static_cast<GenApi::CEnumerationTRef<TriggerActivationEnums> *> (&TriggerActivation )->SetEnumReference( TriggerActivation_FallingEdge, "FallingEdge" );		static_cast<GenApi::CEnumerationTRef<TriggerActivationEnums> *> (&TriggerActivation )->SetEnumReference( TriggerActivation_AnyEdge, "AnyEdge" );		static_cast<GenApi::CEnumerationTRef<TriggerActivationEnums> *> (&TriggerActivation )->SetEnumReference( TriggerActivation_LevelHigh, "LevelHigh" );		static_cast<GenApi::CEnumerationTRef<TriggerActivationEnums> *> (&TriggerActivation )->SetEnumReference( TriggerActivation_LevelLow, "LevelLow" );		static_cast<GenApi::CBooleanRef*> (&TriggerPartialClosingFrame )->SetReference(_Ptr->GetNode("TriggerPartialClosingFrame"));
    static_cast<GenApi::CFloatRef*> (&TriggerDelayAbs )->SetReference(_Ptr->GetNode("TriggerDelayAbs"));
    static_cast<GenApi::CEnumerationTRef<TriggerDelaySourceEnums> *> (&TriggerDelaySource )->SetReference(_Ptr->GetNode("TriggerDelaySource"));
    static_cast<GenApi::CEnumerationTRef<TriggerDelaySourceEnums> *> (&TriggerDelaySource )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<TriggerDelaySourceEnums> *> (&TriggerDelaySource )->SetEnumReference( TriggerDelaySource_Time_us, "Time_us" );		static_cast<GenApi::CEnumerationTRef<TriggerDelaySourceEnums> *> (&TriggerDelaySource )->SetEnumReference( TriggerDelaySource_LineTrigger, "LineTrigger" );		static_cast<GenApi::CIntegerRef*> (&TriggerDelayLineTriggerCount )->SetReference(_Ptr->GetNode("TriggerDelayLineTriggerCount"));
    static_cast<GenApi::CIntegerRef*> (&ExposureStartDelayRaw )->SetReference(_Ptr->GetNode("ExposureStartDelayRaw"));
    static_cast<GenApi::CFloatRef*> (&ExposureStartDelayAbs )->SetReference(_Ptr->GetNode("ExposureStartDelayAbs"));
    static_cast<GenApi::CEnumerationTRef<ExposureAutoEnums> *> (&ExposureAuto )->SetReference(_Ptr->GetNode("ExposureAuto"));
    static_cast<GenApi::CEnumerationTRef<ExposureAutoEnums> *> (&ExposureAuto )->SetNumEnums(3);
	static_cast<GenApi::CEnumerationTRef<ExposureAutoEnums> *> (&ExposureAuto )->SetEnumReference( ExposureAuto_Off, "Off" );		static_cast<GenApi::CEnumerationTRef<ExposureAutoEnums> *> (&ExposureAuto )->SetEnumReference( ExposureAuto_Once, "Once" );		static_cast<GenApi::CEnumerationTRef<ExposureAutoEnums> *> (&ExposureAuto )->SetEnumReference( ExposureAuto_Continuous, "Continuous" );		static_cast<GenApi::CIntegerRef*> (&ExposureTimeRaw )->SetReference(_Ptr->GetNode("ExposureTimeRaw"));
    static_cast<GenApi::CFloatRef*> (&ExposureTimeAbs )->SetReference(_Ptr->GetNode("ExposureTimeAbs"));
    static_cast<GenApi::CFloatRef*> (&ExposureTimeBaseAbs )->SetReference(_Ptr->GetNode("ExposureTimeBaseAbs"));
    static_cast<GenApi::CBooleanRef*> (&ExposureTimeBaseAbsEnable )->SetReference(_Ptr->GetNode("ExposureTimeBaseAbsEnable"));
    static_cast<GenApi::CFloatRef*> (&AcquisitionLineRateAbs )->SetReference(_Ptr->GetNode("AcquisitionLineRateAbs"));
    static_cast<GenApi::CFloatRef*> (&ResultingLineRateAbs )->SetReference(_Ptr->GetNode("ResultingLineRateAbs"));
    static_cast<GenApi::CFloatRef*> (&AcquisitionFrameRateAbs )->SetReference(_Ptr->GetNode("AcquisitionFrameRateAbs"));
    static_cast<GenApi::CBooleanRef*> (&AcquisitionFrameRateEnable )->SetReference(_Ptr->GetNode("AcquisitionFrameRateEnable"));
    static_cast<GenApi::CFloatRef*> (&ResultingFrameRateAbs )->SetReference(_Ptr->GetNode("ResultingFrameRateAbs"));
    static_cast<GenApi::CEnumerationTRef<ExposureModeEnums> *> (&ExposureMode )->SetReference(_Ptr->GetNode("ExposureMode"));
    static_cast<GenApi::CEnumerationTRef<ExposureModeEnums> *> (&ExposureMode )->SetNumEnums(4);
	static_cast<GenApi::CEnumerationTRef<ExposureModeEnums> *> (&ExposureMode )->SetEnumReference( ExposureMode_Off, "Off" );		static_cast<GenApi::CEnumerationTRef<ExposureModeEnums> *> (&ExposureMode )->SetEnumReference( ExposureMode_Timed, "Timed" );		static_cast<GenApi::CEnumerationTRef<ExposureModeEnums> *> (&ExposureMode )->SetEnumReference( ExposureMode_TriggerWidth, "TriggerWidth" );		static_cast<GenApi::CEnumerationTRef<ExposureModeEnums> *> (&ExposureMode )->SetEnumReference( ExposureMode_TriggerControlled, "TriggerControlled" );		static_cast<GenApi::CBooleanRef*> (&GlobalResetReleaseModeEnable )->SetReference(_Ptr->GetNode("GlobalResetReleaseModeEnable"));
    static_cast<GenApi::CIntegerRef*> (&ExposureOverlapTimeMaxRaw )->SetReference(_Ptr->GetNode("ExposureOverlapTimeMaxRaw"));
    static_cast<GenApi::CEnumerationTRef<InterlacedIntegrationModeEnums> *> (&InterlacedIntegrationMode )->SetReference(_Ptr->GetNode("InterlacedIntegrationMode"));
    static_cast<GenApi::CEnumerationTRef<InterlacedIntegrationModeEnums> *> (&InterlacedIntegrationMode )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<InterlacedIntegrationModeEnums> *> (&InterlacedIntegrationMode )->SetEnumReference( InterlacedIntegrationMode_FieldIntegration, "FieldIntegration" );		static_cast<GenApi::CEnumerationTRef<InterlacedIntegrationModeEnums> *> (&InterlacedIntegrationMode )->SetEnumReference( InterlacedIntegrationMode_FrameIntegration, "FrameIntegration" );		static_cast<GenApi::CFloatRef*> (&ExposureOverlapTimeMaxAbs )->SetReference(_Ptr->GetNode("ExposureOverlapTimeMaxAbs"));
    static_cast<GenApi::CFloatRef*> (&ReadoutTimeAbs )->SetReference(_Ptr->GetNode("ReadoutTimeAbs"));
    static_cast<GenApi::CEnumerationTRef<AcquisitionStatusSelectorEnums> *> (&AcquisitionStatusSelector )->SetReference(_Ptr->GetNode("AcquisitionStatusSelector"));
    static_cast<GenApi::CEnumerationTRef<AcquisitionStatusSelectorEnums> *> (&AcquisitionStatusSelector )->SetNumEnums(7);
	static_cast<GenApi::CEnumerationTRef<AcquisitionStatusSelectorEnums> *> (&AcquisitionStatusSelector )->SetEnumReference( AcquisitionStatusSelector_AcquisitionTriggerWait, "AcquisitionTriggerWait" );		static_cast<GenApi::CEnumerationTRef<AcquisitionStatusSelectorEnums> *> (&AcquisitionStatusSelector )->SetEnumReference( AcquisitionStatusSelector_AcquisitionActive, "AcquisitionActive" );		static_cast<GenApi::CEnumerationTRef<AcquisitionStatusSelectorEnums> *> (&AcquisitionStatusSelector )->SetEnumReference( AcquisitionStatusSelector_AcquisitionTransfer, "AcquisitionTransfer" );		static_cast<GenApi::CEnumerationTRef<AcquisitionStatusSelectorEnums> *> (&AcquisitionStatusSelector )->SetEnumReference( AcquisitionStatusSelector_FrameTriggerWait, "FrameTriggerWait" );		static_cast<GenApi::CEnumerationTRef<AcquisitionStatusSelectorEnums> *> (&AcquisitionStatusSelector )->SetEnumReference( AcquisitionStatusSelector_FrameActive, "FrameActive" );		static_cast<GenApi::CEnumerationTRef<AcquisitionStatusSelectorEnums> *> (&AcquisitionStatusSelector )->SetEnumReference( AcquisitionStatusSelector_FrameTransfer, "FrameTransfer" );		static_cast<GenApi::CEnumerationTRef<AcquisitionStatusSelectorEnums> *> (&AcquisitionStatusSelector )->SetEnumReference( AcquisitionStatusSelector_ExposureActive, "ExposureActive" );		static_cast<GenApi::CBooleanRef*> (&AcquisitionStatus )->SetReference(_Ptr->GetNode("AcquisitionStatus"));
    static_cast<GenApi::CIntegerRef*> (&AveragingNumberOfFrames )->SetReference(_Ptr->GetNode("AveragingNumberOfFrames"));
    static_cast<GenApi::CBooleanRef*> (&FrameTimeoutEnable )->SetReference(_Ptr->GetNode("FrameTimeoutEnable"));
    static_cast<GenApi::CFloatRef*> (&FrameTimeoutAbs )->SetReference(_Ptr->GetNode("FrameTimeoutAbs"));
    static_cast<GenApi::CEnumerationTRef<LineSelectorEnums> *> (&LineSelector )->SetReference(_Ptr->GetNode("LineSelector"));
    static_cast<GenApi::CEnumerationTRef<LineSelectorEnums> *> (&LineSelector )->SetNumEnums(8);
	static_cast<GenApi::CEnumerationTRef<LineSelectorEnums> *> (&LineSelector )->SetEnumReference( LineSelector_Line1, "Line1" );		static_cast<GenApi::CEnumerationTRef<LineSelectorEnums> *> (&LineSelector )->SetEnumReference( LineSelector_Line2, "Line2" );		static_cast<GenApi::CEnumerationTRef<LineSelectorEnums> *> (&LineSelector )->SetEnumReference( LineSelector_Line3, "Line3" );		static_cast<GenApi::CEnumerationTRef<LineSelectorEnums> *> (&LineSelector )->SetEnumReference( LineSelector_Line4, "Line4" );		static_cast<GenApi::CEnumerationTRef<LineSelectorEnums> *> (&LineSelector )->SetEnumReference( LineSelector_Out1, "Out1" );		static_cast<GenApi::CEnumerationTRef<LineSelectorEnums> *> (&LineSelector )->SetEnumReference( LineSelector_Out2, "Out2" );		static_cast<GenApi::CEnumerationTRef<LineSelectorEnums> *> (&LineSelector )->SetEnumReference( LineSelector_Out3, "Out3" );		static_cast<GenApi::CEnumerationTRef<LineSelectorEnums> *> (&LineSelector )->SetEnumReference( LineSelector_Out4, "Out4" );		static_cast<GenApi::CBooleanRef*> (&LineInverter )->SetReference(_Ptr->GetNode("LineInverter"));
    static_cast<GenApi::CBooleanRef*> (&LineTermination )->SetReference(_Ptr->GetNode("LineTermination"));
    static_cast<GenApi::CIntegerRef*> (&LineDebouncerTimeRaw )->SetReference(_Ptr->GetNode("LineDebouncerTimeRaw"));
    static_cast<GenApi::CFloatRef*> (&LineDebouncerTimeAbs )->SetReference(_Ptr->GetNode("LineDebouncerTimeAbs"));
    static_cast<GenApi::CIntegerRef*> (&MinOutPulseWidthRaw )->SetReference(_Ptr->GetNode("MinOutPulseWidthRaw"));
    static_cast<GenApi::CFloatRef*> (&MinOutPulseWidthAbs )->SetReference(_Ptr->GetNode("MinOutPulseWidthAbs"));
    static_cast<GenApi::CBooleanRef*> (&LineStatus )->SetReference(_Ptr->GetNode("LineStatus"));
    static_cast<GenApi::CIntegerRef*> (&LineStatusAll )->SetReference(_Ptr->GetNode("LineStatusAll"));
    static_cast<GenApi::CBooleanRef*> (&UserOutputValue )->SetReference(_Ptr->GetNode("UserOutputValue"));
    static_cast<GenApi::CIntegerRef*> (&UserOutputValueAll )->SetReference(_Ptr->GetNode("UserOutputValueAll"));
    static_cast<GenApi::CIntegerRef*> (&UserOutputValueAllMask )->SetReference(_Ptr->GetNode("UserOutputValueAllMask"));
    static_cast<GenApi::CBooleanRef*> (&SyncUserOutputValue )->SetReference(_Ptr->GetNode("SyncUserOutputValue"));
    static_cast<GenApi::CIntegerRef*> (&SyncUserOutputValueAll )->SetReference(_Ptr->GetNode("SyncUserOutputValueAll"));
    static_cast<GenApi::CEnumerationTRef<LineModeEnums> *> (&LineMode )->SetReference(_Ptr->GetNode("LineMode"));
    static_cast<GenApi::CEnumerationTRef<LineModeEnums> *> (&LineMode )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<LineModeEnums> *> (&LineMode )->SetEnumReference( LineMode_Input, "Input" );		static_cast<GenApi::CEnumerationTRef<LineModeEnums> *> (&LineMode )->SetEnumReference( LineMode_Output, "Output" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetReference(_Ptr->GetNode("LineSource"));
    static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetNumEnums(27);
	static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_Off, "Off" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_ExposureActive, "ExposureActive" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_FrameTriggerWait, "FrameTriggerWait" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_LineTriggerWait, "LineTriggerWait" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_Timer1Active, "Timer1Active" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_Timer2Active, "Timer2Active" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_Timer3Active, "Timer3Active" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_Timer4Active, "Timer4Active" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_TimerActive, "TimerActive" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_UserOutput1, "UserOutput1" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_UserOutput2, "UserOutput2" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_UserOutput3, "UserOutput3" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_UserOutput4, "UserOutput4" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_UserOutput, "UserOutput" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_TriggerReady, "TriggerReady" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_SerialTx, "SerialTx" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_AcquisitionTriggerWait, "AcquisitionTriggerWait" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_ShaftEncoderModuleOut, "ShaftEncoderModuleOut" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_FrequencyConverter, "FrequencyConverter" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_PatternGenerator1, "PatternGenerator1" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_PatternGenerator2, "PatternGenerator2" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_PatternGenerator3, "PatternGenerator3" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_PatternGenerator4, "PatternGenerator4" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_AcquisitionTriggerReady, "AcquisitionTriggerReady" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_FlashWindow, "FlashWindow" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_FrameCycle, "FrameCycle" );		static_cast<GenApi::CEnumerationTRef<LineSourceEnums> *> (&LineSource )->SetEnumReference( LineSource_SyncUserOutput, "SyncUserOutput" );		static_cast<GenApi::CEnumerationTRef<LineLogicEnums> *> (&LineLogic )->SetReference(_Ptr->GetNode("LineLogic"));
    static_cast<GenApi::CEnumerationTRef<LineLogicEnums> *> (&LineLogic )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<LineLogicEnums> *> (&LineLogic )->SetEnumReference( LineLogic_Positive, "Positive" );		static_cast<GenApi::CEnumerationTRef<LineLogicEnums> *> (&LineLogic )->SetEnumReference( LineLogic_Negative, "Negative" );		static_cast<GenApi::CEnumerationTRef<LineFormatEnums> *> (&LineFormat )->SetReference(_Ptr->GetNode("LineFormat"));
    static_cast<GenApi::CEnumerationTRef<LineFormatEnums> *> (&LineFormat )->SetNumEnums(6);
	static_cast<GenApi::CEnumerationTRef<LineFormatEnums> *> (&LineFormat )->SetEnumReference( LineFormat_NoConnect, "NoConnect" );		static_cast<GenApi::CEnumerationTRef<LineFormatEnums> *> (&LineFormat )->SetEnumReference( LineFormat_TriState, "TriState" );		static_cast<GenApi::CEnumerationTRef<LineFormatEnums> *> (&LineFormat )->SetEnumReference( LineFormat_TTL, "TTL" );		static_cast<GenApi::CEnumerationTRef<LineFormatEnums> *> (&LineFormat )->SetEnumReference( LineFormat_LVDS, "LVDS" );		static_cast<GenApi::CEnumerationTRef<LineFormatEnums> *> (&LineFormat )->SetEnumReference( LineFormat_RS422, "RS422" );		static_cast<GenApi::CEnumerationTRef<LineFormatEnums> *> (&LineFormat )->SetEnumReference( LineFormat_OptoCoupled, "OptoCoupled" );		static_cast<GenApi::CEnumerationTRef<UserOutputSelectorEnums> *> (&UserOutputSelector )->SetReference(_Ptr->GetNode("UserOutputSelector"));
    static_cast<GenApi::CEnumerationTRef<UserOutputSelectorEnums> *> (&UserOutputSelector )->SetNumEnums(8);
	static_cast<GenApi::CEnumerationTRef<UserOutputSelectorEnums> *> (&UserOutputSelector )->SetEnumReference( UserOutputSelector_UserOutput1, "UserOutput1" );		static_cast<GenApi::CEnumerationTRef<UserOutputSelectorEnums> *> (&UserOutputSelector )->SetEnumReference( UserOutputSelector_UserOutput2, "UserOutput2" );		static_cast<GenApi::CEnumerationTRef<UserOutputSelectorEnums> *> (&UserOutputSelector )->SetEnumReference( UserOutputSelector_UserOutput3, "UserOutput3" );		static_cast<GenApi::CEnumerationTRef<UserOutputSelectorEnums> *> (&UserOutputSelector )->SetEnumReference( UserOutputSelector_UserOutput4, "UserOutput4" );		static_cast<GenApi::CEnumerationTRef<UserOutputSelectorEnums> *> (&UserOutputSelector )->SetEnumReference( UserOutputSelector_UserOutput5, "UserOutput5" );		static_cast<GenApi::CEnumerationTRef<UserOutputSelectorEnums> *> (&UserOutputSelector )->SetEnumReference( UserOutputSelector_UserOutput6, "UserOutput6" );		static_cast<GenApi::CEnumerationTRef<UserOutputSelectorEnums> *> (&UserOutputSelector )->SetEnumReference( UserOutputSelector_UserOutput7, "UserOutput7" );		static_cast<GenApi::CEnumerationTRef<UserOutputSelectorEnums> *> (&UserOutputSelector )->SetEnumReference( UserOutputSelector_UserOutput8, "UserOutput8" );		static_cast<GenApi::CEnumerationTRef<SyncUserOutputSelectorEnums> *> (&SyncUserOutputSelector )->SetReference(_Ptr->GetNode("SyncUserOutputSelector"));
    static_cast<GenApi::CEnumerationTRef<SyncUserOutputSelectorEnums> *> (&SyncUserOutputSelector )->SetNumEnums(8);
	static_cast<GenApi::CEnumerationTRef<SyncUserOutputSelectorEnums> *> (&SyncUserOutputSelector )->SetEnumReference( SyncUserOutputSelector_SyncUserOutput1, "SyncUserOutput1" );		static_cast<GenApi::CEnumerationTRef<SyncUserOutputSelectorEnums> *> (&SyncUserOutputSelector )->SetEnumReference( SyncUserOutputSelector_SyncUserOutput2, "SyncUserOutput2" );		static_cast<GenApi::CEnumerationTRef<SyncUserOutputSelectorEnums> *> (&SyncUserOutputSelector )->SetEnumReference( SyncUserOutputSelector_SyncUserOutput3, "SyncUserOutput3" );		static_cast<GenApi::CEnumerationTRef<SyncUserOutputSelectorEnums> *> (&SyncUserOutputSelector )->SetEnumReference( SyncUserOutputSelector_SyncUserOutput4, "SyncUserOutput4" );		static_cast<GenApi::CEnumerationTRef<SyncUserOutputSelectorEnums> *> (&SyncUserOutputSelector )->SetEnumReference( SyncUserOutputSelector_SyncUserOutput5, "SyncUserOutput5" );		static_cast<GenApi::CEnumerationTRef<SyncUserOutputSelectorEnums> *> (&SyncUserOutputSelector )->SetEnumReference( SyncUserOutputSelector_SyncUserOutput6, "SyncUserOutput6" );		static_cast<GenApi::CEnumerationTRef<SyncUserOutputSelectorEnums> *> (&SyncUserOutputSelector )->SetEnumReference( SyncUserOutputSelector_SyncUserOutput7, "SyncUserOutput7" );		static_cast<GenApi::CEnumerationTRef<SyncUserOutputSelectorEnums> *> (&SyncUserOutputSelector )->SetEnumReference( SyncUserOutputSelector_SyncUserOutput8, "SyncUserOutput8" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSelectorEnums> *> (&ShaftEncoderModuleLineSelector )->SetReference(_Ptr->GetNode("ShaftEncoderModuleLineSelector"));
    static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSelectorEnums> *> (&ShaftEncoderModuleLineSelector )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSelectorEnums> *> (&ShaftEncoderModuleLineSelector )->SetEnumReference( ShaftEncoderModuleLineSelector_PhaseA, "PhaseA" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSelectorEnums> *> (&ShaftEncoderModuleLineSelector )->SetEnumReference( ShaftEncoderModuleLineSelector_PhaseB, "PhaseB" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSourceEnums> *> (&ShaftEncoderModuleLineSource )->SetReference(_Ptr->GetNode("ShaftEncoderModuleLineSource"));
    static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSourceEnums> *> (&ShaftEncoderModuleLineSource )->SetNumEnums(12);
	static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSourceEnums> *> (&ShaftEncoderModuleLineSource )->SetEnumReference( ShaftEncoderModuleLineSource_Line1, "Line1" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSourceEnums> *> (&ShaftEncoderModuleLineSource )->SetEnumReference( ShaftEncoderModuleLineSource_Line2, "Line2" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSourceEnums> *> (&ShaftEncoderModuleLineSource )->SetEnumReference( ShaftEncoderModuleLineSource_Line3, "Line3" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSourceEnums> *> (&ShaftEncoderModuleLineSource )->SetEnumReference( ShaftEncoderModuleLineSource_Line4, "Line4" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSourceEnums> *> (&ShaftEncoderModuleLineSource )->SetEnumReference( ShaftEncoderModuleLineSource_Line5, "Line5" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSourceEnums> *> (&ShaftEncoderModuleLineSource )->SetEnumReference( ShaftEncoderModuleLineSource_Line6, "Line6" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSourceEnums> *> (&ShaftEncoderModuleLineSource )->SetEnumReference( ShaftEncoderModuleLineSource_Line7, "Line7" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSourceEnums> *> (&ShaftEncoderModuleLineSource )->SetEnumReference( ShaftEncoderModuleLineSource_Line8, "Line8" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSourceEnums> *> (&ShaftEncoderModuleLineSource )->SetEnumReference( ShaftEncoderModuleLineSource_CC1, "CC1" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSourceEnums> *> (&ShaftEncoderModuleLineSource )->SetEnumReference( ShaftEncoderModuleLineSource_CC2, "CC2" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSourceEnums> *> (&ShaftEncoderModuleLineSource )->SetEnumReference( ShaftEncoderModuleLineSource_CC3, "CC3" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleLineSourceEnums> *> (&ShaftEncoderModuleLineSource )->SetEnumReference( ShaftEncoderModuleLineSource_CC4, "CC4" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleModeEnums> *> (&ShaftEncoderModuleMode )->SetReference(_Ptr->GetNode("ShaftEncoderModuleMode"));
    static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleModeEnums> *> (&ShaftEncoderModuleMode )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleModeEnums> *> (&ShaftEncoderModuleMode )->SetEnumReference( ShaftEncoderModuleMode_AnyDirection, "AnyDirection" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleModeEnums> *> (&ShaftEncoderModuleMode )->SetEnumReference( ShaftEncoderModuleMode_ForwardOnly, "ForwardOnly" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleCounterModeEnums> *> (&ShaftEncoderModuleCounterMode )->SetReference(_Ptr->GetNode("ShaftEncoderModuleCounterMode"));
    static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleCounterModeEnums> *> (&ShaftEncoderModuleCounterMode )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleCounterModeEnums> *> (&ShaftEncoderModuleCounterMode )->SetEnumReference( ShaftEncoderModuleCounterMode_FollowDirection, "FollowDirection" );		static_cast<GenApi::CEnumerationTRef<ShaftEncoderModuleCounterModeEnums> *> (&ShaftEncoderModuleCounterMode )->SetEnumReference( ShaftEncoderModuleCounterMode_IgnoreDirection, "IgnoreDirection" );		static_cast<GenApi::CIntegerRef*> (&ShaftEncoderModuleCounter )->SetReference(_Ptr->GetNode("ShaftEncoderModuleCounter"));
    static_cast<GenApi::CIntegerRef*> (&ShaftEncoderModuleCounterMax )->SetReference(_Ptr->GetNode("ShaftEncoderModuleCounterMax"));
    static_cast<GenApi::CCommandRef*> (&ShaftEncoderModuleCounterReset )->SetReference(_Ptr->GetNode("ShaftEncoderModuleCounterReset"));
    static_cast<GenApi::CIntegerRef*> (&ShaftEncoderModuleReverseCounterMax )->SetReference(_Ptr->GetNode("ShaftEncoderModuleReverseCounterMax"));
    static_cast<GenApi::CCommandRef*> (&ShaftEncoderModuleReverseCounterReset )->SetReference(_Ptr->GetNode("ShaftEncoderModuleReverseCounterReset"));
    static_cast<GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums> *> (&FrequencyConverterInputSource )->SetReference(_Ptr->GetNode("FrequencyConverterInputSource"));
    static_cast<GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums> *> (&FrequencyConverterInputSource )->SetNumEnums(13);
	static_cast<GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums> *> (&FrequencyConverterInputSource )->SetEnumReference( FrequencyConverterInputSource_Line1, "Line1" );		static_cast<GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums> *> (&FrequencyConverterInputSource )->SetEnumReference( FrequencyConverterInputSource_Line2, "Line2" );		static_cast<GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums> *> (&FrequencyConverterInputSource )->SetEnumReference( FrequencyConverterInputSource_Line3, "Line3" );		static_cast<GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums> *> (&FrequencyConverterInputSource )->SetEnumReference( FrequencyConverterInputSource_Line4, "Line4" );		static_cast<GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums> *> (&FrequencyConverterInputSource )->SetEnumReference( FrequencyConverterInputSource_Line5, "Line5" );		static_cast<GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums> *> (&FrequencyConverterInputSource )->SetEnumReference( FrequencyConverterInputSource_Line6, "Line6" );		static_cast<GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums> *> (&FrequencyConverterInputSource )->SetEnumReference( FrequencyConverterInputSource_Line7, "Line7" );		static_cast<GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums> *> (&FrequencyConverterInputSource )->SetEnumReference( FrequencyConverterInputSource_Line8, "Line8" );		static_cast<GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums> *> (&FrequencyConverterInputSource )->SetEnumReference( FrequencyConverterInputSource_CC1, "CC1" );		static_cast<GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums> *> (&FrequencyConverterInputSource )->SetEnumReference( FrequencyConverterInputSource_CC2, "CC2" );		static_cast<GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums> *> (&FrequencyConverterInputSource )->SetEnumReference( FrequencyConverterInputSource_CC3, "CC3" );		static_cast<GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums> *> (&FrequencyConverterInputSource )->SetEnumReference( FrequencyConverterInputSource_CC4, "CC4" );		static_cast<GenApi::CEnumerationTRef<FrequencyConverterInputSourceEnums> *> (&FrequencyConverterInputSource )->SetEnumReference( FrequencyConverterInputSource_ShaftEncoderModuleOut, "ShaftEncoderModuleOut" );		static_cast<GenApi::CEnumerationTRef<FrequencyConverterSignalAlignmentEnums> *> (&FrequencyConverterSignalAlignment )->SetReference(_Ptr->GetNode("FrequencyConverterSignalAlignment"));
    static_cast<GenApi::CEnumerationTRef<FrequencyConverterSignalAlignmentEnums> *> (&FrequencyConverterSignalAlignment )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<FrequencyConverterSignalAlignmentEnums> *> (&FrequencyConverterSignalAlignment )->SetEnumReference( FrequencyConverterSignalAlignment_RisingEdge, "RisingEdge" );		static_cast<GenApi::CEnumerationTRef<FrequencyConverterSignalAlignmentEnums> *> (&FrequencyConverterSignalAlignment )->SetEnumReference( FrequencyConverterSignalAlignment_FallingEdge, "FallingEdge" );		static_cast<GenApi::CIntegerRef*> (&FrequencyConverterPreDivider )->SetReference(_Ptr->GetNode("FrequencyConverterPreDivider"));
    static_cast<GenApi::CIntegerRef*> (&FrequencyConverterMultiplier )->SetReference(_Ptr->GetNode("FrequencyConverterMultiplier"));
    static_cast<GenApi::CIntegerRef*> (&FrequencyConverterPostDivider )->SetReference(_Ptr->GetNode("FrequencyConverterPostDivider"));
    static_cast<GenApi::CBooleanRef*> (&FrequencyConverterPreventOvertrigger )->SetReference(_Ptr->GetNode("FrequencyConverterPreventOvertrigger"));
    static_cast<GenApi::CFloatRef*> (&TimerDurationTimebaseAbs )->SetReference(_Ptr->GetNode("TimerDurationTimebaseAbs"));
    static_cast<GenApi::CFloatRef*> (&TimerDelayTimebaseAbs )->SetReference(_Ptr->GetNode("TimerDelayTimebaseAbs"));
    static_cast<GenApi::CEnumerationTRef<TimerSelectorEnums> *> (&TimerSelector )->SetReference(_Ptr->GetNode("TimerSelector"));
    static_cast<GenApi::CEnumerationTRef<TimerSelectorEnums> *> (&TimerSelector )->SetNumEnums(4);
	static_cast<GenApi::CEnumerationTRef<TimerSelectorEnums> *> (&TimerSelector )->SetEnumReference( TimerSelector_Timer1, "Timer1" );		static_cast<GenApi::CEnumerationTRef<TimerSelectorEnums> *> (&TimerSelector )->SetEnumReference( TimerSelector_Timer2, "Timer2" );		static_cast<GenApi::CEnumerationTRef<TimerSelectorEnums> *> (&TimerSelector )->SetEnumReference( TimerSelector_Timer3, "Timer3" );		static_cast<GenApi::CEnumerationTRef<TimerSelectorEnums> *> (&TimerSelector )->SetEnumReference( TimerSelector_Timer4, "Timer4" );		static_cast<GenApi::CFloatRef*> (&TimerDurationAbs )->SetReference(_Ptr->GetNode("TimerDurationAbs"));
    static_cast<GenApi::CIntegerRef*> (&TimerDurationRaw )->SetReference(_Ptr->GetNode("TimerDurationRaw"));
    static_cast<GenApi::CFloatRef*> (&TimerDelayAbs )->SetReference(_Ptr->GetNode("TimerDelayAbs"));
    static_cast<GenApi::CIntegerRef*> (&TimerDelayRaw )->SetReference(_Ptr->GetNode("TimerDelayRaw"));
    static_cast<GenApi::CEnumerationTRef<TimerTriggerSourceEnums> *> (&TimerTriggerSource )->SetReference(_Ptr->GetNode("TimerTriggerSource"));
    static_cast<GenApi::CEnumerationTRef<TimerTriggerSourceEnums> *> (&TimerTriggerSource )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<TimerTriggerSourceEnums> *> (&TimerTriggerSource )->SetEnumReference( TimerTriggerSource_Off, "Off" );		static_cast<GenApi::CEnumerationTRef<TimerTriggerSourceEnums> *> (&TimerTriggerSource )->SetEnumReference( TimerTriggerSource_ExposureStart, "ExposureStart" );		static_cast<GenApi::CEnumerationTRef<TimerTriggerActivationEnums> *> (&TimerTriggerActivation )->SetReference(_Ptr->GetNode("TimerTriggerActivation"));
    static_cast<GenApi::CEnumerationTRef<TimerTriggerActivationEnums> *> (&TimerTriggerActivation )->SetNumEnums(4);
	static_cast<GenApi::CEnumerationTRef<TimerTriggerActivationEnums> *> (&TimerTriggerActivation )->SetEnumReference( TimerTriggerActivation_RisingEdge, "RisingEdge" );		static_cast<GenApi::CEnumerationTRef<TimerTriggerActivationEnums> *> (&TimerTriggerActivation )->SetEnumReference( TimerTriggerActivation_FallingEdge, "FallingEdge" );		static_cast<GenApi::CEnumerationTRef<TimerTriggerActivationEnums> *> (&TimerTriggerActivation )->SetEnumReference( TimerTriggerActivation_LevelHigh, "LevelHigh" );		static_cast<GenApi::CEnumerationTRef<TimerTriggerActivationEnums> *> (&TimerTriggerActivation )->SetEnumReference( TimerTriggerActivation_LevelLow, "LevelLow" );		static_cast<GenApi::CBooleanRef*> (&TimerSequenceEnable )->SetReference(_Ptr->GetNode("TimerSequenceEnable"));
    static_cast<GenApi::CIntegerRef*> (&TimerSequenceLastEntryIndex )->SetReference(_Ptr->GetNode("TimerSequenceLastEntryIndex"));
    static_cast<GenApi::CIntegerRef*> (&TimerSequenceCurrentEntryIndex )->SetReference(_Ptr->GetNode("TimerSequenceCurrentEntryIndex"));
    static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetReference(_Ptr->GetNode("TimerSequenceEntrySelector"));
    static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetNumEnums(16);
	static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetEnumReference( TimerSequenceEntrySelector_Entry1, "Entry1" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetEnumReference( TimerSequenceEntrySelector_Entry2, "Entry2" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetEnumReference( TimerSequenceEntrySelector_Entry3, "Entry3" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetEnumReference( TimerSequenceEntrySelector_Entry4, "Entry4" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetEnumReference( TimerSequenceEntrySelector_Entry5, "Entry5" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetEnumReference( TimerSequenceEntrySelector_Entry6, "Entry6" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetEnumReference( TimerSequenceEntrySelector_Entry7, "Entry7" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetEnumReference( TimerSequenceEntrySelector_Entry8, "Entry8" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetEnumReference( TimerSequenceEntrySelector_Entry9, "Entry9" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetEnumReference( TimerSequenceEntrySelector_Entry10, "Entry10" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetEnumReference( TimerSequenceEntrySelector_Entry11, "Entry11" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetEnumReference( TimerSequenceEntrySelector_Entry12, "Entry12" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetEnumReference( TimerSequenceEntrySelector_Entry13, "Entry13" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetEnumReference( TimerSequenceEntrySelector_Entry14, "Entry14" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetEnumReference( TimerSequenceEntrySelector_Entry15, "Entry15" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceEntrySelectorEnums> *> (&TimerSequenceEntrySelector )->SetEnumReference( TimerSequenceEntrySelector_Entry16, "Entry16" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceTimerSelectorEnums> *> (&TimerSequenceTimerSelector )->SetReference(_Ptr->GetNode("TimerSequenceTimerSelector"));
    static_cast<GenApi::CEnumerationTRef<TimerSequenceTimerSelectorEnums> *> (&TimerSequenceTimerSelector )->SetNumEnums(4);
	static_cast<GenApi::CEnumerationTRef<TimerSequenceTimerSelectorEnums> *> (&TimerSequenceTimerSelector )->SetEnumReference( TimerSequenceTimerSelector_Timer1, "Timer1" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceTimerSelectorEnums> *> (&TimerSequenceTimerSelector )->SetEnumReference( TimerSequenceTimerSelector_Timer2, "Timer2" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceTimerSelectorEnums> *> (&TimerSequenceTimerSelector )->SetEnumReference( TimerSequenceTimerSelector_Timer3, "Timer3" );		static_cast<GenApi::CEnumerationTRef<TimerSequenceTimerSelectorEnums> *> (&TimerSequenceTimerSelector )->SetEnumReference( TimerSequenceTimerSelector_Timer4, "Timer4" );		static_cast<GenApi::CBooleanRef*> (&TimerSequenceTimerEnable )->SetReference(_Ptr->GetNode("TimerSequenceTimerEnable"));
    static_cast<GenApi::CBooleanRef*> (&TimerSequenceTimerInverter )->SetReference(_Ptr->GetNode("TimerSequenceTimerInverter"));
    static_cast<GenApi::CIntegerRef*> (&TimerSequenceTimerDelayRaw )->SetReference(_Ptr->GetNode("TimerSequenceTimerDelayRaw"));
    static_cast<GenApi::CIntegerRef*> (&TimerSequenceTimerDurationRaw )->SetReference(_Ptr->GetNode("TimerSequenceTimerDurationRaw"));
    static_cast<GenApi::CEnumerationTRef<CounterSelectorEnums> *> (&CounterSelector )->SetReference(_Ptr->GetNode("CounterSelector"));
    static_cast<GenApi::CEnumerationTRef<CounterSelectorEnums> *> (&CounterSelector )->SetNumEnums(4);
	static_cast<GenApi::CEnumerationTRef<CounterSelectorEnums> *> (&CounterSelector )->SetEnumReference( CounterSelector_Counter1, "Counter1" );		static_cast<GenApi::CEnumerationTRef<CounterSelectorEnums> *> (&CounterSelector )->SetEnumReference( CounterSelector_Counter2, "Counter2" );		static_cast<GenApi::CEnumerationTRef<CounterSelectorEnums> *> (&CounterSelector )->SetEnumReference( CounterSelector_Counter3, "Counter3" );		static_cast<GenApi::CEnumerationTRef<CounterSelectorEnums> *> (&CounterSelector )->SetEnumReference( CounterSelector_Counter4, "Counter4" );		static_cast<GenApi::CEnumerationTRef<CounterEventSourceEnums> *> (&CounterEventSource )->SetReference(_Ptr->GetNode("CounterEventSource"));
    static_cast<GenApi::CEnumerationTRef<CounterEventSourceEnums> *> (&CounterEventSource )->SetNumEnums(12);
	static_cast<GenApi::CEnumerationTRef<CounterEventSourceEnums> *> (&CounterEventSource )->SetEnumReference( CounterEventSource_Off, "Off" );		static_cast<GenApi::CEnumerationTRef<CounterEventSourceEnums> *> (&CounterEventSource )->SetEnumReference( CounterEventSource_AcquisitionTrigger, "AcquisitionTrigger" );		static_cast<GenApi::CEnumerationTRef<CounterEventSourceEnums> *> (&CounterEventSource )->SetEnumReference( CounterEventSource_AcquisitionStart, "AcquisitionStart" );		static_cast<GenApi::CEnumerationTRef<CounterEventSourceEnums> *> (&CounterEventSource )->SetEnumReference( CounterEventSource_AcquisitionEnd, "AcquisitionEnd" );		static_cast<GenApi::CEnumerationTRef<CounterEventSourceEnums> *> (&CounterEventSource )->SetEnumReference( CounterEventSource_FrameTrigger, "FrameTrigger" );		static_cast<GenApi::CEnumerationTRef<CounterEventSourceEnums> *> (&CounterEventSource )->SetEnumReference( CounterEventSource_FrameStart, "FrameStart" );		static_cast<GenApi::CEnumerationTRef<CounterEventSourceEnums> *> (&CounterEventSource )->SetEnumReference( CounterEventSource_FrameEnd, "FrameEnd" );		static_cast<GenApi::CEnumerationTRef<CounterEventSourceEnums> *> (&CounterEventSource )->SetEnumReference( CounterEventSource_LineTrigger, "LineTrigger" );		static_cast<GenApi::CEnumerationTRef<CounterEventSourceEnums> *> (&CounterEventSource )->SetEnumReference( CounterEventSource_LineStart, "LineStart" );		static_cast<GenApi::CEnumerationTRef<CounterEventSourceEnums> *> (&CounterEventSource )->SetEnumReference( CounterEventSource_LineEnd, "LineEnd" );		static_cast<GenApi::CEnumerationTRef<CounterEventSourceEnums> *> (&CounterEventSource )->SetEnumReference( CounterEventSource_ExposureStart, "ExposureStart" );		static_cast<GenApi::CEnumerationTRef<CounterEventSourceEnums> *> (&CounterEventSource )->SetEnumReference( CounterEventSource_ExposureEnd, "ExposureEnd" );		static_cast<GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource )->SetReference(_Ptr->GetNode("CounterResetSource"));
    static_cast<GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource )->SetNumEnums(14);
	static_cast<GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource )->SetEnumReference( CounterResetSource_Off, "Off" );		static_cast<GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource )->SetEnumReference( CounterResetSource_Software, "Software" );		static_cast<GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource )->SetEnumReference( CounterResetSource_Line1, "Line1" );		static_cast<GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource )->SetEnumReference( CounterResetSource_Line2, "Line2" );		static_cast<GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource )->SetEnumReference( CounterResetSource_Line3, "Line3" );		static_cast<GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource )->SetEnumReference( CounterResetSource_Line4, "Line4" );		static_cast<GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource )->SetEnumReference( CounterResetSource_Line5, "Line5" );		static_cast<GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource )->SetEnumReference( CounterResetSource_Line6, "Line6" );		static_cast<GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource )->SetEnumReference( CounterResetSource_Line7, "Line7" );		static_cast<GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource )->SetEnumReference( CounterResetSource_Line8, "Line8" );		static_cast<GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource )->SetEnumReference( CounterResetSource_CC1, "CC1" );		static_cast<GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource )->SetEnumReference( CounterResetSource_CC2, "CC2" );		static_cast<GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource )->SetEnumReference( CounterResetSource_CC3, "CC3" );		static_cast<GenApi::CEnumerationTRef<CounterResetSourceEnums> *> (&CounterResetSource )->SetEnumReference( CounterResetSource_CC4, "CC4" );		static_cast<GenApi::CCommandRef*> (&CounterReset )->SetReference(_Ptr->GetNode("CounterReset"));
    static_cast<GenApi::CBooleanRef*> (&LUTEnable )->SetReference(_Ptr->GetNode("LUTEnable"));
    static_cast<GenApi::CIntegerRef*> (&LUTIndex )->SetReference(_Ptr->GetNode("LUTIndex"));
    static_cast<GenApi::CIntegerRef*> (&LUTValue )->SetReference(_Ptr->GetNode("LUTValue"));
    static_cast<GenApi::CRegisterRef*> (&LUTValueAll )->SetReference(_Ptr->GetNode("LUTValueAll"));
    static_cast<GenApi::CEnumerationTRef<LUTSelectorEnums> *> (&LUTSelector )->SetReference(_Ptr->GetNode("LUTSelector"));
    static_cast<GenApi::CEnumerationTRef<LUTSelectorEnums> *> (&LUTSelector )->SetNumEnums(1);
	static_cast<GenApi::CEnumerationTRef<LUTSelectorEnums> *> (&LUTSelector )->SetEnumReference( LUTSelector_Luminance, "Luminance" );		static_cast<GenApi::CBooleanRef*> (&PixelFormatLegacy )->SetReference(_Ptr->GetNode("PixelFormatLegacy"));
    static_cast<GenApi::CIntegerRef*> (&PayloadSize )->SetReference(_Ptr->GetNode("PayloadSize"));
    static_cast<GenApi::CEnumerationTRef<GevInterfaceSelectorEnums> *> (&GevInterfaceSelector )->SetReference(_Ptr->GetNode("GevInterfaceSelector"));
    static_cast<GenApi::CEnumerationTRef<GevInterfaceSelectorEnums> *> (&GevInterfaceSelector )->SetNumEnums(1);
	static_cast<GenApi::CEnumerationTRef<GevInterfaceSelectorEnums> *> (&GevInterfaceSelector )->SetEnumReference( GevInterfaceSelector_NetworkInterface0, "NetworkInterface0" );		static_cast<GenApi::CIntegerRef*> (&GevVersionMajor )->SetReference(_Ptr->GetNode("GevVersionMajor"));
    static_cast<GenApi::CIntegerRef*> (&GevVersionMinor )->SetReference(_Ptr->GetNode("GevVersionMinor"));
    static_cast<GenApi::CBooleanRef*> (&GevDeviceModeIsBigEndian )->SetReference(_Ptr->GetNode("GevDeviceModeIsBigEndian"));
    static_cast<GenApi::CIntegerRef*> (&GevDeviceModeCharacterSet )->SetReference(_Ptr->GetNode("GevDeviceModeCharacterSet"));
    static_cast<GenApi::CIntegerRef*> (&GevMACAddress )->SetReference(_Ptr->GetNode("GevMACAddress"));
    static_cast<GenApi::CBooleanRef*> (&GevSupportedIPConfigurationLLA )->SetReference(_Ptr->GetNode("GevSupportedIPConfigurationLLA"));
    static_cast<GenApi::CBooleanRef*> (&GevSupportedIPConfigurationDHCP )->SetReference(_Ptr->GetNode("GevSupportedIPConfigurationDHCP"));
    static_cast<GenApi::CBooleanRef*> (&GevSupportedIPConfigurationPersistentIP )->SetReference(_Ptr->GetNode("GevSupportedIPConfigurationPersistentIP"));
    static_cast<GenApi::CIntegerRef*> (&GevCurrentIPConfiguration )->SetReference(_Ptr->GetNode("GevCurrentIPConfiguration"));
    static_cast<GenApi::CIntegerRef*> (&GevCurrentIPAddress )->SetReference(_Ptr->GetNode("GevCurrentIPAddress"));
    static_cast<GenApi::CIntegerRef*> (&GevCurrentSubnetMask )->SetReference(_Ptr->GetNode("GevCurrentSubnetMask"));
    static_cast<GenApi::CIntegerRef*> (&GevCurrentDefaultGateway )->SetReference(_Ptr->GetNode("GevCurrentDefaultGateway"));
    static_cast<GenApi::CIntegerRef*> (&GevPersistentIPAddress )->SetReference(_Ptr->GetNode("GevPersistentIPAddress"));
    static_cast<GenApi::CIntegerRef*> (&GevPersistentSubnetMask )->SetReference(_Ptr->GetNode("GevPersistentSubnetMask"));
    static_cast<GenApi::CIntegerRef*> (&GevPersistentDefaultGateway )->SetReference(_Ptr->GetNode("GevPersistentDefaultGateway"));
    static_cast<GenApi::CIntegerRef*> (&GevLinkSpeed )->SetReference(_Ptr->GetNode("GevLinkSpeed"));
    static_cast<GenApi::CBooleanRef*> (&GevLinkMaster )->SetReference(_Ptr->GetNode("GevLinkMaster"));
    static_cast<GenApi::CBooleanRef*> (&GevLinkFullDuplex )->SetReference(_Ptr->GetNode("GevLinkFullDuplex"));
    static_cast<GenApi::CBooleanRef*> (&GevLinkCrossover )->SetReference(_Ptr->GetNode("GevLinkCrossover"));
    static_cast<GenApi::CStringRef*> (&GevFirstURL )->SetReference(_Ptr->GetNode("GevFirstURL"));
    static_cast<GenApi::CStringRef*> (&GevSecondURL )->SetReference(_Ptr->GetNode("GevSecondURL"));
    static_cast<GenApi::CIntegerRef*> (&GevNumberOfInterfaces )->SetReference(_Ptr->GetNode("GevNumberOfInterfaces"));
    static_cast<GenApi::CIntegerRef*> (&GevMessageChannelCount )->SetReference(_Ptr->GetNode("GevMessageChannelCount"));
    static_cast<GenApi::CIntegerRef*> (&GevStreamChannelCount )->SetReference(_Ptr->GetNode("GevStreamChannelCount"));
    static_cast<GenApi::CBooleanRef*> (&GevSupportedOptionalCommandsEVENTDATA )->SetReference(_Ptr->GetNode("GevSupportedOptionalCommandsEVENTDATA"));
    static_cast<GenApi::CBooleanRef*> (&GevSupportedOptionalCommandsEVENT )->SetReference(_Ptr->GetNode("GevSupportedOptionalCommandsEVENT"));
    static_cast<GenApi::CBooleanRef*> (&GevSupportedOptionalCommandsPACKETRESEND )->SetReference(_Ptr->GetNode("GevSupportedOptionalCommandsPACKETRESEND"));
    static_cast<GenApi::CBooleanRef*> (&GevSupportedOptionalCommandsWRITEMEM )->SetReference(_Ptr->GetNode("GevSupportedOptionalCommandsWRITEMEM"));
    static_cast<GenApi::CBooleanRef*> (&GevSupportedOptionalCommandsConcatenation )->SetReference(_Ptr->GetNode("GevSupportedOptionalCommandsConcatenation"));
    static_cast<GenApi::CIntegerRef*> (&GevHeartbeatTimeout )->SetReference(_Ptr->GetNode("GevHeartbeatTimeout"));
    static_cast<GenApi::CIntegerRef*> (&GevTimestampTickFrequency )->SetReference(_Ptr->GetNode("GevTimestampTickFrequency"));
    static_cast<GenApi::CCommandRef*> (&GevTimestampControlReset )->SetReference(_Ptr->GetNode("GevTimestampControlReset"));
    static_cast<GenApi::CCommandRef*> (&GevTimestampControlLatch )->SetReference(_Ptr->GetNode("GevTimestampControlLatch"));
    static_cast<GenApi::CCommandRef*> (&GevTimestampControlLatchReset )->SetReference(_Ptr->GetNode("GevTimestampControlLatchReset"));
    static_cast<GenApi::CIntegerRef*> (&GevTimestampValue )->SetReference(_Ptr->GetNode("GevTimestampValue"));
    static_cast<GenApi::CEnumerationTRef<GevCCPEnums> *> (&GevCCP )->SetReference(_Ptr->GetNode("GevCCP"));
    static_cast<GenApi::CEnumerationTRef<GevCCPEnums> *> (&GevCCP )->SetNumEnums(3);
	static_cast<GenApi::CEnumerationTRef<GevCCPEnums> *> (&GevCCP )->SetEnumReference( GevCCP_Exclusive, "Exclusive" );		static_cast<GenApi::CEnumerationTRef<GevCCPEnums> *> (&GevCCP )->SetEnumReference( GevCCP_Control, "Control" );		static_cast<GenApi::CEnumerationTRef<GevCCPEnums> *> (&GevCCP )->SetEnumReference( GevCCP_ExclusiveControl, "ExclusiveControl" );		static_cast<GenApi::CEnumerationTRef<GevStreamChannelSelectorEnums> *> (&GevStreamChannelSelector )->SetReference(_Ptr->GetNode("GevStreamChannelSelector"));
    static_cast<GenApi::CEnumerationTRef<GevStreamChannelSelectorEnums> *> (&GevStreamChannelSelector )->SetNumEnums(1);
	static_cast<GenApi::CEnumerationTRef<GevStreamChannelSelectorEnums> *> (&GevStreamChannelSelector )->SetEnumReference( GevStreamChannelSelector_StreamChannel0, "StreamChannel0" );		static_cast<GenApi::CIntegerRef*> (&GevSCPInterfaceIndex )->SetReference(_Ptr->GetNode("GevSCPInterfaceIndex"));
    static_cast<GenApi::CIntegerRef*> (&GevSCPHostPort )->SetReference(_Ptr->GetNode("GevSCPHostPort"));
    static_cast<GenApi::CCommandRef*> (&GevSCPSFireTestPacket )->SetReference(_Ptr->GetNode("GevSCPSFireTestPacket"));
    static_cast<GenApi::CBooleanRef*> (&GevSCPSDoNotFragment )->SetReference(_Ptr->GetNode("GevSCPSDoNotFragment"));
    static_cast<GenApi::CBooleanRef*> (&GevSCPSBigEndian )->SetReference(_Ptr->GetNode("GevSCPSBigEndian"));
    static_cast<GenApi::CIntegerRef*> (&GevSCPSPacketSize )->SetReference(_Ptr->GetNode("GevSCPSPacketSize"));
    static_cast<GenApi::CIntegerRef*> (&GevSCDA )->SetReference(_Ptr->GetNode("GevSCDA"));
    static_cast<GenApi::CIntegerRef*> (&GevSCPD )->SetReference(_Ptr->GetNode("GevSCPD"));
    static_cast<GenApi::CIntegerRef*> (&GevSCFTD )->SetReference(_Ptr->GetNode("GevSCFTD"));
    static_cast<GenApi::CIntegerRef*> (&GevSCBWR )->SetReference(_Ptr->GetNode("GevSCBWR"));
    static_cast<GenApi::CIntegerRef*> (&GevSCBWRA )->SetReference(_Ptr->GetNode("GevSCBWRA"));
    static_cast<GenApi::CIntegerRef*> (&GevSCBWA )->SetReference(_Ptr->GetNode("GevSCBWA"));
    static_cast<GenApi::CIntegerRef*> (&GevSCDMT )->SetReference(_Ptr->GetNode("GevSCDMT"));
    static_cast<GenApi::CIntegerRef*> (&GevSCDCT )->SetReference(_Ptr->GetNode("GevSCDCT"));
    static_cast<GenApi::CIntegerRef*> (&GevSCFJM )->SetReference(_Ptr->GetNode("GevSCFJM"));
    static_cast<GenApi::CCommandRef*> (&UserSetLoad )->SetReference(_Ptr->GetNode("UserSetLoad"));
    static_cast<GenApi::CCommandRef*> (&UserSetSave )->SetReference(_Ptr->GetNode("UserSetSave"));
    static_cast<GenApi::CEnumerationTRef<UserSetSelectorEnums> *> (&UserSetSelector )->SetReference(_Ptr->GetNode("UserSetSelector"));
    static_cast<GenApi::CEnumerationTRef<UserSetSelectorEnums> *> (&UserSetSelector )->SetNumEnums(4);
	static_cast<GenApi::CEnumerationTRef<UserSetSelectorEnums> *> (&UserSetSelector )->SetEnumReference( UserSetSelector_Default, "Default" );		static_cast<GenApi::CEnumerationTRef<UserSetSelectorEnums> *> (&UserSetSelector )->SetEnumReference( UserSetSelector_UserSet1, "UserSet1" );		static_cast<GenApi::CEnumerationTRef<UserSetSelectorEnums> *> (&UserSetSelector )->SetEnumReference( UserSetSelector_UserSet2, "UserSet2" );		static_cast<GenApi::CEnumerationTRef<UserSetSelectorEnums> *> (&UserSetSelector )->SetEnumReference( UserSetSelector_UserSet3, "UserSet3" );		static_cast<GenApi::CEnumerationTRef<UserSetDefaultSelectorEnums> *> (&UserSetDefaultSelector )->SetReference(_Ptr->GetNode("UserSetDefaultSelector"));
    static_cast<GenApi::CEnumerationTRef<UserSetDefaultSelectorEnums> *> (&UserSetDefaultSelector )->SetNumEnums(4);
	static_cast<GenApi::CEnumerationTRef<UserSetDefaultSelectorEnums> *> (&UserSetDefaultSelector )->SetEnumReference( UserSetDefaultSelector_Default, "Default" );		static_cast<GenApi::CEnumerationTRef<UserSetDefaultSelectorEnums> *> (&UserSetDefaultSelector )->SetEnumReference( UserSetDefaultSelector_UserSet1, "UserSet1" );		static_cast<GenApi::CEnumerationTRef<UserSetDefaultSelectorEnums> *> (&UserSetDefaultSelector )->SetEnumReference( UserSetDefaultSelector_UserSet2, "UserSet2" );		static_cast<GenApi::CEnumerationTRef<UserSetDefaultSelectorEnums> *> (&UserSetDefaultSelector )->SetEnumReference( UserSetDefaultSelector_UserSet3, "UserSet3" );		static_cast<GenApi::CEnumerationTRef<DefaultSetSelectorEnums> *> (&DefaultSetSelector )->SetReference(_Ptr->GetNode("DefaultSetSelector"));
    static_cast<GenApi::CEnumerationTRef<DefaultSetSelectorEnums> *> (&DefaultSetSelector )->SetNumEnums(4);
	static_cast<GenApi::CEnumerationTRef<DefaultSetSelectorEnums> *> (&DefaultSetSelector )->SetEnumReference( DefaultSetSelector_Standard, "Standard" );		static_cast<GenApi::CEnumerationTRef<DefaultSetSelectorEnums> *> (&DefaultSetSelector )->SetEnumReference( DefaultSetSelector_HighGain, "HighGain" );		static_cast<GenApi::CEnumerationTRef<DefaultSetSelectorEnums> *> (&DefaultSetSelector )->SetEnumReference( DefaultSetSelector_AutoFunctions, "AutoFunctions" );		static_cast<GenApi::CEnumerationTRef<DefaultSetSelectorEnums> *> (&DefaultSetSelector )->SetEnumReference( DefaultSetSelector_Color, "Color" );		static_cast<GenApi::CIntegerRef*> (&AutoTargetValue )->SetReference(_Ptr->GetNode("AutoTargetValue"));
    static_cast<GenApi::CFloatRef*> (&GrayValueAdjustmentDampingAbs )->SetReference(_Ptr->GetNode("GrayValueAdjustmentDampingAbs"));
    static_cast<GenApi::CIntegerRef*> (&GrayValueAdjustmentDampingRaw )->SetReference(_Ptr->GetNode("GrayValueAdjustmentDampingRaw"));
    static_cast<GenApi::CIntegerRef*> (&AutoGainRawLowerLimit )->SetReference(_Ptr->GetNode("AutoGainRawLowerLimit"));
    static_cast<GenApi::CIntegerRef*> (&AutoGainRawUpperLimit )->SetReference(_Ptr->GetNode("AutoGainRawUpperLimit"));
    static_cast<GenApi::CFloatRef*> (&AutoExposureTimeAbsLowerLimit )->SetReference(_Ptr->GetNode("AutoExposureTimeAbsLowerLimit"));
    static_cast<GenApi::CFloatRef*> (&AutoExposureTimeAbsUpperLimit )->SetReference(_Ptr->GetNode("AutoExposureTimeAbsUpperLimit"));
    static_cast<GenApi::CEnumerationTRef<AutoFunctionProfileEnums> *> (&AutoFunctionProfile )->SetReference(_Ptr->GetNode("AutoFunctionProfile"));
    static_cast<GenApi::CEnumerationTRef<AutoFunctionProfileEnums> *> (&AutoFunctionProfile )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<AutoFunctionProfileEnums> *> (&AutoFunctionProfile )->SetEnumReference( AutoFunctionProfile_GainMinimum, "GainMinimum" );		static_cast<GenApi::CEnumerationTRef<AutoFunctionProfileEnums> *> (&AutoFunctionProfile )->SetEnumReference( AutoFunctionProfile_ExposureMinimum, "ExposureMinimum" );		static_cast<GenApi::CIntegerRef*> (&AutoFunctionAOIWidth )->SetReference(_Ptr->GetNode("AutoFunctionAOIWidth"));
    static_cast<GenApi::CIntegerRef*> (&AutoFunctionAOIHeight )->SetReference(_Ptr->GetNode("AutoFunctionAOIHeight"));
    static_cast<GenApi::CIntegerRef*> (&AutoFunctionAOIOffsetX )->SetReference(_Ptr->GetNode("AutoFunctionAOIOffsetX"));
    static_cast<GenApi::CIntegerRef*> (&AutoFunctionAOIOffsetY )->SetReference(_Ptr->GetNode("AutoFunctionAOIOffsetY"));
    static_cast<GenApi::CBooleanRef*> (&AutoFunctionAOIUsageIntensity )->SetReference(_Ptr->GetNode("AutoFunctionAOIUsageIntensity"));
    static_cast<GenApi::CBooleanRef*> (&AutoFunctionAOIUsageWhiteBalance )->SetReference(_Ptr->GetNode("AutoFunctionAOIUsageWhiteBalance"));
    static_cast<GenApi::CBooleanRef*> (&AutoFunctionAOIUsageRedLightCorrection )->SetReference(_Ptr->GetNode("AutoFunctionAOIUsageRedLightCorrection"));
    static_cast<GenApi::CEnumerationTRef<AutoFunctionAOISelectorEnums> *> (&AutoFunctionAOISelector )->SetReference(_Ptr->GetNode("AutoFunctionAOISelector"));
    static_cast<GenApi::CEnumerationTRef<AutoFunctionAOISelectorEnums> *> (&AutoFunctionAOISelector )->SetNumEnums(8);
	static_cast<GenApi::CEnumerationTRef<AutoFunctionAOISelectorEnums> *> (&AutoFunctionAOISelector )->SetEnumReference( AutoFunctionAOISelector_AOI1, "AOI1" );		static_cast<GenApi::CEnumerationTRef<AutoFunctionAOISelectorEnums> *> (&AutoFunctionAOISelector )->SetEnumReference( AutoFunctionAOISelector_AOI2, "AOI2" );		static_cast<GenApi::CEnumerationTRef<AutoFunctionAOISelectorEnums> *> (&AutoFunctionAOISelector )->SetEnumReference( AutoFunctionAOISelector_AOI3, "AOI3" );		static_cast<GenApi::CEnumerationTRef<AutoFunctionAOISelectorEnums> *> (&AutoFunctionAOISelector )->SetEnumReference( AutoFunctionAOISelector_AOI4, "AOI4" );		static_cast<GenApi::CEnumerationTRef<AutoFunctionAOISelectorEnums> *> (&AutoFunctionAOISelector )->SetEnumReference( AutoFunctionAOISelector_AOI5, "AOI5" );		static_cast<GenApi::CEnumerationTRef<AutoFunctionAOISelectorEnums> *> (&AutoFunctionAOISelector )->SetEnumReference( AutoFunctionAOISelector_AOI6, "AOI6" );		static_cast<GenApi::CEnumerationTRef<AutoFunctionAOISelectorEnums> *> (&AutoFunctionAOISelector )->SetEnumReference( AutoFunctionAOISelector_AOI7, "AOI7" );		static_cast<GenApi::CEnumerationTRef<AutoFunctionAOISelectorEnums> *> (&AutoFunctionAOISelector )->SetEnumReference( AutoFunctionAOISelector_AOI8, "AOI8" );		static_cast<GenApi::CEnumerationTRef<ColorOverexposureCompensationAOISelectorEnums> *> (&ColorOverexposureCompensationAOISelector )->SetReference(_Ptr->GetNode("ColorOverexposureCompensationAOISelector"));
    static_cast<GenApi::CEnumerationTRef<ColorOverexposureCompensationAOISelectorEnums> *> (&ColorOverexposureCompensationAOISelector )->SetNumEnums(1);
	static_cast<GenApi::CEnumerationTRef<ColorOverexposureCompensationAOISelectorEnums> *> (&ColorOverexposureCompensationAOISelector )->SetEnumReference( ColorOverexposureCompensationAOISelector_AOI1, "AOI1" );		static_cast<GenApi::CBooleanRef*> (&ColorOverexposureCompensationAOIEnable )->SetReference(_Ptr->GetNode("ColorOverexposureCompensationAOIEnable"));
    static_cast<GenApi::CFloatRef*> (&ColorOverexposureCompensationAOIFactor )->SetReference(_Ptr->GetNode("ColorOverexposureCompensationAOIFactor"));
    static_cast<GenApi::CIntegerRef*> (&ColorOverexposureCompensationAOIFactorRaw )->SetReference(_Ptr->GetNode("ColorOverexposureCompensationAOIFactorRaw"));
    static_cast<GenApi::CIntegerRef*> (&ColorOverexposureCompensationAOIWidth )->SetReference(_Ptr->GetNode("ColorOverexposureCompensationAOIWidth"));
    static_cast<GenApi::CIntegerRef*> (&ColorOverexposureCompensationAOIHeight )->SetReference(_Ptr->GetNode("ColorOverexposureCompensationAOIHeight"));
    static_cast<GenApi::CIntegerRef*> (&ColorOverexposureCompensationAOIOffsetX )->SetReference(_Ptr->GetNode("ColorOverexposureCompensationAOIOffsetX"));
    static_cast<GenApi::CIntegerRef*> (&ColorOverexposureCompensationAOIOffsetY )->SetReference(_Ptr->GetNode("ColorOverexposureCompensationAOIOffsetY"));
    static_cast<GenApi::CEnumerationTRef<ShadingSelectorEnums> *> (&ShadingSelector )->SetReference(_Ptr->GetNode("ShadingSelector"));
    static_cast<GenApi::CEnumerationTRef<ShadingSelectorEnums> *> (&ShadingSelector )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<ShadingSelectorEnums> *> (&ShadingSelector )->SetEnumReference( ShadingSelector_OffsetShading, "OffsetShading" );		static_cast<GenApi::CEnumerationTRef<ShadingSelectorEnums> *> (&ShadingSelector )->SetEnumReference( ShadingSelector_GainShading, "GainShading" );		static_cast<GenApi::CBooleanRef*> (&ShadingEnable )->SetReference(_Ptr->GetNode("ShadingEnable"));
    static_cast<GenApi::CEnumerationTRef<ShadingStatusEnums> *> (&ShadingStatus )->SetReference(_Ptr->GetNode("ShadingStatus"));
    static_cast<GenApi::CEnumerationTRef<ShadingStatusEnums> *> (&ShadingStatus )->SetNumEnums(4);
	static_cast<GenApi::CEnumerationTRef<ShadingStatusEnums> *> (&ShadingStatus )->SetEnumReference( ShadingStatus_NoError, "NoError" );		static_cast<GenApi::CEnumerationTRef<ShadingStatusEnums> *> (&ShadingStatus )->SetEnumReference( ShadingStatus_StartupSetError, "StartupSetError" );		static_cast<GenApi::CEnumerationTRef<ShadingStatusEnums> *> (&ShadingStatus )->SetEnumReference( ShadingStatus_ActivateError, "ActivateError" );		static_cast<GenApi::CEnumerationTRef<ShadingStatusEnums> *> (&ShadingStatus )->SetEnumReference( ShadingStatus_CreateError, "CreateError" );		static_cast<GenApi::CEnumerationTRef<ShadingSetDefaultSelectorEnums> *> (&ShadingSetDefaultSelector )->SetReference(_Ptr->GetNode("ShadingSetDefaultSelector"));
    static_cast<GenApi::CEnumerationTRef<ShadingSetDefaultSelectorEnums> *> (&ShadingSetDefaultSelector )->SetNumEnums(3);
	static_cast<GenApi::CEnumerationTRef<ShadingSetDefaultSelectorEnums> *> (&ShadingSetDefaultSelector )->SetEnumReference( ShadingSetDefaultSelector_DefaultShadingSet, "DefaultShadingSet" );		static_cast<GenApi::CEnumerationTRef<ShadingSetDefaultSelectorEnums> *> (&ShadingSetDefaultSelector )->SetEnumReference( ShadingSetDefaultSelector_UserShadingSet1, "UserShadingSet1" );		static_cast<GenApi::CEnumerationTRef<ShadingSetDefaultSelectorEnums> *> (&ShadingSetDefaultSelector )->SetEnumReference( ShadingSetDefaultSelector_UserShadingSet2, "UserShadingSet2" );		static_cast<GenApi::CEnumerationTRef<ShadingSetSelectorEnums> *> (&ShadingSetSelector )->SetReference(_Ptr->GetNode("ShadingSetSelector"));
    static_cast<GenApi::CEnumerationTRef<ShadingSetSelectorEnums> *> (&ShadingSetSelector )->SetNumEnums(3);
	static_cast<GenApi::CEnumerationTRef<ShadingSetSelectorEnums> *> (&ShadingSetSelector )->SetEnumReference( ShadingSetSelector_DefaultShadingSet, "DefaultShadingSet" );		static_cast<GenApi::CEnumerationTRef<ShadingSetSelectorEnums> *> (&ShadingSetSelector )->SetEnumReference( ShadingSetSelector_UserShadingSet1, "UserShadingSet1" );		static_cast<GenApi::CEnumerationTRef<ShadingSetSelectorEnums> *> (&ShadingSetSelector )->SetEnumReference( ShadingSetSelector_UserShadingSet2, "UserShadingSet2" );		static_cast<GenApi::CCommandRef*> (&ShadingSetActivate )->SetReference(_Ptr->GetNode("ShadingSetActivate"));
    static_cast<GenApi::CCommandRef*> (&ShadingSetCreate )->SetReference(_Ptr->GetNode("ShadingSetCreate"));
    static_cast<GenApi::CEnumerationTRef<UserDefinedValueSelectorEnums> *> (&UserDefinedValueSelector )->SetReference(_Ptr->GetNode("UserDefinedValueSelector"));
    static_cast<GenApi::CEnumerationTRef<UserDefinedValueSelectorEnums> *> (&UserDefinedValueSelector )->SetNumEnums(5);
	static_cast<GenApi::CEnumerationTRef<UserDefinedValueSelectorEnums> *> (&UserDefinedValueSelector )->SetEnumReference( UserDefinedValueSelector_Value1, "Value1" );		static_cast<GenApi::CEnumerationTRef<UserDefinedValueSelectorEnums> *> (&UserDefinedValueSelector )->SetEnumReference( UserDefinedValueSelector_Value2, "Value2" );		static_cast<GenApi::CEnumerationTRef<UserDefinedValueSelectorEnums> *> (&UserDefinedValueSelector )->SetEnumReference( UserDefinedValueSelector_Value3, "Value3" );		static_cast<GenApi::CEnumerationTRef<UserDefinedValueSelectorEnums> *> (&UserDefinedValueSelector )->SetEnumReference( UserDefinedValueSelector_Value4, "Value4" );		static_cast<GenApi::CEnumerationTRef<UserDefinedValueSelectorEnums> *> (&UserDefinedValueSelector )->SetEnumReference( UserDefinedValueSelector_Value5, "Value5" );		static_cast<GenApi::CIntegerRef*> (&UserDefinedValue )->SetReference(_Ptr->GetNode("UserDefinedValue"));
    static_cast<GenApi::CStringRef*> (&DeviceVendorName )->SetReference(_Ptr->GetNode("DeviceVendorName"));
    static_cast<GenApi::CStringRef*> (&DeviceModelName )->SetReference(_Ptr->GetNode("DeviceModelName"));
    static_cast<GenApi::CStringRef*> (&DeviceManufacturerInfo )->SetReference(_Ptr->GetNode("DeviceManufacturerInfo"));
    static_cast<GenApi::CStringRef*> (&DeviceVersion )->SetReference(_Ptr->GetNode("DeviceVersion"));
    static_cast<GenApi::CStringRef*> (&DeviceFirmwareVersion )->SetReference(_Ptr->GetNode("DeviceFirmwareVersion"));
    static_cast<GenApi::CStringRef*> (&DeviceID )->SetReference(_Ptr->GetNode("DeviceID"));
    static_cast<GenApi::CStringRef*> (&DeviceUserID )->SetReference(_Ptr->GetNode("DeviceUserID"));
    static_cast<GenApi::CCommandRef*> (&DeviceReset )->SetReference(_Ptr->GetNode("DeviceReset"));
    static_cast<GenApi::CEnumerationTRef<DeviceScanTypeEnums> *> (&DeviceScanType )->SetReference(_Ptr->GetNode("DeviceScanType"));
    static_cast<GenApi::CEnumerationTRef<DeviceScanTypeEnums> *> (&DeviceScanType )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<DeviceScanTypeEnums> *> (&DeviceScanType )->SetEnumReference( DeviceScanType_Areascan, "Areascan" );		static_cast<GenApi::CEnumerationTRef<DeviceScanTypeEnums> *> (&DeviceScanType )->SetEnumReference( DeviceScanType_Linescan, "Linescan" );		static_cast<GenApi::CEnumerationTRef<LastErrorEnums> *> (&LastError )->SetReference(_Ptr->GetNode("LastError"));
    static_cast<GenApi::CEnumerationTRef<LastErrorEnums> *> (&LastError )->SetNumEnums(4);
	static_cast<GenApi::CEnumerationTRef<LastErrorEnums> *> (&LastError )->SetEnumReference( LastError_NoError, "NoError" );		static_cast<GenApi::CEnumerationTRef<LastErrorEnums> *> (&LastError )->SetEnumReference( LastError_Overtrigger, "Overtrigger" );		static_cast<GenApi::CEnumerationTRef<LastErrorEnums> *> (&LastError )->SetEnumReference( LastError_Userset, "Userset" );		static_cast<GenApi::CEnumerationTRef<LastErrorEnums> *> (&LastError )->SetEnumReference( LastError_InvalidParameter, "InvalidParameter" );		static_cast<GenApi::CCommandRef*> (&ClearLastError )->SetReference(_Ptr->GetNode("ClearLastError"));
    static_cast<GenApi::CEnumerationTRef<TemperatureSelectorEnums> *> (&TemperatureSelector )->SetReference(_Ptr->GetNode("TemperatureSelector"));
    static_cast<GenApi::CEnumerationTRef<TemperatureSelectorEnums> *> (&TemperatureSelector )->SetNumEnums(4);
	static_cast<GenApi::CEnumerationTRef<TemperatureSelectorEnums> *> (&TemperatureSelector )->SetEnumReference( TemperatureSelector_Sensorboard, "Sensorboard" );		static_cast<GenApi::CEnumerationTRef<TemperatureSelectorEnums> *> (&TemperatureSelector )->SetEnumReference( TemperatureSelector_Coreboard, "Coreboard" );		static_cast<GenApi::CEnumerationTRef<TemperatureSelectorEnums> *> (&TemperatureSelector )->SetEnumReference( TemperatureSelector_Framegrabberboard, "Framegrabberboard" );		static_cast<GenApi::CEnumerationTRef<TemperatureSelectorEnums> *> (&TemperatureSelector )->SetEnumReference( TemperatureSelector_Case, "Case" );		static_cast<GenApi::CFloatRef*> (&TemperatureAbs )->SetReference(_Ptr->GetNode("TemperatureAbs"));
    static_cast<GenApi::CEnumerationTRef<TemperatureStateEnums> *> (&TemperatureState )->SetReference(_Ptr->GetNode("TemperatureState"));
    static_cast<GenApi::CEnumerationTRef<TemperatureStateEnums> *> (&TemperatureState )->SetNumEnums(3);
	static_cast<GenApi::CEnumerationTRef<TemperatureStateEnums> *> (&TemperatureState )->SetEnumReference( TemperatureState_Ok, "Ok" );		static_cast<GenApi::CEnumerationTRef<TemperatureStateEnums> *> (&TemperatureState )->SetEnumReference( TemperatureState_Critical, "Critical" );		static_cast<GenApi::CEnumerationTRef<TemperatureStateEnums> *> (&TemperatureState )->SetEnumReference( TemperatureState_Error, "Error" );		static_cast<GenApi::CBooleanRef*> (&CriticalTemperature )->SetReference(_Ptr->GetNode("CriticalTemperature"));
    static_cast<GenApi::CBooleanRef*> (&OverTemperature )->SetReference(_Ptr->GetNode("OverTemperature"));
    static_cast<GenApi::CBooleanRef*> (&RemoveLimits )->SetReference(_Ptr->GetNode("RemoveLimits"));
    static_cast<GenApi::CEnumerationTRef<ParameterSelectorEnums> *> (&ParameterSelector )->SetReference(_Ptr->GetNode("ParameterSelector"));
    static_cast<GenApi::CEnumerationTRef<ParameterSelectorEnums> *> (&ParameterSelector )->SetNumEnums(5);
	static_cast<GenApi::CEnumerationTRef<ParameterSelectorEnums> *> (&ParameterSelector )->SetEnumReference( ParameterSelector_Gain, "Gain" );		static_cast<GenApi::CEnumerationTRef<ParameterSelectorEnums> *> (&ParameterSelector )->SetEnumReference( ParameterSelector_Brightness, "Brightness" );		static_cast<GenApi::CEnumerationTRef<ParameterSelectorEnums> *> (&ParameterSelector )->SetEnumReference( ParameterSelector_BlackLevel, "BlackLevel" );		static_cast<GenApi::CEnumerationTRef<ParameterSelectorEnums> *> (&ParameterSelector )->SetEnumReference( ParameterSelector_ExposureTime, "ExposureTime" );		static_cast<GenApi::CEnumerationTRef<ParameterSelectorEnums> *> (&ParameterSelector )->SetEnumReference( ParameterSelector_Framerate, "Framerate" );		static_cast<GenApi::CIntegerRef*> (&Prelines )->SetReference(_Ptr->GetNode("Prelines"));
    static_cast<GenApi::CEnumerationTRef<ExpertFeatureAccessSelectorEnums> *> (&ExpertFeatureAccessSelector )->SetReference(_Ptr->GetNode("ExpertFeatureAccessSelector"));
    static_cast<GenApi::CEnumerationTRef<ExpertFeatureAccessSelectorEnums> *> (&ExpertFeatureAccessSelector )->SetNumEnums(6);
	static_cast<GenApi::CEnumerationTRef<ExpertFeatureAccessSelectorEnums> *> (&ExpertFeatureAccessSelector )->SetEnumReference( ExpertFeatureAccessSelector_ExpertFeature1_Legacy, "ExpertFeature1_Legacy" );		static_cast<GenApi::CEnumerationTRef<ExpertFeatureAccessSelectorEnums> *> (&ExpertFeatureAccessSelector )->SetEnumReference( ExpertFeatureAccessSelector_ExpertFeature1, "ExpertFeature1" );		static_cast<GenApi::CEnumerationTRef<ExpertFeatureAccessSelectorEnums> *> (&ExpertFeatureAccessSelector )->SetEnumReference( ExpertFeatureAccessSelector_ExpertFeature2, "ExpertFeature2" );		static_cast<GenApi::CEnumerationTRef<ExpertFeatureAccessSelectorEnums> *> (&ExpertFeatureAccessSelector )->SetEnumReference( ExpertFeatureAccessSelector_ExpertFeature3, "ExpertFeature3" );		static_cast<GenApi::CEnumerationTRef<ExpertFeatureAccessSelectorEnums> *> (&ExpertFeatureAccessSelector )->SetEnumReference( ExpertFeatureAccessSelector_ExpertFeature4, "ExpertFeature4" );		static_cast<GenApi::CEnumerationTRef<ExpertFeatureAccessSelectorEnums> *> (&ExpertFeatureAccessSelector )->SetEnumReference( ExpertFeatureAccessSelector_ExpertFeature5, "ExpertFeature5" );		static_cast<GenApi::CIntegerRef*> (&ExpertFeatureAccessKey )->SetReference(_Ptr->GetNode("ExpertFeatureAccessKey"));
    static_cast<GenApi::CBooleanRef*> (&ExpertFeatureEnable )->SetReference(_Ptr->GetNode("ExpertFeatureEnable"));
    static_cast<GenApi::CBooleanRef*> (&PixelStepCorrectionEnable )->SetReference(_Ptr->GetNode("PixelStepCorrectionEnable"));
    static_cast<GenApi::CEnumerationTRef<PixelStepCorrectionSelectorEnums> *> (&PixelStepCorrectionSelector )->SetReference(_Ptr->GetNode("PixelStepCorrectionSelector"));
    static_cast<GenApi::CEnumerationTRef<PixelStepCorrectionSelectorEnums> *> (&PixelStepCorrectionSelector )->SetNumEnums(4);
	static_cast<GenApi::CEnumerationTRef<PixelStepCorrectionSelectorEnums> *> (&PixelStepCorrectionSelector )->SetEnumReference( PixelStepCorrectionSelector_Tap1, "Tap1" );		static_cast<GenApi::CEnumerationTRef<PixelStepCorrectionSelectorEnums> *> (&PixelStepCorrectionSelector )->SetEnumReference( PixelStepCorrectionSelector_Tap2, "Tap2" );		static_cast<GenApi::CEnumerationTRef<PixelStepCorrectionSelectorEnums> *> (&PixelStepCorrectionSelector )->SetEnumReference( PixelStepCorrectionSelector_Tap3, "Tap3" );		static_cast<GenApi::CEnumerationTRef<PixelStepCorrectionSelectorEnums> *> (&PixelStepCorrectionSelector )->SetEnumReference( PixelStepCorrectionSelector_Tap4, "Tap4" );		static_cast<GenApi::CIntegerRef*> (&PixelStepCorrectionValueRaw )->SetReference(_Ptr->GetNode("PixelStepCorrectionValueRaw"));
    static_cast<GenApi::CFloatRef*> (&PixelStepCorrectionValueAbs )->SetReference(_Ptr->GetNode("PixelStepCorrectionValueAbs"));
    static_cast<GenApi::CCommandRef*> (&SavePixelStepCorrection )->SetReference(_Ptr->GetNode("SavePixelStepCorrection"));
    static_cast<GenApi::CCommandRef*> (&CreatePixelStepCorrection )->SetReference(_Ptr->GetNode("CreatePixelStepCorrection"));
    static_cast<GenApi::CIntegerRef*> (&PixelStepCorrectionBusy )->SetReference(_Ptr->GetNode("PixelStepCorrectionBusy"));
    static_cast<GenApi::CBooleanRef*> (&ChunkModeActive )->SetReference(_Ptr->GetNode("ChunkModeActive"));
    static_cast<GenApi::CBooleanRef*> (&ChunkEnable )->SetReference(_Ptr->GetNode("ChunkEnable"));
    static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetReference(_Ptr->GetNode("ChunkSelector"));
    static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetNumEnums(23);
	static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_Image, "Image" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_OffsetX, "OffsetX" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_OffsetY, "OffsetY" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_Width, "Width" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_Height, "Height" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_PixelFormat, "PixelFormat" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_DynamicRangeMax, "DynamicRangeMax" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_DynamicRangeMin, "DynamicRangeMin" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_Timestamp, "Timestamp" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_LineStatusAll, "LineStatusAll" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_Framecounter, "Framecounter" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_Triggerinputcounter, "Triggerinputcounter" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_LineTriggerIgnoredCounter, "LineTriggerIgnoredCounter" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_FrameTriggerIgnoredCounter, "FrameTriggerIgnoredCounter" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_LineTriggerEndToEndCounter, "LineTriggerEndToEndCounter" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_FrameTriggerCounter, "FrameTriggerCounter" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_FramesPerTriggerCounter, "FramesPerTriggerCounter" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_InputStatusAtLineTrigger, "InputStatusAtLineTrigger" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_ShaftEncoderCounter, "ShaftEncoderCounter" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_PayloadCRC16, "PayloadCRC16" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_Stride, "Stride" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_SequenceSetIndex, "SequenceSetIndex" );		static_cast<GenApi::CEnumerationTRef<ChunkSelectorEnums> *> (&ChunkSelector )->SetEnumReference( ChunkSelector_ExposureTime, "ExposureTime" );		static_cast<GenApi::CIntegerRef*> (&ChunkStride )->SetReference(_Ptr->GetNode("ChunkStride"));
    static_cast<GenApi::CIntegerRef*> (&ChunkSequenceSetIndex )->SetReference(_Ptr->GetNode("ChunkSequenceSetIndex"));
    static_cast<GenApi::CIntegerRef*> (&ChunkOffsetX )->SetReference(_Ptr->GetNode("ChunkOffsetX"));
    static_cast<GenApi::CIntegerRef*> (&ChunkOffsetY )->SetReference(_Ptr->GetNode("ChunkOffsetY"));
    static_cast<GenApi::CIntegerRef*> (&ChunkWidth )->SetReference(_Ptr->GetNode("ChunkWidth"));
    static_cast<GenApi::CIntegerRef*> (&ChunkHeight )->SetReference(_Ptr->GetNode("ChunkHeight"));
    static_cast<GenApi::CIntegerRef*> (&ChunkDynamicRangeMin )->SetReference(_Ptr->GetNode("ChunkDynamicRangeMin"));
    static_cast<GenApi::CIntegerRef*> (&ChunkDynamicRangeMax )->SetReference(_Ptr->GetNode("ChunkDynamicRangeMax"));
    static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetReference(_Ptr->GetNode("ChunkPixelFormat"));
    static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetNumEnums(46);
	static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_Mono8, "Mono8" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_Mono8Signed, "Mono8Signed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_Mono10, "Mono10" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_Mono10Packed, "Mono10Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_Mono12, "Mono12" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_Mono12Packed, "Mono12Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_Mono16, "Mono16" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerGR8, "BayerGR8" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerRG8, "BayerRG8" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerGB8, "BayerGB8" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerBG8, "BayerBG8" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerGR10, "BayerGR10" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerRG10, "BayerRG10" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerGB10, "BayerGB10" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerBG10, "BayerBG10" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerGR12, "BayerGR12" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerRG12, "BayerRG12" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerGB12, "BayerGB12" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerBG12, "BayerBG12" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerGR16, "BayerGR16" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerRG16, "BayerRG16" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerGB16, "BayerGB16" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerBG16, "BayerBG16" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_RGB8Packed, "RGB8Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BGR8Packed, "BGR8Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_RGBA8Packed, "RGBA8Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BGRA8Packed, "BGRA8Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_RGB10Packed, "RGB10Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BGR10Packed, "BGR10Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_RGB12Packed, "RGB12Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BGR12Packed, "BGR12Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_RGB10V1Packed, "RGB10V1Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_RGB10V2Packed, "RGB10V2Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_YUV411Packed, "YUV411Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_YUV422Packed, "YUV422Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_YUV444Packed, "YUV444Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_RGB8Planar, "RGB8Planar" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_RGB10Planar, "RGB10Planar" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_RGB12Planar, "RGB12Planar" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_RGB16Planar, "RGB16Planar" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_YUV422_YUYV_Packed, "YUV422_YUYV_Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerGB12Packed, "BayerGB12Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerGR12Packed, "BayerGR12Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerRG12Packed, "BayerRG12Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_BayerBG12Packed, "BayerBG12Packed" );		static_cast<GenApi::CEnumerationTRef<ChunkPixelFormatEnums> *> (&ChunkPixelFormat )->SetEnumReference( ChunkPixelFormat_RGB12V1Packed, "RGB12V1Packed" );		static_cast<GenApi::CIntegerRef*> (&ChunkTimestamp )->SetReference(_Ptr->GetNode("ChunkTimestamp"));
    static_cast<GenApi::CIntegerRef*> (&ChunkFramecounter )->SetReference(_Ptr->GetNode("ChunkFramecounter"));
    static_cast<GenApi::CIntegerRef*> (&ChunkLineStatusAll )->SetReference(_Ptr->GetNode("ChunkLineStatusAll"));
    static_cast<GenApi::CIntegerRef*> (&ChunkTriggerinputcounter )->SetReference(_Ptr->GetNode("ChunkTriggerinputcounter"));
    static_cast<GenApi::CIntegerRef*> (&ChunkLineTriggerIgnoredCounter )->SetReference(_Ptr->GetNode("ChunkLineTriggerIgnoredCounter"));
    static_cast<GenApi::CIntegerRef*> (&ChunkFrameTriggerIgnoredCounter )->SetReference(_Ptr->GetNode("ChunkFrameTriggerIgnoredCounter"));
    static_cast<GenApi::CIntegerRef*> (&ChunkLineTriggerEndToEndCounter )->SetReference(_Ptr->GetNode("ChunkLineTriggerEndToEndCounter"));
    static_cast<GenApi::CIntegerRef*> (&ChunkFrameTriggerCounter )->SetReference(_Ptr->GetNode("ChunkFrameTriggerCounter"));
    static_cast<GenApi::CIntegerRef*> (&ChunkFramesPerTriggerCounter )->SetReference(_Ptr->GetNode("ChunkFramesPerTriggerCounter"));
    static_cast<GenApi::CIntegerRef*> (&ChunkInputStatusAtLineTriggerBitsPerLine )->SetReference(_Ptr->GetNode("ChunkInputStatusAtLineTriggerBitsPerLine"));
    static_cast<GenApi::CIntegerRef*> (&ChunkInputStatusAtLineTriggerIndex )->SetReference(_Ptr->GetNode("ChunkInputStatusAtLineTriggerIndex"));
    static_cast<GenApi::CIntegerRef*> (&ChunkInputStatusAtLineTriggerValue )->SetReference(_Ptr->GetNode("ChunkInputStatusAtLineTriggerValue"));
    static_cast<GenApi::CIntegerRef*> (&ChunkShaftEncoderCounter )->SetReference(_Ptr->GetNode("ChunkShaftEncoderCounter"));
    static_cast<GenApi::CIntegerRef*> (&ChunkPayloadCRC16 )->SetReference(_Ptr->GetNode("ChunkPayloadCRC16"));
    static_cast<GenApi::CFloatRef*> (&ChunkExposureTime )->SetReference(_Ptr->GetNode("ChunkExposureTime"));
    static_cast<GenApi::CEnumerationTRef<EventSelectorEnums> *> (&EventSelector )->SetReference(_Ptr->GetNode("EventSelector"));
    static_cast<GenApi::CEnumerationTRef<EventSelectorEnums> *> (&EventSelector )->SetNumEnums(10);
	static_cast<GenApi::CEnumerationTRef<EventSelectorEnums> *> (&EventSelector )->SetEnumReference( EventSelector_ExposureEnd, "ExposureEnd" );		static_cast<GenApi::CEnumerationTRef<EventSelectorEnums> *> (&EventSelector )->SetEnumReference( EventSelector_LineStartOvertrigger, "LineStartOvertrigger" );		static_cast<GenApi::CEnumerationTRef<EventSelectorEnums> *> (&EventSelector )->SetEnumReference( EventSelector_FrameStartOvertrigger, "FrameStartOvertrigger" );		static_cast<GenApi::CEnumerationTRef<EventSelectorEnums> *> (&EventSelector )->SetEnumReference( EventSelector_AcquisitionStartOvertrigger, "AcquisitionStartOvertrigger" );		static_cast<GenApi::CEnumerationTRef<EventSelectorEnums> *> (&EventSelector )->SetEnumReference( EventSelector_FrameTimeout, "FrameTimeout" );		static_cast<GenApi::CEnumerationTRef<EventSelectorEnums> *> (&EventSelector )->SetEnumReference( EventSelector_FrameStart, "FrameStart" );		static_cast<GenApi::CEnumerationTRef<EventSelectorEnums> *> (&EventSelector )->SetEnumReference( EventSelector_AcquisitionStart, "AcquisitionStart" );		static_cast<GenApi::CEnumerationTRef<EventSelectorEnums> *> (&EventSelector )->SetEnumReference( EventSelector_CriticalTemperature, "CriticalTemperature" );		static_cast<GenApi::CEnumerationTRef<EventSelectorEnums> *> (&EventSelector )->SetEnumReference( EventSelector_OverTemperature, "OverTemperature" );		static_cast<GenApi::CEnumerationTRef<EventSelectorEnums> *> (&EventSelector )->SetEnumReference( EventSelector_EventOverrun, "EventOverrun" );		static_cast<GenApi::CEnumerationTRef<EventNotificationEnums> *> (&EventNotification )->SetReference(_Ptr->GetNode("EventNotification"));
    static_cast<GenApi::CEnumerationTRef<EventNotificationEnums> *> (&EventNotification )->SetNumEnums(3);
	static_cast<GenApi::CEnumerationTRef<EventNotificationEnums> *> (&EventNotification )->SetEnumReference( EventNotification_Off, "Off" );		static_cast<GenApi::CEnumerationTRef<EventNotificationEnums> *> (&EventNotification )->SetEnumReference( EventNotification_GenICamEvent, "GenICamEvent" );		static_cast<GenApi::CEnumerationTRef<EventNotificationEnums> *> (&EventNotification )->SetEnumReference( EventNotification_On, "On" );		static_cast<GenApi::CIntegerRef*> (&ExposureEndEventStreamChannelIndex )->SetReference(_Ptr->GetNode("ExposureEndEventStreamChannelIndex"));
    static_cast<GenApi::CIntegerRef*> (&ExposureEndEventFrameID )->SetReference(_Ptr->GetNode("ExposureEndEventFrameID"));
    static_cast<GenApi::CIntegerRef*> (&ExposureEndEventTimestamp )->SetReference(_Ptr->GetNode("ExposureEndEventTimestamp"));
    static_cast<GenApi::CIntegerRef*> (&LineStartOvertriggerEventStreamChannelIndex )->SetReference(_Ptr->GetNode("LineStartOvertriggerEventStreamChannelIndex"));
    static_cast<GenApi::CIntegerRef*> (&LineStartOvertriggerEventTimestamp )->SetReference(_Ptr->GetNode("LineStartOvertriggerEventTimestamp"));
    static_cast<GenApi::CIntegerRef*> (&FrameStartOvertriggerEventStreamChannelIndex )->SetReference(_Ptr->GetNode("FrameStartOvertriggerEventStreamChannelIndex"));
    static_cast<GenApi::CIntegerRef*> (&FrameStartOvertriggerEventTimestamp )->SetReference(_Ptr->GetNode("FrameStartOvertriggerEventTimestamp"));
    static_cast<GenApi::CIntegerRef*> (&FrameStartEventStreamChannelIndex )->SetReference(_Ptr->GetNode("FrameStartEventStreamChannelIndex"));
    static_cast<GenApi::CIntegerRef*> (&FrameStartEventTimestamp )->SetReference(_Ptr->GetNode("FrameStartEventTimestamp"));
    static_cast<GenApi::CIntegerRef*> (&AcquisitionStartEventStreamChannelIndex )->SetReference(_Ptr->GetNode("AcquisitionStartEventStreamChannelIndex"));
    static_cast<GenApi::CIntegerRef*> (&AcquisitionStartEventTimestamp )->SetReference(_Ptr->GetNode("AcquisitionStartEventTimestamp"));
    static_cast<GenApi::CIntegerRef*> (&AcquisitionStartOvertriggerEventStreamChannelIndex )->SetReference(_Ptr->GetNode("AcquisitionStartOvertriggerEventStreamChannelIndex"));
    static_cast<GenApi::CIntegerRef*> (&AcquisitionStartOvertriggerEventTimestamp )->SetReference(_Ptr->GetNode("AcquisitionStartOvertriggerEventTimestamp"));
    static_cast<GenApi::CIntegerRef*> (&FrameTimeoutEventStreamChannelIndex )->SetReference(_Ptr->GetNode("FrameTimeoutEventStreamChannelIndex"));
    static_cast<GenApi::CIntegerRef*> (&FrameTimeoutEventTimestamp )->SetReference(_Ptr->GetNode("FrameTimeoutEventTimestamp"));
    static_cast<GenApi::CIntegerRef*> (&EventOverrunEventStreamChannelIndex )->SetReference(_Ptr->GetNode("EventOverrunEventStreamChannelIndex"));
    static_cast<GenApi::CIntegerRef*> (&EventOverrunEventFrameID )->SetReference(_Ptr->GetNode("EventOverrunEventFrameID"));
    static_cast<GenApi::CIntegerRef*> (&EventOverrunEventTimestamp )->SetReference(_Ptr->GetNode("EventOverrunEventTimestamp"));
    static_cast<GenApi::CIntegerRef*> (&CriticalTemperatureEventStreamChannelIndex )->SetReference(_Ptr->GetNode("CriticalTemperatureEventStreamChannelIndex"));
    static_cast<GenApi::CIntegerRef*> (&CriticalTemperatureEventTimestamp )->SetReference(_Ptr->GetNode("CriticalTemperatureEventTimestamp"));
    static_cast<GenApi::CIntegerRef*> (&OverTemperatureEventStreamChannelIndex )->SetReference(_Ptr->GetNode("OverTemperatureEventStreamChannelIndex"));
    static_cast<GenApi::CIntegerRef*> (&OverTemperatureEventTimestamp )->SetReference(_Ptr->GetNode("OverTemperatureEventTimestamp"));
    static_cast<GenApi::CIntegerRef*> (&TLParamsLocked )->SetReference(_Ptr->GetNode("TLParamsLocked"));
    static_cast<GenApi::CEnumerationTRef<FileSelectorEnums> *> (&FileSelector )->SetReference(_Ptr->GetNode("FileSelector"));
    static_cast<GenApi::CEnumerationTRef<FileSelectorEnums> *> (&FileSelector )->SetNumEnums(5);
	static_cast<GenApi::CEnumerationTRef<FileSelectorEnums> *> (&FileSelector )->SetEnumReference( FileSelector_UserSet1, "UserSet1" );		static_cast<GenApi::CEnumerationTRef<FileSelectorEnums> *> (&FileSelector )->SetEnumReference( FileSelector_UserSet2, "UserSet2" );		static_cast<GenApi::CEnumerationTRef<FileSelectorEnums> *> (&FileSelector )->SetEnumReference( FileSelector_UserSet3, "UserSet3" );		static_cast<GenApi::CEnumerationTRef<FileSelectorEnums> *> (&FileSelector )->SetEnumReference( FileSelector_UserGainShading1, "UserGainShading1" );		static_cast<GenApi::CEnumerationTRef<FileSelectorEnums> *> (&FileSelector )->SetEnumReference( FileSelector_UserGainShading2, "UserGainShading2" );		static_cast<GenApi::CEnumerationTRef<FileOperationSelectorEnums> *> (&FileOperationSelector )->SetReference(_Ptr->GetNode("FileOperationSelector"));
    static_cast<GenApi::CEnumerationTRef<FileOperationSelectorEnums> *> (&FileOperationSelector )->SetNumEnums(4);
	static_cast<GenApi::CEnumerationTRef<FileOperationSelectorEnums> *> (&FileOperationSelector )->SetEnumReference( FileOperationSelector_Open, "Open" );		static_cast<GenApi::CEnumerationTRef<FileOperationSelectorEnums> *> (&FileOperationSelector )->SetEnumReference( FileOperationSelector_Close, "Close" );		static_cast<GenApi::CEnumerationTRef<FileOperationSelectorEnums> *> (&FileOperationSelector )->SetEnumReference( FileOperationSelector_Read, "Read" );		static_cast<GenApi::CEnumerationTRef<FileOperationSelectorEnums> *> (&FileOperationSelector )->SetEnumReference( FileOperationSelector_Write, "Write" );		static_cast<GenApi::CEnumerationTRef<FileOpenModeEnums> *> (&FileOpenMode )->SetReference(_Ptr->GetNode("FileOpenMode"));
    static_cast<GenApi::CEnumerationTRef<FileOpenModeEnums> *> (&FileOpenMode )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<FileOpenModeEnums> *> (&FileOpenMode )->SetEnumReference( FileOpenMode_Read, "Read" );		static_cast<GenApi::CEnumerationTRef<FileOpenModeEnums> *> (&FileOpenMode )->SetEnumReference( FileOpenMode_Write, "Write" );		static_cast<GenApi::CRegisterRef*> (&FileAccessBuffer )->SetReference(_Ptr->GetNode("FileAccessBuffer"));
    static_cast<GenApi::CIntegerRef*> (&FileAccessOffset )->SetReference(_Ptr->GetNode("FileAccessOffset"));
    static_cast<GenApi::CIntegerRef*> (&FileAccessLength )->SetReference(_Ptr->GetNode("FileAccessLength"));
    static_cast<GenApi::CEnumerationTRef<FileOperationStatusEnums> *> (&FileOperationStatus )->SetReference(_Ptr->GetNode("FileOperationStatus"));
    static_cast<GenApi::CEnumerationTRef<FileOperationStatusEnums> *> (&FileOperationStatus )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<FileOperationStatusEnums> *> (&FileOperationStatus )->SetEnumReference( FileOperationStatus_Success, "Success" );		static_cast<GenApi::CEnumerationTRef<FileOperationStatusEnums> *> (&FileOperationStatus )->SetEnumReference( FileOperationStatus_Failure, "Failure" );		static_cast<GenApi::CIntegerRef*> (&FileOperationResult )->SetReference(_Ptr->GetNode("FileOperationResult"));
    static_cast<GenApi::CIntegerRef*> (&FileSize )->SetReference(_Ptr->GetNode("FileSize"));
    static_cast<GenApi::CCommandRef*> (&FileOperationExecute )->SetReference(_Ptr->GetNode("FileOperationExecute"));
    
    }

    inline const char* CGigECamera_Params::_GetVendorName(void)
    {
        return "Basler";
    }

    inline const char* CGigECamera_Params::_GetModelName(void)
    {
        return "GigECamera";
    }

    //! \endcond

} // namespace Basler_GigECamera

#endif // Basler_GigECamera_PARAMS_H
