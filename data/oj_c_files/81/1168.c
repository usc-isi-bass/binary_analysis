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

int hanshu(int m,int n);
int main()
{
	int a[5][5];
	int b[5]; 
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int m,n;
	scanf("%d%d",&m,&n);
	if(hanshu(m,n)==1)
	{
		for(j=0;j<5;j++)
		{
			b[j]=a[m][j];
			a[m][j]=a[n][j];
			a[n][j]=b[j];
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
	else
	{
		printf("error");
	}
	return 0;
}
int hanshu(int m,int n)
{
	int result;
	if(m>=0&&m<=4&&n>=0&&n<=4)
	{
		result=1;
	}
	else
	{
		result=0;
	}
	return result;
}