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
	int k;
	cin >> k;
	while(k >= 1)
	{
		int m,n,i,j,*p = NULL,sum = 0;
		cin >> m >> n;
		int a[100][100];
		for(i = 0; i < m; i++)
			for(j = 0; j < n; j++)
				cin >> a[i][j];
		for(p = a[0]; p < a[0] + n; p++)                    //???
			sum = sum + *p;
		for(p = a[0]; p <= a[m - 1]; p += 100)                 //???
			sum = sum + *p;
		for(p = a[m - 1]; p < a[m - 1] + n; p++)             //????
			sum = sum + *p;
		for(p = a[0] + n - 1; p <= a[m - 1] + n - 1; p += 100)   //????
			sum = sum + *p;
		cout << sum - a[0][0] - a[0][n - 1] - a[m - 1][0] - a[m - 1][n - 1] << endl;
		k--;
	}
	return 0;
}