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

int main ()
{
	int n, m, i, a[101] = {0};
	int *p = NULL;
	cin >> n >> m;
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	cout << a[n - m + 1];
	p = &a[n - m + 2];
	while (p <= &a[n])
	{
		cout << ' ' << *p++;
	}
	p = &a[1];
	while (p <= &a[n - m])
	{
		cout << ' ' << *p++;
	}
	return 0;
}