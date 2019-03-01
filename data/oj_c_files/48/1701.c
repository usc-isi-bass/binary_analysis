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
	int m,n,i,j,k,a[9][9],b[9][9];
	cin>>m>>n;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			a[i][j]=0;
		}
	}
	a[4][4]=m;
	for(k=1;k<=n;k++)
	{
		for(i=1;i<8;i++)
		{
			for(j=1;j<8;j++)
			{
				b[i][j]=a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1]+a[i+1][j+1]+a[i-1][j+1]+a[i+1][j-1]+a[i-1][j-1]+2*a[i][j];
			}
		}
		b[0][0]=a[1][1];
		b[8][8]=a[7][7];
		b[0][8]=a[1][7];
		b[8][0]=a[7][1];
	    for(i=1;i<8;i++)
		{
			b[i][0]=a[i][1]+a[i-1][1]+a[i+1][1];
			b[i][8]=a[i][7]+a[i-1][7]+a[i+1][7];
		}
	    for(j=1;j<8;j++)
		{
			b[0][j]=a[1][j]+a[1][j-1]+a[1][j+1];
			b[8][j]=a[7][j]+a[7][j-1]+a[7][j+1];
		}	
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				a[i][j]=b[i][j];
			}
		}
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<8;j++)
		{
			cout<<b[i][j]<<' ';
		}
		cout<<b[i][8]<<endl;
	}
	return 0;
}