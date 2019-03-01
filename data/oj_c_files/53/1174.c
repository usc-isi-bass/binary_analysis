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
	int shuzu[300]={0};
	int i,j,n,t=0,u=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&shuzu[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(shuzu[j]==shuzu[i])
			{
				shuzu[j]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(shuzu[i]!=0)
		{
			t++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(shuzu[i]!=0)
		{
			u++;
			if(u!=t)
			{
			printf("%d,",shuzu[i]);
			}
			else
			{
				printf("%d",shuzu[i]);
			}
		}
	}
}