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


int a[200][200] = {0};
int b[200][200] = {0};
int main() {
	int n, m;
	char tmp;
	scanf("%d", &n);
	getchar();
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			scanf("%c", &a[i][j]);
			if (a[i][j] == '@')
				b[i][j] = 1;

		}
		getchar();
	}
	scanf("%d", &m);
	for (int k = 1; k < m; k++) {
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				if (a[i][j] == '@' && b[i][j] == k) {
					if (a[i+1][j] == '.') {
						a[i+1][j] = '@';
						b[i+1][j] = k+1;
					}
					if (a[i-1][j] == '.') {
						a[i-1][j] = '@';
						b[i-1][j] = k+1;
					}
					if (a[i][j+1] == '.') {
						a[i][j+1] = '@';
						b[i][j+1] = k+1;
					}
					if (a[i][j-1] == '.') {
						a[i][j-1] = '@';
						b[i][j-1] = k+1;
					}
				}
			}
		}
	}
	int cnt = 0;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j)
			if (a[i][j] == '@')
				cnt++;
	}
	printf("%d", cnt);
}