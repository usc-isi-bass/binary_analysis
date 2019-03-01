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
 * qimo_2.cpp
 * Name:????
 *  Created on: 2011-1-9
 *      Author: Wang Ju
 */

int main() {
	int l = 0, n;
	char *p=NULL;
	char s[2000], a[10];
	cin >> n;
	cin.getline(a, 10);
	l = 0;
	cin >> s;
	p = s;
	cout << p;
	l = strlen(s);
	while (n > 1) {
		cin >> s;
		l = l + strlen(s);
		p = s;
		if (l == 80) {
			cout << "\n" << p;
			l = strlen(s);
		} else {
			if (l < 80) {
				cout << " " << p;
				l++;
			} else if (l > 80) {
				cout << "\n" << p;
				l = strlen(s);
			}
		}
		n--;
	}
	return 0;
}
