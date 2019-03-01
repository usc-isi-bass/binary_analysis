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
    int m,n;
    int i,j,k;
    int t,q,p;
    double a[100];
    double sum;
    a[0]=1;
    a[1]=2;
    for(i=2;i<=99;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    scanf("%d",&m);
    for(i=0;i<=m-1;i++)
    {
        sum=0;
        scanf("%d",&n);
        for(j=0;j<=n-1;j++)
        {
            sum+=(a[j+1]/a[j]);
        }
        printf("%.3lf\n",sum);
    }
}
