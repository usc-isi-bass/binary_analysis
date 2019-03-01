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
	int a = 0, b = 0, c = 0;															//??abc?0,1,2?????????
	for ( a = 0; a <= 2; a ++ )
		for ( b = 0; b <= 2; b ++ )
			for ( c = 0; c <= 2; c ++ )
			{
				if ( a == b || b == c || a == c ) continue;								//??a?b?c???????
				if ((2-a == ((b>a)+(c==a)))&&(2-b == ((a>b)+(a>c)))&&(2-c == ((c>b)+(b>a))))	//??????????
				{
					if ( a == 0 ) cout << "A";
					if ( b == 0 ) cout << "B";
					if ( c == 0 ) cout << "C";
					if ( a == 1 ) cout << "A";
					if ( b == 1 ) cout << "B";
					if ( c == 1 ) cout << "C";
					if ( a == 2 ) cout << "A";
					if ( b == 2 ) cout << "B";
					if ( c == 2 ) cout << "C";
				}
			}
	return 0;
}