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
    char string[1000];
    char c;
    gets(string);
    int n,i,x;
    n=strlen(string);
    x=0;
    for(i=0;i<n;i++)
    {
                    if(string[i+1]==string[i]||abs(string[i+1]-string[i])==32)
                    {
                    x=x+1;
                    }
                    else 
                    {
                         if(string[i]<=90)
                         {
                         printf("(%c,%d)", string[i], x+1 );
                         x=0;
                         }
                         else
                         {
                              printf("(%c,%d)", string[i]-32, x+1 );
                              x=0;
                         }
                    }
     }

     return 0;
}
