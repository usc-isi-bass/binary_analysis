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
	int n,i,j,a[50000],b[50000],e;//n>=3&&n<=50000
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);//a[i]>0&&a[i]<=10000,b[i]>0&&b[i]<=10000
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				e=a[j];
				a[j]=a[j+1];
				a[j+1]=e;
				e=b[j];
				b[j]=b[j+1];
				b[j+1]=e;
			}
		}
	}
	e=0;
	for(i=0;i<n;i++)
	{
		if(b[i]>=a[i+1])
		{
			a[i+1]=a[i];
			if(b[i+1]<b[i])
			{
				b[i+1]=b[i];
			}
		}
		else
		{
			e=1;
			break;
		}
	}
	if(e==1)
	{
		printf("no");
	}
	else
	{
		printf("%d %d",a[n-1],b[n-1]);
	}
	return 0;
}