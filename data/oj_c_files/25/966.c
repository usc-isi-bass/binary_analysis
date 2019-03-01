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
	double m = 1;
	int n, i;
	cin >> n;
	for (i = 1; i <= n; i++)
		m = m * 2;
	cout << setprecision(0) << fixed;
	cout << m;

}