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
	int i,j;
	double g=0;
	int number;
	scanf("%d",&number);
	double *x=(double *)malloc(sizeof(double)*number);
	double *y=(double *)malloc(sizeof(double)*number);
	for(i=0;i<number;i++)
	{
		scanf("%lf %lf",&x[i],&y[i]);
	}
	for(i=0;i<number;i++)
	{
		for(j=1;j<number;j++)
		{
			if(g<((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])))
				g=((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		}
	}
	printf("%.4f",sqrt(g));
}