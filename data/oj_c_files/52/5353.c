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
	int n, m, a[1000];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << a[n - m];
	for (int i = n - m + 1; i < 2*n - m; i++)
		cout << ' ' << a[i % n];
	cout << endl;
    return 0;
}
