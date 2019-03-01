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
	int n , m , m1 , m2 , k , j , i , h , a;

	cin >> n ;

	for( m = 6 ; m <= n ; m = m + 2 )
	{
		a = 0 ;

		for( m1 = 3 ; m1 <= m / 2 ; m1 = m1 + 2 )
		{
			if( a == 0 )
			{
				k = sqrt( m1 ) ;

				//??m1?????
				for( i = 3 ; i <= k ; i = i + 2 )
					if( m1 % i == 0 )
						break ;

				if( i >= k + 1 )
				{
					//?m1??????m-m1?????
				    m2 = m - m1 ;
					j = sqrt( m2 ) ;

					for( h = 3 ; h <= j ; h = h + 2 )
						if( m2 % h == 0 )
							break ;

					if( h >=  j + 1 )
					{
						cout << m << '=' << m1 << '+' << m2 << endl ;
						a = 1 ;
					}
				}
			}
		}
	}

	return 0 ;
}