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
//*????????? **
//*?????1300062805 **
//*???2013.10.27 **
//********************************
int main()
{
	int m, a, b, c, d, e, i, n, p; 
    cin >> m;
	for ( i = 3; i <= m / 2; i +=2 )   // ??????
	{
		n = (int)sqrt(i);
	    a = 2;
		while ( a <= n)
		{
			p = i % a;
			if ( p == 0 )break;// ???????
			a++;
			
		}
		if ( a == n + 1)  // ????????
		{
			c =  m - i;
			d = (int)sqrt (c);
		    for ( a = 2; a <= d; a ++)  // ??????
			{
			
		    e = c % a;
			if ( e == 0)break;
			}
			if ( a == d + 1)
			{
				cout << i << " " << c << endl;
			} 
		}
	}
return 0;
}


