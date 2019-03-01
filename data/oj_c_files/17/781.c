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

char s[105];
int len;
int f(int b) {
	for (int i = b + 1; i < len; i++) {
		if (s[i] == ')') {
			s[b] = '$';
			s[i] = '?';
			return i;
		} else if (s[i] == '(') {
			i = f(i);
		}
	}
	return len - 1;
}
int main() {
	while (cin >> s) {
		len = strlen(s);
		cout << s << endl;
		for (int i = 0; i < len; i++) {
			if (s[i] == '(')
				i = f(i);
		}
		for (int i = 0; i < len; i++) {
			if (s[i] == '(')
				cout << '$';
			else if (s[i] == ')')
				cout << '?';
			else
				cout << ' ';
		}
		cout << endl;
	}
	return 0;
}
