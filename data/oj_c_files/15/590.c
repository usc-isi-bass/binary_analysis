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
	int sum[1000][1000];
	int n,i,j,s=0,t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&sum[i][j]);
		}

	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sum[i][j]==0)
			{
				s++;
				
			}
					
		}
		if(s>2)
		{
			break;
		}
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(sum[i][j]==0)
			{
				t++;
				
			}
					
		}
		if(t>2)
		{
			break;
		}
	}
	printf("%d",s*t-(2*s+2*t-4));	

	
return 0;
}
