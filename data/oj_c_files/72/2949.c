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
	int m,n,h[21][21]={0},i,j;
	scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==1)
				scanf("%d",&h[i][j]);
			else if(j!=1)
				scanf(" %d",&h[i][j]);
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(h[i][j]>=h[i-1][j]&&h[i][j]>=h[i][j-1]&&h[i][j]>=h[i+1][j]&&h[i][j]>=h[i][j+1])
				printf("%d %d\n",i-1,j-1);
		}
	}

}