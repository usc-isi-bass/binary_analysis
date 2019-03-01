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

int n, a[100];
void io(int num) {
	cin >> a[num];
	if (num == 0) {
		io(1);
		cout << a[0];
	} else if (num == n - 1)
		cout << a[n - 1] << ' ';
	else {
		io(num + 1);
		cout << a[num] << ' ';
	}
}
int main() {
	cin >> n;
	io(0);
	return 0;
}
