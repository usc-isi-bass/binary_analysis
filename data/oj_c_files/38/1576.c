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
int k,n,i,t;
double a[100]={0.0},e1=0.0,e2=0.0,e3=0.0,e4=0.0;
scanf("%d",&k);
for(;k>0;k--)
{
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
{
scanf("%lf",&a[i]);
}
for(i=0;i<n;i++)
{e1=e1+a[i];}
e2=e1/n;
for(i=0;i<n;i++)
{e3=e3+(a[i]-e2)*(a[i]-e2);}
e4=sqrt(e3/n);
printf("%.5lf\n",e4);
e1=0;e2=0;e3=0;e4=0;
}
return 0;
}
