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

int dfs(int m, int n) {
	if (n == 1) return 1;
	int res = dfs(m, n-1);
	if (m >= n) res += dfs(m-n, n);
	return res;
}
int main() {
	int t, m, n;
	cin >> t;
	while (t--) {
		cin >> m >> n;
		cout << dfs(m,n) << endl;	
	}
}
