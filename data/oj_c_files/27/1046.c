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
	int n , i ,k ;
	float a , b , c ;
	double x1 , x2 , xa , ya , yb , yc ;
	cin  >> n ;
	for ( k = 1 ; k <= n ; k++ )
	{
		cin >> a >> b >> c ;
		xa = ( -b ) / ( 2 * a ) ;
		ya = b * b - 4 * a * c ;
		yb = sqrt( ya ) / ( 2 * a ) ;
		yc = sqrt( -ya ) / ( 2 * a ) ;
		x1 = xa + yb ;
        x2 = xa - yb ;
		if ( ya < 0 )
		{
			if ( xa == 0 )
			{
				cout << "x1=" ;
			    printf("%.5f", -xa) ;
			    cout << "+" ;
			    printf("%.5f", yc) ;
			    cout << "i;x2=" ;
                printf("%.5f", -xa) ;
			    cout << "-" ;
			    printf("%.5f", yc) ;
			    cout << "i" << endl ;
			}
			else
			{
				cout << "x1=" ;
		        printf("%.5f", xa) ;
			    cout << "+" ;
		      	printf("%.5f", yc) ;
			    cout << "i;x2=" ;
                printf("%.5f", xa) ;
			    cout << "-" ;
			    printf("%.5f", yc) ;
			    cout << "i" << endl ;
			}
		}
			else
				if ( x1 != x2 )
				{
					cout << "x1=" ; 
					printf("%.5f", x1) ;
					cout << ";x2=" ; 
					printf("%.5f", x2) ;
					cout << endl ;
				}
				else 
				{
					cout << "x1=x2=" ;
					printf("%.5f", x1) ;
					cout << endl ;
				}
	}
	return 0 ;
}