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
 * ttttt.cpp
 *
 *  Created on: 2012-11-19
 *      Author: 1234
 */

int main() {
	char c[105][55] = { 0 };
	char temp;
	int i = 0, j = 0;
	while (true) {
		cin.get(temp);
		if (temp == ' ') {
			i++;
			j = 0;
		} else {
			if (temp == '\n')
				break;
			else {
				c[i][j] = temp;
				j++;
			}
		}
	}
	for (int k = i; k > 0; k--) {
		cout << c[k] << " ";
	}
	cout << c[0];
}
