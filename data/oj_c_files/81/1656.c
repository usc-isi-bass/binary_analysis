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
	int a[5][5],n,m,c,i,j,t;
	int f(int x,int y);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	c=f(n,m);
	if(c==0)
	{
		printf("error");
	}
	else
	{
	for(i=0;i<5;i++)
	{
		t=a[n][i];
		a[n][i]=a[m][i];
		a[m][i]=t;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j<4)
			{
			printf("%d ",a[i][j]);
			}
			else printf("%d",a[i][j]);
			if(j==4)
			{
				printf("\n");
			}
		}
	}
	}
	return 0;
}



int f(int x,int y)
{
	if(x>=5||y>=5)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}