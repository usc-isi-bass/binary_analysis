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



void main()
{
	int n,i,j;
	double a[101][101],c[101],d[101],max;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{scanf("%lf %lf",&c[i],&d[i]);}

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			a[i][j]=sqrt((c[i]-c[j])*(c[i]-c[j])+(d[i]-d[j])*(d[i]-d[j]));
		}
	}

	max=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]>max ) 
				max=a[i][j];
		}
	}

	printf("%.4lf\n",max);
}