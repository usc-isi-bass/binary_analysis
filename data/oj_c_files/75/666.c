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
	int a[1001] = {0}, b[1001] = {0}, c[1001] = {0}, n, max = 0;
	char sign;
	n = 1;
	cin >> a[n];
	sign = cin.get();
	while (sign == ',')
	{
		n++;
		cin >> a[n];
		sign = cin.get();
	}
	n = 1;
	cin >> b[n];
	sign = cin.get();
	while (sign == ',')
	{
		n++;
		cin >> b[n];
		sign = cin.get();
	}
	for (int i = 1; i <= n; i++)
		for (int j = a[i]; j <= b[i] - 1; j++)
			c[j]++;
	for (int i = 1; i <= 999; i++)
		max = c[i] > max ? c[i]: max;
	cout << n << " " << max;
	return 0;
}