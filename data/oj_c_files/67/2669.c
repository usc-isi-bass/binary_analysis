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
	int n  , i;
	cin >> n ;
	int a[n] , b[n] ;
	double c[n];
	for (  i = 1 ; i <= n ; i++)
	{
		cin >> a[i] >> b[i];
		c[i] = b[i]/( a[i] * 0.01 ) ;
	}
	for( int k = 2 ; k <= n ; k++)
	{
		if ( (c[k] - c[1]) > 5.00 )
		cout << "better" << endl;
		else if (( c[1] - c[k]) > 5.00 )
		cout << "worse" << endl;
		else
		cout << "same" << endl;
	}
		return 0;
}