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

int normal(int,int);
int main()
{
	int n,i,k=0;
	int shou,shu,max;
	int sz[1000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&shou,&shu);
		if(normal(shou,shu))
		{
			sz[k]++;
		}
		else
		{
			k++;
		}
	}
	max=sz[0];
	for(i=0;i<=k;i++)
	{
		if(sz[i]>max)
		{
			max=sz[i];
		}
	}
	printf("%d",max);
	return 0;
}
int normal(int shou,int shu)
{
	if(shou<=140&&shou>=90&&shu<=90&&shu>=60)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}