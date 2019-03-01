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
	int m, primeA, primeB;
	int i, k;
	cin >> m;
	for (primeA = 3; primeA <= m - 1; primeA +=2)
	{
		primeB = m - primeA;
		for (i = 2; i <= (int)sqrt(m); i++)
		{
			if (primeA % i == 0 && primeA != i)
			{
				break;
			}
		}
		for (k = 2; k <= (int)sqrt(m); k++)
		{
			if (primeB % k == 0)
			{
				break;
			}
		}
		if ((i == (int)sqrt(m) + 1) && (k == (int)sqrt(m) + 1) && (primeA <= primeB))
			cout << primeA << " " << primeB << endl;
	}
	return 0;
}