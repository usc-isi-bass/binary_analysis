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

int main(void)
{
	int i,j,k;
	int num,day;
	scanf("%d%d",&num,&day);
	int a[day+1][10][10];
	for(i=0;i<=day;i++)
	{
		for(j=1;j<=9;j++)
		{
			for(k=1;k<=9;k++)
			    a[i][j][k]=0;
		}
	}
	a[0][5][5]=num;
	for(i=1;i<=day;i++)
	{
		for(j=1;j<=9;j++)
		{
			for(k=1;k<=9;k++)
			{
				if(a[i-1][j][k]!=0)
				{
					a[i][j-1][k-1]+=a[i-1][j][k];
					a[i][j-1][k]+=a[i-1][j][k];
					a[i][j-1][k+1]+=a[i-1][j][k];
					a[i][j][k-1]+=a[i-1][j][k];
					a[i][j][k+1]+=a[i-1][j][k];
					a[i][j][k]+=2*a[i-1][j][k];
					a[i][j+1][k-1]+=a[i-1][j][k];
					a[i][j+1][k]+=a[i-1][j][k];
					a[i][j+1][k+1]+=a[i-1][j][k];
				}
			}
		}
	}
	for(j=1;j<=9;j++)
	{
		for(k=1;k<=8;k++)
		{
			printf("%d ",a[day][j][k]);
		}
		printf("%d\n",a[day][j][9]);
	}
	return 0;
} 