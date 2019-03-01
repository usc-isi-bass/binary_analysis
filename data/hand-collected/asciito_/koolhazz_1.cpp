#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int dig_table[] = {
    1, 10, 100, 1000, 10000, 100000, 
    1000000, 1000000, 10000000, 100000000, 1000000000
};

int
my_atoi_2(char* str)
{
    char    *c;
    int     result;
    int     len;
    
    result = 0;
    
    if (*str == '-') {
        len = strlen(str) - 1;
        c = str + 1;
    } else {
        len = strlen(str);
        c = str + 1;
    }
     
    for (int i = 0; i < len; i++) {
        if (*(c + i) >= '0' && *(c + i) <= '9') {
            result += dig_table[len - i - 1] * (*(c + i) - 48);
            printf("result : %d\n", result);         
        }
    }
    
    if (*str == '-') {
        return ~(result) + 1;
    }
    
    return result;
}