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

int n, k, i;
int x[10000];
int f(int o) {
	while(true){
	x[1] = o;//x[i]?????i?????????
	for (i = 1; i < n; i++) {
		if (x[i] % (n - 1) == 0)
			x[i + 1] = n * x[i] / (n - 1) + k;
		else
			break;
	}
	if (i == n)
		return x[n];
	else {
		o = o + n;
		//return f(o);
	}
	}
}
int main() {
	cin >> n >> k;
	int o = n + k;
	cout << f(o);
}
