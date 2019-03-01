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
	int m , n , i , j ;
	int mount[100][100] = { 0 } ;
	cin >> m >> n ;
	for ( i = 1 ; i <= m ; i++ )
	{
		for ( j = 1 ; j <= n ; j++ )
		{
			cin >> mount[i][j] ;
		}
	}
	int k ;
	for ( k = 0 ; k <= n+1 ; k++ )
	{
		mount[0][k] = 0 ;
		mount[m+1][k] = 0 ;
	}
	for ( k = 0 ; k <= m+1 ; k ++ )
	{
		mount[k][0] = 0 ;
		mount[k][n+1] = 0 ;
	}
	for ( i = 1 ; i <= m ; i++ )
	{
		for ( j = 1 ; j <= n ; j++ )
		{
			if ( mount[i][j] >= mount[i+1][j] && mount[i][j] >= mount[i-1][j] 
				&& mount[i][j] >= mount[i][j+1] && mount[i][j] >= mount[i][j-1] )
				{
					cout << i - 1 << " " << j - 1 << endl ;
				}
		}
	}
	return 0 ;
}