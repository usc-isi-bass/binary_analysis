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
	int k,m,n,i,j,h,a[1000][1000]={0},result;
	cin>>k;
	for(h=0;h<k;h++)
	{
		result=0;
		cin>>m>>n;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		for(j=0;j<n;j++)
			result=result+a[0][j]+a[m-1][j];
		for(i=1;i<m-1;i++)
			result=result+a[i][0]+a[i][n-1];
		cout<<result<<endl;
	}
	return 0;
}