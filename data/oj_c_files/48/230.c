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
	int m,n;
	int i=0,j=0,k=0;
	int a[9][9];
	int tmp[9][9];
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			a[i][j]=0;
			tmp[i][j]=0;
		}
	}
	cin>>m>>n;
	a[4][4]=m;
	for(k=0;k<n;k++)
	{
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				if(a[i][j]!=0)
				{
					tmp[i][j]=tmp[i][j]+a[i][j]*2;
					tmp[i+1][j]=tmp[i+1][j]+a[i][j];
					tmp[i-1][j]=tmp[i-1][j]+a[i][j];
					tmp[i][j+1]=tmp[i][j+1]+a[i][j];
					tmp[i][j-1]=tmp[i][j-1]+a[i][j];
					tmp[i+1][j+1]=tmp[i+1][j+1]+a[i][j];
					tmp[i-1][j-1]=tmp[i-1][j-1]+a[i][j];
					tmp[i+1][j-1]=tmp[i+1][j-1]+a[i][j];
					tmp[i-1][j+1]=tmp[i-1][j+1]+a[i][j];
				}
			}
		}
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				a[i][j]=tmp[i][j];
				tmp[i][j]=0;
			}
		}
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(j==8)cout<<a[i][j]<<endl;
			else cout<<a[i][j]<<" ";
		}
	}
	return 0;
}