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
int n,i,j,k;
double x[100],y[100];
double d,m;
m=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%lf%lf",&x[i],&y[i]);
}
for(j=0;j<n-1;j++)
{
for(k=j+1;k<n;k++)
{
d=sqrt(pow(x[j]-x[k],2)+pow(y[j]-y[k],2));
if(m<d)
m=d;
}
}

printf("%.4lf",m);
return 0;
}