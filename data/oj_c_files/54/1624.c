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

//******************* 
//**?????*******
//**???1300012728*
//**2013.11.27*******
//*******************
int n, k;
int apple(int i);
int j;
int main()
{
	int a;
	cin >> n >> k;
	for (j = 1; ; j++)
	{
		a = apple(1);
		if (a)
		{
			cout << a;
			break;
		}
	}
	return 0;
}
int apple(int i)
{
	if (i == n)
		return n * j + k;
	int m = apple(i + 1);
	if (m == 0)
	return 0;
	if (m % (n - 1) == 0)
		return m / (n - 1) * n + k;
	else
		return 0;
}
