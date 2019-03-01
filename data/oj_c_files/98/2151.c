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


int main() {
	char str[1000][45];
	int n, sum = 0;
	cin >> n;
	for ( int i = 1; i <= n; i ++ ) {
		cin >> str[i];
	}
	for ( int i = 1; i <= n; i ++ ) {
		if ( sum == 0 ) {
			cout << str[i];
			sum += strlen( str[i] );
		}
		else if ( sum + strlen( str[i] ) + 1 <= 80 ) {
			cout << " " << str[i];
			sum += strlen( str[i] ) + 1;
		}
		else {
			cout << endl;
			sum = 0;
			i = i - 1;
		}
	}
	return 0;
}
	
