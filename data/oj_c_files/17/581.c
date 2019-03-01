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
 * BracketCaptureIII.cpp
 *
 *  Created on: 2012-11-28
 *      Author: Cui Zhaoxiong Class4 1200012931
 */
int main() {
	char str[105];
	int flag = 0;
	int puma[105];
	while (cin >> str) {
		flag = 0;
		cout << str << endl;
		for (int i = 0; i <= strlen(str) - 1; i++) {
			if (str[i] == '(') {
				str[i] = '$';
				flag++;
				puma[flag] = i;
			} else if (str[i] == ')') {
				if (flag > 0) {
					str[puma[flag]] = ' ';
					str[i] = ' ';
					flag--;
				} else
					str[i] = '?';
			} else {
				str[i] = ' ';
			}
		}
		cout << str << endl;
	}
	return 0;
}
