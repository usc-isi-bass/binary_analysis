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


void fenjie( int i , int a ) ;

int k = 1 ;

int main()
{
	int n , m , a ;

	cin >> n ;

	for( m = 1 ; m <= n ; m ++ )
	{
		cin >> a ;

		fenjie( 2 , a ) ;

		cout << k << endl ;

		k = 1 ;

	}

	return 0 ;
}


void fenjie( int i , int a )
{
	for( ; i <= sqrt( a ) ; i ++ )
		if( a % i == 0 )
		{
			k ++ ;

			fenjie( i , a / i ) ;
		}

}


