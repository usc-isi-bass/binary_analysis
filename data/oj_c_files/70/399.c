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

void main()
{
	struct point
	{
		float x;
		float y;
	}m[50];
	int n,i,j;
	double s,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%f %f",&m[i].x,&m[i].y);
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			s=((double)m[i].x-(double)m[i+j].x)*((double)m[i].x-(double)m[i+j].x)+((double)m[i].y-(double)m[i+j].y)*((double)m[i].y-(double)m[i+j].y);
			if(max<s)
				max=s;
		}
	}
	printf("%.4f\n",sqrt(max));
}