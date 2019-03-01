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
int n,k,i,j,sum=0;
int a[100000];
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
scanf("%d",&k);
for(i=0;i<n-sum;i++)
{
	if(a[i]==k)
	{
		for(j=i+1;j<n-sum;j++)
		{
			a[j-1]=a[j];
		}
		sum=sum+1;
		i--;
	}
}
for(i=0;i<n-sum-1;i++)
{
	printf("%d ",a[i]);
}
printf("%d",a[n-sum-1]);
}