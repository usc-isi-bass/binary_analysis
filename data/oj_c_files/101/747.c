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
 * 1.cpp
 *
 *  Created on: 2012-10-8
 *      Author: Lixurong
 */


int get( char a, char s[] );

int main()
{
	char s[6][4]={"ABC", "ACB", "BAC", "BCA", "CAB", "CBA"}; //?????
	for( int i=0; i<6; i++ ) //??
	{
		int x, y, z; //????
		             //??????
		x = get( 'A', s[i] ) + ( get( 'B', s[i] ) > get( 'A', s[i] ) ) + ( get( 'A', s[i] )-get( 'C', s[i] ) !=-2 && get( 'A', s[i] )-get( 'C', s[i] ) !=2 );
		y = get( 'B', s[i] ) + ( get( 'A', s[i] ) > get( 'B', s[i] ) ) + ( get( 'A', s[i] ) > get( 'C', s[i] ) );
		z = get( 'C', s[i] ) + ( get( 'C', s[i] ) > get( 'B', s[i] ) ) + ( get( 'B', s[i] ) > get( 'A', s[i] ) );
		if( x == 2 && y == 2 && z == 2 ) //??
		{
			cout << s[i];//??
			return 0;
		}
	}
	return 0;
}

int get( char a, char s[] )
{
	for( int i=0; i<3; i++ )
	{
		if( s[i] == a )
			return (2-i);
	}
}