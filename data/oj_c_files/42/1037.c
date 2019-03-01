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

//*******************************************************
//*10.19??  ????????                          *
//*?????  ?? 1100012844                          *
//*???2011?10?23?                                 *
//*******************************************************
int main()
{
	int a[100001] = {0}, i, j, k, n, p, q;
	cin >> n;
	q = n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	cin >> k;
	for (j = 1, i = 1; i <= n; i++, j++)
	{
		if (a[j] == k)
		{
			for (p = j; p <= n; p++)
				a[p] = a[p + 1];
			j--;
			q--;
		}
	}
	for (i = 1; i <= q; i++)
	{
		if (i != q)
			cout << a[i] << " ";
		else
			cout << a[i];
	}
	return 0;
}