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

//???2010?10?29?
//???1000010586_???
//???????????

int main()
{
	int n , i , j , k1 , k2 , t , a , b , m , l , g;
	cin >> n;
	for ( i = 6 ; i <= n ; i = i + 2)
	{
		for ( j = 2 ; j <= i - 2 ; j++)
		{
			m = 0;
			k1 = sqrt(j);
			for ( t = 2 ; t <= k1 ; t++ )
			{
				if ( j % t == 0 ) m = 1 ;
			}
			if ( m == 0 )
			{  
				g = 0;
				k2 = sqrt(i-j);
				for ( l = 2 ; l <= k2 ; l++)
				{
					if ( (i - j) % l == 0 ) g = 1;
				}
				if ( g == 0 )
				{ cout << i << "=" << j << "+" << i - j << endl;break;} 
			}
		}
	}
	return 0;
}