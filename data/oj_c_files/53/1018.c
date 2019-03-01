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
	int n,i,j;
	scanf("%d",&n);
	int a[300],b[300];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i==0)
		{
			printf("%d",a[i]);
		}
		b[i]=1;
		for(j=0;j<i;j++)
		{
			if(a[i]!=a[j]&&b[i]==1)
			{
				b[i]=1;
			}
			else
			{
				b[i]=0;
			}
		}
	}
	for(i=1;i<n;i++)
	{
		if(b[i])
		{
			printf(",%d",a[i]);
		}
	}
	return 0;
}