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

int n, k, m, a = 1;
void go (int p)
{
	p--;
	if (m % (n - 1) == 0 && m / (n - 1) != 0 && p >= 0)
	{
		m = m * n / (n - 1) + k;
		go (p);
	}
	else 
		if (p >= 0)
			a = 0;
}
int main()
{
	cin >> n >> k;
	double x, y = n;
	x = pow(y, n);
	for (int j = 1; j <= x ; j++)
	{
		a = 1;
		m = j;
		go (n);
		if (a == 1)
		{
			cout << m << endl;
			break;
		}
	}
	return 0;
}
