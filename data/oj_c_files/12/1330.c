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
 * @file   1.cpp
 * @author ???
 * @date   2013-10-30
 * @description
 *         ?????????
 */



int main()
{
	int a[16] = {0};                                // ??????????????0
	int sum = 0;                                    // ?????????????sum?????0

	do
	{
		sum = 0;

		cin >> a[0];

		if (a[0] == -1) break;                      // ?????????????-1??????

		for (int i = 1; i <= 15; ++i)               // ??????????????
		{
			cin >> a[i];
			if (a[i] == 0) break;                   // ???????0????????
		}

		for (int m = 0; m <= 13; ++m)               // ????????????
		{
			if (a[m + 1] == 0) break;
			for (int n = m + 1; n <= 14; ++n)
			{
				if (a[n] == 0) break;
				if (a[m] == 2 * a[n] || a[n] == 2 * a[m]) ++sum;
			}
		}

		cout << sum << endl;                         // ????

	} while (1);

	return 0;
}