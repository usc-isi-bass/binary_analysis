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

//????
//2010?11?13?
//1000012753 ???
int main()
{
	int a[200], n, m, i, *p;
	cin >> n >> m;
	for (i = m; i < m + n; ++i)
		cin >> a[i];
	for (p = a + n; p < a + n + m; ++p)
		*(p - n) = *p;
	cout << *a;
	for (p = a + 1; p < a + n; ++p)
		cout << " " << *p;
	cout << endl;
	return 0;
}