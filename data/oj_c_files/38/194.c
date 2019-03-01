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


double average(int n,double *p)
{
	double i,s;
	s=0;
	for(i=0;i<n;i++)
	{
		s=s+*p;
		p++;
	}
	s=s/n;
	return s;
}

double S(int n,double *p)
{
	double i,s,ave;
	s=0;
	ave=average(n,p);
	for(i=0;i<n;i++)
	{
		s=s+(*p-ave)*(*p-ave);
		p++;
	}
	s=s/n;
	s=sqrt(s);
	return s;
}

int main()
{
	int k,i,j,n;
	double x[100],*p=x;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&x[j]);
		}
		printf("%.5f\n",S(n,p));
	}
	return 0;
}
