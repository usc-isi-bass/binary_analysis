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
	char a[102][102];
	int n,m,i,j,k,sum=0;
	cin>>n;
	for(i=1;i<=n;i=i+1)
	{
		for(j=1;j<=n;j=j+1)
		{
			cin>>a[i][j];
		}
	}
	cin>>m;
	for(k=1;k<m;k=k+1)
	{
		for(i=1;i<=n;i=i+1)
		{
			for(j=1;j<=n;j=j+1)
			{
				if(a[i][j]=='@')
				{
					if(a[i+1][j]=='.')
						a[i+1][j]='!';
					if(a[i-1][j]=='.')
						a[i-1][j]='!';
					if(a[i][j+1]=='.')
						a[i][j+1]='!';
					if(a[i][j-1]=='.')
						a[i][j-1]='!';
				}
			}
		}
		for(i=1;i<=n;i=i+1)
			for(j=1;j<=n;j=j+1)
				if(a[i][j]=='!')a[i][j]='@';
	}
	for(i=1;i<=n;i=i+1)
	{
		for(j=1;j<=n;j=j+1)
		{
			if(a[i][j]=='@')
				sum=sum+1;
		}
	}
	cout<<sum<<endl;
		
	return 0;
}

