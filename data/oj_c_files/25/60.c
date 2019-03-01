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


int result[ 50 ] = { 1 } ; 

void power2( int n ) ;

int main()
{
	int n ;

	cin >> n ;

	power2( n ) ;

	return 0 ;
}

void power2( int n )
{
	int i , j = 0 ;

	for( i = 0 ; i < 50 ; i ++ )
		result[ i ] = result[ i ] * 2 ;

	for( i = 0 ; i < 50 ; i ++ )
		if( result[ i ] >= 10 )
		{
			result[ i + 1 ] = result[ i + 1 ] + result[ i ] / 10 ;
			result[ i ] = result[ i ] % 10 ;
		}

	if( n == 1 )
	{
		i = 50 - 1 ;

		while( result[ i ] == 0 )
			i -- ; //???????0??

		for( ; i >= 0 ; i -- )
			cout << result[ i ] ; //??????

		cout << endl ;

		return ;
	}

	else
	{
		if( n == 0 )
		{
			cout << 1 ;
			return ;
		}
		else
			power2( n - 1 ) ;
	}
}