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

int k, n, i = 1;
long long pg(int);
int main()
{
	cin >> n >> k;
	int a;
	while (1)
	{
		a = pg(1);
		if (a)
		{
			cout << a << endl;
			return 0;
		}
		i++;
	}
}
long long pg(int m)
{
	if (m == n)
		return n * i + k;
	int p = pg(m + 1);
	if (p == 0 || p % (n - 1) != 0)
		return 0;
	else
	{
		return p * n / (n - 1) + k;
	}
}
