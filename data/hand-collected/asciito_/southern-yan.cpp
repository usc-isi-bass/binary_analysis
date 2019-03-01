
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>

enum State
{
    VALID, 
    INVALID 
};
enum State state = INVALID;

int my_atoi(const char* str)
{
    long long ret = 0;
     int flag = 1;
     assert(str != NULL);
     if (*str == '\0')
     {
         return 0;
     }
    while(isspace(*str))  
     {
        str++;
     }
    if (*str == '+')
    {
        str++;
    }
    else if (*str == '-')
    {
        str++;
        flag = -1;
    }

     while (*str)
     {
         if (isdigit(*str))
         {
             ret = ret * 10 + (*str - '0')*flag;
             if (ret > INT_MAX&&ret < INT_MIN)
             {
                 return 0;
             }
         }
         else
         {
             state = VALID;
            return (int)ret;
         }
         str++;
     }
     state = VALID;
    return (int)ret;
}
