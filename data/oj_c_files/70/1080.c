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
double a[200];
double b[200];
double c[200];
int n,i;
double max=0;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
scanf("%lf",&a[i]);
scanf("%lf",&b[i]);
c[i]=sqrt(a[i]*a[i]+b[i]*b[i]);
}
for(int j=0;j<n;j++)
{
	for(int k=0;k<n;k++)
	{
if(sqrt((a[j]-a[k])*(a[j]-a[k])+(b[j]-b[k])*(b[j]-b[k]))>max)
max=sqrt((a[j]-a[k])*(a[j]-a[k])+(b[j]-b[k])*(b[j]-b[k]));
}
}
printf("%.4lf\n", max);
}