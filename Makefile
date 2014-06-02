TOP=..

include $(TOP)/configure/CONFIG

# Compiler options
INCLUDES		+=	-I../pylon3/genicam/library/CPP/include -I../pylon3/include -DUSE_GIGE
CFLAGS			+=	-Wno-switch -Wno-unknown-pragmas -Wno-unused
CXXFLAGS		+=	-Wno-switch -Wno-unknown-pragmas -Wno-unused
LDFLAGS			+=	-L../pylon3/lib -L../pylon3/genicam/bin/Linux32_i86 -L../genicam/bin/Linux32_i86/GenApi/Generic -Wl,-E  -lpylonbase -lpylongigesupp -lGenApi_gcc40_v2_3 -lGCBase_gcc40_v2_3 -lLog_gcc40_v2_3 -lMathParser_gcc40_v2_3 -lXerces-C_gcc40_v2_7 -llog4cpp_gcc40_v2_3

# Library
LIBRARY_IOC		=	basler
basler_SRCS		+=	basler_registerRecordDeviceDriver.cpp
basler_SRCS		+= 	drvBasler.cpp
basler_SRCS		+=	devBiBasler.c
basler_SRCS		+=	devBoBasler.c
basler_SRCS		+=	devLonginBasler.c
basler_SRCS		+=	devLongoutBasler.c
basler_SRCS		+=	devWaveformBasler.c
basler_LIBS		+= 	$(EPICS_BASE_IOC_LIBS)
INSTALL_DBDS	+= 	$(INSTALL_DBD)/basler.dbd

include $(TOP)/configure/RULES
