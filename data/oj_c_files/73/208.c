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

//************************************************************
//*????????? ****************************************
//*??????? 1200012979 *********************************
//*??:2012.11.6 ********************************************
//************************************************************
int main()
{
	int m[6][6] , x1[6] , y1[6] , x2[6] , y2[6] ,
		h[6] , l[6] , i , k ,  n , j = 0 ;
	for ( i = 1 ; i <= 5 ; i++ )
		for ( k = 1 ; k <= 5 ; k++ ) 
			cin >> m[i][k] ;
	for ( i = 1 ; i <= 5 ; i++ )
	{
        h[i] = m[i][1] ;
		x1[i] = i ;
		y1[i] = 1 ;
		for ( k = 1 ; k <= 5 ; k++ ) //h[i]???????
		{                            
			
			if ( m[i][k] > h[i] )
			{
				h[i] = m[i][k] ;
				x1[i] = i ;          //x1?????
				y1[i] = k ;          //y1?????
			}
		}
	}
	for ( k = 1 ; k <= 5 ; k++ )
	{
		l[k] = m[1][k] ;             //l[k]???????
		x2[k] = 1 ;
		y2[k] = k ;
		for ( i = 2 ; i <= 5 ; i++ )
		{
			if ( m[i][k] < l[k] )
			{
				l[k] = m[i][k] ;
				x2[k] = i ;          //??????
				y2[k] = k ;
			}
		}
	}
	for ( n = 1 ; n <= 5 ; n++ )
    {
		if ( h[n] == l[y1[n]] )
			if ( x1[n] == x2[y1[n]] )
				if ( y1[n] == y2[y1[n]] )
				{
					cout << x1[n] << " " << y1[n] << " " << h[n] ;
					j++ ;
				}
	}
	if ( j == 0 )                    //j???????0?????
		cout << "not found" << endl ;
	return 0 ;
}