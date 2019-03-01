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

double ca(double x,double y)
{
    return x*x+y*y;
    }
main()
{
    double x[50],y[50];
    int n,i,j;
    scanf("%d",&n);
    scanf("%lf %lf",&x[0],&y[0]);
    double max=0;
    for(i=1;i<n;i++)
    {
        scanf("%lf %lf",&x[i],&y[i]);
        for(j=0;j<i;j++)
        {
            if(ca(x[j]-x[i],y[j]-y[i])>max)
            max=ca(x[j]-x[i],y[j]-y[i]);
            }
        }
    printf("%.4lf\n",sqrt(max));

    }
