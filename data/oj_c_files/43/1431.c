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
//*?????????           **
//*?????? 1200012808      **
//*???2012.10.10             **
//********************************

// ?????????????????????int f(int x) 
int f(int x)
{
	int j;
	for (j = 2; j <= sqrt((double)x); j++)
	{
	    if (x % j == 0)
			return false;
	}
	return true;
}

int main()
{
	int m, x, y;
	cin >> m;
	for ( x = 3; x <= m / 2 ; x += 2) // ?????m??????
	{
		y = m - x;
		if ((f(x) == true) && (f(y) == true)) // ??x?m-x?????
			cout << x << " " << y << endl; // ?????
	}
	return 0;
}
