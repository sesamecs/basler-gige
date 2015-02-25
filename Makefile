TOP=..

include $(TOP)/configure/CONFIG

INCLUDES					+=	-I${PYLON_ROOT}/genicam/library/CPP/include -I${PYLON_ROOT}/include -DUSE_GIGE
CFLAGS						+=	-Wno-switch -Wno-unknown-pragmas -Wno-unused
CXXFLAGS					+=	-Wno-switch -Wno-unknown-pragmas -Wno-unused

# Library
LIBRARY_IOC					=	basler
basler_SRCS					+= 	basler.cpp
basler_SRCS					+=	bi.c
basler_SRCS					+=	bo.c
basler_SRCS					+=	longin.c
basler_SRCS					+=	longout.c
basler_SRCS					+=	waveform.c
basler_LIBS					+=	pylonbase pylongigesupp GenApi_gcc40_v2_3 GCBase_gcc40_v2_3 Log_gcc40_v2_3 MathParser_gcc40_v2_3 Xerces-C_gcc40_v2_7 log4cpp_gcc40_v2_3 gxapi
pylonbase_DIR				=	${PYLON_ROOT}/lib
pylongigesupp_DIR			=	${PYLON_ROOT}/lib
Xerces-C_gcc40_v2_7_DIR		=	${PYLON_ROOT}/lib
gxapi_DIR					=	${PYLON_ROOT}/lib
GenApi_gcc40_v2_3_DIR		=	${PYLON_ROOT}/genicam/bin/Linux32_i86
GCBase_gcc40_v2_3_DIR		=	${PYLON_ROOT}/genicam/bin/Linux32_i86
Log_gcc40_v2_3_DIR			=	${PYLON_ROOT}/genicam/bin/Linux32_i86
MathParser_gcc40_v2_3_DIR	=	${PYLON_ROOT}/genicam/bin/Linux32_i86
log4cpp_gcc40_v2_3_DIR		=	${PYLON_ROOT}/genicam/bin/Linux32_i86
basler_LIBS					+= 	$(EPICS_BASE_IOC_LIBS)
INSTALL_DBDS				+= 	$(INSTALL_DBD)/basler.dbd

# IOC
PROD_IOC					=	baslerApp
baslerApp_SRCS				+=	baslerApp_registerRecordDeviceDriver.cpp
baslerApp_SRCS				+=	app.cpp
baslerApp_LIBS				+=	basler
baslerApp_LIBS				+=	$(EPICS_BASE_IOC_LIBS)
baslerApp_DBD				+=	base.dbd
baslerApp_DBD				+=	basler.dbd
INSTALL_DBDS				+= 	$(INSTALL_DBD)/baslerApp.dbd
DB							+=	basler.db

include $(TOP)/configure/RULES
