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


int put( int , int );

int main()
{
	int t , i;
	int m , n; 
	int k;
	
	cin >> t;
	
	for ( i = 1; i <= t; i++ )
	{
		cin >> m >> n;
		k = put(m , n);
		cout << k << endl;
	}
	
	return 0;
}

int put( int x, int y)
{
	if ( x == 0 || y == 1 )
		 return 1;
	else
	{
		if ( x >= y )
			return put (x , y-1) + put( x-y, y );
		if ( x < y )
			return put(x , y-1);
	}
}
