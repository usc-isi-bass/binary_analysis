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

double f(double a,double b)
{
	double z;
	z=sqrt(a*a+b*b);
	return(z);
}
void main()
{
	int n,i,j;
	double a[100],b[100],c[100],max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf%lf",&a[i],&b[i]);
	for(i=0;i<n-1;i++)
	{
		c[i]=0;
		for(j=i+1;j<n;j++)
		{
			if(f(a[j]-a[i],b[j]-b[i])>c[i])
				c[i]=f(a[j]-a[i],b[j]-b[i]);
		}
	}
	for(i=0;i<n-1;i++)
	{
		if(c[i]>max)
			max=c[i];
	}
	printf("%.4f",max);
}




