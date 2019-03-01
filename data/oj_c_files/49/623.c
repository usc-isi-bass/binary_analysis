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
	int i = 0, L = 0, k = 0, j = 0, c, t = 0;
	char a[500];
	while ((c = getchar()) != '\n')
		a[k++] = c;
	for (L = 2; L <= k; L++) {//L?????
		t = 0;
		for (i = 0; i < k; i++) {
			t = 0;
			for (int p = L; p > 0; p--) {//???????
				if (a[i + L - p] == a[i + p - 1])
					t = 1;
				if (a[i + L - p] != a[i + p - 1]) {
					t = 0;
					break;
				}
			}
			if (t == 1) {//??
				for (j = i; j < i + L; j++)
					cout << a[j];
				cout << endl;
			}
		}
	}
	return 0;
}