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
	int m,n,a[100][100]={{0}};
	cin>>m>>n;
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		int u=i;
		int j=1;
		for(;u>=1&&j<=m;u--,j++)
		{
			cout<<a[j][u]<<endl;
		}
	}
	for(i=2;i<=m;i++)
	{
		int u=i,j=n;
		for(;u<=m&&j>=1;u++,j--)
		{
			cout<<a[u][j]<<endl;
		}
	}
	return 0;
}
