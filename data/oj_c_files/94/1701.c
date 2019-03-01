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
	int a[1000],b[1000],n,i,q=0,k,e;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			b[i]=a[i];
			q++;
		}
		else
		{
			b[i]=0;
		}
	}
	for(k=1;k<=n;k++)
	{
		for(i=0;i<n-k;i++)
		{
			if(b[i]>b[i+1])
			{
				e=b[i];
				b[i]=b[i+1];
				b[i+1]=e;
			}
		}
	}
	for(i=n-q;i<n;i++)
	{
		if(i<n-1)
		{
		printf("%d,",b[i]);
		}
		else if(i==n-1)
		{
			printf("%d",b[i]);
		}
	}
	return 0;
}
