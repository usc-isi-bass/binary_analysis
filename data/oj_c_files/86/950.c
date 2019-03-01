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

// ????????
// ??????
// ???2010?11?25?
// ?????????


int main()
{
	int n , i , j , a[100][100] , k ;
	cin >> n ;
	for ( i = 1 ; i <= n ; i++ )
	{
		cin >> a[i][0] ;
		if ( a[i][0] == 0 )               // ???????
			cout<< 60 << endl ;
		else 
		{
			for ( k = 1 ; k <= a[i][0] ; k++ )
				cin >> a[i][k] ;
		    for ( j = 1 ; j <= a[i][0] ; j++ )
		     {
			if ( a[i][j] + 3 * j <= 60 && a[i][j+1] + 3 * ( j + 1 ) > 63 )             //????1?????????????????????1???????????58?60???
			{
				cout << 60 - 3 * j << endl ;
				break;
			}
			if ( a[i][j] + 3 * j <= 60 && a[i][j+1] + 3 * ( j + 1 ) > 60 && a[i][j] + 3 * ( j + 1 ) <= 63 )
			{
				cout << a[i][j+1] << endl ;
				break;
			}
			}
			if ( j == a[i][0] + 1 )
			{
				cout << 60 - 3 * a[i][0] << endl ;
			}
		 }
	  }
    return 0;
}
