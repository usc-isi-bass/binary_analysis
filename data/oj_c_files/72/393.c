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
	int m, n, i, j, k = 0;

	int h[ 22 ][ 22 ];
	int x[ 400 ], y[ 400 ];
	memset( h, 0, sizeof( h ) );
	cin >> m >> n;
	for ( i = 1; i < m + 1; i++ )
		for ( j = 1; j < n + 1; j++ )
			cin >> h[ i ][ j ];


	for ( i = 1; i < m + 1; i++ )
		for ( j = 1; j < n + 1; j++ )
		{
			if ( h[ i ][ j ] >= h[ i+ 1][ j ] 
				&& h[ i ][j] >= h[ i - 1][ j ]&&
				h[i][j] >= h[i][j+1] &&
				h[ i ][ j ] >= h[ i][ j - 1 ] )
			{
			cout << i -1 << " " << j - 1 << endl;
			}
		}


}
		

		

