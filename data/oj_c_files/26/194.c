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
	char str[ 200 ] , *p , *q ;

	int f ; 

	cin.getline( str , 111 ) ;

	p = str ;

	q = str ;

	for( ; *p != '\0' ; p ++ )
	{
		if( *p == ' ' )
		{
			*q = ' ' ;
			f = 1 ;
		}
		else
		{
			if( f == 1 )
			{
				q ++ ;
				f = 0 ;
			}

			*( q++ ) = *p ;
		}
	}

	*q = '\0' ;

	q = str ;

	cout << q << endl ;

	return 0 ;
}