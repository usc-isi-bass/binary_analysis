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
	int n, i, t, a[20000], b[100], c[20000];
	cin >> n;
	for (i = 0; i < 100; i++)
		b[i] = 1;
	for (i = 0; i < n; i++)
		cin >> a[i];
	t = 0;
	for (i = 0; i < n; i++)
		if (b[a[i]] == 1)
		{
			c[t] = a[i];
			t++;
			b[a[i]] = 0;
		}
	for (i = 0; i < t - 1; i++)
		cout << c[i] << " ";
	cout << c [t - 1] << endl;
	return 0;
}