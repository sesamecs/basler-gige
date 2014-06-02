//-----------------------------------------------------------------------------
//  (c) 2006 by Basler Vision Technologies
//  Section: Vision Components
//  Project: GenApi
//  Author:  Hartmut Nebelung
//  $Header$
//
//  License: This file is published under the license of the EMVA GenICam  Standard Group.
//  A text file describing the legal terms is included in  your installation as 'GenICam_license.pdf'.
//  If for some reason you are missing  this file please contact the EMVA or visit the website
//  (http://www.genicam.org) for a full copy.
//
//  THIS SOFTWARE IS PROVIDED BY THE EMVA GENICAM STANDARD GROUP "AS IS"
//  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
//  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
//  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE EMVA GENICAM STANDARD  GROUP
//  OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  SPECIAL,
//  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT  LIMITED TO,
//  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  DATA, OR PROFITS;
//  OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  THEORY OF LIABILITY,
//  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)
//  ARISING IN ANY WAY OUT OF THE USE  OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.
//-----------------------------------------------------------------------------
/*!
\file
\brief    Definition of Lock classes
\ingroup GenApi_PublicImpl
*/

#ifndef GENAPI_SYNCH_H
#define GENAPI_SYNCH_H

#include "GenApiDll.h"
#include "../Base/GCException.h"
#include "../Base/GCSynch.h"

#if defined (_WIN32)
#   include <windows.h>
#   include <winbase.h>
#elif defined (__GNUC__) && (defined (__linux__) || defined (__APPLE__))
#   include <pthread.h>
#   include <errno.h>
#   include <list>
#else
#   error No/unknown platform thread support
#endif

namespace GenApi
{
    using GenICam::CLock;
    using GenICam::CLockEx;

    using GenICam::AutoLock;
    using GenICam::CGlobalLock;
    using GenICam::CGlobalLockUnlocker;

    using GenICam::LockableObject;

} // namespace GenApi

#endif // GENAPI_SYNCH_H
