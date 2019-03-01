#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct {
    char *str;
    int   expect;
} test_t;

#define ARR_LEN(a)  (sizeof((a)) / sizeof((a)[0]))
const int MAXINT = INT32_MAX;
const int MININT = INT32_MIN;

int is_number(char c)
{
    return ( (c >= '0') && (c <= '9') ) ? 1 : 0;
}

int myAtoi(char *str)
{
    int numLen = 0;
    int sign   = 1;
    int begin  = 0;
    int multiplier = 1;
    int ret = 0;
    int i   = 0;

    for (i = 0; str[i] == ' '; ++i);
    if (str[i] == '-')
    {
        sign = -1;
        ++i;
    }
    else if (str[i] == '+')
    {
        ++i;
    }
    for (; str[i] == '0'; ++i);

    begin = i;
    for (; is_number(str[i]) ; ++i)
    {
        ++numLen;
    }


    if ( (numLen > 10) || ((numLen == 10) && (str[begin] > '2')) )
    {
        return (sign > 0) ? MAXINT : MININT;
    }

    for (int i = 0; i < numLen; ++i, multiplier *= 10)
    {
        int num = (str[begin + numLen - 1 - i] - '0') * multiplier * sign;
        if ( (sign > 0) && (num > (MAXINT - ret)) )
        {
            return MAXINT;
        }
        if ( (sign < 0) && (num < (MININT - ret)) )
        {
            return MININT;
        }
        else
        {
            ret = ret + num;
        }
    }

    return ret;
}
