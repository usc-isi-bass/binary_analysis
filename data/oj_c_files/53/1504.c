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
	int Set[300] = {0};
	int n = 0;
	int i = 0, j = 0, p = 0;
	scanf("%d", &n);
	for ( i = 0; i < n; i++ )
	{
		scanf( "%d", &Set[p] );
		for ( j = 0; j < p; j++ )
		{
			if ( Set[j] == Set[p] )
				break;
		}
		if ( j == p )
			p++;
	}
	if ( p != 0 )
		printf("%d", Set[0]);
	for ( i = 1; i < p; i++ )
	{
		printf( ",%d", Set[i] );
	}
	return 0;
}