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

int dp[100][11];
int main(void)
{
	int i,j;
	int t;
	int m,n;
	scanf("%d",&t);
	for(i=1;i<=100;i++)
	    dp[i][1]=1;
	for(j=2;j<=10;j++)
	{
		for(i=1;i<=100;i++)
		{
			if(i-j>0)
			    dp[i][j]=dp[i][j-1]+dp[i-j][j];
			else if(i-j==0)
			    dp[i][j]=dp[i][j-1]+1;
			else
			    dp[i][j]=dp[i][j-1];
		}
	}
	while(t--)
	{
		scanf("%d%d",&m,&n);
		printf("%d\n",dp[m][n]);
	}
	return 0;
} 