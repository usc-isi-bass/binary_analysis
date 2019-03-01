#include <string.h>
#include <ctype.h>

int my_atoi(char *pstr)
{
    int Ret_Integer = 0;
    int Integer_sign = 1;

    
    if(pstr == NULL)
    {
        return 0;
    }

    
    while(isspace(*pstr) != 0)
    {
        pstr++;
    }

    
    if(*pstr == '-')
    {
        Integer_sign = -1;
    }
    if(*pstr == '+' || *pstr == '-')
    {
        pstr++;
    }

    
    while(*pstr >= '0' && *pstr <= '9')
    {
        Ret_Integer = Ret_Integer*10 + *pstr - '0';
        pstr++;
    }
    Ret_Integer = Integer_sign * Ret_Integer;
    return Ret_Integer;
}