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

int main ()
{
	double fangcha(double *p,int n,double fc);
	int n,k,i,j;
	double a[1000],*p,fc=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		for(j=0;j<k;j++)
			scanf("%lf",&a[j]);
		p=a;
		if(i)
			printf("\n");
		printf("%.5f",fangcha(p,k,fc));
	}
	return 0;
}
double fangcha(double *p,int n,double fc)
{
	double aver,sum=0;
	int i;
	for(i=0;i<n;i++)
		sum+=*(p+i);
	aver=sum/n;
	sum=0;
	for(i=0;i<n;i++)
	{
		sum+=(*(p+i)-aver)*(*(p+i)-aver);
	}
	fc=sqrt(sum/n);
	return fc;
}