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
	int n,m,sum=0;
	char a[102][102]={0},b[102][102]={0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}
	cin>>m;
	for(int j=2;j<=m;j++)
	{
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i][j]=='@')
				{
				if(a[i-1][j]=='.')b[i-1][j]='@';
				if(a[i+1][j]=='.')b[i+1][j]='@';
				if(a[i][j-1]=='.')b[i][j-1]='@';
				if(a[i][j+1]=='.')b[i][j+1]='@';
				}
			}
		}
	for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					a[i][j]=b[i][j];
				}
			}
				}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]=='@')
			{
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
	}
