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

//********************************
//*????????????   **
//*?????? 1300012934 **
//*???2013.10.14  **
//********************************


int main()
{ 
	int n ;
	double a , b , c , x1 , x2 , p , i ,d ;//p ?i?????????????d???????
	cin >> n;
	cout << fixed << setprecision (5);  //????????
	for (int k = 1 ; k <= n ; k++)
	{
		cin >> a >> b >> c ;
		d = b * b - 4 * a * c ;
		if ( d < 0 ) //?????
		{	
			i = sqrt (-d) / ( 2 * a ) ;
			p = - b / ( 2 * a ) ;
			if ( p == - 0 )
				p = 0;
			cout << "x1=" << p << "+" << i << "i;x2="<< p << "-" << i << "i" << endl;
		}
		else 
		{
			if ( d > 0 ) //????????
			{
				x1 = ( -b + sqrt ( d ) ) / ( 2 * a ) ;
                x2 = ( -b - sqrt ( d ) ) / ( 2 * a ) ;
                cout << "x1=" << x1 << ";x2=" << x2 << endl;
			}
			else //????????
				cout << "x1=x2=" << -b / ( 2 * a ) << endl;
		}
	}
		


	return 0;
}