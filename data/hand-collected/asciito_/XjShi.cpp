//string to int
#include <ctype.h>
#include <stdio.h>

#define INT_MIN      2147483648
#define INT_MAX      2147483647

int my_atoi(const char *str) {
    const char *c = str;
    while(*c == ' ')
        c++;

    int neg = 1;
    if (*c == '-') {
        neg = -1;
        c++;
    } else if (*c == '+') {
        c++;
    }

    int value = 0;
    for (; isdigit(*c); c++) {
        int digit = *c - '0';
        if (neg == 1) {
            if (value > (INT_MAX - digit) / 10) {
                return INT_MAX;
            }
        } else if (neg == -1) {
            if (value < -(INT_MIN + digit) / 10) {
                return INT_MIN;
            }
        }
        value = 10 * value + digit;
    }

    return neg * value;
}