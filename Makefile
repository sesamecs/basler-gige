TOP=..

include $(TOP)/configure/CONFIG

# Compiler options
INCLUDES		+=	-I$(GENICAM_ROOT_V2_3)/library/CPP/include -I$(PYLON_ROOT)/include -DUSE_GIGE
CFLAGS			+=	-Wno-switch -Wno-unknown-pragmas -Wno-unused
CXXFLAGS		+=	-Wno-switch -Wno-unknown-pragmas -Wno-unused
LDFLAGS			+=	-L$(PYLON_ROOT)/lib -L$(GENICAM_ROOT_V2_3)/bin/Linux32_i86 -L$(GENICAM_ROOT_V2_3)/bin/Linux32_i86/GenApi/Generic -Wl,-E  -lpylonbase -lpylongigesupp -lGenApi_gcc40_v2_3 -lGCBase_gcc40_v2_3 -lLog_gcc40_v2_3 -lMathParser_gcc40_v2_3 -lXerces-C_gcc40_v2_7 -llog4cpp_gcc40_v2_3

# Library
LIBRARY_IOC		=	basler
basler_SRCS		+=	basler_registerRecordDeviceDriver.cpp
basler_SRCS		+= 	drvBasler.cpp
basler_SRCS		+=	devWaveformBasler.c
basler_SRCS		+=	devLonginBasler.c
basler_SRCS		+=	devLongoutBasler.c
basler_LIBS		+= 	$(EPICS_BASE_IOC_LIBS)
INSTALL_DBDS	+= 	$(INSTALL_DBD)/basler.dbd

# IOC
PROD_IOC		=	baslerApp
baslerApp_SRCS	+=	baslerApp_registerRecordDeviceDriver.cpp
baslerApp_SRCS	+=	baslerAppMain.cpp
baslerApp_LIBS	+=	basler
baslerApp_LIBS	+=	$(EPICS_BASE_IOC_LIBS)
baslerApp_DBD	+=	base.dbd
baslerApp_DBD	+=	basler.dbd
DBD				+=	baslerApp.dbd

include $(TOP)/configure/RULES
