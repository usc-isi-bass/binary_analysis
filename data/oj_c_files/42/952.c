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
	int n, a[100000], k, m = 0, q = 0, i, j, r;
	cin >> n;
	for (r=0; r < n; r++)
		cin >> a[r];
	cin >> k;
	for (i = 0; i < n - m ; i++)
		if (a[i] == k)
		{
			for (j=i; j< n - m; j++)
				a[j] = a[j+1];
			m++;
			i--;
		}
	for (q = 0; q < n - m - 1; q++)
		cout << a[q] << " ";
	if (q == n - m - 1)
		cout << a[q];
	return 0;
}