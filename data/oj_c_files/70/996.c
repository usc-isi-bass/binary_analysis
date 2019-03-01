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

struct point
{
	double x,y;
}*point;
int main()
{
    int n,i,j;
	double d,dx,dy;
	double maxd=0;
	
	scanf("%d",&n);
	point=(struct point*)malloc(sizeof(struct point) *n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&point[i].x,&point[i].y);
		for(j=0;j<i;j++)
		{
			dx=point[i].x-point[j].x;
			dy=point[i].y-point[j].y;
			d=sqrt(dx*dx+dy*dy);
			if(d>maxd) maxd=d;
		}
	}
	printf("%.4lf\n",maxd);
	free(point);

	return 0;
}
