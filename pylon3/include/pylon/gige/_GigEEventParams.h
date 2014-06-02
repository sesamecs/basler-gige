
    




//-----------------------------------------------------------------------------
//  (c) 2004-2008 by Basler Vision Technologies
//  Section: Vision Components
//  Project: GenApi
//-----------------------------------------------------------------------------
/*!
\file
\brief Interface to the PylonGigE Event Grabber parameters
*/

//-----------------------------------------------------------------------------
//  This file is generated automatically
//  Do not modify!
//-----------------------------------------------------------------------------



#ifndef Basler_GigEEventParams_PARAMS_H
#define Basler_GigEEventParams_PARAMS_H

#include <GenApi/IEnumerationT.h>
#include <GenApi/NodeMapRef.h>
#include <GenApi/DLLLoad.h>

//! The namespace containing the device's control interface and related enumeration types
namespace Basler_GigEEventParams
{

    //**************************************************************************************************
    // Enumerations
    //**************************************************************************************************
    
    //! Valid values for Status
    enum StatusEnums
    {
        Status_Closed,  //!<
		Status_Open   //!<
		
    };


    //**************************************************************************************************
    // Parameter class
    //**************************************************************************************************
    

    //! Interface to the PylonGigE Event Grabber parameters
    class CGigEEventParams_Params
    {
    //----------------------------------------------------------------------------------------------------------------
    // Implementation
    //----------------------------------------------------------------------------------------------------------------
    protected:
		// If you want to show the following methods in the help file
		// add the string HIDE_CLASS_METHODS to the ENABLED_SECTIONS tag in the doxygen file
        //! \cond HIDE_CLASS_METHODS
        
            //! Constructor
            CGigEEventParams_Params(void);

            //! Destructor
            ~CGigEEventParams_Params(void);

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
        
	//! \name Root - GigE event parameters
    //@{
	/*!	
		\brief Number of buffers to be used.

	Number of Buffers that are going to be used receiving events. .
	
		\b Visibility = Expert
	
    */
    GenApi::IInteger &NumBuffer;
    
    //@}
    

	//! \name Root - GigE event parameters
    //@{
	/*!	
		\brief Acknowledge timeout in milliseconds.

	Time to wait by the camera if an acknowledge request is configured (RetryCount != 0) to wait until the acknowledge arrives before resending the event message on its own.
	
		\b Visibility = Expert
	
    */
    GenApi::IInteger &Timeout;
    
    //@}
    

	//! \name Root - GigE event parameters
    //@{
	/*!	
		\brief Maximum number of retries.

	Number retry attempts by the camera to get an acknowledge for a sent event message.
	
		\b Visibility = Expert
	
    */
    GenApi::IInteger &RetryCount;
    
    //@}
    

	//! \name Debug - For internal use only.
    //@{
	/*!	
		\brief For internal use only.

	
	
		\b Visibility = Guru
	
    */
    GenApi::IEnumerationT<StatusEnums > &Status;
    
    //@}
    


    private:
        //! \cond HIDE_CLASS_METHODS

            //! not implemented copy constructor
            CGigEEventParams_Params(CGigEEventParams_Params&);

            //! not implemented assignment operator
            CGigEEventParams_Params& operator=(CGigEEventParams_Params&);

        //! \endcond
    };


    //**************************************************************************************************
    // Parameter class implementation
    //**************************************************************************************************

    //! \cond HIDE_CLASS_METHODS

    inline CGigEEventParams_Params::CGigEEventParams_Params(void)
        : NumBuffer( *new GenApi::CIntegerRef() )
        , Timeout( *new GenApi::CIntegerRef() )
        , RetryCount( *new GenApi::CIntegerRef() )
        , Status( *new GenApi::CEnumerationTRef<StatusEnums>() )
        
    {
    }

    inline CGigEEventParams_Params::~CGigEEventParams_Params(void)
    {
        delete static_cast < GenApi::CIntegerRef*> (&NumBuffer );
        delete static_cast < GenApi::CIntegerRef*> (&Timeout );
        delete static_cast < GenApi::CIntegerRef*> (&RetryCount );
        delete static_cast < GenApi::CEnumerationTRef<StatusEnums> *> (&Status );
        
    }

    inline void CGigEEventParams_Params::_Initialize(GenApi::INodeMap* _Ptr)
    {
        static_cast<GenApi::CIntegerRef*> (&NumBuffer )->SetReference(_Ptr->GetNode("NumBuffer"));
    static_cast<GenApi::CIntegerRef*> (&Timeout )->SetReference(_Ptr->GetNode("Timeout"));
    static_cast<GenApi::CIntegerRef*> (&RetryCount )->SetReference(_Ptr->GetNode("RetryCount"));
    static_cast<GenApi::CEnumerationTRef<StatusEnums> *> (&Status )->SetReference(_Ptr->GetNode("Status"));
    static_cast<GenApi::CEnumerationTRef<StatusEnums> *> (&Status )->SetNumEnums(2);
	static_cast<GenApi::CEnumerationTRef<StatusEnums> *> (&Status )->SetEnumReference( Status_Closed, "Closed" );		static_cast<GenApi::CEnumerationTRef<StatusEnums> *> (&Status )->SetEnumReference( Status_Open, "Open" );		
    }

    inline const char* CGigEEventParams_Params::_GetVendorName(void)
    {
        return "Basler";
    }

    inline const char* CGigEEventParams_Params::_GetModelName(void)
    {
        return "GigEEventParams";
    }

    //! \endcond

} // namespace Basler_GigEEventParams

#endif // Basler_GigEEventParams_PARAMS_H
