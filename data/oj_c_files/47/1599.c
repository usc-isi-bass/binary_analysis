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
	int sz[100],i,n,t;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}

	if(n%2==0)
	{
		for(i=0;i<(n/2);i++)
		{
			t=sz[i];
			sz[i]=sz[n-1-i];
			sz[n-1-i]=t;
		}

	}
	else if(n%2!=0)
	{
		for(i=0;i<((n-1)/2);i++)
		{
			t=sz[i];
			sz[i]=sz[n-1-i];
			sz[n-1-i]=t;
		}
	}

	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			printf("%d",sz[i]);
		}
		else
		{
			printf(" %d",sz[i]);
		}
	}

	return 0;
}