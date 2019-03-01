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



int main(int argc, char* argv[])
{
	int n,i,j;
	scanf("%d",&n);
	struct point{
		double x,y;
	};
    struct point point[100];
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&point[i].x,&point[i].y);
	}
	double s,max;
	max=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			s=sqrt(pow(point[i].x-point[j].x,2)+pow(point[i].y-point[j].y,2));
			if(max<s)
			{
				max=s;
			}
		}
	}
	printf("%.4lf",max);
	return 0;
}