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
	int array[100][100] ;
	int col , row = 0 ;
	cin >> row >> col ;
	for ( int i = 0 ; i < row ; i++ )
		for ( int j = 0 ; j < col ; j++ )
			cin >> * ( * ( array + i ) + j ) ;
	cout << * * array << endl ;
	if ( row == 1 && col == 1 ) return 0 ;
	if ( col == 1 )
	{
		for ( int i = 1 ; i < row ; i++ )
			cout << * * ( array + i ) << endl ;
		return 0 ;
	}
	int r = 0 , l = 1 ;
	int begl = 1 , begr = 0 ;
	while ( r != row - 1 || l != col - 1 )
	{
		cout << * ( * ( array + r ) + l ) << endl ;
		r++ ; l-- ;
		if ( l < 0 || r == row )//?????
		{
			begl++ ;//??????
			if ( begl == col )//??????????????????
			{
				begl-- ;
				begr++ ;
			}
			l = begl ;
			r = begr ;
		}
	}
	cout << * ( * ( array + r ) + l ) << endl ;

	return 0 ;
}
// ( > w < ) finished~