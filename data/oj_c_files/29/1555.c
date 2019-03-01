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
	int i, n, j, m;
	double s = 0;
	cin >> n;
	for (i = 1; i <= n; i++) {
		s = 0;
		cin >> m;
		double a[m];//????
		double x[m + 1];//????
		x[0] = 1;
		x[1] = 2;
		for (j = 2; j < m + 1; j++)//????
			x[j] = x[j - 1] + x[j - 2];
		for (j = 0; j < m; j++)
			a[j] = x[j + 1] / x[j];
		for (j = 0; j < m; j++)
			s = s + a[j];
		printf("%.3f\n", s);
	}

	return 0;
}