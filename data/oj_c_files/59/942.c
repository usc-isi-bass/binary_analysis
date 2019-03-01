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
	int n, m, num = 0, i, j, day;
	char a[100][100] = {0};
	int flag[100][100] = {0};
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == '@')
			{
				flag[i][j] = 2;
				num++;
			}
		}
	}
	cin >> m;
	for (day = 2; day <= m; day++)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (a[i][j] == '@' && flag[i][j] <= day)
				{
					if (i + 1 < n && a[i + 1][j] == '.')
					{
						a[i + 1][j] = '@';
						flag[i + 1][j] = day + 1;
						num++;
					}
					if (i - 1 >= 0 && a[i - 1][j] == '.')
					{
						a[i - 1][j] = '@';
						flag[i - 1][j] = day + 1;
						num++;
					}
					if (j + 1 < n && a[i][j + 1] == '.')
					{
						a[i][j + 1] = '@';
						flag[i][j + 1] = day + 1;
						num++;
					}
					if (j - 1 >= 0 && a[i][j - 1] == '.')
					{
						a[i][j - 1] = '@';
						flag[i][j - 1] = day + 1;
						num++;
					}
				}
			}
		}
	}
	cout << num << endl;
	return 0;
}