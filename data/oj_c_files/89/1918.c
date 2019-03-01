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
	int n, a[10000][2];
	int i, j;
	scanf( "%d", &n );
	for( i = 0; i < n; i++ ) {
		a[i][0] = 0;
		a[i][1] = 0;
	}
	while( scanf( "%d%d", &i, &j ) ) {
		if( i==0 && j == 0 )
			break;
		a[i][0] += 1;
		a[j][1] += 1;
	}
	for( i = 0; i < n; i++ )
		if( a[i][0] == 0 && a[i][1] == n - 1 ) {
			printf( "%d\n", i );
			break;
		}
	if( i == n )
		printf( "NOT FOUND\n" );
	return 0;
}
