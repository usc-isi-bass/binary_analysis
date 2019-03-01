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


int up(int x) {
	return x/2;
}

int meet(int x, int y) {
	if (x == y)
		return x;
	
	int depthx = log2(x);
	int depthy = log2(y);
	if (depthx < depthy)
		return meet(x, up(y));
	else if (depthx > depthy)
		return meet(up(x), y);
	else
		return  meet(up(x), up(y));
}

int main() {
	int x, y;
	cin >> x >> y;
	cout << meet(x, y);
}