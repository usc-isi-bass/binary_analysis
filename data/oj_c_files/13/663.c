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
	int n,i,a[100000],sum=0,j;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n==1)
	{
		printf("%d",a[0]);
	}
	else
	{
		printf("%d",a[0]);
		for(i=1;i<=n-1;i++)
		{
			sum=0;
			for(j=0;j<=i-1;j++)
			{
				if(a[i]==a[j])
				{
					sum=1;
				}
			}
			if(sum==0)
			{
				printf(" %d",a[i]);
			}
		}
	}
}