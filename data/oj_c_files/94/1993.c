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
	int n , x = 0 ;  // x???????
	cin >> n ;
	int a[n] , k = -1 ;
	for( int i = 0 ; i < n ; i ++ )    // ????????????
	{
		cin >> x ;
		if( x % 2 == 1 )
		{
			k ++ ;
			a[k] = x ;
		}
	}
	int t = 0 ;  // t ?????????
	for( int i = 0 ; i <= k ; i ++ )   // ???????????????
		for( int j = 0 ; j < k - i ; j ++ )
		{
			if( a[j] > a[j+1] )
			{
				t = a[j] ;
				a[j] = a[j+1] ;
				a[j+1] = t ;
			}
		}
	cout << a[0] ;      //??????‘?’???a[0]??
	for( int i = 1 ; i <= k ; i ++ )
		cout << "," << a[i] ;
	cout << endl ;  //endl???
    return 0 ;
}
