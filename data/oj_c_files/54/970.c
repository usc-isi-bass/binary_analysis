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



int main(int argc, char* argv[])
{
	int i , n , k , num ,sum;
	scanf("%d %d" , &n , &k );
	for ( i = 1 ; ; i ++ )
	{
		sum = i ;
		num = 0 ;
		while ( num < n )
		{
			if ( sum - sum / n * n == k )
			{
				sum = sum / n * ( n - 1 ) ;
				num ++ ;
			}
			else break ;
		}
		if ( sum >= 1 && num == n )
		{
			printf("%d" , i );
			break ;
		}
	}
	return 0;
}
