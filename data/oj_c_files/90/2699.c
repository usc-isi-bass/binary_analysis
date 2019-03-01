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


int f(int, int);
int f_n(int, int);
int f_e(int, int);

int f(int x, int y){
	if (x == 1) return 1;
	return f_e(x, y) + f_n(x, y);
}

int f_e(int x, int y){
	return f(x-1, y);
}

int f_n(int x, int y){
	if (y < x) return 0;
	return f(x, y-x);
}

int main() {
	int n, x, y;
	cin >> n;
	for (int i = 0; i < n; i ++) {
		cin >> y >> x;
		cout << f(x, y) << endl;
	}
	return 0;
}
