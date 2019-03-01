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
    char string[1001];
    gets(string);
    int n;
    n=strlen(string);
    int i;
    int m=1;
    for(i=0;i<n;i++)
    {
                    if(string[i]>=97)
                    string[i]=string[i]-32;
    }
    for(i=0;i<n;i++)
    {
                    if(string[i]==string[i+1])
                    {
                        m++;
                    }
                    else
                    {
                        
                         printf("(%c,%d)", string[i], m);
                         m=1;
                    }
    }
    
    return 0;
}
