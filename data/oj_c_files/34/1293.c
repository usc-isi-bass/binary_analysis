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
	int n = 0 ;
	int m = 0 ;
    cin >>n ;
	if ( n == 1) cout << "End" << endl ; //??n??1 ????? End
	else 
	{
		do    //?n???1?
		{
			if ( n%2 == 1)      //??n???????????
			{
				m = n ;
				n = n*3 + 1 ;
				cout  << m << "*" << 3 << "+" << 1 << "=" << n <<endl ;
			}
			else       // ????//??n???????????
			{
				m = n ;
				n = m/2 ;
				cout << m << "/" << 2 << "=" << n <<endl ;
			}
			
		}
		while ( n != 1) ;
		cout << "End" <<endl ;
	}
	return 0 ;

}