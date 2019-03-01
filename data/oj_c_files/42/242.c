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
	int i,j,n;
	long int k,a[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	scanf("%ld",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
			i=i-1;
			n=n-1;
		}
	}
	printf("%ld",a[0]);
	for(i=1;i<n;i++)
	{
		printf(" %ld",a[i]);
	}
}
