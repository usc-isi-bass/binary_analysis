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
	int m , i , j , a, b, p , q;
	cin >> m;
	for ( i = 3; i <= m/2; i = i + 2)
	{
	    p = 0;
		q = 0;
		for ( a = 2; a< i ; a ++)
		{ 
			if ( i % a ==0)
			{ 
				p=1;
			}
		}
		if ( p==0 )
		{
			j = m - i ;
			for ( b = 2 ; b < j ; b ++)
			{
				if ( j % b == 0)
				{
					q=1 ;
				}
			}
			if ( q==0 )
			{
				cout << i << ' ' << j << endl;
			}
		}
	}
	return 0;
}



