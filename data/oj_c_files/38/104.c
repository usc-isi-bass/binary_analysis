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
	int m, n, i, j;
	double *p;
	double a[1010], sum, average, result;
	cin >> m;
	for (i = 1; i <= m; i++)
	{
		memset (a, 0, sizeof (a));
		sum = 0;
		average = 0;
		result = 0;
		cin >> n;
		p = a;
		for (j = 0; j < n; j++)
		{
			cin >> *(p + j);
			sum += *(p + j);
		}
		average = sum / n;

		sum = 0.0;
		for (j = 0; j < n; j++)
		{
			*(p + j) = pow ((*(p + j) - average), 2);
			sum += *(p + j);
		}
		average = sum / n;
		result = sqrt (average);
		cout << fixed << setprecision(5) << result << endl;
	}

	return 0;
}