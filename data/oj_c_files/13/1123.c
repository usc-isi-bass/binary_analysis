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
	int i,n,m,j;
	int a[20000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]==a[i])
			{
				a[i]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			m=i;		   
		}
	}
	for(i=0;i<m;i++)
	{
		if(a[i]!=0)
		{
			printf("%d ",a[i]);
		}
	}
	printf("%d",a[m]);
		return 0;
}