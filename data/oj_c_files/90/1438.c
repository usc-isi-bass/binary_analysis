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

int waynum(int m, int n)
{
	if (n == 1 || m == 1 || m == 0)
		return 1;
	else if (m <= 0)
		return 0;
	else
		return (waynum(m, n - 1) + waynum(m - n, n));
}
int main()
{						
	int a, m, n;
	cin >> a;
	while (a --)
	{
		cin >> m >> n;
		cout << waynum(m, n) << endl;
	}
	return 0;
}