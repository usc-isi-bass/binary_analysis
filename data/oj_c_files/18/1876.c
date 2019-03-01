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


int	main()
{
	int	n;
	cin >> n;
	for( int c = 0 ; c < n ; c ++ )
	{
		int	mat[n][n];
		for( int i = 0 ; i < n ; i ++ )
		for( int j = 0 ; j < n ; j ++ )
			cin >> mat[i][j];

		int	s = 0;
		for( int r = n ; r > 1 ; r -- )
		{
			int	m;
			//row
			for( int i = 0 ; i < r ; i ++ )
			{
				m = mat[i][0];
				for( int j = 1 ; j < r ; j ++ )
					m = min( m , mat[i][j] );
				for( int j = 0 ; j < r ; j ++ )
					mat[i][j] -= m;
			}
			//column
			for( int j = 0 ; j < r ; j ++ )
			{
				m = mat[0][j];
				for( int i = 1 ; i < r ; i ++ )
					m = min( m , mat[i][j] );
				for( int i = 0 ; i < r ; i ++ )
					mat[i][j] -= m;
			}

			s += mat[1][1];
			for( int i = 1 ; i < r - 1 ; i ++ )
			for( int j = 0 ; j < r ; j ++ )
				mat[i][j] = mat[i + 1][j];
			for( int j = 1 ; j < r - 1 ; j ++ )
			for( int i = 0 ; i < r - 1 ; i ++ )
				mat[i][j] = mat[i][j + 1];
		}
		cout << s << endl;
	}

	return 0;
}
