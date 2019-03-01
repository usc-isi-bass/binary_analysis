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

double x[40],y[40];
double dis(int i,int j)
{
	double z;
	z=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
	return z;
}
void main()
{
	double a[40][40],max;
	int n,i,j;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		scanf ("%lf %lf",&x[i],&y[i]);
	for (j=1;j<=n;j++)
	{
		for (i=j;i<=n;i++)
		{
			a[j][i]=dis(i,j);
		}
	}
	for (j=1,max=a[1][1];j<=n;j++)
	{
		for (i=j;i<=n;i++)
		{
			if (a[j][i]>max)
				max=a[j][i];
		}
	}
	printf("%.4f\n",max);
}