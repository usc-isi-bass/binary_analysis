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
    int n, i;
    char num[30];
    gets(num);

    n=strlen(num);
    for(i=0;i<n;i++)
    {
        if(num[i]!=96&&num[i]!=109)
        {
            while(num[i]>=48&&num[i]<=57)
            {
                putchar(num[i]);
                i++;
                continue;
            }
        }
        printf("\n");
    }

    return 0;
}