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


const int mov[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

int m, n, counter;

void dfs(int m, int n, int i) {
	//cout << m << ' ' << n << endl;
	if (n == 0) {
		if (m == 0) {
			++counter;
		}
		return;
	}
	for (; i <= m-n+1; ++i) {
		dfs(m-i, n-1, i);
	}
}

int main() {
	int t, m, n;
	cin >> t;
	while (t--) {
		counter = 0;
		cin >> m >> n;
		dfs(m, n, 0);
		cout << counter << endl;
	}
}