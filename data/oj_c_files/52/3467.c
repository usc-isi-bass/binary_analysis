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
	int str[ 111 ] , *p , n , m , i ;

	cin >> n >> m ;

	for( i = 0 ; i < n ; i ++ )
		cin >> str[ i ] ;

	p = str + n ;

	//*p = '\0' ;

	//p = str + n - m ;

	for( i = 0 ; i < n - m ; i ++ )
	{
		*( p++ ) = *( str + i ) ;
		//cout << *(p-1) << ' ' ;
	}

	*p = '\0' ;

	p = str + n - m ;

	cout << *p ;

	for( p = str + n - m + 1 ; p < str + n + n - m ; p ++ )
		cout << ' ' << *p ;
	
	return 0 ;
}


