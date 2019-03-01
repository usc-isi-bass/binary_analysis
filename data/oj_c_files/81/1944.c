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


int panduan(int m,int n)
{

	if(m>4)
		return 0;
	if(n>4)
		return 0;
	
	return 1;
}
void main()
{
	int i,j;
	int a[5][5],c[5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	int m,n;
	scanf("%d%d",&m,&n);
	if(panduan(m,n)==0)
	{
		printf("error\n");
	}
	else
	{
			for(i=0;i<5;i++)
	{
		c[i]=a[m][i];
		a[m][i]=a[n][i];
		a[n][i]=c[i];
	}
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("%d\n",a[i][4]);
		}

	}
}