#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LENGTH 10

double AtoF(char * string)
{
    int i;
    int sign;
    double value;
    double power;

    for (i = 0; isspace(string[i]); i++);

    sign = (string[i] == '-') ? -1 : 1;

    if (string[i] == '+' || string[i] == '-')
    {
        i++;
    }

    for (value = 0.0; isdigit(string[i]); i++)
    {
        value = 10.0 * value + (string[i] - '0');
    }

    if (string[i] == '.')
    {
        i++;
    }

    for (power = 1.0; isdigit(string[i]); i++)
    {
        value = 10.0 * value + (string[i] - '0');
        power *= 10.0;
    }

    return sign * value / power;
}