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
	int i,j,n;
	struct point{
		float x,y;
	}p[num];
	double max=0,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f %f",&(p[i].x),&(p[i].y));
		for(j=0;j<i;j++)
		{
			a=sqrt((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y));
			if(a>max)
				max=a;
		}
	}
	printf("%.4f",max);
	return 0;
}
		

