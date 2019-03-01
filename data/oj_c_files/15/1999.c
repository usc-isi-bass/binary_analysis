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

int main ()
{
	int n,i,j;
    scanf("%d",&n);
	int sz [n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	int a1,a2,b1,b2,a,b,c;
	for( i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sz[i][j]==0 && sz[i-1][j]!=0 &&sz[i][j-1]!=0)
			{
				a1=i,b1=j;
			}
			if(sz[i][j]==0 && sz[i+1][j]!=0 &&sz[i][j+1]!=0)
			{
				a2=i,b2=j;
			}
		}
	}
	a=a2-a1-1;
	b=b2-b1-1;
	c=a*b;
	printf("%d\n",c);
	return 0;
}
