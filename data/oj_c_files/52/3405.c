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

//???2010?12?8?

//??: 1000010586_???

//???????

int main()
{
	int n , m , i , j , flag;
	int a[ 100 ];
	int *p;
	cin >> n >> m;
	for ( i = 0 ; i <= n - 1 ; i++ )
		cin >> a[ i ];
	p = a;
	for ( i = 1 ; i <= n - m ; i++ )
	{
		flag = *p;
		for( j = 0 ; j <= n - 2 ; j++ )
			*( p + j ) = *( p + j + 1 );
		*( p + n - 1 ) = flag;
	}
	for ( i = 0 ; i <= n - 2 ; i++ )
		cout << *( p + i ) << " ";
	cout << *( p + n - 1 );
	return 0;
}
	

