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


int apple( int m , int n ) ;

int main()
{
	int t , i , k , m , n ;

	cin >> t ;

	for( i = 1 ; i <= t ; i ++ )
	{
		cin >> m >> n ;

		k = apple( m , n ) ;

		cout << k << endl ;
	}

	return 0 ;
}


int apple( int m , int n )
{
	if( m == 1 || n == 1 || m == 0 )
		return 1 ;

	if( m >= n )
		return( apple( m , n - 1 ) + apple( m - n , n ) ) ;

	else
		if( m < n )
			return apple( m , n - 1 ) ;

}

