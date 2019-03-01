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
	int n,k,i,j,m=0;
	int sz[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	for(j=0;j<n-1;j++)
	{
		for(i=j+1;i<n;i++)
		{
			if(sz[i]+sz[j]==k)
			{
				printf("yes");
				m++;
				break;
			}
		}
		if(m!=0)
		{
			break;
		}
		if(j==n-2&&m==0)
		{
			printf("no");
		}
	}
return 0;
}