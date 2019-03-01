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

void dfs(int m, int i) {
	//cout << m << ' ' << n << endl;
	if (m == 1) {
		++counter;
		return;
	}
	for (;i <= m; ++i) {
		if (m % i == 0) {
			dfs(m/i, i); 
		}
	}
}

int main() {
	int t, m, n;
	cin >> t;
	while (t--) {
		counter = 0;
		cin >> m;
		dfs(m, 2);
		cout << counter << endl;
	}
}