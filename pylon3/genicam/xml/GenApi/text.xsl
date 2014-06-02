<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:gen="http://www.genicam.org/GenApi/Version_1_0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<!-- 
<xsl:output method="text" version="1.0" encoding="UTF-8" indent="yes"/>
	<xsl:template match="//gen:Description">
		<xsl:text>&#10;</xsl:text>
		<xsl:call-template name="cstr" >
			<xsl:with-param name="substr" select="normalize-space( text() )" />
			<xsl:with-param name="ncol" select="30" />
		</xsl:call-template>
	</xsl:template>
    -->
	
	<xsl:template name="out">
		<xsl:param name="str"></xsl:param>
		<xsl:text>"</xsl:text>
		<xsl:value-of select="$str"/>
		<xsl:text>"</xsl:text>
		<xsl:call-template name="line1" />
	</xsl:template>
	
	<xsl:template name="plainout">
		<xsl:param name="str"/>
		<xsl:value-of select="$str"/>
		<xsl:call-template name="line1" />
	</xsl:template>

	<xsl:template name="plainstr">
	     <xsl:param name="substr"/>
	     <xsl:param name="ncol" />
	     <xsl:variable name="line" select="substring( $substr, 0, $ncol )" />
	     <xsl:variable name="rest" select="substring( $substr, $ncol)" />
	     <xsl:variable  name="blank" select="'&#32;'"   />
	     <xsl:call-template name="plainout">
			 <xsl:with-param name="str" select="concat( $line, substring-before( $rest, $blank ) )" />
	     </xsl:call-template>
	     <xsl:if test="string-length( substring-after( $rest, $blank ) ) > 0 " >
			 <xsl:call-template name="plainstr">
				 <xsl:with-param name="substr" select="substring-after( $rest, $blank )" />
				 <xsl:with-param name="ncol" select="$ncol" />
			 </xsl:call-template>
	     </xsl:if>
	     <!--
	     <xsl:call-template name="plainout">
			 <xsl:with-param name="str" select="substring( $substr, 0, $ncol )"   />
	     </xsl:call-template>
	     <xsl:if test="string-length( $substr) > $ncol">
	        <xsl:call-template name="plainstr">
				<xsl:with-param name="substr" select="substring( $substr, $ncol )" />
				<xsl:with-param name="ncol" select="$ncol" />
	        </xsl:call-template>
	     </xsl:if>
-->
	</xsl:template>

	<xsl:template name="cstr">
	     <xsl:param name="substr"/>
	     <xsl:param name="ncol"/>
	     <xsl:call-template name="out">
			 <xsl:with-param name="str" select="substring( $substr, 0, $ncol )"   />
	     </xsl:call-template>
	     <xsl:if test="string-length( $substr) > $ncol">
	        <xsl:call-template name="cstr">
				<xsl:with-param name="substr" select="substring( $substr, $ncol )" />
				<xsl:with-param name="ncol" select="$ncol" />
	        </xsl:call-template>
	     </xsl:if>
	</xsl:template>
	
	<xsl:template name="line1">
		<xsl:text>&#10;</xsl:text>
	</xsl:template>
	<xsl:template name="line2">
		<xsl:text>&#10;</xsl:text>
		<xsl:text>&#10;</xsl:text>
	</xsl:template>
	<xsl:template name="blank1">
		<xsl:text>&#32;</xsl:text>
	</xsl:template>
<!---->
</xsl:stylesheet>
