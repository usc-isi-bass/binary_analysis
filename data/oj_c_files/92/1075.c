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

int cmp(const void *x , const void *y)
{
	return (*(int *)y) - (*(int *)x) ;
}
int main()
{
	int n ; 
	int a[1010] , b[1010] ;
	while ( cin >> n ){
		if ( n == 0 ) break ;
		for ( int i = 0 ; i < n ; i ++ )
			cin >> a[i] ;
		for ( int i = 0 ; i < n ; i ++ )
			cin >> b[i] ;
		qsort( a , n , sizeof (a[0]) , cmp ) ;
		qsort( b , n , sizeof (b[0]) , cmp ) ;

		int aStart = 0 , aEnd = n - 1 , bStart = 0 , bEnd = n - 1 ;
		int count = 0 ;
		while ( aStart <= aEnd ){
			if ( a[aStart] > b[bStart] ){
				count ++ ;
				aStart ++ ; 
				bStart ++ ;
			}
			else if ( a[aEnd] > b[bEnd] ){
				count ++ ;
				aEnd -- ;
				bEnd -- ;
			}
			else {
				if ( a[aEnd] < b[bStart] )
					count -- ;
				aEnd -- ;
				bStart ++ ;
			}
		}
		cout << count * 200 << endl ;
	}
	return 0 ;
}