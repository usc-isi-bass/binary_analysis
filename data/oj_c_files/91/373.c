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
    char string[200],string1[200];
    gets(string);
    int n,i;
    n=strlen(string);
    for(i=0;i<n;i++)
    {
                    if(i!=n-1)
                    {
                      string1[i]=string[i]+string[i+1];
                    }
                    if(i==n-1)
                    {
                              string1[i]=string[i]+string[0];
                              }
    }
    for(i=0;i<n;i++)
    {
                    printf("%c", string1[i]);
    }

    return 0;
}
    
