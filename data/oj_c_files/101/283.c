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

/*file:????11-17??
 *author:??? 1000012776
 *date:2010-11-19
 *discription:???
 */
int main ()
{
	int i , j , k , m , ai ,aj ,ak ;//i,j,k????A,B,C????ai,aj,ak???A,B.C????????
	for ( i = 0 ; i < 3 ; i ++ )//???
		for ( j = 0 ; j < 3 ; j ++ )
			for ( k = 0 ; k < 3 ; k ++ )
			{
				ai = ( j > i ) + ( i == k ) ;
				aj = ( i > j ) + ( i > k ) ;
				ak = ( k > j ) + ( j > i ) ;
				//????????????????????????????????????????????
				if ( ( ( i > j ) == ( ai < aj ) ) && ( ( i < j ) == ( ai > aj ) )
				  && ( ( i > k ) == ( ai < ak ) ) && ( ( i < k ) == ( ai > ak ) )
				  && ( ( k > j ) == ( ak < aj ) ) && ( ( k < j ) == ( ak > aj ) ) )
				//??????????????????m??A?B?C???????
				for ( m = 0 ; m <= 2 ; m ++ )
				{
					if ( i == m ) cout << "A" ;
					if ( j == m ) cout << "B" ;
					if ( k == m ) cout << "C" ;
				}
			}
			return 0 ;
}