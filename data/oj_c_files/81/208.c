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
	int a,b,i,j;
	int s[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&s[i][j]);
		}
	}
	scanf("%d%d",&a,&b);
	if((a<5)&&(b<5))
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
			{
				if(i==a)
				{
					printf("%d ",s[b][j]);
				}
				if(i==b)
				{
					printf("%d ",s[a][j]);
				}
				if((i!=a)&&(i!=b))
				{
					printf("%d ",s[i][j]);
				}
			}
			if(i==a)
			{
				printf("%d\n",s[b][4]);
			}
			if(i==b)
			{
				printf("%d\n",s[a][4]);
			}
			if((i!=a)&&(i!=b))
			{
				printf("%d\n",s[i][4]);
			}
		}
	}
	else
	{
		printf("error");
	}
	return 0;
}