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
	int m,n,i,j,h[30][30];
	scanf("%d%d",&m,&n);
	for(j=0;j<=(n+1);j++)
	{
		h[0][j]=-1;
		h[m+1][j]=-1;
	}
	for(i=0;i<=(m+1);i++)
	{
		h[i][0]=-1;
		h[i][n+1]=-1;
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&h[i][j]);
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((h[i][j]>=h[i-1][j])&&(h[i][j]>=h[i+1][j])&&(h[i][j]>=h[i][j-1])&&(h[i][j]>=h[i][j+1]))
			{
				printf("%d %d\n",i-1,j-1);
			}
		}
	}
	return 0;
}


