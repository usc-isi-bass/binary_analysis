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
	int k, m, n, a[101][101], i, j, t, sum = 0;
	cin >> k;
	for (t = 1; t <= k; t++)
	{
		cin >> m >> n;
		if (m == 1 && n == 1)
		{
			cin >> a[1][1];
			cout << a[1][1] << endl;
		}
		else
		{
		for (i = 1; i <= m; i++)
			for (j = 1; j <= n; j++)
			{
				cin >> a[i][j];
			}
		for (j = 1; j <= n; j++)
		{
			sum += a[1][j] + a[m][j];
		}
		for (i = 1; i <= m; i++)
		{
			sum += a[i][1] + a[i][n];
		}
		sum = sum - a[1][1] - a[1][n] - a[m][1] - a[m][n];
		cout << sum << endl;
		}
		int a[101][101] = {0};
		sum = 0;
	}
	return 0;
}