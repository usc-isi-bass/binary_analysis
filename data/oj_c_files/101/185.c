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

//**************************************
//????1000012825_4                 *
//??????                         *
//???11.19                          *
//????????                     *
//**************************************
int main ()
{
	int a, b, c, AA1, AA2, BB1, BB2, CC1, CC2, i;
	char str[3];         //???????????A,B,C
	for ( a = 0; a <= 2; a++ )
	{
		for ( b = 0 ; b <= 2; b++ )
		{
			for ( c = 0; c <= 2; c++ )
			{
				AA1 = ( b > a );
				AA2 = ( c == a );
				BB1 = ( a > b );
				BB2 = ( a > c );
				CC1 = ( c > b );
				CC2 = ( b > a );           //???3??????
				if ((a + AA1 + AA2 == 2 ) && ( b + BB1 + BB2 == 2 ) && ( c + CC1 + CC2 == 2 ) && ( a != b) && ( a != c) && ( b != c) )
				// ?????????????????3??????
				{
					str[a] = 'A'; str[b] = 'B'; str[c] = 'C'; //????A,B,C???????
				}
			}
		}
	}
	for ( i = 0; i <= 2; i++ )//????
		cout << str[i];
	cout << endl;
	return 0;
}



