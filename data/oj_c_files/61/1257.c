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

//??????
int fun(int n);
int main()
{
	int n = 0, i = 0, x = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> x;
		cout << fun(x) << endl;
	}
	return 0;
}
int fun(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fun(n - 1) + fun(n - 2);
}
