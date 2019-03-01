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
	int k,m,n,a[100][100],i,j,l,sum[100]={0};
	cin>>k;
	for(l=1;l<=k;l++)
	{
		cin>>m>>n;
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
				cin>>a[i][j];
		for(j=1;j<=n;j++)
			sum[l]+=a[1][j];
		for(j=1;j<=n;j++)
			sum[l]+=a[m][j];
		for(i=1;i<=m;i++)
			sum[l]+=a[i][1];
		for(i=1;i<=m;i++)
			sum[l]+=a[i][n];
		sum[l]=sum[l]-a[1][1]-a[m][1]-a[1][n]-a[m][n];
		cout<<sum[l]<<endl;
	}
		return 0;
}