# Basler-gige
Basler-gige is an EPICS IOC driver for the GigE camera series from Basler. This driver is currently being developed at SESAME. SESAME (Synchrotron-light for Experimental Science and Applications in the Middle East) is a “third-generation” synchrotron light source under construction in Allan, Jordan. It will be the Middle East's first major international research centre. Visit www.sesame.org.jo for more information.

## Notes
* The driver supports the following features:
  - Hard and soft triggering of image capture.
  - Area-of-interest (AOI) via setting image width, height, x offset, and y offset.
  - Automatic and manual gain modes.
  - Setting exposure (integration) time.
* The driver was developed for, and tested with, the Ace acA1300-gm GigE camera from Basler. The driver should work seamlessly with other GigeE cameras from Basler, however it might be a good idea to check for any discrepancies in the features supported by the new camera.
* The driver uses the Linux/x86 Pylon3 version of the libraries from Basler. If you wanted to run the driver on a different platform or using a different version of the library you will have to install the relevant libraries and to make the required modifications accordingly (see section below).
* A compatible graphical user interface for this driver can be found at [basler-gige-client](https://github.com/sesamecs/basler-gige-client).

## Installation
* Download the Linux/x86 Pylon3 libraries from Basler. You can find them at [pylon3](http://www.baslerweb.com/media/documents/pylon-3.2.0-x86.tar.gz).
* Decompress the tarball and follow the installation instructions. Note that the driver assumes that the libraries are installed under `/opt/pylon3`. Make sure you setup the runtime environment for the libraries, as mentioned in the installation procedure of the libraries.
* The driver is written to be integrated with the standard EPICS driver framework. Clone the repository and integrate it in your own EPICS framework. Look in the main folder for examples on the database, startup script, and IOC application makefile.
