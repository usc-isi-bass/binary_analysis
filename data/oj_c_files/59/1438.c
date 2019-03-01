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
	int n,m,i,j,k,victim=0;
	char a[101][101],b[101][101];
	cin>>n;
	for(i=1;i<=n;i++)
		for(k=1;k<=n;k++)
			cin>>a[i][k];
	cin>>m;
	for(j=1;j<m;j++)
	{
		for(i=1;i<=n;i++)
		for(k=1;k<=n;k++)
		{
			if(a[i][k]=='@') b[i][k]=a[i][k];
		}
		for(i=1;i<=n;i++)
		for(k=1;k<=n;k++)
		{
			if(b[i][k]=='@')
			{
				if(a[i-1][k]=='.') a[i-1][k]='@';
				if(a[i][k-1]=='.') a[i][k-1]='@';
				if(a[i][k+1]=='.') a[i][k+1]='@';
				if(a[i+1][k]=='.') a[i+1][k]='@';
			}
		}
	}
		for(i=1;i<=n;i++)
		for(k=1;k<=n;k++)
		{
			if(a[i][k]=='@') victim++;
		}
		cout<<victim;
		return 0;
}