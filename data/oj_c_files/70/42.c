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
	}point[100];
	int i,j,n;
	double M=0.0,length;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&point[i].x,&point[i].y);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			length=sqrt((point[j].x-point[i].x)*(point[j].x-point[i].x)+(point[j].y-point[i].y)*(point[j].y-point[i].y));
			if(length>M)
				M=length;
		}
	}
	printf("%.4f\n",M);

	
	return 0;
}
 
