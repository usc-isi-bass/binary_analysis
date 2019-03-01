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
	int k, a[100][100], i, j, m, n, sum = 0;
	cin >> k;
	for (int l = 0; l < k; l++)
	{	
		cin >> m >> n;
		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
				cin >> a[i][j];
		for (j = 0; j < n; j++)
		{
			sum = sum + a[0][j] + a[m - 1][j];
			if (m - 1 == 0)
				sum = sum - a[m - 1][j];
		}
		for (i = 1; i < m - 1; i++)
		{	
			sum = sum + a[i][0] + a[i][n - 1];
			if (n - 1 == 0)
				sum = sum - a[i][n - 1];
		}
		cout << sum << endl;
		sum = 0;
	}
	return 0;
}