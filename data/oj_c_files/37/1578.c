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
	int n = 0, c;
	cin >> n;
	getchar();
	for (int i = 0; i < n; i++) {
		int a[200] = { 0 }, j = 0;
		int b[10010] = { 0 };
		char m = '0';
		while ((c = getchar()) != '\n') {
			a[c]++;
			b[j++] = c;

		}
		for (int k = 0; k < j; k++) {
			if (a[b[k]] == 1) {
				m = b[k];
				break;
			}
		}
		if (m == '0')
			cout << "no" << endl;
		else
			cout << m << endl;
	}
	return 0;
}