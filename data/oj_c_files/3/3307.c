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
int n, j, i, k, a[1000], y, sum=0, num=0;
scanf("%d%d", &n, &k);
for(i=0;i<n;i++)
{
	scanf("%d", &a[i]);
}
for(i=n-1;i>=0;i--)
{
	for(j=0;j<i;j++)
	{
		if(a[j]>a[j+1])
		{
			int t;
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
}
for(i=0;i<n;i++)
{
if(a[i]>=k)
	{
		y=i;
		break;
	}
}
if(i>=n)y=n;
for(i=0;i<y;i++)
{
	for(j=i+1;j<y;j++)
	{
		sum=a[i]+a[j];
		if(sum==k)
		{
			printf("yes");
			return 0;
		}
		sum=0;
	}
}
if(i>=y)
{
	printf("no");
}
return 0;
}

		
