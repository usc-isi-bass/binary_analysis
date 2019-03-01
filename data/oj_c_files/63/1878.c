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

//*****************************************
//* ??????? **
//* ?????? 1300012741 **
//* ???2013.10.30 **
//*****************************************


int main()
{
	int matrix_A[100][100] = { { 0 }, { 0 } }; // ????A
	int matrix_B[100][100] = { { 0 }, { 0 } }; // ????B
	int row_A, col_A, row_B, col_B; // ????AB????
	int i, j, k; // ??????
	int temp; // ????????
	
	cin >> row_A >> col_A; // ????
	for ( i = 0; i < row_A; i++ )
		for ( j = 0; j < col_A; j++ )
			cin >> matrix_A[i][j];

	cin >> row_B >> col_B;
	for ( i = 0; i < row_B; i++ )
		for ( j = 0; j < col_B; j++ )
			cin >> matrix_B[i][j];

	for ( i = 0; i < row_A; i++ ) // ?????A?????
		for ( j = 0; j < col_B; j++ ) // ?????B?????
		{
			temp = 0; // ?????????
			for ( k = 0; k < col_A; k++ ) // ????????i,j?
				temp += matrix_A[i][k] * matrix_B[k][j];
			cout << temp ;
			if ( j == col_B - 1 ) // ???????
				cout << endl;
			else
				cout << " ";
		}

	return 0;
}