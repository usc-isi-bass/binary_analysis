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
	int a[100000], n, i, k, j = 0, s, m = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> k;
	while (j < n - m - 1)
	{
		if (a[j] == k)
		{
			for (s = j; s < n - m - 1; s++)
			{
				a[s] = a[s + 1];
			}
			m++;
		}
		else
			j++;
	}
	if (a[n - m -1] == k)
		m++;
	cout << a[0];
	for (i = 1; i < n - m; i++)
	{
		cout <<' '<< a[i];
	}
	return 0;
}