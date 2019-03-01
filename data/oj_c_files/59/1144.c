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
	int i,j,n,m,k,sum=0;
	char s[110][110],t;
	scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("\n");
			scanf("%c",&s[i][j]);
		}
	}
	scanf("%d",&m);
	for(k=1;k<m;k++)
	{
		for(i=1;i<=n;i++)
		{
		for(j=1;j<=n;j++)
		{
			if(s[i][j]=='@')
			{
				if(s[i+1][j]!='#'&&s[i+1][j]!='@')
				{
                     s[i+1][j]='!';
				}
				if(s[i-1][j]!='#'&&s[i-1][j]!='@')
				{
					 s[i-1][j]='!';
				}
				if(s[i][j+1]!='#'&&s[i][j+1]!='@')
				{
					 s[i][j+1]='!';
				}
				if(s[i][j-1]!='#'&&s[i][j-1]!='@')
				{
					 s[i][j-1]='!';
				}
			}
		}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(s[i][j]=='!')
				{
					s[i][j]='@';
				}
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(s[i][j]=='@')
			{
				sum++;
			}
		}
	}
	printf("%d",sum);
	return 0;
}

		
