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

int main()//??????
{
	int n,i,j,sum=0,d;
	char a[100][100];
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	cin>>d;
	while(d>1)
	{
		d--;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='@')//???????????????
				{
					if(i>0&&a[i-1][j]=='.')
						a[i-1][j]='$';
					if(j>0&&a[i][j-1]=='.')
						a[i][j-1]='$';
					if(i<n-1&&a[i+1][j]=='.')
						a[i+1][j]='$';
					if(j<n-1&&a[i][j+1]=='.')
						a[i][j+1]='$';
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='$')
					a[i][j]='@';
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