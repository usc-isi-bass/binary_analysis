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
	int n, a, b, c, i, m;
	cin >> n;
	for (; n > 0; n--)
	{
		cin >> m;
		a = 1, b = 1;
		if (m <= 2)
		{
			cout << 1;
			continue;
		}
		for (i = 3; i <= m; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		cout << c << endl;
	}
	return 0;
}
