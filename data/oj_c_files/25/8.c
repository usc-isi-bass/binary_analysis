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
 * ?????2?N??
 **/



void multiply( char str[], int n );

int main()
{
	int N;
	char str[ 200 ] = "1";

	cin >> N;

	while ( N > 0 )
	{
		multiply( str, 2 );
		N--;
	}
		
	cout << str << endl;

	return 0;
}

void multiply( char str[], int n )
{
	int num[ 200 ];
	int jump = 0, temp;
	memset( num, 0, sizeof( num ) );
	char *sPtr = str + strlen( str ) - 1;
	int *nPtr = num + 199;
	
	while( sPtr != str - 1 )
	{
		*nPtr-- = *( sPtr-- ) - '0';
	}

	nPtr = num + 199;

	while ( nPtr != num - 1 )
	{
		temp = *nPtr * n % 10 + jump;
		jump = *nPtr * n / 10;
		*nPtr-- = temp;
	}

	nPtr = num;
	sPtr = str;
	while ( *nPtr == 0 )
	{
		nPtr++;
	}

	while ( nPtr != num + 200 )
	{
		*sPtr++ = *nPtr++ + '0';
	}

	*sPtr = 0;
}