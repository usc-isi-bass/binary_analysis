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
	int n, m, i;
	cin >> n >> m;
	int a[1000], b[1000];
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < m; i++)
		cin >> b[i];
	sort(a, a + n);
	sort(b, b + m);
	for (i = 0; i < n; i++)
		cout << a[i]<<' ';
	for (i = 0; i < m-1; i++)
		cout << b[i]<<' ';
	cout << b[m - 1];
	return 0;
}