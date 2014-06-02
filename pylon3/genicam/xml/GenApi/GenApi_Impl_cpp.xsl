<?xml version="1.0" encoding="utf-8"?>
<!-- ***************************************************************************
*  (c) 2004-2008 by Basler Vision Technologies
*  Section: Vision Components
*  Project: GenApi
*	Author:  Fritz Dierks
* $Header$
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
<xsl:stylesheet version="1.0" xmlns:my_v1_0="http://www.genicam.org/GenApi/Version_1_0" xmlns:my_v1_1="http://www.genicam.org/GenApi/Version_1_1" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:output method="text" encoding="UTF-8" media-type="text/plain"/>
<xsl:include href="text.xsl"/>

<xsl:param name="HeaderFileName"><xsl:value-of select="/RegisterDescription/@ModelName"/><xsl:text>Impl.h</xsl:text></xsl:param>

<xsl:template match="/">
//-----------------------------------------------------------------------------
//  (c) 2004-2008 by Basler Vision Technologies
//  Section: Vision Components
//  Project: GenApi
//-----------------------------------------------------------------------------
/*!
\file
*/
//-----------------------------------------------------------------------------
//  This file is generated automatically
//  Do not modify!
//-----------------------------------------------------------------------------

#ifdef _MSC_VER
#   include &lt;GenApi/impl/GlobalPragmas.h&gt;  // this must be the first include!
#endif

#include "<xsl:value-of select="$HeaderFileName"/>"

  namespace <xsl:value-of select="/RegisterDescription/@VendorName"/>_<xsl:value-of select="/RegisterDescription/@ModelName"/>
{

	<xsl:apply-templates select="/RegisterDescription/*" mode="InitializingMethodDefinition"/>
	  
	//! Constructor
	C<xsl:value-of select="/RegisterDescription/@ModelName"/>Impl::C<xsl:value-of select="/RegisterDescription/@ModelName"/>Impl(GenICam::gcstring DeviceName) :
		CNodeMap(DeviceName)
	{
		// Initialize the DeviceInfo members
		SetProperty("StandardNameSpace", "<xsl:value-of select="/RegisterDescription/@StandardNameSpace"/>");
		SetProperty("ModelName", "<xsl:value-of select="/RegisterDescription/@ModelName"/>");
		SetProperty("VendorName", "<xsl:value-of select="/RegisterDescription/@VendorName"/>");
		SetProperty("ToolTip", "<xsl:value-of select="/RegisterDescription/@ToolTip"/>");
		SetProperty("SchemaMajorVersion", "<xsl:value-of select="/RegisterDescription/@SchemaMajorVersion"/>");
		SetProperty("SchemaMinorVersion", "<xsl:value-of select="/RegisterDescription/@SchemaMinorVersion"/>");
		SetProperty("SchemaSubMinorVersion", "<xsl:value-of select="/RegisterDescription/@SchemaSubMinorVersion"/>");
		SetProperty("MajorVersion", "<xsl:value-of select="/RegisterDescription/@MajorVersion"/>");
		SetProperty("MinorVersion", "<xsl:value-of select="/RegisterDescription/@MinorVersion"/>");
		SetProperty("SubMinorVersion", "<xsl:value-of select="/RegisterDescription/@SubMinorVersion"/>");
		SetProperty("ProductGuid", "<xsl:value-of select="/RegisterDescription/@ProductGuid"/>");
		SetProperty("VersionGuid", "<xsl:value-of select="/RegisterDescription/@VersionGuid"/>");

		//--------------------------------------------------------------------------------------------------
		// Register each node
		//--------------------------------------------------------------------------------------------------
		<xsl:apply-templates select="/RegisterDescription/*" mode="Registering"/>
			
		//--------------------------------------------------------------------------------------------------
		// Set properties of each node
		//--------------------------------------------------------------------------------------------------
		<xsl:apply-templates select="/RegisterDescription/*" mode="InitializingMethodCall"/>

		// finalize construction
		FinalConstruct();  
		
	}
		
	//! Final Construct
	void C<xsl:value-of select="/RegisterDescription/@ModelName"/>Impl::FinalConstruct(void) 
	{
		<xsl:apply-templates select="/RegisterDescription/*" mode="FinalConstructDefinition"/>
		
    // since the XML files comes from the preprocessor the dependencies do not need to be evaluates
		CNodeMap::FinalConstruct(false);
	}
	
	GenApi::INodeMap* C<xsl:value-of select="/RegisterDescription/@ModelName"/>Impl::Create(GenICam::gcstring DeviceName)
	{
		return new C<xsl:value-of select="/RegisterDescription/@ModelName"/>Impl(DeviceName);
	}

	void C<xsl:value-of select="/RegisterDescription/@ModelName"/>Impl::Destroy(void)
	{
		delete this;
	}

}<xsl:text>&#x0a;</xsl:text>
</xsl:template>

<!-- =========================================================================== -->
<!-- InitializingMethodDefinition                                                                                                                                -->
<!-- =========================================================================== -->

	<xsl:template match="*" mode="InitializingMethodDefinition">
	void C<xsl:value-of select="/RegisterDescription/@ModelName"/>Impl::SetProperties<xsl:value-of select="@Name"/>(void)
	{
		<xsl:apply-templates select="./*" mode="InsideInitializing"/>
	}
	</xsl:template>

	<!-- =========================================================================== -->
	<!-- InsideInitializing                                                                                                                                -->
	<!-- =========================================================================== -->

		<xsl:template match="*" mode="InsideInitializing">
			<xsl:choose>
				<xsl:when test="count(attribute::*)">
					<xsl:value-of select="../@Name"/>.SetProperty("<xsl:value-of select="name()"/>", "<xsl:value-of disable-output-escaping="yes" select="."/>", "<xsl:value-of select="string(attribute::*)"/>");
				</xsl:when>
				<xsl:otherwise>
					<xsl:value-of select="../@Name"/>.SetProperty("<xsl:value-of select="name()"/>",
					<xsl:call-template name="cstr">
						<xsl:with-param name="substr" select="normalize-space(.)" />
						<xsl:with-param name="ncol" select="130" />
					</xsl:call-template>
					);
				</xsl:otherwise>
			</xsl:choose>
		</xsl:template>

<!-- =========================================================================== -->
<!-- Registering                                                                                                                                -->
<!-- =========================================================================== -->

		<xsl:template match="*" mode="Registering">
			<xsl:value-of select="@Name"/>.Register(this, "<xsl:value-of select="name()"/>", "<xsl:value-of select="@Name"/>", "<xsl:value-of select="@NameSpace"/>");
		</xsl:template>

<!-- =========================================================================== -->
<!-- InitializingMethodCall                                                                                                                                -->
<!-- =========================================================================== -->

	<xsl:template match="*" mode="InitializingMethodCall">
		SetProperties<xsl:value-of select="@Name"/>();
	</xsl:template>

<!-- =========================================================================== -->
<!-- FinalConstructDefinition                                                                                                                                -->
<!-- =========================================================================== -->

		<xsl:template match="*" mode="FinalConstructDefinition">
			<xsl:value-of select="@Name"/>.FinalConstruct();
		</xsl:template>

	<!-- InsideInitializing ======================================== -->
</xsl:stylesheet>
