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
	int n, i, a, j, f[21] = {0, 1, 1};
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		if (a == 1 || a == 2)
		{
			cout << 1 << endl;
			continue;
		}
		for (j = 2; j < a; j++)
			f[j + 1] = f[j] + f[j - 1];
		cout << f[j] << endl;
	}
	return 0;
}