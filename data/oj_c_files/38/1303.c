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
    int n,i,j;
    scanf("%d",&n);
    int k[100];
    double sum[100]={0};
    double a[100];
    double s[100];
    double h[100];
    double b[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
        for(j=0;j<k[i];j++)
           {
            scanf("%lf",&a[j]);
            sum[i]=sum[i]+a[j]; 
            }
        b[i]=sum[i]/k[i];
        for(j=0;j<k[i];j++)
            {
            h[i]=h[i]+(a[j]-b[i])*(a[j]-b[i]);
            }
        s[i]=sqrt(h[i]/k[i]);
        printf("%.5lf\n",s[i]);
    }
    return 0;
}

      