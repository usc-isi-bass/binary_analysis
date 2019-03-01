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

/**
 * ??????
 * ???1000012844
 * ???????
 **/


void checkSymmetry( char *, int, int );

int main()
{
	int start, lenth;
	char str[ 501 ];

	cin >> str;

	for ( lenth = 2; lenth <= strlen( str ); lenth++ )
	{
		for ( start = 0; start < strlen( str ) - lenth + 1; start++ )
		{
			checkSymmetry( str, start, start + lenth - 1 );
		}
	}

	return 0;
}

void checkSymmetry( char str[], int start, int end )
{
	int i;
	for ( i = 0; i <= ( end - start ) / 2; i++ )
	{
		if ( str[ start + i ] != str[ end - i ] )
		{
			break;
		}
	}
	if ( i > ( end - start ) / 2 )
	{
		for ( i = start; i <= end; i++ )
		{
			cout << str[ i ];
		}
	cout << endl;
	}
}