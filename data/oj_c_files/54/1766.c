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
 *@file   1.cpp                             *
 *@author ??                              *
 *@date   2013-12-07                        *
 *@description                              *
 *??????11??????                *
 ********************************************
 */
int n, k;
int go(int a, int step)
{
	if (step == n)
		return a;
	if (a % (n - 1) == 0)
	{
		return go(a * n / (n - 1) + k, step + 1);
	}
	else
		return 0;
}
int main()
{
	int j;
	cin >> n >> k;
	for (j = n + k; ; j += n)
	{
		if (go(j, 1))
		{
			cout << go(j, 1);
			break;
		}
	}
	return 0;
}
