#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* From: CFAR_Apache_2.0.2/atds/apache/httpd-2.4.17/modules/echo/cromu_00001.c
 */

size_t itoa( char *out, size_t val, size_t max )
{
    size_t length = 0;
    size_t end = 0;
    size_t temp = 0;

    if ( out == NULL ) {
        goto end;
    }

    // Calculate the needed length
    temp = val;
    do {
        end++;
        temp >>= 3;
    } while ( temp );

    // ensure we have enough room
    if ( end >= max ) {
        goto end;
    }

    length = end;

    // Subtract one to skip the null
    end--;

    do {
        out[end] = (val & 7) + 0x30;
        val >>= 3;
        end--;
    } while ( val );

    out[length] = 0x00;
end:
    return length;
}