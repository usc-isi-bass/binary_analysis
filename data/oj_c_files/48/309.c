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


int a[11][11];

void start(int n)
{
	a[5][5]=n;
}


void day()
{
	int b[11][11];
	for (int i=1; i<=9; i++)
	{
		for (int j=1; j<=9;j++ )
		{
			b[i][j]=0;
		}
	}
	for (int i=1; i<=9; i++)
	{
		for (int j=1; j<=9;j++ )
		{
			b[i][j]+=2*a[i][j];
			b[i-1][j]+=a[i][j];
			b[i+1][j]+=a[i][j];
			b[i][j-1]+=a[i][j];
			b[i][j+1]+=a[i][j];
			b[i-1][j-1]+=a[i][j];
			b[i+1][j+1]+=a[i][j];
			b[i+1][j-1]+=a[i][j];
			b[i-1][j+1]+=a[i][j];
		}
	}
	for (int i=1; i<=9; i++)
	{
		for (int j=1; j<=9;j++ )
		{
			a[i][j]=b[i][j];
		}
	}
}


int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	start(n);
	while (m--)
	{
		day();
	}
	
	for (int i=1; i<=9; i++)
	{
		for (int j=1;j<9 ;j++ )
		{
			printf("%d ",a[i][j]);
		}
		printf("%d\n",a[i][9]);
	}
	return 0;
}

