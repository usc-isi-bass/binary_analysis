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
    int reserve(int num);
    int num;
    int b;
    int a[6],i;
    for(i=0;i<=5;i++)
    {
            scanf("%d",&a[i]);
            num=a[i];            
            b=reserve(num);
            printf("%d\n",b);
    }
}
    int reserve(int num)
{
    int c,j,n=0,s=0;
    c=num;
    do
    {
            c=c/10;
            n++;
    }        
    while(c!=0);
    for(j=1;j<=n;j++)
    {
            c=num;
            c=c/(pow(10,(j-1)));
            c=c%10;
            s=s+c*pow(10,(n-j));
    }
    return(s);
}
