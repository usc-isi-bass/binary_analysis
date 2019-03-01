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
    int n, i, j, k, l, m, o;
	cin >> n;
	for ( i = 6; i <= n; i = i + 2 )
	{
		for ( j = 2; j <= ( i / 2 ); j ++ )
		{
			k = sqrt (j);
			for ( l = 2; l <= k; l ++ )
			{
				if ( j % l == 0 )
					break;
			}
			if ( l == k + 1 )
			{m = sqrt ( i - j );
               for ( o = 2; o <= m; o ++ ) 
			   {
				   if( ( i - j ) % o == 0 )
					   break;
			   }
			   if ( o == m + 1 )
				   break;}
		}
		cout << i << "=" << j << "+" << i - j << endl;
	}
	return 0;
}
               