//-----------------------------------------------------------------------------
//  (c) 2010 by Basler Vision Technologies
//  Section: Basler Components
//  Project: PYLON
//  Author:  Andreas Gau
//  $Header:  $
//-----------------------------------------------------------------------------
/*!
\file
\brief Class holding camera event meta data.
*/

#ifndef INCLUDED_CAMERAEVENTMETADATA_H_0847742
#define INCLUDED_CAMERAEVENTMETADATA_H_0847742

#include <pylon/PylonBase.h>

namespace Pylon
{
    // Holds camera event meta data.
    class PYLONBASE_API CCameraEventMetaData
    {
    public:
        /// Default constructor.
        CCameraEventMetaData();
            
        /// Constructor receiving the meta data.        
        CCameraEventMetaData( String_t nodeName, intptr_t userProvidedId, bool mandatory);

        /// Copy Constructor.
        CCameraEventMetaData( const CCameraEventMetaData& rhs);

        /// Assignment.
        void operator = ( const CCameraEventMetaData& rhs);

        /// Destructor.
        ~CCameraEventMetaData();
    
        /// Internal use only.
        class CCameraEventMetaDataImpl;
        CCameraEventMetaDataImpl* GetCameraEventMetaDataImpl();
    protected:
        CCameraEventMetaDataImpl* m_pImpl;
    };
}

#endif /* INCLUDED_CAMERAEVENTMETADATA_H_0847742 */
