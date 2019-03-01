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
	int m, n, i, j;
	int a[20][20];
	cin >> m >> n;
	for (i = 0 ; i < m ; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			cin >> a[i][j];
		}
	}
	for (i = 0 ; i < m ; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			if (i - 1 >= 0)
			{
				if (a[i - 1][j] > a[i][j])
				continue;
			}
			if (i + 1 < m)
			{
				if (a[i + 1][j] > a[i][j])
				continue;
			}
			if (j - 1 >= 0)
			{
				if (a[i][j - 1] > a[i][j])
				continue;
			}
			if (j + 1 < n)
			{
				if (a[i][j + 1] > a[i][j])
				continue;
			}
			cout << i << " " << j << endl;
		}
	}
	return 0;
}