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

//************************************
//????1000012825_3               *
//??????                       *
//?????2010.10.15               *
//????????7???????    *
//************************************
int main ()
{ 
	int sum = 0 , i , n = 1 ;                                                      // ???? ? ???
	cin >> i ;                                                                     // ?? i
	while (n <= i )                                                                // ????
	{
       if ( ( n % 7 == 0 ) ||  ( n % 10 == 7 ) || ( ( n > 69 ) && ( n< 80 ) )  )   // ??????7 ????
	      sum = sum ;
		  else
		  sum = sum + n * n ;                                                         // ??
	      n = n + 1 ;                                      
    }
	cout << sum << endl ;                                                          // ????
	return 0;
}