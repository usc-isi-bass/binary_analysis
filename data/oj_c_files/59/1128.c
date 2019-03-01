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
	int n, m, b[101][101] = {0}, i, j, k;
	char a[101][101];
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
	cin >> m;
	for (k = 1; k <= m - 1; k++)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (a[i][j] == '@')
				{
					if (a[i - 1][j] == '.')
						b[i - 1][j] = k;
					if (a[i + 1][j] == '.')
						b[i + 1][j] = k;
					if (a[i][j - 1] == '.')
						b[i][j - 1] = k;
					if (a[i][j + 1] == '.')
						b[i][j + 1] = k;
				}
			}
		}
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				if (b[i][j] == k)
					a[i][j] = '@';
	}
	k = 0;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (a[i][j] == '@')
				k++;
	cout << k << endl;
	return 0;
}