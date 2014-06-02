//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (C) 2009-2013 Basler
//  http://www.baslerweb.com
//  Author: Italo Anzioso
//-----------------------------------------------------------------------------
/*!
    \file   FeaturePersistence.h
    \brief  Pylon::CFeaturePersistence class with static helper functions for load and save camera features.
    \date   2007-09-11
*/

#ifndef __PYLON_FeaturePersistence_H_090218_090218_IS_INCLUDED__
#define __PYLON_FeaturePersistence_H_090218_090218_IS_INCLUDED__

#if _MSC_VER > 1000
#pragma once
#endif

#include <pylon/Platform.h>

#ifdef _MSC_VER
#   pragma pack(push, PYLON_PACKING)
#endif /* _MSC_VER */

#include <pylon/stdinclude.h>   // Pylon::String_t
#include <pylon/PylonUtility.h> //  defines PYLONUTILITY_API


namespace GenApi    //  forward references
{
    interface INodeMap;
}


////////////////////////////////////////////////////////////////////////
//__Begin of C++ Class:  CCvtHelper
//----------------------------------------------------------------------

namespace Pylon
{
    /*! \brief Class for saving and restoring a camera features to and from a file.

    */
    class PYLONUTILITY_API CFeaturePersistence
    {

    public:
        CFeaturePersistence(void);

        //! Loads the features from the file to the node tree.
        static void Load (  const String_t& FileName,   ///< Name of the file containing the node map values IN
                            GenApi::INodeMap* pNodeMap, ///< Pointer to the node map IN
                            bool validate=true          ///< if validate==true all node values will be validated,
                                                        ///< in case of an error an GenICam::RuntimeException will be thrown
                            );
        
        /*! \brief Saves the node tree to the file.
            Sequence sets of a camera are automatically saved if the SequenceEnable is activated.
        */
        static void Save (  const String_t& FileName,   ///< Name of the file to store the node map values IN
                            GenApi::INodeMap* pNodeMap  ///< Pointer to the node map IN
                          );

        //! Loads the features from the string to the node tree.
        static void LoadFromString ( const String_t& Features,   ///< String containing the node map values IN
                                     GenApi::INodeMap* pNodeMap, ///< Pointer to the node map IN
                                     bool validate=true          ///< if validate==true all node values will be validated,
                                                                 ///< in case of an error an GenICam::RuntimeException will be thrown
                            );
        
        /*! \brief Saves the node tree to the string.
            Sequence sets of a camera are automatically saved if the SequenceEnable is activated.
        */
        static void SaveToString ( String_t& Features,         ///<String containing the node map values OUT
                                   GenApi::INodeMap* pNodeMap  ///< Pointer to the node map IN
                                 );



    public:
        ~CFeaturePersistence(void);

    private:

    }; //__End of C++ Class:  CFeaturePersistence

}   // Pylon Namespace

#ifdef _MSC_VER
#   pragma pack(pop)
#endif /* _MSC_VER */

#endif //__PYLON_FeaturePersistence_H_090218_090218_IS_INCLUDED__
