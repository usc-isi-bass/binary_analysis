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
 * ???????.cpp
 * ????M????????N????????????????????????????????K????
 *      ???5?1?1?1?5?1???????
 * ????: 2010-11-28
 * ??: ??
 */



int Arrange_Apple(int p, int dish, int apple) {
	int sum = 0;
	if (apple < p)
		return 0;
	if (dish == 1 && apple >= p)
		return 1;
	for (int i = p; i <= apple / dish; i++)
		sum += Arrange_Apple(i, dish - 1, apple - i);
	return sum;
}

int main() {
	int dish = 0, apple = 0, t, i;
	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> apple >> dish;
		cout << Arrange_Apple(0, dish, apple) << endl;
	}
	return 0;
}
