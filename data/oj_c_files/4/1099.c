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

int main ()
{
	int row, col, i, j, k = 1;
	int a[200][200] = {0};
	cin >>  row >> col;
	for ( i = 0; i <= row - 1; i++ )
	{
		for ( j = 0; j <= col - 1; j++ )
			cin >> a[i][j] ;
	}
	cout << a[0][0];
	while ( k <= row + col - 2 )
	{
		for ( i = 0; i <= row - 1; i++ )
		{
			if ( k - i >= 0 && k - i < col )
			{
				cout << endl;
				cout << a[i][k-i]  ;
			}
		}
		k++;
	}
	cout << endl;
	return 0;
}