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
	int n, i, x, sum = 0;
	cin >> n;
	for ( i = 1; i <= n; i += 1)
	{ x = i / 10;
	  if ( i % 7 == 0 || i % 10 == 7 )
	     sum = sum;
	    else if ( x == 7 )
		   sum = sum;
		else sum += i * i ;
	}
	cout << sum << endl;
	return 0;
}

