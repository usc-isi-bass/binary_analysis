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
	int line[1000] = { 0 } ;
	line[0] = 1 ;
	int N ;
	int i , j , k ;
	int r = 0 ;
	int t = 0 ;
	cin >> N ;
	for ( k = 0 ; k < N ; k++ )
	{
		r = 0 ;
		t = 0 ;
		for ( i = 0 ; i < 1000 ; i++ )
		{
			t = line[i] ;
			line[i] = 2 * line[i] % 10 + r ;
			r = 2 * t / 10 ;
		}
	}
	for ( i = 999 ; i >=0 ; i-- )
	{
		if ( line[i] != 0 )
		{
			break ;
		}
	}
	for ( j = i ; j >=0 ; j-- )
	{
		cout << line[j] ;
	}
	cout << endl ;
	return 0 ;
}

