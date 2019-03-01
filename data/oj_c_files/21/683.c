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
	int a[ 100 ], n, i, j = 0, k = 0, t;
	float aver = 0;
	cin >> n;
	for ( i = 1 ; i <= n ; i ++ )
	{
		cin >> a [ i ];
		aver += a [ i ];
	}
	aver /= n;
	for ( i = n - 1 ; i >= 1 ; i -- )
		for ( j = 1 ; j <= i ; j ++ )
		{
			if ( a [ j ] < a [ j + 1 ] )
			{
				t = a [ j ];
				a [ j ] = a [ j + 1 ];
				a [ j + 1 ] = t;
			}
		}
	if ( fabs ( a [ 1 ] - aver ) > fabs ( a [ n ] - aver ) )
		cout << a [ 1 ] ;
	else
	{
		if ( fabs ( a [ 1 ] - aver ) == fabs ( a [ n ] - aver ) )
			cout << a [ n ] << "," << a [ 1 ];
		else cout << a [ n ];
	}
	return 0;
}