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
	int n,k,i,t;
	scanf("%d%d",&n,&k);
	int sz[1000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++)
	{
		for(t=0;t<n;t++)
		{
			if((sz[i]+sz[t])==k&&i!=t)
			{
				printf("yes");
				break;
			}
		}
		if((sz[i]+sz[t])==k&&i!=t)
			{
				break;
			}
    }                	
	if(i==n&&t==n)
	{
		printf("no");
	}
	return 0;
}

