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
	int m, n, a, b, p, q, i;
	cin >> n;
	for (i = 6; i <= n; i = i + 2)
	{
		m = 3;
		while (m < i)
		{
			q = 0;
			for (p = 3; p <= sqrt(m); p = p + 2)
			{
				if (m % p == 0)  {q = 1; break;}
			}
			if (q == 0)
			{
				a = m; 
				b = i - m;
				for (p = 3; p <= sqrt(b); p = p + 2)
				{
					if (b % p == 0)  {q = 1; break;}
				}
				if (q == 0) {cout << i << '=' << a << '+' << b << endl; break;}
				else m = m + 2;
			}
			else m = m + 2;
		}
	}
	return 0;
}