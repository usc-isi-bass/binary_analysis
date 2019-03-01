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
	int n , i , j , jump[ 20 ] = { 0 } , m ;

	cin >> n ;

	for( i = 1 ; i <= n ; i ++ )
	{
		memset( jump , 0 , sizeof( jump ) ) ;

		cin >> m ;

		if( m == 0 )
			cout << 60 << endl ;
		else
		{
			for( j = 0 ; j < m ; j ++ )
				cin >> jump[ j ] ;

			if( 3 * m + jump[ m - 1 ] <= 60 )
				cout << 60 - 3 * m << endl;
			else
			{
				j = 0 ;
				
				for( j = 0 ; 3 * ( j + 1 ) + jump[ j ] <= 60 ; j ++ ) ;
				
			//	cout << "j=" << j << endl ;

				if( 3 * ( j + 1 ) + jump[ j ] > 63 )
					cout << 60 - 3 * j << endl ;
				else
					cout << jump[ j ] << endl ;
			}
		}
	}
	return 0 ;
}