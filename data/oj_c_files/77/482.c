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

int main () {
	char c[1111] ;
	char b , g ;
	int B[1111] , G[1111] ;
	int i , j , k , L , order = 1 ;
	cin >> c ;
	b = c[0] ;
	for ( i = 1 ; ; i ++ ) {
		if ( c[i] != b ) {
			g = c[i] ;
			break ;
		}
	}
	L = strlen(c) ;
	for ( i = 0 ; i < L ; i ++ ) {
		if ( c[i] == b ) {
			for ( j = i+1 ; ; j ++ ) {
				if ( c[j] == ' ' )
					continue ;
				else if ( c[j] == b )
					break ;
				else if ( c[j] == g ) {
					B[order] = i ;
					G[order] = j ;
					c[i] = ' ' ;
					c[j] = ' ' ;
					order ++ ;
					i = -1 ;
					break ;
				}
			}
		}
	}
	for ( i = 1 ; i < order ; i ++ )
		cout << B[i] << " " << G[i] << endl ;
	return 0 ;
}
