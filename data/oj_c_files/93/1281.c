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

/**
????5
?  ?????
?  ??9.28
?  ????3?5?7????
*/

int main()

{
   int x, a, b, c;
   cin >> x;

   a = (x % 3 == 0);
   b = (x % 5 == 0);
   c = (x % 7 == 0);

   if (a + b + c == 3)
	   cout << "3 5 7" << endl;
   else if (a + b + c == 2)
   { 
	   if (c == 0)
		   cout << "3 5" << endl;
	   else if (b == 0)
		   cout << "3 7" << endl;
	   else 
		   cout << "5 7" << endl;
   }
   else if (a + b + c == 1)
   {
	   if (a == 1)
		   cout << "3" << endl;
	   else if (b == 1)
		   cout << "5" << endl;
	   else 
		   cout << "7" << endl;
   }
   else 
	   cout << "n" << endl;
   
   return 0;
}



