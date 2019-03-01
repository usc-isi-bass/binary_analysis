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
	int a[6][6] , hang1 , hang2 , lie , i , j , k , max , min , flag = 1 ;
	for ( i = 1 ; i <= 5 ; i++ )
	{
		for ( j = 1 ; j <= 5 ; j++ )
		{
			cin >> a[i][j];
		}
	}
	for ( i = 1 ; i <= 5 ; i++ )
	{
		max = a[i][1] ;
		hang1 = i ;
		lie = 1 ;
		for ( j = 1 ; j <= 5 ; j++ )
		{
			if ( a[i][j] >= max )
			{
				max = a[i][j] ;
				lie = j ;		
			}
		}
	    min = a[hang1][lie] ;
		for ( k = 1 ; k <= 5 ; k++ )
		{
			if ( a[k][lie] <= min )
			{
				min = a[k][lie] ;
				hang2 = k ;
			}
		}
	    if ( hang1 == hang2 )
		{
		    cout << hang1 << ' ' << lie << ' ' << a[hang1][lie] << endl ;
			flag = 0 ;
			break ;
		}
        else if ( hang1 != hang2 ) 
		{
		    continue ;
		}
	}
	if ( flag ) 
	{
		cout << "not found" << endl ;
	}
	return 0 ;
}