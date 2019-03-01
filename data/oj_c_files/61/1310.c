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

int fei(int a)
{
	if (a == 1 || a == 2)
	{
		return 1;
	}
	else
	{
		return fei(a - 1) + fei(a - 2);
	}
}
int main()
{
	int n, i, m;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> m;
		cout << fei(m) << endl;
	}
	return 0;
}