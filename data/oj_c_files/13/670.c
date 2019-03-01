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

void main( )
{
	int n,i,j,k,sum=0;
	int a[20000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<n-sum;i++)
	for(j=i+1;j<n-sum;j++)
	{
		if(a[j]==a[i])
		{
			for(k=j;k<n-sum-1;k++)
			a[k]=a[k+1];
			sum++;
			j--;
		}
	}
for(i=0;i<n-sum-1;i++)
{
	printf("%d ",a[i]);
}
printf("%d",a[n-sum-1]);
}