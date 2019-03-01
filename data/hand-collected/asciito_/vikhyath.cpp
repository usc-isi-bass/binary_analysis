#include <stdio.h>
#include <stdlib.h>

int valid(char c) {
    return (c >= '0' && c <= '9') ? 1 : 0;
}

int stringtoint(char *str)
{
    char *copy = str;
    int sign = 1;
    if (*str == '-') {
        sign = -1;
        str++;
    }

    int res = 0;
    while (*str) {
        if (!valid(*str)) {
            exit(0);
        }
        // technically getting multiplied by 10, in other words res = res*10 + (*str - '0')
        res = (res << 3) + (res << 1) + (*str - '0');
        str++;
    }
    return res * sign;
}