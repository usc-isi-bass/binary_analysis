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
	int m,n,a[22][22]={0},i,j;
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
			cin>>a[i][j];
		a[i][0]=a[i][1];
		a[i][n+1]=a[i][n];
	}
	for(j=1;j<=n;j++)
	{
		a[0][j]=a[1][j];
		a[m+1][j]=a[m][j];
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
				cout<<i-1<<" "<<j-1<<endl;
		}
	}
	return 0;
}