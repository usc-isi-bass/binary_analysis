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
	int i,j=0,n;
	double p,b[300],max,a[300],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
		sum=sum+a[i];
	}
	p=sum/n;
	for(i=0;i<n;i++)
	{
		if(a[i]>=p)
			b[i]=a[i]-p;
		else b[i]=p-a[i];
	}
	max=b[0];
	for(i=1;i<n;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
			
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==max)
		{
			printf("%.0lf",a[i]);
			break;
		}
	}
	for(j=i+1;j<n;j++)
	{
		if(b[j]==max)
			printf(",%.0lf",a[j]);
	}
	printf("\n");
}
