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
	struct point{
		float x,y;
	}p[num];
	int n,i,m;
	float max=0,d,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		scanf("%f %f",&(p[i].x),&(p[i].y));
		for(m=0;m<i;m++)
		{
			d=(p[i].x-p[m].x)*(p[i].x-p[m].x)+(p[i].y-p[m].y)*(p[i].y-p[m].y);
			c=(float)pow(d,0.5);
	
	if(c>max)
	{
		max=c;
	}
		}
	}
	printf("%.4f",max);
	return 0;
}