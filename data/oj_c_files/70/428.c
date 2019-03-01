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
	struct p
	{
		double x;
		double y;
	}dot[50];
	double l,max=0;
    int n,i,j;	
    scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf %lf",&dot[i].x,&dot[i].y);
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			l=sqrt((dot[i].x-dot[i+j].x)*(dot[i].x-dot[i+j].x)+(dot[i].y-dot[i+j].y)*(dot[i].y-dot[i+j].y));
			if(max<l)
				max=l;
		}
	}
	printf("%.4lf\n",max);
}