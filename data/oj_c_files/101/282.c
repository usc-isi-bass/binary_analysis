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

//
//	????:	???
//	????:	????????3?????
//	????:	?  ? ( ? ? : 1000012733 ) 
//	????:	2010 ? 11 ? 20 ?
//
int main()
{
	int a, b, c, i, j, k, sum1, sum2, sum3;		//????????????????a?b?c???????????sum1?sum2?sum3???????????????????????
	for ( i = 1; i <= 3; i ++ )
	{
		a = i;
		for ( j = 1; j <= 3; j ++ )
		{
			b = j;
			if ( b != a )	//b????a??????
				for ( k = 1; k <= 3; k ++ )
				{
					c = k;
					if (( c != a ) && ( c != b ))	//c????a?b??????
					{
						sum1 = a + ( b > a ) + ( c == a );		
						sum2 = b + ( a > b ) + ( a > c );
						sum3 = c + ( c > b ) + ( b > a );	//??????????????????
						if (( sum1 == 3 ) && ( sum2 == 3 ) && ( sum3 == 3 ))	//????????????????????
						{
							if (( a < b ) && ( b < c ))
								cout << "ABC";
							if (( a < c ) && ( c < b ))
								cout << "ACB"; 
							if (( b < a ) && ( a < c ))
								cout << "BAC";
							if (( b < c ) && ( c < a ))
								cout << "BCA";
							if (( c < a ) && ( a < b ))
								cout << "CAB";
							if (( c < b ) && ( b < a ))
								cout << "CBA";		//?????????????????
						}
					}
				}
		}
	}
	return 0;
}
