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
    int n=0,i,t;
    char c[10001];
    scanf("%s",c);
    for(i=0;;i++)
    {
                 if(c[i]!='\0')
                 {
                             n++;
                 }
                 else break;
    }        
    if(n%2==0)
    {
              for(i=0;i<n/2;i++)
              {
                                 t=c[i];
                                 c[i]=c[n-1-i]; 
                                 c[n-1-i]=t;
              }
    }
    else
    {
        for(i=0;i<(n-1)/2;i++)
              {
                                 t=c[i];
                                 c[i]=c[n-1-i]; 
                                 c[n-1-i]=t;
              }
    }
    printf("%s",c);
    getchar();
    getchar();
    getchar();
}
