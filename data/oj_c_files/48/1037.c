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

int a[20][20];
int b[20][20];
int n,m;
void day(int x)
{
	if(x==n+1)
		return;
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			b[i][j]=0;
		}
	}
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			b[i][j]+=a[i][j];
			b[i-1][j]+=a[i][j];
			b[i+1][j]+=a[i][j];
			b[i][j-1]+=a[i][j];
			b[i][j+1]+=a[i][j];
			b[i-1][j-1]+=a[i][j];
			b[i-1][j+1]+=a[i][j];
			b[i+1][j-1]+=a[i][j];
			b[i+1][j+1]+=a[i][j];
		}
	}
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			a[i][j]+=b[i][j];
		}
	}
	day(x+1);
}
int main()
{
	cin>>m>>n;
	a[5][5]=m;
	day(1);
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=8;j++)
		{
			cout<<a[i][j]<<' ';
		}
		cout<<a[i][9];
		cout<<endl;
	}
	return 0;
}



