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
    int a[10000],b[10000];
    int n,m,i,j;
    double sum=0;
    a[0]=1;a[1]=2;b[0]=2;b[1]=3;
    for (i=2;i<10000;i++)
    {
        b[i]=b[i-1]+b[i-2];
        a[i]=b[i-1];
    }
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        sum=0;
        scanf("%d",&m);
        for (j=0;j<m;j++)
        sum+=(double)b[j]/(double)a[j];
        printf("%.3lf\n",sum);
    }
}
