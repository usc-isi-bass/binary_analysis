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
//* ???????? **
//* ?????? 1300012741 **
//* ???2013.10.16 **
//*****************************************


int	share( int, int, int, int );

int main()
{
	int numMonkey, numThrowed, numRest = 1;
	int numApples;

	cin >> numMonkey >> numThrowed;

	while ( !( numApples = share( numMonkey, numMonkey, numThrowed, numRest ) ) )
		numRest++;

	cout << numApples << endl;

	return 0;
}

int share( int originNumMonkey, int numMonkey, int numThrowed, int numRest )
{
	if ( numMonkey == 1 )
		return numRest * originNumMonkey + numThrowed;
	else if ( ( originNumMonkey * numRest + numThrowed ) % ( originNumMonkey - 1 ) )
		return 0;
	else
		return share( originNumMonkey, numMonkey - 1, numThrowed, ( originNumMonkey * numRest + numThrowed ) / ( originNumMonkey - 1 ) );
}