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
	int n , i = 0 , j = 0 , x[1001] , y[1001] , sum , max = 0 ;
	char c ;
	do
	{
		cin >> x[i] ;
		c = cin.get() ; 
		i ++ ;
	}while ( c == ',' );
	do
	{
		cin >> y[j] ;
		c = cin.get() ;
		j ++ ;
	}while ( c == ',' ) ;
	cout << i << " " ;
	n = i ;
	for ( i = 0 ; i < n ; i ++ )
	{
		sum = 0 ;
		for ( j = 0 ; j < n ; j ++ )
		{
			if ( ( x[i] >= x[j] ) && ( x[i] < y[j] ) )
			{
				sum = sum + 1 ;
			}
			else
			continue ;
		}
		if ( sum > max )
		{
			max = sum ;
		}
	}
	cout << max ;
	return 0 ;
} 