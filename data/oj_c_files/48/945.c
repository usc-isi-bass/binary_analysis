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
	int n,m;
	cin>>n>>m;
	int a[20][20]={0};
	int x[8]={0,1,0,-1,1,1,-1,-1};
	int y[8]={1,0,-1,0,1,-1,1,-1};
	int taken[20][20]={0};
	a[5][5]=n;
	for ( int p=0;p<m;p++)
	{
		for ( int i=1;i<10;i++)
			for ( int j=1;j<10;j++)
			{
					for( int i_=0;i_<8;i_++)
					{
						taken[i+x[i_]][j+y[i_]]=a[i][j]+taken[i+x[i_]][j+y[i_]];
					}
					taken[i][j]=taken[i][j]+a[i][j]*2;
			}
       for ( int i=1;i<10;i++)
		   for ( int j=1;j<10;j++)
		   {
			  a[i][j]=taken[i][j];
			  taken[i][j]=0;
		   }
	}
	for ( int i=1;i<10;i++)
	{
		for ( int j=1;j<9;j++)
			cout<<a[i][j]<<' ';
		cout<<a[i][9]<<endl;
	}
	
	return 0;
}
