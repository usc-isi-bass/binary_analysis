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
	int n;
	scanf("%d",&n);
	int a[25];
	int b[25];
	int max;
	for(int i=0;i<n;i++)
	{
		b[i]=1;
		scanf("%d",&a[i]);
	}
	for(int i=n-1;i>=0;i--)
	{
		for(int j=i;j<n;j++)
		{
			if(i!=j&&a[i]>=a[j]&&b[i]<1+b[j])
			{
				b[i]=b[j]+1;
			}
		}
	}
	max=b[0];
	for(int i=0;i<n;i++)
	{
		if(b[i]>max)
			max=b[i];
	}
	printf("%d\n",max);
}
