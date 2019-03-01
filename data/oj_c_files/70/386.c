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

double distance(double a,double b,double c,double d)
{
	double t;
	t=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	return(t);
}
void main()
{
	int n,i,j;
	double a[10],b[10],max,h;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{ 
		scanf("%lf%lf",&a[i],&b[i]);
	}
	max=distance(a[0],b[0],a[1],b[1]);
	for(i=0;i<=n-1;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			h=distance(a[i],b[i],a[j],b[j]);
			if(h>max)max=h;
		}
	}
	printf("%.4f\n",max);
}
