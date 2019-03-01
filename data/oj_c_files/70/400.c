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
    int n, i, j;
	double m=0, l, M;
	struct point
	{
		double x;
		double y;
	} point[100];
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&point[i].x,&point[i].y);

	}
	for(i=1;i<n;i++)
	
	{
		for(j=0;j<i;j++)
		{
          l=(point[i].x-point[j].x)*(point[i].x-point[j].x)+(point[i].y-point[j].y)*(point[i].y-point[j].y);
		  if(l>m) m=l;
		}
	}
	M=sqrt(m);
	printf("%.4lf\n",M);
	return 0;
}

