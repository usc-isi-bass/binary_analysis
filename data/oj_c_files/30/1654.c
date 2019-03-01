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

//****************************
//*???2013?10?9?       *
//*??????              *
//*????7???????   *
//****************************

int main ()

{
	double n ,sum , k ;                                          //?????n????sum?????k????????
	int i ;                                                      //????i???????
	sum = 0 , k = 0 ;                                            //???sum?0?k?0
	cin >> n ;                                                   //??n

	for ( i=1 ; i<=n ; i++ )                                     //??i?1?n
	{
		k = k + 1 ;                                              //k????
		if( i%7==0 || (i-7)%10==0 || (i-70)>=0 && (i-70)<=9 )    //??i??7???????7?????7
			continue ;                                           //?????????????
		sum = sum + pow ( k , 2 );                               //?i???7?????????k???
	}
	
	cout << sum << endl ;                                        //?????
	return 0 ;
}
