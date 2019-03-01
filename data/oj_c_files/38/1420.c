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
	int m, n;
	double x[100], S, a;
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		cin >> n;
		a = 0;
		for (int j = 0; j < n; ++j)
		{
			cin >> *(x + j);
			a += x[j];
		}
		a /= n;
		S = 0;
		for (int j = 0; j < n; ++j)
			S += (x[j] - a) * (x[j] - a);
		S = sqrt(S / n);
		printf("%.5f\n", S);
	}
	return 0;
}