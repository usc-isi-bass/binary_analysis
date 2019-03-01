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
	int n, i, j;
	cin >> n;

	for (i = 0; i < n; i++) {
		int tiaoHuai;
		cin >> tiaoHuai;

		if (tiaoHuai == 0) {
			cout << 60 << endl;
			continue;
		}

		int leiJi[tiaoHuai];
		for (j = 0; j < tiaoHuai; j++) {
			cin >> leiJi[j];
		}

		for (j = 0; j < tiaoHuai; j++) {
			if (leiJi[j] + 3 * (j + 1) > 60) {
				if (leiJi[j] + 3 * j <= 60) {
					cout << leiJi[j] << endl;
					break;
				} else {
					cout << 60 - 3 * j << endl;
					break;
				}
			}
		}

		if (j == tiaoHuai) {
			cout << 60 - 3 * tiaoHuai << endl;
		}
	}
	return 0;
}