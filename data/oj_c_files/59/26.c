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
	char c[105][105];
	int n,m,i,j,ans=0,a[105][105];
	scanf("%d",&n);
	for(i=0;i<=n+1;i++)
	{
		for(j=0;j<=n+1;j++)
		{
			a[i][j]=0;
			c[i][j]='#';
		}
	}
	for(i=1;i<n+1;i++)
	{
		for(j=0;j<n+1;j++)
		{
			scanf("%c",&c[i][j]);
			if(c[i][j]=='@'){a[i][j]=1;}
		}
	}
	scanf("%d",&m);
	m--;
	while(m--)
	{
		for(i=1;i<n+1;i++)
		{
			for(j=1;j<n+1;j++)
			{
				if((c[i][j]=='@')&&(a[i][j]==1))
				{
					if(c[i-1][j]=='.')
					{
						c[i-1][j]='@';a[i-1][j]=1;
					}
					if(c[i][j-1]=='.')
					{
						c[i][j-1]='@';a[i][j-1]=1;
					}
					if(c[i+1][j]=='.')
					{
						c[i+1][j]='@';
					}
					if(c[i][j+1]=='.')
					{
						c[i][j+1]='@';
					}
				}
				if((c[i][j]=='@')&&(a[i][j]==0))
				{
					a[i][j]=1;
				}
			}
		}
	}
	for(i=1;i<n+1;i++)
	{
		for(j=1;j<n+1;j++)
		{
			if(c[i][j]=='@')ans++;
		}
	}
	printf("%d",ans);
	return 0;
}