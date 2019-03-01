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
	int i  , n , m1 = 0 , m2 = 0 , j = 0 ;
	scanf( "%d" , &n ) ;
	for( i=0; i <n ; i ++)
	{
		scanf( "%d" , &j ) ;
		if( i == 0 )
			m1 = j ;
		else if ( i == 1 )
		{
			m2 = j ;
		}
		
		if( j > m1 )
			{
				m2 = m1 ;
				m1 = j ;
			}
		else if( j > m2  )
			m2 = j ;
		
	}
	printf("%d\n%d" , m1 , m2 ) ;
	return 0;
}
