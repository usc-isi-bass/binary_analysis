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

int main ()
{
	int come[1000], go[1000];
	int i, j, k, p = 0, max = 0;
	for ( i = 0; ; i++ )
	{
		cin >> come[i];
		if ( cin.get() == '\n')
			break;
	}
	for ( i = 0; ; i++ )
	{
		cin >> go[i];	// ?????????????
		if ( cin .get() == '\n')
			break;
	}
	for ( j = 0; j <= 1000; j++ )
	{
		for ( k = 0; k <= i + 1; k ++ )
		{
			if ( come[k] <= j && go[k] >= j + 1 )
				p = p + 1;
		}				// ??????????
		if ( max <= p )
			max = p; //?????
		p = 0;
	}
	cout << i + 1 << " " << max << endl;
	return 0;
}