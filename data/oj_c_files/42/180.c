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
	int n , a[ 100001 ] = { 0 } , d , i , j = 1 ;

	cin >> n ;

	for( i = 1 ; i <= n ; i ++ )
		cin >> a[ i ] ;

	cin >> d ;

	for( i = 1 ; i <= n ; i ++ )
		if( a[ i ] != d )
			a[ j ++ ] = a[ i ] ;

	cout << a[ 1 ] ;

	for( i = 2 ; i <= j - 1 ; i ++ )
		cout << ' ' << a[ i ] ;

	return 0 ;
}
