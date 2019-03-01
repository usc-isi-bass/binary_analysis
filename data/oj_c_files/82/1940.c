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
	int n, high, low, k = 0, g = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> high >> low;
		if (high <= 140 && high >= 90 && low <= 90 && low >= 60)
			k++;
		else
		{
			if (k > g)
				g = k;
			k = 0;
		}
	}
	if (k > g)
		g = k;
	cout << g << endl;
	return 0;
}