#ifndef GENERIC_GPIO_LIBGPIOD_H
#define GENERIC_GPIO_LIBGPIOD_H
/*  generic_gpio_libgpiod.h - gpiod based NUT driver definitions for GPIO attached UPS devices
 *
 *  Copyright (C)
 *	2023       	Modris Berzonis <modrisb@apollo.lv>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 */

#include <gpiod.h>

#define DRIVER_NAME	"GPIO UPS driver"
#define DRIVER_VERSION	"1.00"

typedef struct libgpiod_data_t {
    struct gpiod_chip *gpioChipHandle;      /* libgpiod chip handle when opened */
    struct gpiod_line_bulk gpioLines;       /* libgpiod lines to monitor */
    struct gpiod_line_bulk gpioEventLines;  /* libgpiod lines for event monitoring */
} libgpiod_data;

#endif	/* GENERIC_GPIO_LIBGPIOD_H */
