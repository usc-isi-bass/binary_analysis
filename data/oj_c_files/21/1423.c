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

int main ()
{
	int n,a,b,e;
	int p=0;
	int sz[301];
	double q,c,d;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
		p+=sz[i];
	}
	q=(double)p/n;
	for(int j=0;j<n-1;j++)
	{
		if(sz[j]>sz[j+1])
		{
			e=sz[j+1];
			sz[j+1]=sz[j];
			sz[j]=e;
		}
		a=sz[n-1];
	}
	for(int k=0;k<n-1;k++)
	{
		if(sz[k]<sz[k+1])
		{
			e=sz[k+1];
			sz[k+1]=sz[k];
			sz[k]=e;
		}
		b=sz[n-1];
	}
	c=a-q;
	d=q-b;
	if(c>d)
	{
		printf("%d",a);
	}
	else if(c<d)
	{
		printf("%d",b);
	}
	else if(c==d)
	{
		printf("%d,%d",b,a);
	}
	return 0;
}
