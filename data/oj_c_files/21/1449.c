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
	int n, i, sum = 0, j = 0;
	cin >> n;
	int a[n], c[n];
	for (i = 0; i < n; i++) {
		cin >> a[i];
		sum = sum + a[i];
	}
	double b[n], average = 0, max;
	average = 1.0 * sum / n;
	for (i = 0; i < n; i++) {
		b[i] = fabs(a[i] - average);
	}
	max = b[1];
	for (i = 0; i < n; i++) {
		if (b[i] > max) {
			max = b[i];
		}
	}
	for (i = 0; i < n; i++) {
		if (fabs(b[i] - max) < 1e-6) {
			c[j] = a[i];
			j++;
		}
	}
	if (j == 1) {
		cout << c[0] << endl;
	} else {
		for (i = 0; i < j - 1; i++) {
			cout << c[i] << ",";
		}
		cout << c[j - 1];
	}
	return 0;
}
