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
	int m, n, i;
	int numbers[105];
	cin >> n >> m;
	for (i = m; i < n; i++)
		cin >> numbers[i];
	for (i = 0; i < m; i++)
		cin >> numbers[i];//??????m?????????m?????
	for (i = 0; i < n; i++) {
		if (i != (n - 1))
			cout << numbers[i] << " ";//??????????????
		else
			cout << numbers[i];
	}
	return 0;
}
