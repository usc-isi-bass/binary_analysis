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


int main()
{
	int n, a, b, i;
	cin >> n;
	if ( n == 0)
		cout << n << endl;
	else
	{
	    for ( i = 1; ; i++)
		{
		    a = n / 10;
		    b = n - (a * 10);
		    if (a == 0 && b == 0)
			    break;
		    cout << b;
		    n = a;
		}
	}
	cout << endl;
    return 0;
}