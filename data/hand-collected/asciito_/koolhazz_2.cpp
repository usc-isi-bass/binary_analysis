#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
my_atoi(const char* str)
{
    char    *c;
    int     result;
    
    result = 0;
 
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (*(str + i) >= '0' && *(str + i) <= '9') {
            result = (*(str + i) - 48)  + 10 * result;
            printf("result : %d\n", result);         
        }
    }
    
    if (*str == '-') {
        return ~(result) + 1;
    }
    
    return result;
}