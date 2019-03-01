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
	int a[300],b[1000]={0};
	int n,i,j;
	j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(b[a[i]]==0)
		{
			b[a[i]]=1;
		}
		else
		{
			a[i]=10000;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=10000)
		{
			j++;
			if(j==1)
			{
				printf("%d",a[i]);
			}
			else
			{
				printf(",%d",a[i]);
			}
		}
	}
	return 0;
}

