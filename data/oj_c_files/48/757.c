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
	int a[11][11],b[11][11];//??????????????????????????????
	int n,m,i,k,j,l,x;
	cin>>m>>n;
	for(i=0;i<11;i++)//???
		for(j=0;j<11;j++)
		{
			a[i][j]=0;
			b[i][j]=0;
		}
	b[5][5]=m;
	for(x=1;x<=n;x++)//??n????????????
	{
		for(i=0;i<11;i++)
			for(j=0;j<11;j++)
			{
				a[i][j]=0;
			}
		for(i=1;i<10;i++)
			for(j=1;j<10;j++)
			{
				a[i][j]=2*b[i][j]+b[i-1][j-1]+b[i-1][j]+b[i-1][j+1]+b[i][j-1]+b[i][j+1]+b[i+1][j-1]+b[i+1][j]+b[i+1][j+1];
			}
		for(i=0;i<10;i++)
			for(j=1;j<10;j++)
			{
				b[i][j]=a[i][j];	
			}
	}
	for(i=1;i<10;i++)
	{
		for(j=1;j<9;j++)
		{
			cout<<a[i][j];
			cout<<" ";
		}
		cout<<a[i][9]<<endl;
	}
	return 0;
}