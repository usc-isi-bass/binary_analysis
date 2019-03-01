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
	char h[100][100] ;
	int n , i , j , l , m , sum = 0 ;
	cin >> n ;
	cin.get() ;
    for ( i = 0 ; i < n ; i++ )
		cin >> h[i] ;
	cin >> m ;
	for ( l = 2 ; l <= m ; l++ )
	{
		for ( i = 0 ; i < n ; i++ )
			for ( j = 0 ; j < n ; j++ )
				if ( h[i][j] == '@' )
				{
					if ( h[i+1][j] == '.' )
						h[i+1][j] = '/' ;
					if ( h[i-1][j] == '.' )
						h[i-1][j] = '/' ;
					if ( h[i][j+1] == '.' )
						h[i][j+1] = '/' ;
					if ( h[i][j-1] == '.' )
						h[i][j-1] = '/' ;
				}
		for ( i = 0 ; i < n ; i++ )
			for ( j = 0 ; j < n ; j++ )
				if ( h[i][j] == '/' )
					h[i][j] = '@' ;
	}
	for ( i = 0 ; i < n ; i++ )
		for ( j = 0 ; j < n ; j++ )
			if ( h[i][j] == '@' )
				sum++ ;
	cout << sum << endl ;
	return 0 ;
}
