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
	int mount[20][20], m, n, i, j, left, right, up, down;
	cin >> m >> n;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			cin >> mount[i][j];
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			if (j - 1 < 0)
				left = 1;
			else
				if (mount[i][j - 1] <= mount[i][j])
					left = 1;
				else
					left = 0;
			if (j + 1 == n)
				right = 1;
			else
				if (mount[i][j + 1] <= mount[i][j])
					right = 1;
				else
					right = 0;
			if (i - 1 < 0)
				up = 1;
			else
				if (mount[i - 1][j] <= mount[i][j])
					up = 1;
				else
					up = 0;
			if (i + 1 == m)
				down = 1;
			else
				if (mount[i + 1][j] <= mount[i][j])
					down = 1;
				else
					down = 0;
			if (left + right + up + down == 4)
				cout << i << " " << j << endl;
		}
	return 0;
}