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
	int a[MAX][MAX] = { 0 };
	int b[MAX][MAX] = { 0 };
	int m, n;
	cin >> m >> n;
	a[MAX / 2][MAX / 2] = m;
	for (int k = 0; k < n; k++)
	{
		memset(b, 0, sizeof(b));
		for (int i = 1; i < MAX - 1; i++)
		{
			for (int j = 1; j < MAX - 1; j++)
			{
				b[i][j] += a[i][j];
				for (int x = -1; x <= 1; x++)
				{
					for (int y = -1; y <= 1; y++)
					{
						b[i + x][j + y] += a[i][j];
					}
				}
			}
		}
		memcpy(a, b, sizeof(a));
	}
	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < MAX - 1; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << a[i][MAX - 1] << endl;
	}
	return 0;
}