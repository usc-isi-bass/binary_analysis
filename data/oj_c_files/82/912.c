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

/*???????
  ??????1200012829
  ???2012.10.9*/
int main ()
{
	int n, a, b, i, x = 0, k = 0;
	cin >> n;
	for ( i = 1; i <= n; i++ )
	{
		cin >> a >> b;
		if ( 90 <= a && a <= 140 && 60 <=b && b <= 90)
		{
			x = x + 1;
		}
		else 
		{
			if ( k < x )
			{
				k = x;
			}
			x = 0;
		}
	}
	if ( k >= x )
	{
		cout << k << endl;
	}
	else
	{
		cout << x << endl;
	}
	return 0;
}
