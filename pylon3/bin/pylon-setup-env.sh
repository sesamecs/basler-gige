#!/bin/sh
# this script sets up the environment to run pylon applications or build pylon samples
# use dot sourcing when calling this script
# note that there is no exit in error cases, to not destroy the outer shell


if [ $# != 1 ] ; then
	echo "Usage:"
	echo "  source pylon-setup-env.sh <path to pylon install dir>"
	echo ""
	echo "     By sourcing this script, the current environement is modified to"
	echo "     be able to run and build pylon applications."
else
	# we can't deduce the pylon root from $0 or $BASH_SOURCE because it is not available on busybox
	NEW_PYLON_ROOT=`readlink -f "$1"`
	
	if [ ! -d "$NEW_PYLON_ROOT" ]; then
		echo "Error: The directory '$NEW_PYLON_ROOT' (PYLON_ROOT) does not exist" 1>&2
	else
		if [ -n "$PYLON_ROOT" -a "$PYLON_ROOT" != "$NEW_PYLON_ROOT" ]; then
			echo "Notice: PYLON_ROOT was already set. It got replaced with '$NEW_PYLON_ROOT'" 1>&2
		fi
		
		PYLON_ROOT=$NEW_PYLON_ROOT
		export PYLON_ROOT
		
		GENICAM_ROOT_V2_3="$PYLON_ROOT/genicam"
		export GENICAM_ROOT_V2_3
		
		# specify a xml cache dir so subsequent device creation will be faster
		if [ -z "$GENICAM_CACHE_V2_3" ]; then
			GENICAM_CACHE_V2_3=${HOME}/genicam_xml_cache
			export GENICAM_CACHE_V2_3
		fi
		mkdir -p "$GENICAM_CACHE_V2_3"
		
		
		# determine arch, sice genicam/pylon are using
		# different directores for different archs.
		ARCH=`uname -m`
		case "$ARCH" in
			x86_64)
				gclibdir="$GENICAM_ROOT_V2_3/bin/Linux64_x64"
				pylonlibdir="$PYLON_ROOT/lib64"
				;;
			arm*)
				gclibdir="$GENICAM_ROOT_V2_3/bin/Linux32_ARM"
				pylonlibdir="$PYLON_ROOT/lib"
				;;
			*)
				gclibdir="$GENICAM_ROOT_V2_3/bin/Linux32_i86"
				pylonlibdir="$PYLON_ROOT/lib"
				;;
		esac
		
		# this is needed for run applications using pylon SDK
		LD_LIBRARY_PATH=$pylonlibdir:$gclibdir:$gclibdir/GenApi/Generic:$LD_LIBRARY_PATH
		export LD_LIBRARY_PATH
	fi
fi


