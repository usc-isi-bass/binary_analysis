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

int main() {
	int n;
	cin >> n;
	while (n--) {
		char str[32];
		cin >> str;
		int i, l = strlen(str);
		if ('0'<=str[0]&&str[0]<='9') {
			cout << "no\n";
			continue;
		}
		for (i = 0; i < l; ++i) {
			if ('0'<=str[i]&&str[i]<='9') continue;
			if ('a'<=str[i]&&str[i]<='z') continue;
			if ('A'<=str[i]&&str[i]<='Z') continue;
			if (str[i]=='_') continue;
			break;
		}
		if (i == l) {
			cout << "yes\n";
		} else {
			cout << "no\n";
		}
	}
}