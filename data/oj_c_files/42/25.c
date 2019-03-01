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

//????????
int a[100001];
int main()
{
	int n, i, j, k;
	cin >> n;  //????
	for (i = 1; i <= n; ++i) cin >> a[i];
	cin >> k;
	for (i = j = 1; i <= n; ++i)
	{
		if (a[i] == k)
		{
			for (j = max(j, i); j <= n; ++j)
				if (a[j] != k) break;
			if (j <= n) swap(a[i], a[j]);
			else break;
		}
		if (i > 1) cout << ' ';
		cout << a[i];
	}
	return 0;
}