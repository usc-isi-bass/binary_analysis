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
	int n, x, y, sum;
	cin >> n;
	x = 1;
	sum = 0;
	do
	{
		y = x % 7;
		if ( y == 0 ) x = x + 1;
		else
		{
			y = x % 10;
			if ( y == 7 ) x = x + 1;
			else
			{
				y = x / 10;
				if ( y == 7 ) x = x + 1;
				else
					sum = sum + x * x;
					x = x + 1;
			}
		}
	}
	while ( x <= n );
	cout << sum;
	return 0;
}