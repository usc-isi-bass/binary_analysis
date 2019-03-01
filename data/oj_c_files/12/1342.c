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

int main ()
{
	int i, j , k  , l ;
	for ( l = 1 ; ; l ++ )
	{
		i = 0 ;
		int a[20] , num = 0;  
		do 
		{
			i ++ ;
			cin >> a[i];
		}while ( a[i] > 0 );
		if ( a[i] == -1 )
		{
			break ;
		}
		else
		{
			for ( j = 1 ; j < i ; j ++ )
			{
				for ( k = 1 ; k < i ; k ++ )
				{
					if ( a[j] == 2 * a[k] )
					{
						num ++;
					}
				}
			}
			cout << num << endl ;
	
		}	
	
	}
	return 0 ; 	
}