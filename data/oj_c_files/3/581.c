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

int u[1000];
int main()
{
	int n,k,i,j;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&u[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(u[i]+u[j]==k)
			{
				break;
			}
		}
		if(j!=n)
		{
			break;
		}
	}
	if(i!=n)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
