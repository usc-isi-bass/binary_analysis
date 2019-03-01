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
	int s = 0, a[310] = { 0 }, b[310] = { 0 }, t = 0;
	int n, k = 0, max = -10000;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s = s + a[i];
	}
	for (int i = 0; i < n; i++) {
		if (abs(s - n * a[i]) > max) {
			max = abs(s - n * a[i]);
		}
	}
	for (int i = 0; i < n; i++) {
		if (abs(s - n * a[i]) == max)
			b[k++] = a[i];
	}
	for (int i = 0; i < k; i++) {
		for (int j = i + 1; j < k; j++) {
			if (b[i] > b[j]) {
				t = b[i];
				b[i] = b[j];
				b[j] = t;
			}
		}
	}
	for (int i = 0; i < k; i++) {
		cout << b[i];
		if (i != k - 1)
			cout << ',';
	}
	return 0;
}