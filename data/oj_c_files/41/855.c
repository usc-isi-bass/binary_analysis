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

int main ()
{
	int A , B , C , D , E;
	int a , b , c , d , e;
	for ( a = 1; a <= 5; a++ )
	{
		for ( b = 1; b <= 5; b++ )
		{
			for ( c = 1; c <= 5; c++ )
			{
				for ( d = 1; d <= 5; d++ )
				{
					for ( e = 1; e <= 5; e++ )
					{
						if ( a != b && a != c && a != d && a!= e && b != c && b != d && b != e && c != d && c != e && d != e && e != 2 && e != 3 )
						{
							A = ( e == 1 );
							B = ( b == 2 );
							C = ( a == 5 );
							D = ( c != 1 );
							E = ( d == 1 );
							if ( ( ( a == 1 && b == 2 ) || ( a == 2 && b == 1 ) ) && A == 1 && B == 1 && C == 0 && D == 0 && E == 0 )
								cout << a << " " << b << " " << c << " " << d << " " << e << endl;
							if ( ( ( a == 1 && c == 2 ) || ( a == 2 && c == 1 ) ) && A == 1 && B == 0 && C == 1 && D == 0 && E == 0 )
								cout << a << " " << b << " " << c << " " << d << " " << e << endl;
							if ( ( ( a == 1 && d == 2 ) || ( a == 2 && d == 1 ) ) && A == 1 && B == 0 && C == 0 && D == 1 && E == 0 )
								cout << a << " " << b << " " << c << " " << d << " " << e << endl;
							if ( ( ( a == 1 && e == 2 ) || ( a == 2 && e == 1 ) ) && A == 1 && B == 0 && C == 0 && D == 0 && E == 1 )
								cout << a << " " << b << " " << c << " " << d << " " << e << endl;
							if ( ( ( b == 1 && c == 2 ) || ( b == 2 && c == 1 ) ) && A == 0 && B == 1 && C == 1 && D == 0 && E == 0 )
								cout << a << " " << b << " " << c << " " << d << " " << e << endl;
							if ( ( ( b == 1 && d == 2 ) || ( b == 2 && d == 1 ) ) && A == 0 && B == 1 && C == 0 && D == 1 && E == 0 )
								cout << a << " " << b << " " << c << " " << d << " " << e << endl;
							if ( ( ( b == 1 && e == 2 ) || ( b == 2 && e == 1 ) ) && A == 0 && B == 1 && C == 0 && D == 0 && E == 1 )
								cout << a << " " << b << " " << c << " " << d << " " << e << endl;
							if ( ( ( c == 1 && d == 2 ) || ( c == 2 && d == 1 ) ) && A == 0 && B == 0 && C == 1 && D == 1 && E == 0 )
								cout << a << " " << b << " " << c << " " << d << " " << e << endl;
							if ( ( ( c == 1 && e == 2 ) || ( c == 2 && e == 1 ) ) && A == 0 && B == 0 && C == 1 && D == 0 && E == 1 )
								cout << a << " " << b << " " << c << " " << d << " " << e << endl;
							if ( ( ( d == 1 && e == 2 ) || ( d == 2 && e == 1 ) ) && A == 0 && B == 0 && C == 0 && D == 1 && E == 1 )
								cout << a << " " << b << " " << c << " " << d << " " << e << endl;
						}
					}
				}
			}
		}
	}
}