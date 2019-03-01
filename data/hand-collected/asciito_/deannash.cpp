#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define INT_MAX     2147483647
#define INT_MIN     -2147483648

int myAtoi(char* str) {
    int ret_i, i, str_len, sign;
    char buffer [256];
    i = 0; 
    ret_i = 0;
    sign = 1;
    if(*str == '+')
    str++;
    else if(*str == '-') {
    sign = -1;
    str++;
    }
    str_len = strlen(str);
    while(str_len) {
    if(isspace(*str) || (*str < '0') || (*str > '9')) {
        str++;
    } else {
        ret_i = ret_i*10 + *str - '0';
        str++;
    }
    str_len--;
    }
    if (ret_i > INT_MAX)
    return INT_MAX;
    else if ( ret_i < INT_MIN)
    return INT_MIN;
    else
        return sign*ret_i;
}