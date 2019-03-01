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
 * extra.cpp
 * ???????
 *  Created on: 2012-11-21
 *      Author: ???
 */
int main() {
	int i;
	char str[100];
	cin.getline(str, 100);
	cout << str[0];
	for (i = 1; i < strlen(str) - 1; i++) {
		if (str[i] != ' ') {
			cout << str[i];
		} else if (str[i] == ' ' && str[i + 1] == ' ') {
			continue;
		} else if (str[i] == ' ' && str[i + 1] != ' ') {
			cout << ' ';
		}
	}
	cout << str[strlen(str) - 1];
	return 0;
}
