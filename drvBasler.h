#ifndef __BASLER_H__
#define __BASLER_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif
	typedef	int	basler_t;

	basler_t	basler_open(char *name);
	long 		basler_read(basler_t device, uint8_t *buffer, uint32_t length);
#ifdef __cplusplus
}
#endif

#endif /*__BASLER_H__*/
