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
	int n,i,k,m=0,*a,*c;
	double t,s=0,*b;
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int)*n);
	b=(double *)malloc(sizeof(double)*n);
	c=(int *)malloc(sizeof(int)*n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s+=a[i];
	}
	s=s/n;
	for(i=0,t=0;i<n;i++)
	{
		b[i]=fabs(a[i]-s);
		if(b[i]>t) t=b[i];
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==t)
		{
			c[m]=a[i];
			m++;
		}
	}
	for(i=0;i<m-1;i++)
		printf("%d,",c[i]);
	printf("%d",c[m-1]);
	free(a);
	free(b);
	free(c);
}