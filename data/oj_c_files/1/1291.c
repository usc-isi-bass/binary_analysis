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
 * hehe.cpp
 *
 *  Created on: 2012-11-25
 *      Author:??
 * ???????a?????????????????a = a1 * a2 * a3 * ... * an?
 * ??1 < a1 <= a2 <= a3 <= ... <= an?????????????????a = a???????
 */

int sum = 1;//??????Sum
int Fact(int x, int y);

int main() {
	int n, a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		sum = 1;//????sum
		Fact(a, 2);//????
		cout << sum << endl;
	}
	return 0;
}
int Fact(int x, int y) {
	if (x == 1)
		return 0;//???1???0
	else {
		for (; y <= sqrt(x); y++)//????????
			if (x % y == 0) {
				sum = sum + Fact(x / y, y); //????????Fact(??y)
			}
		return 1;
	}

}
