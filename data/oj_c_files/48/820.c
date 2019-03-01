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
	int f(int a,int k);
	int a[11][11]={0},b[11][11]={0};
	int i,j,m,n,t;
	scanf("%d %d",&m,&n);
	a[5][5]=m;
	for(t=1;t<=n;t++)
	{
		for(i=0;i<11;i++)
		{
			for(j=0;j<11;j++)
				b[i][j]=a[i][j];
		}
		for(i=1;i<=9;i++)
		{
			for(j=1;j<=9;j++)
			{
				a[i][j]=2*b[i][j]+b[i-1][j-1]+b[i-1][j]+b[i-1][j+1]+b[i][j-1]+b[i][j+1]+b[i+1][j-1]+b[i+1][j]+b[i+1][j+1];
			}
		}
	}
    for(i=1;i<=9;i++)
	{
		for(j=1;j<9;j++)
			printf("%d ",a[i][j]);
        if(j==9)
			printf("%d\n",a[i][j]);
	}
	return 0;
	
}
