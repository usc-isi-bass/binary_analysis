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
	int n, a[99999] , b[99999] = {0}, *p = a, *q = b, flag = 0;
	cin >> n;
	int k, i, j;
	for ( k = 0; k < n; k++,p++ )
	{
		*p = -1;
	}

	while ( cin >> i )
	{

		cin >> j;
		if ( i == 0 && j == 0 )
			break;
		a[i] = j; //a?i????
		b[j]++;  //b???j???
	}
	p = a;
	for ( k = 0; k < n; k++, p++, q++ )
	{
		if ( *q == n - 1 && *p == -1 )
		{
			cout << k << endl;
			flag = 1;
		}
	}
	if ( flag == 0 )
	{
		cout << "NOT FOUND" << endl;
	}
	return 0;
}

