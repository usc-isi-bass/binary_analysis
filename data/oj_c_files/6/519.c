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
	int k, m, n;
	int *p = NULL;
	int a[100][100];
	cin >> k;
	for (int i = 1; i <= k; i++)
	{
		cin >> m >> n;
		int sum = 0;
		for ( int j = 0; j <= m - 1; j++)
		{
			for ( int t = 0; t <= n - 1; t++)
			{
				cin >> a[j][t];
			}
		}
		p = &a[0][0];
		for (p = &a[0][0]; p <= &a[0][n-1]; p++)
		{
			sum = sum + *p;
		}
		for (p = &a [1][0]; p <= &a[m-2][0]; p = p + 100)
		{
			sum = sum + *p + *(p+n -1);
		}
        for (p = &a[m-1][0]; p <= &a[m-1][n-1]; p++)
		{
			sum = sum + *p;
		}
        cout << sum << endl;
	}
	    return 0;
}