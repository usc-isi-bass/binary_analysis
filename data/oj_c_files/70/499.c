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
	float a[100],b[100];
	double f(float x,float y,float z,float w);
	int i,j,n;
	double d=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f %f",&a[i],&b[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(f(a[i],a[j],b[i],b[j])>d)
				d=f(a[i],a[j],b[i],b[j]);
		}
	}
	d=(float)d;
	printf("%.4f\n",d);
}
double f(float x,float y,float z,float w)
{
	double s;
	s=sqrt((x-y)*(x-y)+(z-w)*(z-w));
	return(s);
}
