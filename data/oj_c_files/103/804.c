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

/*
 * ????practice2.cpp
 * ??????
 * ?????2012-12-24
 * ??????????
 */



int chartonum(char c1) {
	if (c1 > 64 && c1 < 91)
		return (int) c1 - 65;
	if (c1 > 96 && c1 < 123)
		return (int) c1 - 97;
	return 0;
}

int main() {
	char c[1000];
	int z, num, i;
	cin >> c;
	for (i = 0; i < strlen(c); ++i) {
		z = chartonum(c[i]);
		num = 1;
		while (i != strlen(c) && chartonum(c[i]) == chartonum(c[i + 1])) {
			++i;
			++num;
		}
		if (i == strlen(c))
			num--;
		cout << '(' << (char) (z + 65) << ',' << num << ')';
	}
	return 0;
}