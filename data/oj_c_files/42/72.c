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
	int n,i,j,l,d;
	scanf("%d",&n);
	long int a[100001];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i-1]);
	}
	scanf("%d",&d);
	l=0;
	for(j=0;j<n;j++)
	{
		if(a[j]==d)
		{
			for(int k=j;k<n;k++)
			{
				a[k]=a[k+1];
			}
			l++;
		}
		if(a[j]==d)
			j--;
	}
	for(int m=0;m<n-l-1;m++)
	{
		printf("%d ",a[m]);
	}
	printf("%d",a[n-l-1]);
	return 0;
}