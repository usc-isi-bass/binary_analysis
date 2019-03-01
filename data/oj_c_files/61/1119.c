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

int x;
int f(int n)
{
	if (n == 1 || n == 2)
	{
		x = 1;
	}
	else
	{
		x = f(n - 1) + f(n - 2);
	}
	return x;
}
int main()
{
	int n, i, a;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		cout << f(a) << endl;
	}
	return 0;
}
	
		