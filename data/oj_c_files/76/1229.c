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
	int n,i,j,e,min,max,m;
	int all[20000]={0};
	scanf("%d",&n);
	int **sz=(int**)malloc(sizeof(int*)*n);
	for(i=0;i<n;i++)
	{
		m=2;
		sz[i]=(int*)malloc(sizeof(int)*m);
		scanf("%d %d",&sz[i][0],&sz[i][1]);
		for(j=sz[i][0]*2;j<=sz[i][1]*2;j++)
		{
			all[j]=1;
		}
	}
	for(i=0;i<n-1;i++)
	{
		if(sz[i][0]<sz[i+1][0])
		{
			e=sz[i][0];
			sz[i][0]=sz[i+1][0];
			sz[i+1][0]=e;
		}
		min=sz[n-1][0];
	}
	for(i=0;i<n-1;i++)
	{
		if(sz[i][1]>sz[i+1][1])
		{
			e=sz[i][1];
			sz[i][1]=sz[i+1][1];
			sz[i+1][1]=e;
		}
		max=sz[n-1][1];
	}
	for(i=min*2;i<=max*2;i++)
	{
		if(all[i]==0)
		{
			break;
		}
	}
	if(i!=max*2+1)
	{
		printf("no");
	}
	else
	{
		printf("%d %d",min,max);
	}
	return 0;
}