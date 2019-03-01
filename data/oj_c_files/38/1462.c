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

double s(double *p,double ave,int k,double x[])
{
	double t=0;
	for(;;)
	{
		t=t+(pow((*p)-ave,2));
		p++;
		if(p==(x+k))
			break;
	}
	return t;
}
int main()
{
	int i,j,n,k;
	double x[1001],ave,sum,t,r;
	double *p;
	p=x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ 
		sum=0;
		scanf("%d",&k);
		for(j=0;j<k;j++)
			scanf("%lf",&x[j]);
		for(;;)
		{
			sum=sum+(*(p++));
			if(p==(x+k))
				break;
		}
		ave=sum/k;
		p=x;
		t=s(p,ave,k,x);
		r=sqrt(t/k);
		printf("%.5lf\n",r);
	}
	return 0;
}