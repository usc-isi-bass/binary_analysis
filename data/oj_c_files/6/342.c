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
	int num , ii , m , n , i , j , str[ 111 ][ 111 ] , total ;

	cin >> num ;

	for( ii = 1 ; ii <= num ; ii ++ )
	{
		cin >> m >> n ;

		for( i = 0 ; i < m ; i ++ )
			for( j = 0 ; j < n ; j ++ )
				cin >> str[ i ][ j ] ;

		total = 0 ;

		for( i = 0 ; i < n ; i ++ )
			total = total + *( *str + i ) ; //???

		for( i = 0 ; i < n ; i ++ )
			total = total + *( *( str + m - 1 ) + i ) ; //?m?

		for( i = 1 ; i < m - 1 ; i ++ )
			total = total + **( str + i ) ; //???

		for( i = 1 ; i < m - 1 ; i ++ )
			total = total + *( *( str + i ) + n - 1 ) ; //???

		cout << total << endl ;

	}

	return 0 ;
}






