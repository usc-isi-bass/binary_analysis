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

int factor(int n,int min)
{
	int result=1, i ;
	
	if( n < min )
	{
		return 0;
	}
	
	for(i = min; i < n; i++)
	{
		if( n % i == 0 )
		{
		   result += factor( n/i,i );
		}
	}
	
	return result ;
}
int main()
{
	int m,x,j,k;
	
	scanf ( "%d", &m );
	
	for( j = 1;j <= m; j++ )
	{
		scanf ( "%d", &x );
		
		k = factor ( x, 2);
		
		printf ( "%d\n", k);
	}

	return 0;
}