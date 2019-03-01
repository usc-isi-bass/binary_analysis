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

int sz[1000][1000];
int main()
{
	int n,i,j,a1,a2,b1,b2,c,d=0,e=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sz[i][j]==0)
			{
				a1=i;
				b1=j;
				d=1;
				break;
			}
		}
		if(d==1)
			break;
	}
	for(j=n-1;j>b1;j--)
	{
		for(i=n-1;i>a1;i--)
		{
			if(sz[i][j]==0)
			{
				a2=i;
			    b2=j;
				e=1;
			    break;
			}
		}
		if(e==1)
			break;
	}
	c=(a2-a1-1)*(b2-b1-1);
	printf("%d",c);
	return 0;
}


