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
	for ( int i = 1; i <= n; i ++ ) {
		double m;
		double x[101];
	    double *p;
		p = x;
		double ave = 0, sum = 0;
		cin >> m;
		for ( int j = 1; j <= m; j ++ ) {
			cin >> *( p + j);
			ave += *( p + j) / m;
		}
		for ( int j = 1; j <= m; j ++ ) {
			sum += ( *( p + j) - ave ) * ( *( p + j) - ave );
		}
		cout << fixed << setprecision(5) << sqrt ( sum / m ) << endl;
	}
	return 0;
}

