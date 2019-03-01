#include <stdio.h>
#include <ctype.h>
#include <string.h>

int atoi(char * str) { 

    int i, n, sign;
    
    for(i = 0; isspace(str[i]); i++)
        ;
    sign = (str[i] == '-') ? -1 : 1; 
    if(str[i] == '+' || str[i] == '-') 
        i++; 
    for(n = 0; isdigit(str[i]); i++)
        n = 10 * n + (str[i] - '0');

    return sign * n; 
}