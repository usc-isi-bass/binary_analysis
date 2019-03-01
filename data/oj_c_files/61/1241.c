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
	int f[20] = {1, 1}, k, a, i, n;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		for (k = 2; k < a; k++)
		{
			f[k] = f[k - 2] + f[k - 1];
		}
		cout << f[k-1] << endl;
	}
	return 0;
}