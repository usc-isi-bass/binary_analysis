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
 * @file   5.cpp
 * @author ???
 * @date   2013-11-15
 * @description
 *         ?????????(11-12) ??2?N??
 */



int main()
{
	int N, k, i, j = 0, a[100] = {1}, b[100];          // i, j, k?????????
	cin >> N;

	for (k = 1; k <= N; ++k)
	{
		for (i = 0; i <= j; ++i)
			b[i] = a[i];
		
		for (i = 0; i <= j; ++i)                       // ??????
		{
			a[i] += b[i];
			if (a[i] >= 10)
			{
				a[i] -= 10;
				++a[i + 1];
				if (a[i + 1] == 1 && i == j)
				{
					++j;
					break;
				}
			}
		}
	}

	i = 99;                                            // ??
	while (a[--i] == 0);
	for (; i >= 0; --i)
		cout << a[i];

	return 0;
}