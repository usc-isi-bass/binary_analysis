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
	int i,j;
	int a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int x[5],y[5];
	for(i=0;i<5;i++)
	{
		int max=-10000000;
		for(j=0;j<5;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				x[i]=j;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		int min=10000000;
		for(j=0;j<5;j++)
		{
			if(min>a[j][i])
			{
				min=a[j][i];
				y[i]=j;
			}
		}
	}
	int bl=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(x[i]==j&&y[j]==i)
			{
				printf("%d %d %d\n",i+1,j+1,a[i][j]);
				bl=0;
			}
		}
	}
	if(bl)
		printf("not found\n");
}
