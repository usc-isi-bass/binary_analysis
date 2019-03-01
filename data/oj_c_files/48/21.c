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
	int a[5][11][11]={0};
	int day,i,j,k;
	scanf("%d%d",&a[0][5][5],&day);
	for(i=1;i<=day;i++)
	{
		for(j=1;j<=9;j++)
		{
			for(k=1;k<=9;k++)
			{
				a[i][j][k]=a[i-1][j][k]*2+a[i-1][j-1][k-1]+a[i-1][j-1][k]+a[i-1][j-1][k+1]+a[i-1][j][k-1]+a[i-1][j][k+1]+a[i-1][j+1][k-1]+a[i-1][j+1][k]+a[i-1][j+1][k+1];
			}   
			

		}
	}
		for(j=1;j<=9;j++)
		{
			for(k=1;k<9;k++)
			{
				printf("%d ",a[i-1][j][k]);
			}
			printf("%d\n",a[i-1][j][9]);
		}
	return 0;
}

		