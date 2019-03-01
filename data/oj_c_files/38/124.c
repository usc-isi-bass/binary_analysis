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

void f(double *p,double n)
{
	int i;
	double ave=0,s=0;
	for(i=0;i<=n-1;i++)
	{
		scanf("%lf",p+i);
		ave=ave+*(p+i);
	}
	ave=ave/n;
	for(i=0;i<=n-1;i++)
	{
		s=s+pow((*(p+i)-ave),2);
	}
	s=sqrt(s/n);
	printf("%.5lf\n",s);
}
int main()
{
	int k;
	scanf("%d",&k);
	int j;
	for(j=1;j<=k;j++)
	{
		double a[102]={0},*p=a;
		double n;
		scanf("%lf",&n);
		f(p,n);
	}
	return 0;
}