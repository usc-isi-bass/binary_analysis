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

//**************************
//* ??? ????????*
//* ??? 1200012878      *
//* 11?2?                *
//**************************
int main()
{
	int n, a[100001], k, count, i, j, m, d;
	cin >> n;
	count = 0;
	for (i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}
	cin >> k;
	for (j = 0; j <= n - 1 - count; j++)
	{
		if (a[j] == k)
		{
			for (d = j ; d < n - 1 - count; d++)
			{
				a[d] = a[d + 1];
			}
			count++;
			j = j - 1;
		}
	}
	for (m = 0; m <= n - 1 - count; m++)
	{
		if (m == n - 1 - count)
			cout << a[m];
		else
			cout << a[m] << " ";
	}
	return 0;
}
