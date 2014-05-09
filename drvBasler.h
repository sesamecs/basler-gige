#ifndef __BASLER_H__
#define __BASLER_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif
	typedef	int	basler_t;

	basler_t	basler_open(char *name);
	long 		basler_capture(basler_t device, uint8_t *imageBuffer, uint32_t imageSize);
	long		basler_setExposure(basler_t device, uint32_t exposure);
	long		basler_getExposure(basler_t device, uint32_t *exposure);
#ifdef __cplusplus
}
#endif

#endif /*__BASLER_H__*/
