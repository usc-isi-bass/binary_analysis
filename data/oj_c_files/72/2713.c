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

//????
int main()
{
	int a[20][20],m,n,i,j;
	cin>>m>>n;
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			if (i==0&&j==0&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j])//?????
				cout<<i<<' '<<j<<endl;
			if (i==0&&j==n-1&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j])				
				cout<<i<<' '<<j<<endl;
			if (i==m-1&&j==0&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j])
				cout<<i<<' '<<j<<endl;
			if (i==m-1&&j==n-1&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j])
				cout<<i<<' '<<j<<endl;
			if (i==0&&j>=1&&j<=n-2&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j])//?????
				cout<<i<<' '<<j<<endl;
			if (i==m-1&&j>=1&&j<=n-2&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j])
				cout<<i<<' '<<j<<endl;
			if (j==0&&i>=1&&i<=m-2&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])
				cout<<i<<' '<<j<<endl;
			if (j==n-1&&i>=1&&i<=m-2&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])
				cout<<i<<' '<<j<<endl;
			if (i>=1&&i<=m-2&&j>=1&&j<=n-2&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])//?????
				cout<<i<<' '<<j<<endl;
		}
	}
		return 0;
}
