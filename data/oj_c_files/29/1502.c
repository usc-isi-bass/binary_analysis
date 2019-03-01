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

double f(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return (f(n-1)+f(n-2));
}
int main()
{
    int m,n,w,i;
    double c,d;
    scanf("%d",&m);
    for(w=0;w<m;w++)
    {
        c=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            d=f(i+1)/f(i);
            c=c+d;
        }
        printf("%.3lf\n",c);
    }
    return 0;
}