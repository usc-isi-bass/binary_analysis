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

double f(double x,double y)
{
	return (x*x+y*y);
}
void main()
{
	int i,j,n;
	double max=0,d,x[100],y[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf%lf",&x[i],&y[i]);
	for(i=0;i<n-1;i++)
		for(j=i;j<n;j++)
		{
			d=sqrt(fabs(f((x[i]-x[j]),(y[i]-y[j]))));
			if(d>max)max=d;
			

		}
	printf("%.4lf\n",max);
	
}
	