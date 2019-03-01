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
	int n, m, s = 0;
	cin >> n;
	char a[110][110] = { 0 };
	int t[110][110] = { 0 };
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			if (a[i][j] == '@')
				t[i][j] = 1;
		}
	}
	cin >> m;
	for (int k = 1; k < m; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (a[i][j] == '@' && t[i][j] == 1) {
					if (a[i + 1][j] == '.')
						a[i + 1][j] = '@';
					if (a[i - 1][j] == '.')
						a[i - 1][j] = '@';
					if (a[i][j + 1] == '.')
						a[i][j + 1] = '@';
					if (a[i][j - 1] == '.')
						a[i][j - 1] = '@';
				}

			}
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (a[i][j] == '@')
					t[i][j] = 1;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i][j] == '@')
				s++;
		}
	}
	cout << s;
	return 0;
}
