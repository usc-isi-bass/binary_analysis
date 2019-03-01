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

double S(int m)
{
    double a[m],aver=0,sum=0;
    int i;
    for(i=0;i<m;i++)
    {
        scanf("%lf",&a[i]);
        aver+=a[i];
    }
    aver/=m;
    for(i=0;i<m;i++)
        sum+=(a[i]-aver)*(a[i]-aver);
    return (sqrt(sum/m));
}
int main()
{
    int n,m;
    for(scanf("%d",&n);n>0;n--)
    {
        scanf("%d",&m);
        printf("%.5f\n",S(m));
    }
    return 0;
}
