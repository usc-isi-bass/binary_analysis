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

double F(double x)
{
	double result=0;
	double a=2, b=1, temp;
	int j;
	for(j=0;j<x;j++)
	{
		result+=(double)(a/b);
		temp=a;
		a=a+b;
		b=temp;
	}
	return result;
}
		
int main()
{
	int m;
	scanf("%d", &m);
	double *shuzu=(double *)malloc(sizeof(double)*m);
	int i;
	for(i=0;i<m;i++)
	{
		scanf("%lf", &(shuzu[i]));
		shuzu[i]=F(shuzu[i]);
	}
	for(i=0;i<m;i++)
	{
		printf("%.3lf\n", shuzu[i]);
	}
	free(shuzu);
	return 0;
}
