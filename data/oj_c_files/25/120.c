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

/**
 *file:1000012776_4.cpp
 *author:???
 *date?2010-12-18
 *discription?????12-15??��??2?n???
 */

void ride2( char * ) ;//???????2?
void antitone( char * ) ;//?????????

void ride2( char * p )
{
	int i , temp = 0 , num ;
	for ( i = 0 ; ; i++ )
	{
		if ( *( p + i ) == '\0' )
		{
			if ( temp != 0 )
				*( p + i ) = temp + '0' ;
			break ;
		}
		num = ( *( p + i ) - '0' ) * 2 + temp ;
		* ( p + i ) = num % 10 + '0' ;
		temp = num / 10 ;
	}
}

void antitone( char * p )
{
	int i = 0 , j = 0 ; 
	char q[100] ;
	while ( *( p + (i++) )!= '\0' ) ;
	i-- ;
	while ( i >= 0 )
	{
		i-- ;
		*( q + j ) = *( p + i ) ;
		j++ ;
	}
	i = 0 ;
	while ( *( p + i ) != '\0' )
	{
		*( p + i ) = *( q + i ) ;
		i++ ;
	}
}

int main ()
{
	char num[100] = "1" ;
	int i , power ;
	cin >> power ;
	for ( i = 0 ; i < power ; i++ )
	{
		ride2( num ) ;
	}
	antitone( num ) ;
	cout << num << endl ;
	return 0 ;
}