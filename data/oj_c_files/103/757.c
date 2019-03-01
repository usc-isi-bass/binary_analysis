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
	char a[1000] = { 0 }, b;
	int t = 1;
	cin >> a;
	for (int i = 0; i < strlen(a); i++) {
		if (i == 0)
			b = a[i];
		else {
			if ((a[i] == b - 'A' + 'a') || (a[i] == b + 'A' - 'a') || a[i] == b)
				t++;
			else {//????????????
				if (b <= 'z' && b >= 'a')
					b = b + 'A' - 'a';
				cout << '(' << b << ',' << t << ')';
				b = a[i];
				t = 1;
			}
		}
		if (i == strlen(a) - 1) {//?????????
			if (b <= 'z' && b >= 'a')
				b = b + 'A' - 'a';
			cout << '(' << b << ',' << t << ')';
		}

	}
	return 0;
}