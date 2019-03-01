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
    int k,i,j,n;
    double h,a,H,A,N;
    double x[100],s[100];
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        h=0;
        H=0;
        scanf("%lf",&N);
        n=N;
        for(j=0;j<n;j++)
        {
            scanf("%lf",&x[j]);
            h=h+x[j];
        }
        a=h/N;
        for(j=0;j<n;j++)
        {
            H=H+((x[j]-a)*(x[j]-a));
        }
        A=H/N;
        s[i]=sqrt(A);
    }
    for(i=0;i<k;i++)
    {
        printf("%.5f\n",s[i]);
    }
    return 0;
}