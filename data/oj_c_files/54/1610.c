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



int n, k;
int apples;

int func(int monkeys) {
	if (monkeys == n)
		return apples++;
	
	int tmp = func(monkeys + 1);
	while (tmp % (n - 1) != 0)
		tmp = func(monkeys + 1);
	return k + tmp*n / (n - 1);
}

int main() {
	cin >> n >> k;
	apples = n - 1;
	cout << func(0) << endl;
}