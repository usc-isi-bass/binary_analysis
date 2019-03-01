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

int origin(int, int);
int n, k;
int main() {
	int last = 1, x;
	cin >> n >> k;
	while ((x = origin(last * n + k, n)) == 0)
		last++;
	cout << x;
	return 0;
}
int origin(int left, int num) {
	if (num == 1)
		return left;
	else if (left % (n - 1) == 0)
		return origin(left / (n - 1) * n + k, num - 1);
	else
		return 0;
}
