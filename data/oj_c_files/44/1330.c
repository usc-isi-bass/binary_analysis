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

main()
{
    int f(int n);
    int a,b;
    for(int i=1;i<=6;i++)
    {
        scanf("%d",&b);
        a=f(b);
        printf("%d\n",a);
    }
}
int f(int n)
{
    int i=0,m,b;
    double a=0;
    m=fabs(n);
    if(m==0)
    {
        return(0);
    }
    else
    {
        while(pow(10,i)<=m)
        {
            i++;
        }
        int k=0;
        while(k<i)
        {
            b=m/pow(10,i-k-1);
            a=a+b*pow(10,k);
            m=m-b*pow(10,i-k-1);
            k++;
        }
        if(n<0)
        return(-a);
        else
        return(a);
    }
}
