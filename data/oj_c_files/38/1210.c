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
	int t,n;
	double a,x[128],s;
	cin >> t;
	while(t--) {
		cin >> n;
		a = 0.0;
		for (int i = 0; i < n; ++i){
			cin >> *(x+i);
			a += *(x+i);
		}
		a = a/n;
		s = 0.0;
		for (int i = 0; i < n; ++i) {
			s += (*(x+i)-a)*(*(x+i)-a);
		}
		s/=n;
		printf("%.5lf\n", sqrt(s));
	}
}