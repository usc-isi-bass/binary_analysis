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

//???2010?12?8?

//???1000010586_???

//?????????

int pan( int a[] , int );
int main()
{
	int n , i , j;
	int a[ 10000 ] = {0};
	cin >> n;
	while ( cin >> i >> j )
	{
		if ( i == 0 && j == 0 )
			break;
		a[ j ]++;
	}
	if ( pan( a , n ) != -1 )
		cout << pan( a  , n ) << endl;
	else if ( pan( a , n ) == -1 )
		cout << "NOT FOUND" << endl;
	return 0;
}
int pan( int a[] , int n )
{
	int i;
	for ( i = 0 ; i <= n - 1 ; i++ )
	{
		if ( a[ i ] == n - 1 )
		{
			return i;
			break;
		}
	}
	if ( i == n )
		return -1;
}
