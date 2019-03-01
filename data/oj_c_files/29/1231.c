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
    int m,i,n,j;
    double s[q]={0.0};
    double a,b,e;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d",&n);
        a=2;
        b=1;
        for(j=1;j<=n;j++)
        {
            s[i]=s[i]+(a/b);
            e=a;
            a=a+b;
            b=e;
        }
    }
    for(i=1;i<=m;i++)
    {
        printf("%.3lf\n",s[i]);
    }
    return 0;
}