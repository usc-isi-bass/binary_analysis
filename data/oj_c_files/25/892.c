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
	int N ;
	cin >> N ;
	double result[100] = { 1 , -1 } ;
	for ( int i = 1 ; i <= N ; i++ )
	{
		int k = 0 ;
		while ( result[k+1] >= -0.5 )//????????
		{
			result[k] = result[k] * 2 ;
			if ( result[k] > 9 )//????9??????
			{
				result[k+1] = result[k+1] + 0.5 ;
				result[k] = result[k] - 10 ;
			}
			k++ ;
		}//??[k]???????
		result[k] = result[k] * 2 ;
		if ( result[k] > 9 )//????9??????
		{
			result[k+2] = -1 ;
			result[k+1] = 1 ;
			result[k] = result[k] - 10 ;
		}
		//????9?????
	}
	int point = 0 ;
	while ( result[point+1] >= -0.5 )
		point++ ;
	while ( point >= 0 )
		cout << result[point--] ;
	cout << endl ;

	return 0 ;
}