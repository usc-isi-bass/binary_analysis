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

double S(void)
{
	int i,n;
	double a[100],*p,aver=0,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%lf",&a[i]);aver+=a[i];}
	aver=aver/n;
	for(p=a,i=0;i<n;i++)
	{s+=(*(p+i)-aver)*(*(p+i)-aver);}
	return (sqrt(s/n));
}
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{printf("%.5lf\n",S());}
	return 0;
}