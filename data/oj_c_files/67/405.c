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
	int n;
	scanf("%d",&n);
	double jsum,jyx;
	scanf("%lf %lf",&jsum,&jyx);
	double x=jyx/jsum;
	int i;
	double sum[100],yx[100];
	double y[100];
	for(i=0;i<n-1;i++)
	{
		scanf("%lf %lf",&sum[i],&yx[i]);
		y[i]=yx[i]/sum[i];
		if((y[i]-x)>0.05)
		{
			printf("better\n");
		}
		else if((x-y[i])>0.05)
		{
			printf("worse\n");
		}
		else
		{
			printf("same\n");
		}
	}
	return 0;
}