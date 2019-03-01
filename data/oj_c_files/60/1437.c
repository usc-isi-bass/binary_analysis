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
    int n,a,b,i,k,l;
    scanf("%d",&n);
    k=0;
    l=0;
    a=2;
    for(a=2;(a+2)<=n;a++)
    {
            b=a+2;
            for(i=2;i*i<=b;i++)
            {
                 if(a%i==0||b%i==0) 
                 {k++;}
            }
            if(k==0)
            {
            printf("%d %d\n",a,b);
            l++;
            }
            k=0;                                                 
    }
    if(l==0)
    {
    printf("empty");
    }
}