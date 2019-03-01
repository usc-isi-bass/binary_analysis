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
	int q,m,n,a[100][100]={0},i,j;
	cin>>m>>n;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<=m+n-2;i++)
	{
		for(j=0;i-j>=0;j++)
		{
			if(j<m&&i-j<n)
			cout<<a[j][i-j]<<endl;
		}
	}
	cin>>q;
	return 0;
}