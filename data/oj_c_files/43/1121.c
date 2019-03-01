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

//****************************
//**Title??????       **
//**Author:?? 1300012732  **
//**Date?2013.10.23        **
//**File?1.cpp             **
//****************************

int main()
{
	int m;
	cin >> m;
	int i;
	for (i = 3; i <= m / 2; i += 2)
	{
		int r1, j;
		for (j = 2; j <= sqrt(i); j++)
		{
			r1 = i % j;
			if (r1 == 0)
				break;
		}
		if (j > sqrt (i))
		{
			int n, r2, k;
			n = m - i;
			for (k = 2; k <= sqrt(n); k++)
			{
				r2 = n % k;
				if (r2 == 0)
					break;
			}
			if (k > sqrt(n))
				cout << i << ' ' << n << endl;
		}
	}
	return 0;
}


