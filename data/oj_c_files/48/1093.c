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

//********************************
//*???????????   **
//*?????? 1300012861 **
//*???2013.12.04  **
//********************************
int a[12][12] = {0}, b[12][12] = {0}, m, n; 
void result(int day, int a[][12])
{
	int i, j; 
	if ( day == n ) //?????? 
	{
		for ( i = 1; i <= 9; i++) //?????
		{
			for ( j = 1; j < 9; j++)
				cout << a[i][j] << " "; 
			cout << a[i][9] << endl;  
			cout << endl; 
		}
		return;
	}
	for ( i = 1; i <= 9; i++)
	{
		for ( j = 1; j <= 9; j++)
		{
			if ( a[i][j] != 0 )
				b[i][j] = a[i][j]; //???????? ????
		}
	}
	for ( i = 1; i <= 9; i++ )
	{
		for ( j = 1; j <= 9; j++)
		{
			if ( b[i][j] != 0 ) //???????
			{
				a[i][j] += b[i][j]; //????2?
				a[i-1][j-1] += b[i][j]; //?????????
				a[i-1][j] += b[i][j];
				a[i-1][j+1] += b[i][j];
				a[i][j-1] += b[i][j];
				a[i][j+1] += b[i][j];
				a[i+1][j-1] += b[i][j];
				a[i+1][j] += b[i][j];
				a[i+1][j+1] += b[i][j];
			}
		}
	}
	result(day+1, a); //??????? 
	return;
} 
int main()
{
	cin >> m >> n; 
	a[5][5] = m; //????????
	result (0, a); //???????
	return 0; 
}