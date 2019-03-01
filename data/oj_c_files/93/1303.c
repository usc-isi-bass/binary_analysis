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
int i;
cin >> i;
if(!(i % 3) && !(i % 5) && !(i % 7))
        cout << "3 5 7" << endl;
		else if(!(i % 3) && !(i % 5))
            cout << "3 5" << endl;
			else if(!(i % 5) && !(i % 7))
          cout << "5 7" << endl;
		  else if(!(i % 3) && !(i % 7))
         cout << "3 7" << endl;
		 else if(!(i % 3))
        cout << "3" << endl;
		else if(!(i % 5))
      cout << "5" << endl;
	  else if(!(i % 7))
     cout << "7" << endl;
     else cout << "n";
     return 0;
} 
