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

struct spot
{
	double x;
	double y;
}pts[100];
void main()
{
	int n,i,j;
	double a,b,s,max=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf%lf",&pts[i].x,&pts[i].y);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			a=pts[j].x-pts[i].x;
			b=pts[j].y-pts[i].y;
			s=sqrt(a*a+b*b);
			if(s>max)max=s;
		}
	printf("%.4lf\n",max);
}