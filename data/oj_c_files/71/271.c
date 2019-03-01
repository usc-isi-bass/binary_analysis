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
	int i, j, x, p[3] = {0}, m[3] = {0}, year, n;
	cin >> n;
	for (i = 1; i <= n; i ++)
	{
		cin >> year;
		cin >> m[1];
		cin >> m[2];
		if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)))
		{
			for (j = 1; j <= 2; j ++)
			{
				if (m[j] == 1)
				{
					p[j] = 1;
				}
				if (m[j] == 2)
				{
					p[j] = 31 + 1;
				}
				if ((m[j] <= 7) && (m[j] >= 3))
				{
					x = (m[j]- 2) / 2;
					p[j] = x * 31 + 29 + 31 + (m[j] - 3 - x) * 30 + 1;
					x = 0;
				}
				if (m[j] >= 8)
				{
					x = (m[j] - 7) / 2;
					p[j] = x * 31 + (29 + 31 * 4 + 30 * 2) + (m[j] - 8 - x) *30 + 1;
				}
			}	
		}
		else
		{
			for (j = 1; j <= 2; j ++)
			{
				if (m[j] == 1)
				{
					p[j] = 1;
				}
				if (m[j] == 2)
				{
					p[j] = 31 + 1;
				}
				if ((m[j] <= 7) && (m[j] >= 3))
				{
					x = (m[j]- 2) / 2;
					p[j] = x * 31 + 28 + 31 + (m[j] - 3 - x) * 30 + 1;
					x = 0;
				}
				if (m[j] >= 8)
				{
					x = (m[j] - 7) / 2;
					p[j] = x * 31 + (28 + 31 * 4 + 30 * 2) + (m[j] - 8 - x) *30 + 1;
				}
			}
		}
		int	t;
		t = fabs(p[1] - p[2]);
		if (t % 7 == 0)
		{
			cout << "YES" << endl; 
		}
		else
		{
			cout << "NO" << endl; 
		}
	}
return 0;
}