<?xml version="1.0" encoding="UTF-8"?>
<!-- ***************************************************************************
*  (c) 2006 by Basler Vision Technologies
*  Section: Vision Components
*  Project: GenApi
*	 Author:  Fritz Dierks
*  $Header$
*
*  License: This file is published under the license of the EMVA GenICam  Standard Group. 
*  A text file describing the legal terms is included in  your installation as 'GenICam_license.pdf'. 
*  If for some reason you are missing  this file please contact the EMVA or visit the website
*  (http://www.genicam.org) for a full copy.
* 
*  THIS SOFTWARE IS PROVIDED BY THE EMVA GENICAM STANDARD GROUP "AS IS"
*  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,  
*  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR  
*  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE EMVA GENICAM STANDARD  GROUP 
*  OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  SPECIAL, 
*  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT  LIMITED TO, 
*  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  DATA, OR PROFITS; 
*  OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  THEORY OF LIABILITY, 
*  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE) 
*  ARISING IN ANY WAY OUT OF THE USE  OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
*  POSSIBILITY OF SUCH DAMAGE.
******************************************************************************** -->
<xsl:stylesheet version="1.0"  xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:output method="text" encoding="UTF-8"/>
<xsl:template match="/">
//-----------------------------------------------------------------------------
//  (c) 2004, 2005 by Basler Vision Technologies
//  Section: Vision Components
//  Project: GenApi
//-----------------------------------------------------------------------------
/*!
\file
\brief   	Implementation of CNodeMap::CreateAndRegisterNode
*/
//-----------------------------------------------------------------------------
//  This file is generated automatically
//  Do not modify!
//-----------------------------------------------------------------------------
#ifdef _MSC_VER
#   pragma warning ( disable : 4127 ) // warning C4127: conditional expression is constant
#   include &lt;GenApi/impl/GlobalPragmas.h&gt;  // this must be the first include!
#endif // _MSC_VER

#include &lt;GenApi/impl/GenApiImpl.h&gt;
#include &lt;GenApi/Pointer.h&gt;

namespace GenApi
{
	using namespace GenICam;

	INodePrivate* CNodeMap::CreateAndRegisterNode(GenICam::gcstring &amp;NodeType, GenICam::gcstring &amp;NodeName, GenICam::gcstring &amp;NodeNameSpace)
	{
		if(false)
		{
			// empty
		}		
		<xsl:apply-templates select="NodeTypes/Node" mode="CreatingNode"/>
		else
		{
			throw RUNTIME_EXCEPTION("Unexpected node type");
		}

		return dynamic_cast&lt;INodePrivate*&gt;(GetNode(NodeName));
	}
}

</xsl:template>

	<!-- =========================================================================== -->
	<!-- CreatingNode                                                                                                                                -->
	<!-- =========================================================================== -->

	<xsl:template match="NodeTypes/Node" mode="CreatingNode">
		else if( NodeType == "<xsl:value-of select="@Name"/>" )	
		{
			(new <xsl:value-of select="CppClass"/>())->Register(this, NodeType.c_str(), NodeName.c_str(), NodeNameSpace.c_str());
		}
	</xsl:template>

</xsl:stylesheet>
