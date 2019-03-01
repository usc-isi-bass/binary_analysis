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
	int b=0,i,j,n;
	double max=0,dis;
	scanf("%d", &n);

	struct point
	{
		float x,y;
	}p[100];
	for (i=1;i<=n;i++)
	{
		scanf("%f %f", &p[i].x,&p[i].y);
	}
	for (i=1;i<=n;i++)
	{
		for (j=i+1; j<=n;j++)
		{
			dis=(double)sqrt( (p[i].x-p[j].x)*(p[i].x-p[j].x) + (p[i].y-p[j].y)*(p[i].y-p[j].y));	
            if (max<dis) max=dis;
		}
	}
	printf("%.4f\n", max);
}
