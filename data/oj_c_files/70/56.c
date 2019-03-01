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

float distance(float x1,float y1,float x2,float y2)
{
	float z;
	z=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	float d;
	d=sqrt(z);
	return d;
}


int main()
{
	int n;
	scanf("%d",&n);

	struct {
		float x,y;
	} zuobiao[100];

	float dist;
	int i,j;
	float dis=0;

	for(i=0;i<n;i++)
	{
		scanf("%f%f",&zuobiao[i].x,&zuobiao[i].y);
		for(j=0;j<i;j++)
		{
			dist=distance(zuobiao[i].x,zuobiao[i].y,zuobiao[j].x,zuobiao[j].y);
			if(dist>=dis) dis=dist;
		}
    }

	printf("%.4f\n",dis);
	return 0;
}
