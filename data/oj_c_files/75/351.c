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

//
//	????:	?????
//	????:	?????????????????????????????????????
//	????:	?  ? ( ? ? : 1000012733 ) 
//	????:	2010 ? 12 ? 01 ?
//
int main()
{
	int timein[1000], timeout[1000], max[1000];
	int i, j, k, count = 1;
	char c;
	memset ( timein, 0, sizeof ( timein ));
	memset ( timeout, 0, sizeof ( timeout ));
	memset ( max, 0, sizeof ( max ));
	for ( i = 0; i < 1000; i ++ )
	{
		cin >> timein[i];
		c = cin.get();
		if ( c == '\n' )
			break;
		else count ++;
	}
	for ( i = 0; i < 1000; i ++ )
	{
		cin >> timeout[i];
		c = cin.get();
		if ( c == '\n' )
			break;
	}
	for ( i = 0; i < 1000; i ++ )
		for ( j = 0; j < count; j ++ )
		{
			if (( timein[j] <= i ) && ( timeout[j] > i ))
				max[i] ++;
		}
	k = 0;
	for ( i = 1; i < 1000; i ++ )
	{
		if ( max[k] < max[i] )
		{
			k = i;
		}
	}
	cout << count << " " << max[k] << endl;
	return 0;
}
