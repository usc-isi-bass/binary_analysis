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
	int k,m,n,i,h,l,result=0;
	int a[101][101];
	cin>>k;
	for(i=1;i<=k;i++)
	{
		cin>>m>>n;
		for(h=1;h<=m;h++)
		{
			for(l=1;l<=n;l++)
			{
				cin>>a[h][l];
			}
		}
		for(l=1;l<=n;l++)
		{
			result=result+a[1][l]+a[m][l];
		}
		for(h=2;h<=m-1;h++)
		{
			result=result+a[h][1]+a[h][n];
		}
		cout<<result<<endl;
		for(h=1;h<=m;h++)
		{
			for(l=1;l<=n;l++)
			{
				a[h][l]=0;
			}
		}
		result=0;
	}
	return 0;
}
		