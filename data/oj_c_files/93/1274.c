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
//*?????3?5?7????  **
//*?????? 1300012965 **
//*???2013.10.3  **
//********************************
int main ()
{
	int n , a , b , c ;//??????

	char d;

	a = 3;

	b = 5;

	c = 7;

	d = ' ';//????

    cin >> n;//????

	if ( n % a == 0 && n % b == 0 && n % c == 0 )

		cout << a << d << b << d << c << endl;//??????

	if ( n % a == 0 && n % b == 0 && n % c != 0 )

		cout << a << d << b << endl;//??????

	if ( n % a == 0 && n % b != 0 && n % c == 0 )

		cout << a << d << c << endl;//??????

    if ( n % a != 0 && n % b == 0 && n % c == 0 )

		cout << b << d << c << endl;//??????

	 if ( n % a != 0 && n % b != 0 && n % c == 0 )

		 cout << c << endl;//??????

	  if ( n % a != 0 && n % b == 0 && n % c != 0 )

		  cout << b << endl;//??????

	  if ( n % a == 0 && n % b != 0 && n % c != 0 )

		  cout << a << endl;//??????

      if ( n % a != 0 && n % b != 0 && n % c != 0 )

		cout << "n" << endl;//??n
	
	return 0 ;
	
}
