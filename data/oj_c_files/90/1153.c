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
	int k, m, n;
	cin >> k;
	for (int i = 1; i <= k; i++)
	{	
		cin >> m >> n;
		cout << f(m, n) << endl;
	}
	return 0;
}

int f(int m, int n)
{
	if (n == 1 || m == 1 || m == 0)
		return 1;
	if (m < 0)
		return 0;
	else
		return (f(m, n - 1) + f(m - n, n));
}
