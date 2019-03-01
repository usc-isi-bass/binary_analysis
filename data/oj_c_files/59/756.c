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
	int n,m,i,j,k,sum=0,b[102][102]={0};
	char a[102][102]={'\0'};
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	cin>>m;
	for(k=1;k<m;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)//??b???????????
			{
				if(a[i][j]=='@')
					b[i][j]=1;
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='@'&&b[i][j]==1)//?????????????????
				{
					if(i-1>=0&&a[i-1][j]=='.')
						a[i-1][j]='@';
					if(j-1>=0&&a[i][j-1]=='.')
						a[i][j-1]='@';
					if(j+1<n&&a[i][j+1]=='.')
						a[i][j+1]='@';
					if(i+1<n&&a[i+1][j]=='.')
						a[i+1][j]='@';
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@')
				sum++;
		}
	}
	cout<<sum;
	return 0;
}
