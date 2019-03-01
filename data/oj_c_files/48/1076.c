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
	int i, j, k, num, day;
	int a[20][20] = {0};
	int b[20][20] = {0};
	int temp[20][20] = {0};
	cin >> num >> day;
	a[5][5] = num;
	for ( k = 1; k <= day; k++ )
	{
		for ( i = 1; i <= 9; i++ )
		{
			for ( j = 1; j <= 9; j++ )
				a[i][j]+= -b[i][j] ;
		}
		for ( i = 1; i <= 9; i++ )
		{
			for ( j = 1; j <= 9; j++ )
				b[i][j] = a[i][j];
		}
		for ( i = 1; i <= 9; i++ )
		{
			for ( j = 1; j <= 9; j++ )
				if ( a[i][j] != 0 )
				{
					temp[i+1][j]+= a[i][j];
					temp[i-1][j]+= a[i][j];
					temp[i+1][j+1]+= a[i][j];
					temp[i-1][j+1]+= a[i][j];
					temp[i+1][j-1]+= a[i][j];
					temp[i-1][j-1]+= a[i][j];
					temp[i][j+1]+= a[i][j];
					temp[i][j-1]+= a[i][j];
					temp[i][j]+= 2 * a[i][j];
				}
		}
		for ( i = 1; i <= 9; i++ )
		{
			for ( j = 1; j <= 9; j++ )
				a[i][j]+=temp[i][j], temp[i][j] = 0;
		}
	}

	for ( i = 1; i <= 9; i++ )
	{
		for ( j = 1; j <= 9; j++ )
			a[i][j]+= -b[i][j] ;
	}

	for ( i = 1; i <= 9; i++ )
	{
		for ( j = 1; j <= 8; j++ )
			cout << a[i][j] << " ";
		cout << a[i][9] << endl;
	}
	return 0;
}