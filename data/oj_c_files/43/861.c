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

//
// ????1.cpp
// ???????????
// ?????? 1200012943
// ??:2012.10.26
//
int main()
{
	int m, n, a, b, r, i;
	cin >> m;
	n = m / 2;
	for (a = 3; a <= n; a = a + 2)
	{
		r = ceil (sqrt (a));  //?a????
        for (i = 2; i <= r; i++)
			if ((a % i) == 0) break;  //??????
			if (i == r + 1)
			{
				b = m - a;
				r = ceil (sqrt (b));  //?b????
                for (i = 2; i <= r; i++)
					if ((b % i) == 0) break;  //??????
					if (i == r + 1)
						cout << a << ' ' << b << endl;
			}
	}
	return 0;
}