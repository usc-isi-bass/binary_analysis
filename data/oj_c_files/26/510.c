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
	char c[101] ;
	cin.getline(c,101) ;
	int i , j , L , k ;
	L = (int)strlen(c) ;
	for ( i = 0 ; ; i ++ ) {
		if ( c[i] == '\0' )
			break ;
		if ( c[i] == ' ' ) {
			for ( j = i ; ; j ++ ) {
				if ( c[j] != ' ' ) {
					for ( k = j ; ; k ++ ) {
						if ( c[k] == '\0' ) {
							c[k-j+1+i] = c[k] ;
							break ;
						}
						c[k-j+i+1] = c[k] ;
					}
					break ;
				}
			}
		}
	}
	cout << c ;
}
