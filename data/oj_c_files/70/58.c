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
	double x[10],y[10];
	int n,i,j;
	double a,b,d,dmax=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&a,&b);
		x[i]=a;
		y[i]=b;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			d=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
			if(d>dmax)
			{
				dmax=d;
			}
		}
	}
	printf("%.4f",dmax);
}

