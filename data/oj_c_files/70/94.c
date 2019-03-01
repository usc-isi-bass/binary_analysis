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
	int n;
	float t,max=0;
	struct point{
	   float x,y;
	}dis[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%f%f",&dis[i].x,&dis[i].y);
	}
	for(int k=0;k<n;k++)
	{
		for(int j=0;j<n;j++)
		{
		t=sqrt((dis[k].x-dis[j].x)*(dis[k].x-dis[j].x)+(dis[k].y-dis[j].y)*(dis[k].y-dis[j].y));                               
        if(t>max)max=t;
		}
	}
	printf("%.4f\n",max);
	return 0;
}