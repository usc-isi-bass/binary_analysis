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
	int a[20001] = { 0 };
	int n;
	cin >> n;
	for ( int i = 1; i <= n; i ++ ) {
		cin >> a[i];
	}
	for ( int i = 1; i <= n; i ++ ) {
		for ( int j = 1; j <= i; j ++ ) {
			if ( i != 1 && a[j - 1] == a[i] ) a[i] = 0;
		}
	}
	for ( int i = 1; i <= n; i ++ ) {
		if ( i != 1 && a[i] != 0) cout << " " << a[i];
		else if ( i == 1) cout << a[i];
	}
	return 0;
}
