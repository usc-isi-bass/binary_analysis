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
 * ?? 1045?7??????
 * ?? ???
 * ?? 1000012844
 */

int main()
{
	int n, i, sum = 0;
	
	cin >> n;					//??n?

	while ( n < 1 )
	{
		cout << " Invalid n, input it again ";	//n < 1???
		cin >> n;
	}
	//??????sum??
	for ( i = 1; i <= n; i++ )
	{
		//???7?????1?7??????7?10??7
		if ( ( i % 7 == 0 ) || ( ( i - 7 ) % 10 == 0 ) 
		|| ( ( i < 80 ) && ( i >= 70 ) ) )
		continue;
		sum = sum + i * i;		// ??
	}

	cout << sum;				//??sum??
	return 0;
}
