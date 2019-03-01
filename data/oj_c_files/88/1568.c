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
 * ??: 1000012844
 * ??? ????
 **/



int main()
{
	char str[ 32 ] = { 'q' }, *ptr = NULL;			// ptr???????????????
	cin.getline( str + 1, 31 );

	for ( ptr = 1 + str; ptr < 1 + str + strlen( str ); ptr++ )
	{
		if ( *ptr >= '0' && *ptr <= '9' && ( *( ptr - 1 ) > '9' || *( ptr - 1 ) < '0' ) )
		{
			cout << atoi( ptr ) << endl;
		}
	}

	return 0;
}

