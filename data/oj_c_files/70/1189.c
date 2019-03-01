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
	int n;
	cin >> n;
	double max = 0;
	double x[100], y[100];
	for ( int i =1; i <= n; i ++ ){
		cin >> x[i] >> y[i];
	}
	for ( int i =1; i <= n - 1; i ++ ){
		for ( int j =i + 1; j <= n; j ++ ){
			if ( sqrt( ( x[i] - x[j] ) * ( x[i] - x[j] ) + ( y[i] - y[j] ) * ( y[i] - y[j] ) ) > max ) 
				max = sqrt( ( x[i] - x[j] ) * ( x[i] - x[j] ) + ( y[i] - y[j] ) * ( y[i] - y[j] ) );
		}
	}
	cout << fixed << setprecision(4) << max << endl;
	return 0;
}
