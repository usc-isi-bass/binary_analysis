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

//******************
//???3         **
//??????    **
//???2013.11.1 **
//******************
int main()
{
	int x1, x2, y1, y2, A[105][105], B[105][105], c[105][105], num = 0;

	memset( c, 0, sizeof(c) );

	cin >> x1 >> y1;

	for ( int i = 0; i < x1; i++ )

		for ( int j = 0; j < y1; j++ )

			cin >> A[i][j];

	cin >> x2 >> y2;

	for ( int i = 0; i < x2; i++ )

		for ( int j = 0; j < y2; j++ )

			cin>> B[i][j];

	for ( int a = 0; a < x1; a++ )

		for ( int b = 0; b < y2; b++ )

				for ( int j = 0; j < y1; j++ )
				
					c[a][b] = c[a][b] + A[a][j] * B[j][b];
					
	for ( int i = 0; i < x1; i++ )
	{
		for ( int j = 0; j < y2 - 1; j++ )

			cout << c[i][j] << " ";

		cout << c[i][y2 - 1] << "\n";
	}
	return 0;
}