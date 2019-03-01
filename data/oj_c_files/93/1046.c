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
	int x , a , b , c ;
	cin >> x ;
	a = x % 3;
	b = x % 5;
	c = x % 7;
	if ( a == 0 && b == 0 && c ==0 )
    {
		cout << "3 5 7" ;
	}
	else
	{
	 if ( a == 0 )
	 {
	        if ( b == 0)
				cout << "3 5" ;
	 
			else 
			{
				if ( c == 0 )
					cout << "3 7" ;
				else
					cout << "3" ;
			}
     }
	 else
	 {
					if ( b == 0 )
					{
						if ( c == 0)
							cout << "5 7" ;
						else
							cout << "5" ;
					}
				    else
					{
							if ( c == 0)
								cout << "7" ;
							else
								cout << "n" ;
					}
	 }
	}
	return 0;
}