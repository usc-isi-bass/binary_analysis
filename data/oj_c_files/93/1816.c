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
	int k ;
	cin >> k;
	if( k % 3 == 0 )
	{
		cout << 3;
		if( k % 5 == 0 )
		{
			cout << ' ' << 5;
			if( k % 7 == 0 )
				cout << ' ' << 7;
		}
		else
			if( k % 7 == 0 )
				cout << ' ' << 7;
	}
	else
		if( k % 5 == 0 )
		{
			cout << 5;
			if( k % 7 == 0 )
				cout << ' ' << 7;
		}
		else
			if( k % 7 == 0 )
				cout << 7;
	if( k % 3 != 0 && k % 5 != 0 && k % 7 != 0 )
		cout << 'n';
	return 0;
}