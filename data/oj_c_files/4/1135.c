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
	int row , col ;
	cin >> row >> col ;
	int a[row][col] ;
	for( int i = 0 ; i < row ; i ++ )
		for( int j = 0 ; j < col ; j ++ )
			cin >> a[i][j] ;
	int i = 0 , j = 0 ;
	for( ; i < row ; i ++ )
	{
		for( ; j < col ; j ++ )
		{
			for( int m = i , n = j ;  m < row && n > -1  ; m ++ , n -- )
				cout << a[m][n] << "\n" ;
		}
		j -- ;
	}
	return 0 ;
}