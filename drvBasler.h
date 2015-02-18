/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3.0 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright (C) Abdallah Ismail <abdallah.ismail@sesame.org.jo>, 2015
 */

#ifndef __BASLER_H__
#define __BASLER_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif
	typedef	int	basler_t;
	typedef enum
	{
		TRIGGER_SOURCE_SOFTWARE	,
		TRIGGER_SOURCE_HARDWARE
	} triggerSource_t;

	basler_t	basler_open(char *name);
	long 		basler_getImage(basler_t device, uint8_t *imageBuffer, uint32_t imageSize);
	long		basler_setGainAuto(basler_t device, bool gainAuto);
	long		basler_getGainAuto(basler_t device, bool* gainAuto);
	long		basler_setGain(basler_t device, uint32_t gain);
	long		basler_getGain(basler_t device, uint32_t* gain);
	long		basler_setExposure(basler_t device, uint32_t exposure);
	long		basler_getExposure(basler_t device, uint32_t *exposure);
	long		basler_setWidth(basler_t device, uint32_t width);
	long		basler_getWidth(basler_t device, uint32_t *width);
	long		basler_setHeight(basler_t device, uint32_t height);
	long		basler_getHeight(basler_t device, uint32_t *height);
	long		basler_getSize(basler_t device, uint32_t *imageSize);
	long		basler_setTriggerSource(basler_t device, triggerSource_t source);
	long		basler_getTriggerSource(basler_t device, triggerSource_t* source);
	long		basler_setOffsetX(basler_t device, uint32_t offsetX);
	long		basler_getOffsetX(basler_t device, uint32_t *offsetX);
	long		basler_setOffsetY(basler_t device, uint32_t offsetY);
	long		basler_getOffsetY(basler_t device, uint32_t *offsetY);
#ifdef __cplusplus
}
#endif

#endif /*__BASLER_H__*/
