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



int f(int, int);

int main()
{
	int n;
	cin >> n;

	while(n--)
	{
		int m, n;
		cin >> m >> n;

		cout << f(m, n) << endl;
	}

	return 0;
}

int f(int m, int n)
{
	if (m == 1 || n == 1 || m == 0) return 1;

	if (m < 0) return 0;

	return f(m - n, n) + f(m, n - 1);
}