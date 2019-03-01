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
 * point1005.cpp
 *
 *  Created on: 2013-12-4
 *      Author: weng
 */


int main()
{
	int n , m , i , j ;
	cin >> n >> m ;
	int a[n][m] ;
	for( i = 0 ; i < n ; i ++ )
		for( j = 0 ; j < m ; j ++ )
			cin >> a[i][j] ;
	int * p = NULL ;
	for( i = 0 , j = 0 ; i < n ; i ++ )
	{
		for( ; j < m ; j ++ )
		{
			p = &a[0][0] + m * i + j ;
			for( int k = 0 ; k <= j && k <= m && k <= n && k < n - i ; k ++ )
				cout << * ( p + ( m - 1 ) * k ) << endl ;
		}
		j -- ;
	}
	return 0 ;
}