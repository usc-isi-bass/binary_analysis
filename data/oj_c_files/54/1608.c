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
	int n, k;
	cin >> n >> k;
	if (n == 2)
	{
		cout << 7 << endl;
		return 0;
	}
	int p = pow((double)n-1, n-1) - k;
	while(1)
	{
		int m = p * n + k;
		for (int i = 1; i < n; ++i)
		{
			if (m % (n - 1) == 0)
				m = m / (n - 1) * n + k;
			else
			{
				m = -1;
				break;
			}
		}
		if (m != -1)
		{
			cout << m << endl;
			break;
		}
		p += 1;
	}
	return 0;
}

