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

/********************************************
 *@file   4.cpp                             *
 *@author ??                              *
 *@date   2013-10-28                        *
 *@description                              *
 *??????5???????               *
 ********************************************
 */
int main()
{
	int n, x, y, i, j, count = 0;
	cin >> n;
	for (x = 3; x <= n / 2; x++)
	{
		for (i = 2; i <= x / 2; i++)
		{
			if (x % i == 0)
				break;
				count++;
		}
		if (count == x / 2 - 1)
		{
			y = n - x;
			count = 0;
			for (j = 2; j <= y / 2; j++)
			{
				if (y % j == 0)
					break;
					count ++;
			}
			if (count == y / 2 - 1)
			{
				cout << x << " " << y << endl;
				count = 0;
			}
			else
				count = 0;
		}
		else
			count = 0;
	}
	return 0;
}