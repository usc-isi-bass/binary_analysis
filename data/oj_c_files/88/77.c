#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char input_number[30];
    gets(input_number);

    int indicator;
    int cool=0;
    for(indicator=0;indicator<strlen(input_number);indicator++)
    {
        if(isdigit(input_number[indicator]))
        {
        cool=0;
        putchar(input_number[indicator]);
        }
        else if(cool==0)
        {
            printf("\n");
            cool=1;
        }
    }
    return 0;
}
