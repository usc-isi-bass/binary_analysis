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
	int m, i, j, a, b;
	cin >> m;
	a = 3;	
	b = m - 3;
	do
	{
		for ( i = 2; i < a; i ++ )
			if ( a % i == 0 )
				break;
		for ( j = 2; j < b; j ++)
			if ( b % j == 0)
				break;
		if(i==a && j==b)	cout<<a<<" "<<b<<endl;
    	a = a + 1;
		b = m - a;
	}while( a <= b );
	return 0;
}
	
	