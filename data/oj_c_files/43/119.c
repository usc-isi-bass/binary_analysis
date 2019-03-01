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

int prime(int n)
{
    int i,isprime=1;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
           {
            isprime=0;
            break;
           }
    }
    return isprime;    
}
main()
{
    int n,i,a,b;
    scanf("%d",&n);
    for(i=3;i<=n/2;i+=2)
    {
        a=prime(i);
        b=prime(n-i);
        if(a==1&&b==1)
            printf("%d %d\n",i,n-i);
    }
    getchar();
    getchar();
}
