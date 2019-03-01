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

double fangcha(double sz[],int k)
{
	double sum=0,s,a=0;
	int t;
	double *p;
	p=sz;
	for(t=0;t<k;t++,p++)
	{
		a=a+*p;
	}
	a=a/k;
	p=sz;
	for(t=0;t<k;t++,p++)
	{
		sum=sum+(*p-a)*(*p-a);
	}
	s=sqrt((sum/k));
	return s;
}
int main(int argc, char* argv[])
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int m;
		scanf("%d",&m);
		int j;
		double sz[1000];
		for(j=0;j<m;j++)
		{
			scanf("%lf",&sz[j]);
		}
		printf("%.5f\n",fangcha(sz,m));
	}
	return 0;
}