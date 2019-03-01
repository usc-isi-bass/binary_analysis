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
     int n,decade,hundred,thousand;
	 cin >> n;
	 cout << n-n/10*10 ;
	 if(n >= 10)
	 {
         decade = n/10 ;
		 cout << decade-decade/10*10 ;
	 }
	 if(n >= 100)
	 {
         hundred = decade/10 ;
		 cout << hundred-hundred/10*10 ;
	 }
	 if(n >= 1000)
	 {
          thousand = hundred/10 ;
		 cout << thousand-thousand/10*10 ;
	 }
	 if(n == 10000)
	 cout << "1" << endl;
	 return 0;
}
