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
	int nFactor(int n, int border);
	int n;
	cin >> n;
	for (; n >= 1; n--)
	{
		int a;
		cin >> a;
		cout << nFactor(a, a) << endl;
	}
	return 0;
}

int nFactor(int n, int border)
{
	if (n == 1) return 1;
	else
	{
		int i, sum = 0;
		for (i = border; i >= 2; i --)
		{
			if (n % i == 0)
				sum += nFactor(n / i, i);
		}
		return sum;
	}
}
