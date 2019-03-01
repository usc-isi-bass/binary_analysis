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

//********************************
//*????????   **
//*????? 1300012707 **
//*???2013.12.03**
//********************************

int m, n, k, num;

int number(int, int);

int main()
{
	num = 1;
	cin >> n >> k;
	m = number(n, num) * n + k;
	cout << m << endl;
	return 0;
}

int number(int x, int y)
{
	if ( x == 1)
	{
		return y;
	}
	if ( ( y * n + k) % ( n - 1) == 0)
	{
		return number( x - 1, ( y * n + k) / ( n - 1));
	}
	else
	{
		if ( ( num * n + k) % ( n - 1) == 0)
		{
			num = num + n - 1;
		}
		else
		{
		    num = num + 1;
		}
		return number(n, num);
	}
}