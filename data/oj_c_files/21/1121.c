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
	int n,a[300],i,s=0,d[300],t=0;
	double b,c[300],max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);s=s+a[i];
	}
	b=(double)s/n;
	for(i=0;i<n;i++)
		c[i]=fabs(a[i]-b);
	for(i=0;i<n;i++)
	{
		if(max<c[i])
			max=c[i];
	}
	for(i=0;i<n;i++)
	{
		if(c[i]==max)
		{
			d[t]=a[i];t++;
		}
	}
	printf("%d",d[0]);
	for(i=1;i<t;i++)
		printf(",%d",d[i]);
}