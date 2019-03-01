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

typedef struct point
{
	float x;
	float y;
}point;

int main()
{
	int i,j,num;
	point a[50];
	double dis=0,d;
	scanf("%d",&num);
	for(i=0;i<num;i++)
		scanf("%f %f",&a[i].x,&a[i].y);
	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{
	d=(a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y);
			if(d>dis)
				dis=d;
		}
	}
	printf("%.4lf",sqrt(dis));
return 0;
}