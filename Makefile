TOP=..

include $(TOP)/configure/CONFIG

INCLUDES					+=	-I../pylon3/genicam/library/CPP/include -I../pylon3/include -DUSE_GIGE
CFLAGS						+=	-Wno-switch -Wno-unknown-pragmas -Wno-unused
CXXFLAGS					+=	-Wno-switch -Wno-unknown-pragmas -Wno-unused

# Library
LIBRARY_IOC					=	basler
basler_SRCS					+= 	drvBasler.cpp
basler_SRCS					+=	devBiBasler.c
basler_SRCS					+=	devBoBasler.c
basler_SRCS					+=	devLonginBasler.c
basler_SRCS					+=	devLongoutBasler.c
basler_SRCS					+=	devWaveformBasler.c
basler_LIBS					+=	pylonbase pylongigesupp GenApi_gcc40_v2_3 GCBase_gcc40_v2_3 Log_gcc40_v2_3 MathParser_gcc40_v2_3 Xerces-C_gcc40_v2_7 log4cpp_gcc40_v2_3 gxapi
pylonbase_DIR				=	../pylon3/lib
pylongigesupp_DIR			=	../pylon3/lib
Xerces-C_gcc40_v2_7_DIR		=	../pylon3/lib
gxapi_DIR					=	../pylon3/lib
GenApi_gcc40_v2_3_DIR		=	../pylon3/genicam/bin/Linux32_i86
GCBase_gcc40_v2_3_DIR		=	../pylon3/genicam/bin/Linux32_i86
Log_gcc40_v2_3_DIR			=	../pylon3/genicam/bin/Linux32_i86
MathParser_gcc40_v2_3_DIR	=	../pylon3/genicam/bin/Linux32_i86
log4cpp_gcc40_v2_3_DIR		=	../pylon3/genicam/bin/Linux32_i86
basler_LIBS					+= 	$(EPICS_BASE_IOC_LIBS)
INSTALL_DBDS				+= 	$(INSTALL_DBD)/basler.dbd

include $(TOP)/configure/RULES
