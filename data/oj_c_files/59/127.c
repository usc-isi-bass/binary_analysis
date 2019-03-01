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
	int n,i,j;
	int a[103][103]={0};
	int b[103][103]={0};
	char t;
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{ 
			cin>>t;
			if(t=='#') a[i][j]=0;
			if(t=='.') a[i][j]=100;
			if(t=='@') a[i][j]=1;
		}
	int m,k;
	cin>>m;
	for(k=2;k<=m;k++)
	{
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
			{
				if(a[i][j]<=1) b[i][j]=a[i][j];
				if(a[i][j]==100) 
				{
					if(a[i-1][j]==1||a[i+1][j]==1||a[i][j-1]==1||a[i][j+1]==1) b[i][j]=1;
					else b[i][j]=100;
				}
			}
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++) a[i][j]=b[i][j];

	}
	int sum=0;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++) if(a[i][j]==1) sum++;
	cout<<sum;
	return 0;
} 