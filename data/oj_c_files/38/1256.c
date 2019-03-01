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

double fangcha(double * p,int n)
{
	double * q;
	double aver=0,sum=0,pfhe=0;
	int i;
	for(q=p,i=0;i<n;i++,q++)
		sum=sum+(*q);
	aver=sum/n;
	for(q=p,i=0;i<n;i++,q++)
	{
		pfhe=pfhe+pow(aver-(*q),2);
	}
	return sqrt(pfhe/n);
}
int main()
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int n;
		scanf("%d\n",&n);
		double x[1100]={0};
		double * p;
		int i;
		for(p=x,i=0;i<n;i++,p++)
			scanf("%lf",p);
		p=x;
		printf("%.5f\n",fangcha(p,n));
	}
	return 0;
}
