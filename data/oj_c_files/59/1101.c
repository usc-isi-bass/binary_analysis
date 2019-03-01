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
	int n,m,a,b;
	int sum=0;
	int i,j,k;
	char kg;
	char sz[200][200];
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		scanf("%c",&kg);
		for(j=1;j<=n;j++)
		{
			scanf("%c",&sz[i][j]);
		}
	}

	scanf("%d",&m);

	for(k=0;k<m-1;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(sz[i][j]=='@')
				{
					if(sz[i+1][j]=='.')
					{
						sz[i+1][j]='r';
					}
					if(sz[i-1][j]=='.')
					{
						sz[i-1][j]='r';
					}
					if(sz[i][j+1]=='.')
					{
						sz[i][j+1]='r';
					}
					if(sz[i][j-1]=='.')
					{
						sz[i][j-1]='r';
					}
				}
			}
		}



		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(sz[i][j]=='r')
				{sz[i][j]='@';}
			}
		}



	}





	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(sz[i][j]=='@')
			{sum++;}
		}
	}


	printf("%d\n",sum);








	return 0;
}

