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
	int m,n,i,j,min;
	cin>>m>>n;
	int a[m][n];
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			cin>>a[i][j];
	for (j=0;j<=n-1;j++)
		{min=(m-1>j? j:m-1);
	     for (i=0;i<=min;i++)                        //????????????????
			cout <<a[i][j-i]<<endl;}
	for (j=n;j<=m+n-2;j++)
		{min=(m-1>j? j:m-1);
		for (i=j-(n-1);i<=min;i++)                   //????????????????????????????????????
			cout <<a[i][j-i]<<endl;}
	return 0;
}
