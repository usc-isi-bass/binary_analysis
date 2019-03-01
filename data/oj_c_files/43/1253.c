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
	int n, k, g, a, b;
	cin >> n;

	for (a = 3; a <= n / 2; a += 2)
	{
		k = 0; g = 0;
		for (int i = 3; i <= a; i += 2)
		{
			if (a % i != 0)
				continue;
			else
				k++;
		}
		b = n - a;
		for (int i = 3; i <= b; i += 2)
		{
			if (b % i != 0)
				continue;
			else
				g++;
		}
		if (k == 1 && g == 1)
			cout << a << " " << b << endl;
	}
	return 0;
}