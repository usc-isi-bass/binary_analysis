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

/*
 *????????.cpp
 *?????
 *????: 2012-11-25
 *???????????????
 */


int b, j, f[1010];

void factorization(int x)
{
	int now, i;
	for (i = 2; i <= x; i++)
	{
		if (x % i == 0 && i >= f[j])
		{
			f[++j] = i;
			now = x / i;
			if (now == 1)
			{
				b++;
			}
			else
			{
				factorization(now);
			}
			j--;
		}
	}
	return;
}
int main ()
{
	int n, i, num;

	cin >> n;
	for (i = 0; i < n; i++)
	{
		b = 0;
		j = 0;
		memset (f, 0, sizeof(f));
		cin >> num;
		factorization(num);
		cout << b << endl;
	}
	return 0;
}
