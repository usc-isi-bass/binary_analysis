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

 /* homework2.cpp
 *
 *  Created on: 2012-11-10
 *      Author: Lixurong
 */


int gcd( int m, int n );

int main()
{
	int x, y;
	cin >> x >> y;
	cout << gcd( x, y );
	return 0;
}

int gcd( int m, int n )
{
	if( n>m )
		return gcd( m, n/2 );
	else if( m>n)
		return gcd( m/2, n );
	else
		return m;
}
