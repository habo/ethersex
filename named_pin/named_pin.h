/* vim:fdm=marker ts=4 et ai
 * {{{
 *
 * Copyright (c) 2007 by Christian Dietrich <stettberger@dokucode.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * For more information on the GPL, please go to:
 * http://www.gnu.org/copyleft/gpl.html
 }}} */

#ifndef _NAMED_PIN_H
#define _NAMED_PIN_H

#include "../config.h"

struct PinConfiguration {
  uint8_t port, pin;
  uint8_t input;
  uint8_t active_high;
  const char *name;
};


void named_pin_init(void);
uint8_t named_pin_by_name(const char *name);
uint8_t named_pin_by_pin(uint8_t port, uint8_t pin);

#ifdef NAMED_PIN_SUPPORT
#ifndef NAMED_PIN_PGM
const extern struct PinConfiguration portio_pincfg[];
#endif
#endif

#endif