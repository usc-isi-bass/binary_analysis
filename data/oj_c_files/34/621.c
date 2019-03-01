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

//???2010?12?1?

//??: 1000010586_???

//??; ????

int make( int n );
int main()
{
	int n;
	cin >> n;
	make ( n );
	return 0;
}
int make( int n )
{
	if ( n == 1 )
	{
		cout << "End" << endl;
		return 0;
	}
	else
	{
		if ( n % 2 == 1 )
		{
			cout << n << "*3+1=" << n * 3 + 1 << endl;
			n = n * 3 + 1;
		}
		if ( n % 2 == 0 )
		{	
			cout << n << "/2=" << n / 2 << endl;
			n = n / 2;
		}
		return make( n );
	}
}

