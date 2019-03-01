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
	struct point{
		double x;
		double y;
	};
	struct point point[500];
	double distance[500];
	int n,i,j;
	double max=0,Max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&point[i].x,&point[i].y);
	}
	for(i=0;i<n;i++)
	{
		double X=point[i].x;
		double Y=point[i].y;
		for(j=0;j<n;j++)
		{
			distance[j]=sqrt((X-point[j].x)*(X-point[j].x)+(Y-point[j].y)*(Y-point[j].y));
			if(distance[j]>max)
				max=distance[j];
		}
		if(max>Max)
			Max=max;
	}
	printf("%.4lf\n", Max);
	return 0;
}