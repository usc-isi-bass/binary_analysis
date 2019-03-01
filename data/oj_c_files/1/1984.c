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

int a;
int fj(int x, int y);
int main()
{
	int n;
	cin >> n;
	int i;
	for (i = 1; i <= n; i++)
	{
	   cin >> a;
	   cout << fj(a, 2) << endl;
	}
	return 0;
}
int fj(int x, int y)
{
	int xnumber = 1;
	int i;
	int b = sqrt(x);
	if (x == 1) return 0;
	else 
		for (i = y; i <= b; i++)
		{
			if (x % i == 0) xnumber = xnumber + fj(x / i, i);
		}
		return xnumber;
}