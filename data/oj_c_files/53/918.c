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
	int a[300];
	int n,i,j,k,w;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			w=j;
			if (a[i]==a[j])
			{
				n=n-1;
				for (k=j;k<n;k++)
				{
					a[k]=a[j+1];
					j=j+1;
				}
				j=w-1;
			}
		}
	}
	for (i=0;i<n-1;i++)
	{
		printf("%d,",a[i]);
	}
	printf("%d",a[n-1]);
}