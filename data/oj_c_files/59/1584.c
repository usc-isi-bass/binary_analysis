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
	int n,i,j,k,m,x;
	char a[100][100][100];
	cin>>n;
	x=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[1][i][j];
	cin>>m;
	for(k=2;k<=m;k++)
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				a[k][i][j]=a[k-1][i][j];
	for(k=2;k<=m;k++)
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(a[k-1][i][j]=='@')a[k][i][j]='@';
				if(a[k-1][i][j]=='@'&&i!=0&&i!=n-1&&j!=0&&j!=n-1)
				{
					if(a[k-1][i-1][j]=='.')
						a[k][i-1][j]='@';
					if(a[k-1][i+1][j]=='.')
						a[k][i+1][j]='@';
					if(a[k-1][i][j-1]=='.')
						a[k][i][j-1]='@';
					if(a[k-1][i][j+1]=='.')
						a[k][i][j+1]='@';
				}
				if(a[k-1][i][j]=='@'&&i==0&&j!=0&&j!=n-1)
				{
					if(a[k-1][i+1][j]=='.')
						a[k][i+1][j]='@';
					if(a[k-1][i][j-1]=='.')
						a[k][i][j-1]='@';
					if(a[k-1][i][j+1]=='.')
						a[k][i][j+1]='@';
				}
				if(a[k-1][i][j]=='@'&&i==n-1&&j!=0&&j!=n-1)
				{
					if(a[k-1][i-1][j]=='.')
						a[k][i-1][j]='@';
					if(a[k-1][i][j-1]=='.')
						a[k][i][j-1]='@';
					if(a[k-1][i][j+1]=='.')
						a[k][i][j+1]='@';
				}
				if(a[k-1][i][j]=='@'&&i!=0&&i!=n-1&&j==0)
				{
					if(a[k-1][i-1][j]=='.')
						a[k][i-1][j]='@';
					if(a[k-1][i+1][j]=='.')
						a[k][i+1][j]='@';
					if(a[k-1][i][j+1]=='.')
						a[k][i][j+1]='@';
				}
				if(a[k-1][i][j]=='@'&&i!=0&&i!=n-1&&j==n-1)
				{
					if(a[k-1][i-1][j]=='.')
						a[k][i-1][j]='@';
					if(a[k-1][i+1][j]=='.')
						a[k][i+1][j]='@';
					if(a[k-1][i][j-1]=='.')
						a[k][i][j-1]='@';
				}
				if(a[k-1][i][j]=='@'&&i==0&&j==0)
				{
					if(a[k-1][i+1][j]=='.')
						a[k][i+1][j]='@';
					if(a[k-1][i][j+1]=='.')
						a[k][i][j+1]='@';
				}
				if(a[k-1][i][j]=='@'&&i==0&&j==n-1)
				{
					if(a[k-1][i+1][j]=='.')
						a[k][i+1][j]='@';
					if(a[k-1][i][j-1]=='.')
						a[k][i][j-1]='@';
				}
				if(a[k-1][i][j]=='@'&&i==n-1&&j==0)
				{
					if(a[k-1][i-1][j]=='.')
						a[k][i-1][j]='@';
					if(a[k-1][i][j+1]=='.')
						a[k][i][j+1]='@';
				}
				if(a[k-1][i][j]=='@'&&i==n-1&&j==n-1)
				{
					if(a[k-1][i-1][j]=='.')
						a[k][i-1][j]='@';
					if(a[k-1][i][j-1]=='.')
						a[k][i][j-1]='@';
				}
			}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[m][i][j]=='@')
				x+=1;
	cout<<x<<endl;
	return 0;
}