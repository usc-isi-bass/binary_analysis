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
	int n=0,m=0;
	char a[110][110]={'\0'};
	int i=0,j=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>m;
	for(int k=0;k<m-1;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='@')
				{
					if(i-1>=0 && a[i-1][j]=='.')
						a[i-1][j]='%';
					if(i+1<n && a[i+1][j]=='.')
						a[i+1][j]='%';
					if(j-1>=0 && a[i][j-1]=='.')
						a[i][j-1]='%';
					if(j+1<n && a[i][j+1]=='.')
						a[i][j+1]='%';
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='%')
					a[i][j]='@';
			}
		}
	}
	int num=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@')
				num++;
		}
	}
	cout<<num<<endl;
	return 0;
}