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

int main()
{
	double a[1000],sum,q;
	int b,c,d[1000],j,k,l,n,i;
	b=2;
	c=1;
	a[0]=(double)b/c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&d[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=a[0];
		b=2;
		c=1;
		for(j=1;j<d[i];j++)
		{
			
			k=b;
			b=(b+c);
			c=k;
			a[j]=(double)b/c;
			sum=sum+a[j];
		}
		q=sum;
		printf("%.3lf\n",q);
	}
	return 0;
}