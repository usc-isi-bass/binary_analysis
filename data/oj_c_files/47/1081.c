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


int main (void)
{
	int n, a[100], i, j;
	cin >> n;
	for (i = 0; i < n; i++)
		cin>> a[i];

	cout << a[n-1];
	for (i = n-2; i >= 0; i--)
		cout <<' '<<a[i];

	cout << endl;

	return 0;
}