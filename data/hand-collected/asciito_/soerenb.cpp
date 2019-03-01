/*
 * atoi.c - Implementation of atoi
 * Copyright (C) 2015 - 2017  Sören Brinkmann <soeren.brinkmann@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#include <ctype.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

static int my_atoi(const char *s)
{
    int ret = 0;
    bool neg = false;

    if (!s)
        return 0;

    /* skip initial white spaces */
    while (isspace(*s)) {
        s++;
    }

    if (*s == '-') {
        neg = true;
        s++;
    } else if (*s == '+') {
        s++;
    }

    while (*s >= '0' && *s <= '9') {
        ret = ret * 10 + *s++ - '0';
    }

    if (neg)
        ret *= -1;

    return ret;
}