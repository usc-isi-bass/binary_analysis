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

double dis (double x1,double y1,double x2,double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main ()
{
    int i,n,j;
    double s,d;
    scanf("%d",&n);
    double *x = (double*)malloc(n*sizeof(double));
    double *y = (double*)malloc(n*sizeof(double));
    for (i=0;i<n;i++) scanf("%lf %lf",(x+i),(y+i));
    s=0;
    for (i=0;i<n-1;i++) for (j=i+1;j<n;j++)
    {
        d=dis(*(x+i),*(y+i),*(x+j),*(y+j));
        if (d>s) s=d;
    }
    free(x);
    free(y);
    printf("%.4lf\n",s);
    return 0;
}
