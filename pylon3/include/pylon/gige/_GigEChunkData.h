
    




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



#ifndef Basler_GigEChunkData_PARAMS_H
#define Basler_GigEChunkData_PARAMS_H

#include <GenApi/IEnumerationT.h>
#include <GenApi/NodeMapRef.h>
#include <GenApi/DLLLoad.h>

//! The namespace containing the device's control interface and related enumeration types
namespace Basler_GigEChunkData
{

    //**************************************************************************************************
    // Enumerations
    //**************************************************************************************************
    
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


    //**************************************************************************************************
    // Parameter class
    //**************************************************************************************************
    

    //! Basler generic GigEVision camera interface
    class CGigEChunkData_Params
    {
    //----------------------------------------------------------------------------------------------------------------
    // Implementation
    //----------------------------------------------------------------------------------------------------------------
    protected:
		// If you want to show the following methods in the help file
		// add the string HIDE_CLASS_METHODS to the ENABLED_SECTIONS tag in the doxygen file
        //! \cond HIDE_CLASS_METHODS
        
            //! Constructor
            CGigEChunkData_Params(void);

            //! Destructor
            ~CGigEChunkData_Params(void);

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
		\brief 

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ChunkLineTriggerEndToEndCounter;
    
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
		\brief 

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IFloat &ChunkExposureTime;
    
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
    


    private:
        //! \cond HIDE_CLASS_METHODS

            //! not implemented copy constructor
            CGigEChunkData_Params(CGigEChunkData_Params&);

            //! not implemented assignment operator
            CGigEChunkData_Params& operator=(CGigEChunkData_Params&);

        //! \endcond
    };


    //**************************************************************************************************
    // Parameter class implementation
    //**************************************************************************************************

    //! \cond HIDE_CLASS_METHODS

    inline CGigEChunkData_Params::CGigEChunkData_Params(void)
        : ChunkStride( *new GenApi::CIntegerRef() )
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
        , ChunkFrameTriggerCounter( *new GenApi::CIntegerRef() )
        , ChunkFramesPerTriggerCounter( *new GenApi::CIntegerRef() )
        , ChunkLineTriggerEndToEndCounter( *new GenApi::CIntegerRef() )
        , ChunkInputStatusAtLineTriggerBitsPerLine( *new GenApi::CIntegerRef() )
        , ChunkInputStatusAtLineTriggerIndex( *new GenApi::CIntegerRef() )
        , ChunkInputStatusAtLineTriggerValue( *new GenApi::CIntegerRef() )
        , ChunkShaftEncoderCounter( *new GenApi::CIntegerRef() )
        , ChunkExposureTime( *new GenApi::CFloatRef() )
        , ChunkPayloadCRC16( *new GenApi::CIntegerRef() )
        
    {
    }

    inline CGigEChunkData_Params::~CGigEChunkData_Params(void)
    {
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
        delete static_cast < GenApi::CIntegerRef*> (&ChunkFrameTriggerCounter );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkFramesPerTriggerCounter );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkLineTriggerEndToEndCounter );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkInputStatusAtLineTriggerBitsPerLine );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkInputStatusAtLineTriggerIndex );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkInputStatusAtLineTriggerValue );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkShaftEncoderCounter );
        delete static_cast < GenApi::CFloatRef*> (&ChunkExposureTime );
        delete static_cast < GenApi::CIntegerRef*> (&ChunkPayloadCRC16 );
        
    }

    inline void CGigEChunkData_Params::_Initialize(GenApi::INodeMap* _Ptr)
    {
        static_cast<GenApi::CIntegerRef*> (&ChunkStride )->SetReference(_Ptr->GetNode("ChunkStride"));
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
    static_cast<GenApi::CIntegerRef*> (&ChunkFrameTriggerCounter )->SetReference(_Ptr->GetNode("ChunkFrameTriggerCounter"));
    static_cast<GenApi::CIntegerRef*> (&ChunkFramesPerTriggerCounter )->SetReference(_Ptr->GetNode("ChunkFramesPerTriggerCounter"));
    static_cast<GenApi::CIntegerRef*> (&ChunkLineTriggerEndToEndCounter )->SetReference(_Ptr->GetNode("ChunkLineTriggerEndToEndCounter"));
    static_cast<GenApi::CIntegerRef*> (&ChunkInputStatusAtLineTriggerBitsPerLine )->SetReference(_Ptr->GetNode("ChunkInputStatusAtLineTriggerBitsPerLine"));
    static_cast<GenApi::CIntegerRef*> (&ChunkInputStatusAtLineTriggerIndex )->SetReference(_Ptr->GetNode("ChunkInputStatusAtLineTriggerIndex"));
    static_cast<GenApi::CIntegerRef*> (&ChunkInputStatusAtLineTriggerValue )->SetReference(_Ptr->GetNode("ChunkInputStatusAtLineTriggerValue"));
    static_cast<GenApi::CIntegerRef*> (&ChunkShaftEncoderCounter )->SetReference(_Ptr->GetNode("ChunkShaftEncoderCounter"));
    static_cast<GenApi::CFloatRef*> (&ChunkExposureTime )->SetReference(_Ptr->GetNode("ChunkExposureTime"));
    static_cast<GenApi::CIntegerRef*> (&ChunkPayloadCRC16 )->SetReference(_Ptr->GetNode("ChunkPayloadCRC16"));
    
    }

    inline const char* CGigEChunkData_Params::_GetVendorName(void)
    {
        return "Basler";
    }

    inline const char* CGigEChunkData_Params::_GetModelName(void)
    {
        return "GigEChunkData";
    }

    //! \endcond

} // namespace Basler_GigEChunkData

#endif // Basler_GigEChunkData_PARAMS_H
