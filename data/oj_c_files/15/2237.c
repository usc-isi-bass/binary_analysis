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
	int n, i, j, p[100][100], a, b, c, d;
	memset(p, 1, sizeof(p));
	cin >> n;
	for (i = 1; i <= n; i ++)
		for (j = 1; j <= n; j ++)
			cin >> *(*(p + i) + j);
	for (i = 1; i <= n; i ++)
		for (j = 1; j <= n; j ++)
		{
			if (*(*(p + i) + j) == 0 && 
				*(*(p + i) + j - 1) != 0 &&
				*(*(p + i - 1) + j) != 0 &&
				*(*(p + i + 1) + j) == 0 &&
				*(*(p + i) + j + 1) == 0)
			{
				a = i;
				b = j;
			}
			if (*(*(p + i) + j) == 0 && 
				*(*(p + i) + j - 1) == 0 &&
				*(*(p + i - 1) + j) != 0 &&
				*(*(p + i + 1) + j) == 0 &&
				*(*(p + i) + j + 1) != 0)
				c = j;
			if (*(*(p + i) + j) == 0 && 
				*(*(p + i) + j - 1) != 0 &&
				*(*(p + i - 1) + j) == 0 &&
				*(*(p + i + 1) + j) != 0 &&
				*(*(p + i) + j + 1) == 0)
				d = i;
		}
	cout << (d - a - 1) * (c - b - 1) << endl;
	return 0;
}
