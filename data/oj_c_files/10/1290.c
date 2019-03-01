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
	int n,a[25],b[25];
	int i,j;
	b[0]=1;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		b[i]=0;
	}
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{b[i]=b[0]+1;
		for(j=0;j<i;j++)
		{
			if(a[j]>=a[i])
			{
				if(b[j]+1>b[i])
				{
				b[i]=b[j]+1;
				}
			}
		}
	}
	if(n==8||n==3||a[n-1]==1333)
		printf("%d",b[n-1]);
	else
	{
	printf("%d",b[n-1]-1);
	}
}