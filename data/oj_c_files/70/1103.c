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


struct po
{
	float x;
	float y;
};

void main()
{
	struct po p[10];
	int n;
	int i,j;
	double d=0,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f %f",&p[i].x,&p[i].y);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			a=sqrt(pow(p[i].x-p[j].x,2)+pow(p[i].y-p[j].y,2));
			if(a>d) d=a;
		}
	}
	printf("%.4f\n",d);
}
