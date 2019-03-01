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
	float x[10],y[10];
	double dis,max=0,sum;
	int n,i,j;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%f %f",&x[i],&y[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=1;j<n-i;j++)
		{
			sum=(x[i]-x[i+j])*(x[i]-x[i+j])+(y[i]-y[i+j])*(y[i]-y[i+j]);
			dis=sqrt(sum);
			if(dis>max)
				max=dis;
		}
	}
	printf("%.4f\n",max);
}
