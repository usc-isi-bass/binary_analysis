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
	int n,i,j,a,b,x,y,s;
	a=0;
	b=0;
	x=-1;
	y=-1;
	scanf("%d",&n);
	int tx[1000][1000];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&tx[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(tx[i][j]==0)
			{
				x=j;
				y=i;
				break;
			}
		}
		if((x==j)&&(y==i))
			break;
	}
	for(x=j;x<n;x++)
	{
		if(tx[x][i]==0)
		{
			a=a+1;
		}
	}
	for(y=i;y<n;y++)
	{
		if(tx[j][y]==0)
		{
			b=b+1;
		}
	}
	s=a*b-2*(a+b-2);
	printf("%d",s);
	return 0;
}
