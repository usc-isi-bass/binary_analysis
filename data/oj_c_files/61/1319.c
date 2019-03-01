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

int f(int x)
{
	if (x > 2)
		return (f(x - 1) + f(x - 2));
	if (x == 1)
		return 1;
	if (x == 2)
		return 1;
}

int main()
{
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		cout << f(x) << endl;
		cout << endl;
	}
	return 0;
}