/*
 * image.h
 *
 *  Created on: 18 Kas 2020
 *      Author: Thinkpad
 */

#ifndef SRC_DISPLAY_DRIVER_IMAGE_H_
#define SRC_DISPLAY_DRIVER_IMAGE_H_


#include "stdint.h"

typedef struct image_t {
	const uint8_t *data;
	uint16_t width;
	uint16_t height;
	uint8_t dataSize;
} Image;


#endif /* SRC_DISPLAY_DRIVER_IMAGE_H_ */
