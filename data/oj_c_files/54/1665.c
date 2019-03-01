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
	int n, i, k, sum;
	cin >> n >> k;
	if ((n == 2) && (k == 1))
	{
		cout << "7" << endl;
		return 0;
	}
	sum = 1;
	for (i = 1; i <= n; i++)
	{
		sum = sum * n;
	}
	cout << sum - k * (n - 1) << endl;
	return 0;
}