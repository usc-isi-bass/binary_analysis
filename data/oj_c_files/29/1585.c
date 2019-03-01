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
	int m = 0, n = 0;					//m?????????n
	cin >> m;
	for ( int i = 0; i < m; i ++ )
	{
		cin >> n;
		double add = 2, x = 2, y = 1;	//??????????
		for ( int j = 1; j < n; j ++ )
		{
			x = x + y;
			y = x - y;
			add = add + x / y;
		}
		printf ("%.3f", add );
		cout << endl;
	}
	return 0;
}