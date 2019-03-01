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
	int n;
	scanf("%d",&n);
	struct point{
		float x;
		float y;
	}point[1000];
	int i=0;
	do{
		scanf("%f %f",&point[i].x,&point[i].y);
		i++;
		}while(i<n);
	double distance,a;
	int j;
	i=j=0;
	distance=0;
	do{
		do{
			a=(point[i].x-point[j].x)*(point[i].x-point[j].x)+(point[i].y-point[j].y)*(point[i].y-point[j].y);
			if(a>distance)
				distance=a;
			else
				distance=distance;
			i++;
		}while(i<n);
		i=0;
		j++;
	}while(j<n);
	distance=sqrt(distance);
	printf("%.4f\n",distance);

	return 0;
}