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


int n , k;
int a[100009] ;

int main () {
	cin >> n ;
	for (int i = 1 ; i <= n ; ++i) {
		cin >> a[i] ;
	}
	cin >> k ;
	
	for (int i = 1 ; i <= n ; ++i) {
		if (a[i] == k) {
			memmove (&a[i] , &a[i+1] , (n-- - i) * sizeof (*a)) ;
			--i ;
		}
	}
	
	for (int i = 1 ; i <= n ; ++i) {
		cout << a[i] << (i == n ? '\n' : ' ') ;
	}
}
