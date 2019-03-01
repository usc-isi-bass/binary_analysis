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
	int n , i , a , b , t = 0 , l = 0 , k;
	cin >> n ;
	for ( i = 1 ; i <= n ; i++ )
	{
		cin >> a >> b ;
		if ( (a >= 90) && (a <= 140) && (b >= 60) && (b <= 90) )
		{
			t = t + 1;
			if ( i < n )
			continue ;
			else if ( t > l )
			{
				l = t ;
				break ;
		   	}
			else
			break ;
		}
		else 
		{
			if ( t > l )
			{
				l = t ;
				t = 0 ;
			}
			else 
				t = 0 ;
		}
	}
	cout << l << endl ;
	return 0 ;
}