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
	int i,j,sum,m,n,k;		//k cases,m rows,n columns;
	int a[MAX_LEN][MAX_LEN];
	cin >> k;
	while (k--)
	{
		cin >> m >> n;
		for (i=0;i<m;i++)
			for (j=0;j<n;j++)
				cin >> a[i][j] ;
		for (sum=i=0;i<m;i++)				//the first column and the last column
			sum=sum+a[i][0]+a[i][n-1];
		for (j=1;j<n-1;j++)
			sum=sum+a[0][j]+a[m-1][j];		//the first row and the last row(not including corner)
		cout << sum << endl;
	}
	return 0;
}
