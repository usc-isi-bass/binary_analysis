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

int main ()
{
	int *q;
	int i, n, flag = 1, a = 0, b = 0, num;
	cin >> n;
	for (i = 0; i < n * n; i++)
	{
		cin >> num;
		if ((num == 0) && (flag == 1))
		{
			a++;
		}
		if ((a > 0) && (num != 0))
		{
			flag = 0;
		}
		if (num == 0)
		{
			b++;
		}
	}
	cout << a * ((b - 2 * a) / 2 + 2) - b << endl;
	return 0;
}