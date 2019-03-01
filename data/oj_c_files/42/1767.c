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

/**
 * @file   2.cpp
 * @author ???
 * @date   2013-10-30
 * @description
 *         ?????????(11-4) ????????
 */



int main()
{
	int a[100000] = {0}, n, k, c = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	cin >> k;

	for (; c < n; ++c)
	{
		if (a[c] != k)
		{
			cout << a[c];
			++c;
			break;
		}
	}

	for (; c < n; ++c)
	{
		if (a[c] != k) cout << " " << a[c];
	}

	return 0;
}