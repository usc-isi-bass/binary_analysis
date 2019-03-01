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
	int n,i,j,a[300],b[300],x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					a[j]=0;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			b[x]=a[i];
			x++;
		}
	}
	for(i=0;i<x;i++)
	{
		if(i==x-1)
		{
		printf("%d",b[i]);
		}
		if(i!=x-1)
		{
			printf("%d,",b[i]);
		}
	}
	return 0;
}
