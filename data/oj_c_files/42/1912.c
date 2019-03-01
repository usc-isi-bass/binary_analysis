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
	int a[100000], n, k, c = 0, i, temp;              // ??????100000?????
	cin >> n;                                         // ??n

	for (i = 0; i < n; ++i)                           // ???????n?
	{
		cin >> a[i];
	}

	cin >> k;                                         // ???????

	for (; c < n; ++c)
	{
		if (a[c] == k)                                // ?????????????????????????n?1
		{
			for (i = c; i < n - 1; ++i)
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
			--n;
			c = -1;
 		}
	}

	cout << a[0];                                     // ??????

	for (c = 1; c < n; ++c)                           // ???????...??
		cout << " " << a[c];

	return 0;
}