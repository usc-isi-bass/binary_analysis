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

// homework : ????????
// name     : ???



int main()
{
	int array[100][100];
	int row, col;
	cin >> row >> col;
	for( int i = 0; i < row; i++ )
	{
		for( int j = 0; j < col; j++ )
		{
			cin >> array[i][j];
		}
	}
	for( int row1 = 0, row2 = row - 1,col1 = 0, col2 = col - 1; col1 <= col2 && row1 <= row2; row1++, row2--, col1++, col2-- )
	{
		if( col1 == col2 && row1 == row2 ) 
		{
			cout << array[row1][col1] << endl;
			break;
		}
		if( row1 == row2 )
		{
			for( int i =col1; i <= col2; i++ )
				cout << array[row1][i] << endl;
			break;
		}
		if( col1 == col2 )
		{
			for( int i = row1; i <= row2; i++ )
				cout << array[i][col1] << endl;
			break;
		}
		for( int i = col1; i < col2; i++ )
			cout << array[row1][i] << endl;
		for( int i = row1; i < row2; i++ )
			cout << array[i][col2] << endl;
		for( int i = col2; i > col1; i-- )
			cout << array[row2][i] << endl;
		for( int i = row2; i > row1; i-- )
			cout << array[i][col1] << endl;
	}
	
	return 0;
}