
    




//-----------------------------------------------------------------------------
//  (c) 2004-2008 by Basler Vision Technologies
//  Section: Vision Components
//  Project: GenApi
//-----------------------------------------------------------------------------
/*!
\file
\brief Interface to the GigE transport layer specific parameters
*/

//-----------------------------------------------------------------------------
//  This file is generated automatically
//  Do not modify!
//-----------------------------------------------------------------------------



#ifndef Basler_GigETLParams_PARAMS_H
#define Basler_GigETLParams_PARAMS_H

#include <GenApi/IEnumerationT.h>
#include <GenApi/NodeMapRef.h>
#include <GenApi/DLLLoad.h>

//! The namespace containing the device's control interface and related enumeration types
namespace Basler_GigETLParams
{

    //**************************************************************************************************
    // Enumerations
    //**************************************************************************************************
    

    //**************************************************************************************************
    // Parameter class
    //**************************************************************************************************
    

    //! Interface to the GigE transport layer specific parameters
    class CGigETLParams_Params
    {
    //----------------------------------------------------------------------------------------------------------------
    // Implementation
    //----------------------------------------------------------------------------------------------------------------
    protected:
		// If you want to show the following methods in the help file
		// add the string HIDE_CLASS_METHODS to the ENABLED_SECTIONS tag in the doxygen file
        //! \cond HIDE_CLASS_METHODS
        
            //! Constructor
            CGigETLParams_Params(void);

            //! Destructor
            ~CGigETLParams_Params(void);

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
        
	//! \name Root - Transport layer-specific parameter
    //@{
	/*!	
		\brief Read access timeout value in milliseconds.

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &ReadTimeout;
    
    //@}
    

	//! \name Root - Transport layer-specific parameter
    //@{
	/*!	
		\brief Write access timeout value in milliseconds.

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &WriteTimeout;
    
    //@}
    

	//! \name Root - Transport layer-specific parameter
    //@{
	/*!	
		\brief Maximum number of retries for read operations after a read operation timed out.

	
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &MaxRetryCountRead;
    
    //@}
    

	//! \name Root - Transport layer-specific parameter
    //@{
	/*!	
		\brief Maximum number of retries for write operations after a write operation timed out.

	
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &MaxRetryCountWrite;
    
    //@}
    

	//! \name Root - Transport layer-specific parameter
    //@{
	/*!	
		\brief Heartbeat timeout value in milliseconds.

	
	
		\b Visibility = Beginner
        
	
    */
    GenApi::IInteger &HeartbeatTimeout;
    
    //@}
    

	//! \name Root - Transport layer-specific parameter
    //@{
	/*!	
		\brief Enables the duplication of commands.

	This feature enables the duplication of commands. This option should only be enabled in case of network problems.
	
		\b Visibility = Guru
	
    */
    GenApi::IBoolean &CommandDuplicationEnable;
    
    //@}
    

	//! \name Root - Transport layer-specific parameter
    //@{
	/*!	
		\brief Counts the number of timeouts in read and write operations when waiting for the response from the device.

	
	
		\b Visibility = Guru
	
    */
    GenApi::IInteger &StatisticReadWriteTimeoutCount;
    
    //@}
    


    private:
        //! \cond HIDE_CLASS_METHODS

            //! not implemented copy constructor
            CGigETLParams_Params(CGigETLParams_Params&);

            //! not implemented assignment operator
            CGigETLParams_Params& operator=(CGigETLParams_Params&);

        //! \endcond
    };


    //**************************************************************************************************
    // Parameter class implementation
    //**************************************************************************************************

    //! \cond HIDE_CLASS_METHODS

    inline CGigETLParams_Params::CGigETLParams_Params(void)
        : ReadTimeout( *new GenApi::CIntegerRef() )
        , WriteTimeout( *new GenApi::CIntegerRef() )
        , MaxRetryCountRead( *new GenApi::CIntegerRef() )
        , MaxRetryCountWrite( *new GenApi::CIntegerRef() )
        , HeartbeatTimeout( *new GenApi::CIntegerRef() )
        , CommandDuplicationEnable( *new GenApi::CBooleanRef() )
        , StatisticReadWriteTimeoutCount( *new GenApi::CIntegerRef() )
        
    {
    }

    inline CGigETLParams_Params::~CGigETLParams_Params(void)
    {
        delete static_cast < GenApi::CIntegerRef*> (&ReadTimeout );
        delete static_cast < GenApi::CIntegerRef*> (&WriteTimeout );
        delete static_cast < GenApi::CIntegerRef*> (&MaxRetryCountRead );
        delete static_cast < GenApi::CIntegerRef*> (&MaxRetryCountWrite );
        delete static_cast < GenApi::CIntegerRef*> (&HeartbeatTimeout );
        delete static_cast < GenApi::CBooleanRef*> (&CommandDuplicationEnable );
        delete static_cast < GenApi::CIntegerRef*> (&StatisticReadWriteTimeoutCount );
        
    }

    inline void CGigETLParams_Params::_Initialize(GenApi::INodeMap* _Ptr)
    {
        static_cast<GenApi::CIntegerRef*> (&ReadTimeout )->SetReference(_Ptr->GetNode("ReadTimeout"));
    static_cast<GenApi::CIntegerRef*> (&WriteTimeout )->SetReference(_Ptr->GetNode("WriteTimeout"));
    static_cast<GenApi::CIntegerRef*> (&MaxRetryCountRead )->SetReference(_Ptr->GetNode("MaxRetryCountRead"));
    static_cast<GenApi::CIntegerRef*> (&MaxRetryCountWrite )->SetReference(_Ptr->GetNode("MaxRetryCountWrite"));
    static_cast<GenApi::CIntegerRef*> (&HeartbeatTimeout )->SetReference(_Ptr->GetNode("HeartbeatTimeout"));
    static_cast<GenApi::CBooleanRef*> (&CommandDuplicationEnable )->SetReference(_Ptr->GetNode("CommandDuplicationEnable"));
    static_cast<GenApi::CIntegerRef*> (&StatisticReadWriteTimeoutCount )->SetReference(_Ptr->GetNode("StatisticReadWriteTimeoutCount"));
    
    }

    inline const char* CGigETLParams_Params::_GetVendorName(void)
    {
        return "Basler";
    }

    inline const char* CGigETLParams_Params::_GetModelName(void)
    {
        return "GigETLParams";
    }

    //! \endcond

} // namespace Basler_GigETLParams

#endif // Basler_GigETLParams_PARAMS_H
