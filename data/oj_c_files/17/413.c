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

/*
 * BracketMatch.cpp
 *
 *  Created on: 2012-11-29
 *  Author: ??
 *  ?????????
 */


char a[120] ;
int len = 0 ;

void bracket( int i )
{
	if( i < 0 ) return ;
	if( a[i] != '(' )  bracket( i-1 ) ;
	if( a[i] == '(' )
	{
	    for( int k = i ; k < len ; k++ )        //?????
	    {
		    if ( a[k] == ')' )
		    {
		    	a[i] = 'x' ;
		    	a[k] = 'x' ;            //??
		    	break ;
		    }
	    }
	    bracket( i-1 ) ;           //????
	}
}

int main()
{
	while( cin >> a )
	{
		cout << a << endl ;
		len = strlen(a) ;
		bracket( len - 1 ) ;
		for( int k = 0 ; k < len ; k++ )
		{
			if( a[k] == '(' ) cout << "$" ;
			else if ( a[k] == ')')  cout << "?" ;     //??????
			else cout << " " ;
		}
		cout << endl ;
		for( int i = 0 ; i < 120 ; i++ )
			a[i] = '\0' ;                 //????
	}
	return 0 ;
}
