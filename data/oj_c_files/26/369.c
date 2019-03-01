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

 // ???????????
 // ??????
 // ???2010?12?10?
 // ??????????


int main()
{
	char a[110];
	int n , i , j , g[110] = { 0 } ;
	cin.getline( a , 107 ) ;
	char *p = &a[0] ;
	n = strlen( a ) ;
	for ( i = 0 ; i <= n - 1 ; i++ )
	{
		if ( a[i] == ' ' && a[ i - 1 ] == ' ' )
		{
			g[i] = 1 ;
		}
		p = p +  1 ; 
	}
	for ( j = 0 ; j <= n - 1 ; j++ )
	{
		if ( g[j] == 0 )
			cout << a[j] ;
	}
	return 0;
}
