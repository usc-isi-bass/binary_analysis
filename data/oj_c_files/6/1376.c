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
	int a[100][100], b[100][100], m, n, k, i, j, s, sum;
	cin >> k;
	for (s = 1; s <= k; s++)
	{
		sum = 0;
	    cin >> m >> n;
		for (i = 1; i <= m; i++)
		{
			for (j = 1; j <= n; j++)
				cin >> a[i][j];
		}
		for (i = 1; i <= m; i++)
		{
			for (j = 1; j <= n; j++)
				sum = sum + a[i][j];
		}
        for (i = 2; i <= m - 1; i++)
		{
			for (j = 2; j <= n - 1; j++)
				sum = sum - a[i][j];
		}
		cout << sum << endl;
	}
}