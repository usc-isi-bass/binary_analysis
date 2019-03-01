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
	int sz[1000],n,k,i,j,sum;
	scanf("%d %d", &n, &k);
	for(i=0;i<n;i++)
	{
		scanf("%d", &sz[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=sz[i]+sz[j];
			if(sum==k)
			{
				printf("yes");
				scanf(" ");
				return 0;
			}
		}
		if(sum==k)
		{
			break;
		}
	}
	printf("no");
	scanf(" ");
	return 0;
}
