#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int myAtoi(char* str) {
    int i, n, sign, c;

    for(i = 0; isspace(str[i]); i++)
        ;
    sign = (str[i] == '-') ? -1 : 1;
    if(str[i] == '+' || str[i] == '-')
        i++;
    for(n = 0; isdigit(str[i]); i++)
    {
        c = (str[i] - '0');
        if (sign == 1 && (n > INT_MAX/10 || (n == INT_MAX/10 && c >= INT_MAX%10)))  
        {  
            return INT_MAX;  
        }  
        else if (sign == -1 && (n > (unsigned)INT_MIN/10 || (n == (unsigned)INT_MIN/10 && c >= (unsigned)INT_MIN%10)))  
        {  
            return INT_MIN;  
        }
        
        n = n * 10 + c;
    }

    return sign*n; 
}